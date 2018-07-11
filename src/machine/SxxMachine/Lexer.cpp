using namespace std;

#include "Lexer.h"
#include "Prolog.h"
#include "Var.h"
#include "Term.h"
#include "Data.h"

namespace SxxMachine {

	Lexer::PrologTokenizer::PrologTokenizer(InputStream* I) : StreamTokenizer(I) {
		this->parseNumbers();
		this->slashStarComments(true);
		// add more options here
	}

	Lexer::Lexer(InputStream* I, Prolog* p) throw(exception) : StreamTokenizer(I) {
		this->parseNumbers();
		this->eolIsSignificant(true);
		this->ordinaryChar('.');
		this->ordinaryChar('/');
		this->quoteChar('\'');
		this->quoteChar('"');
		this->wordChar('$');
		this->wordChar('_');
		this->slashStarComments(true);
		this->commentChar('%');
		this->varnumberdict = unordered_map<wstring, Int*>();
		this->varnamedict = unordered_map<wstring, Var*>();
		this->prologmachine = p;
	}

	Lexer::Lexer(const wstring& s, Prolog* p) throw(exception) : Lexer(new FileInputStream(s), p) {
	}

	Lexer::Lexer(Prolog* p) throw(exception) : Lexer(System::in, p) {
	}

	wstring Lexer::char2string(const int& c) {
		return "" + StringHelper::toString(static_cast<char>(c));
	}

	bool Lexer::atEOF() {
		return StreamTokenizer::TT_EOF == this->ttype;
	}

	bool Lexer::atEOC() {
		return !this->inClause;
	}

	Term* Lexer::make_const() {
		return new Fun("const", Data::Intern(this->sval));
	}

	Term* Lexer::make_string() {
		return new Fun("const", Data::Intern(this->sval));
	}

	Term* Lexer::make_int() {
		Int tempVar(static_cast<int>(this->nval));
		return new Fun("int", &tempVar);
	}

	Term* Lexer::make_real() {
		return new Fun("real", Data::Number(this->nval));
	}

	Term* Lexer::make_var() {
		// sval = sval;
		Var* X;
		Int * const I;
		long long occ;
		if(this->sval == this->anonymous) {
			X = new Var(this->prologmachine);
			occ = 0;
			I = new Int(occ);
		} else {
			X = this->varnamedict[this->sval];
			if(X == nullptr) {
				X = new Var(this->prologmachine, this->sval);
				this->varnamedict.emplace(this->sval, X);
				occ = 0;
				I = new Int(occ);
			} else {
				Int* INum = this->varnumberdict[X->GetVarName()];
				occ = INum->LongValue();
				occ++;
				I = new Int(occ);
			}
			this->varnumberdict.emplace(X->GetVarName(), I);
		}
		return new Fun("var", X, Data::Intern(this->sval), I);
	}

	void Lexer::whitespaceChar(const char& c) {
		this->whitespaceChars(c, c);
	}

	void Lexer::wordChar(const char& c) {
		this->wordChars(c, c);
	}

	Term* Lexer::next0() throw(exception) {
		int n = this->nextToken();
		this->inClause = true;
		Term* T = this->Somethingwrong;
		wstring old_sval = "";

		switch(n) {
		case TT_WORD: {
			char c = this->sval[0];
			if(isupper(c) || '_' == c) {
				T = this->make_var();
			} else {
				T = this->make_const();
			}
		}
			break;
		case TT_NUMBER:
			if(floor(this->nval) == this->nval) {
				T = this->make_int();
			} else {
				T = this->make_real();
			}
			break;
		case TT_EOF:
			T = Data::Intern("end_of_file");
			this->inClause = false;
			break;
		case TT_EOL:
			T = this->next();
			break;
		case ':':
			if('-' == this->nextToken()) {
				this->sval = ":-";
			} else {
				old_sval = this->sval;
				this->pushBack();
				this->sval = ":";
			}
			T = new Fun("const", Data::Intern(this->sval));
			this->sval = old_sval;
			break;
		case '-':
			if('>' == this->nextToken()) {
				this->sval = "->";
			} else {
				old_sval = this->sval;
				this->pushBack();
				this->sval = "-";
			}
			T = new Fun("const", Data::Intern(this->sval));
			this->sval = old_sval;
			break;

		case '.': {
			int c = this->nextToken();
			if(StreamTokenizer::TT_EOL == c || StreamTokenizer::TT_EOF == c) {
				this->inClause = false;
				this->varnumberdict.clear();
				this->varnamedict.clear();
				T = Data::Intern("end_of_clause");
			} else {
				old_sval = this->sval;
				this->pushBack();
				this->sval = ".";
				T = this->make_const();
				this->sval = old_sval;
			}
			break;

		}
		case '\'':
			T = this->make_const();
			break;
		case '"':
			T = this->make_string();
			break;

		case '(':
			T = new Fun("const", Data::Intern("("));
			break;
		case ')':
			T = new Fun("const", Data::Intern(")"));
			break;
		case '[':
			T = new Fun("const", Data::Intern("["));
			break;
		case ']':
			T = new Fun("const", Data::Intern("]"));
			break;
		case '|':
			T = new Fun("const", Data::Intern("|"));
			break;

		case ',':
			T = new Fun("const", Data::Intern(","));
			break;
		case ';':
			T = new Fun("const", Data::Intern(";"));
			break;

		case '=':
		case '>':
		case '<':
			this->sval = this->char2string(n);
			T = new Fun("const", Data::Intern(this->sval));
			break;

		default:
			this->sval = this->char2string(n);
			T = this->make_const();
		}
		return T;
	}

	Term* Lexer::next() {
		try {
			return this->next0();
		} catch(const exception& e) {
			return new Fun("exception", Data::Intern((e.what())));
		}
	}

	StreamTokenizer::StreamTokenizer() {
		this->wordChars('a', 'z');
		this->wordChars('A', 'Z');
		this->wordChars(128 + 32, 255);
		this->whitespaceChars(0, ' ');
		this->commentChar('/');
		this->quoteChar('"');
		this->quoteChar('\'');
		this->parseNumbers();
	}

//JAVA TO C++ CONVERTER TODO TASK: Most Java annotations will not have direct C++ equivalents:
//ORIGINAL LINE: @Deprecated("As of JDK version 1.1, the preferred way to tokenize an input") protected StreamTokenizer(java.io.InputStream is)
	StreamTokenizer::StreamTokenizer(InputStream* is) : StreamTokenizer() {
		if(is == nullptr) {
			throw NullPointerException();
		}
		this->input = is;
	}

	void StreamTokenizer::wordChars(const int& low, const int& hi) {
		if(low < 0) {
			low = 0;
		}
		if(hi >= this->ctype.size()) {
			hi = this->ctype.size() - 1;
		}
		while(low <= hi) {
			this->ctype[low++] |= StreamTokenizer::CT_ALPHA;
		}
	}

	void StreamTokenizer::whitespaceChars(const int& low, const int& hi) {
		if(low < 0) {
			low = 0;
		}
		if(hi >= this->ctype.size()) {
			hi = this->ctype.size() - 1;
		}
		while(low <= hi) {
			this->ctype[low++] = StreamTokenizer::CT_WHITESPACE;
		}
	}

	void StreamTokenizer::ordinaryChar(const int& ch) {
		if(ch >= 0 && ch < this->ctype.size()) {
			this->ctype[ch] = 0;
		}
	}

	void StreamTokenizer::commentChar(const int& ch) {
		if(ch >= 0 && ch < this->ctype.size()) {
			this->ctype[ch] = StreamTokenizer::CT_COMMENT;
		}
	}

	void StreamTokenizer::quoteChar(const int& ch) {
		if(ch >= 0 && ch < this->ctype.size()) {
			this->ctype[ch] = StreamTokenizer::CT_QUOTE;
		}
	}

	void StreamTokenizer::parseNumbers() {
		for(int i = '0'; i <= '9'; i++) {
			this->ctype[i] |= StreamTokenizer::CT_DIGIT;
		}
		this->ctype['.'] |= StreamTokenizer::CT_DIGIT;
		this->ctype['-'] |= StreamTokenizer::CT_DIGIT;
	}

	void StreamTokenizer::eolIsSignificant(const bool& flag) {
		this->eolIsSignificantP = flag;
	}

	void StreamTokenizer::slashStarComments(const bool& flag) {
		this->slashStarCommentsP = flag;
	}

	void StreamTokenizer::slashSlashComments(const bool& flag) {
		this->slashSlashCommentsP = flag;
	}

	int StreamTokenizer::read() throw(IOException) {
		if(this->reader != nullptr) {
			return this->reader->read();
		} else if(this->input != nullptr) {
			return this->input->read();
		} else {
			throw IllegalStateException();
		}
	}

	int StreamTokenizer::nextToken() throw(IOException) {
		if(this->pushedBack) {
			this->pushedBack = false;
			return this->ttype;
		}
		std::vector<char> ct = this->ctype;
		this->sval = "";

		int c = this->peekc;
		if(c < 0) {
			c = StreamTokenizer::NEED_CHAR;
		}
		if(c == StreamTokenizer::SKIP_LF) {
			c = this->read();
			if(c < 0) {
				return this->ttype = StreamTokenizer::TT_EOF;
			}
			if(c == '\n') {
				c = StreamTokenizer::NEED_CHAR;
			}
		}
		if(c == StreamTokenizer::NEED_CHAR) {
			c = this->read();
			if(c < 0) {
				return this->ttype = StreamTokenizer::TT_EOF;
			}
		}
		this->ttype = c; // Just to be safe

		/*
		 * Set peekc so that the next invocation of nextToken will read another
		 * character unless peekc is reset in this invocation
		 */
		this->peekc = StreamTokenizer::NEED_CHAR;

		int ctype = c < 256 ? ct[c] : StreamTokenizer::CT_ALPHA;
		while((ctype & StreamTokenizer::CT_WHITESPACE) != 0) {
			if(c == '\r') {
				this->LINENO++;
				if(this->eolIsSignificantP) {
					this->peekc = StreamTokenizer::SKIP_LF;
					return this->ttype = StreamTokenizer::TT_EOL;
				}
				c = this->read();
				if(c == '\n') {
					c = this->read();
				}
			} else {
				if(c == '\n') {
					this->LINENO++;
					if(this->eolIsSignificantP) {
						return this->ttype = StreamTokenizer::TT_EOL;
					}
				}
				c = this->read();
			}
			if(c < 0) {
				return this->ttype = StreamTokenizer::TT_EOF;
			}
			ctype = c < 256 ? ct[c] : StreamTokenizer::CT_ALPHA;
		}

		if((ctype & StreamTokenizer::CT_DIGIT) != 0) {
			bool neg = false;
			if(c == '-') {
				c = this->read();
				if(c != '.' && (c < '0' || c > '9')) {
					this->peekc = c;
					return this->ttype = '-';
				}
				neg = true;
			}
			double v = 0;
			int decexp = 0;
			int seendot = 0;
			while(true) {
				if(c == '.' && seendot == 0) {
					seendot = 1;
				} else if('0' <= c && c <= '9') {
					v = v * 10 + (c - '0');
					decexp += seendot;
				} else {
					break;
				}
				c = this->read();
			}
			this->peekc = c;
			if(decexp != 0) {
				double denom = 10;
				decexp--;
				while(decexp > 0) {
					denom *= 10;
					decexp--;
				}
				/* Do one division of a likely-to-be-more-accurate number */
				v = v / denom;
			}
			this->nval = neg ? -v : v;
			return this->ttype = StreamTokenizer::TT_NUMBER;
		}

		if((ctype & StreamTokenizer::CT_ALPHA) != 0) {
			int i = 0;
			do {
				if(i >= this->buf.size()) {
					this->buf = this->copyOf(this->buf, this->buf.size() * 2);
				}
				this->buf[i++] = static_cast<char>(c);
				c = this->read();
				ctype = c < 0 ? StreamTokenizer::CT_WHITESPACE : c < 256 ? ct[c] : StreamTokenizer::CT_ALPHA;
			} while((ctype & (StreamTokenizer::CT_ALPHA | StreamTokenizer::CT_DIGIT)) != 0);
			this->peekc = c;
			this->sval = wstring::copyValueOf(this->buf, 0, i);
			if(this->forceLower) {
				this->sval = StringHelper::toLower(this->sval);
			}
			return this->ttype = StreamTokenizer::TT_WORD;
		}

		if((ctype & StreamTokenizer::CT_QUOTE) != 0) {
			this->ttype = c;
			int i = 0;
			/*
			 * Invariants (because \Octal needs a lookahead): (i) c contains char value (ii)
			 * d contains the lookahead
			 */
			int d = this->read();
			while(d >= 0 && d != this->ttype && d != '\n' && d != '\r') {
				if(d == '\\') {
					c = this->read();
					int first = c; // To allow \377, but not \477
					if(c >= '0' && c <= '7') {
						c = c - '0';
						int c2 = this->read();
						if('0' <= c2 && c2 <= '7') {
							c = (c << 3) + (c2 - '0');
							c2 = this->read();
							if('0' <= c2 && c2 <= '7' && first <= '3') {
								c = (c << 3) + (c2 - '0');
								d = this->read();
							} else {
								d = c2;
							}
						} else {
							d = c2;
						}
					} else {
						switch(c) {
						case 'a':
							c = 0x7;
							break;
						case 'b':
							c = '\b';
							break;
						case 'f':
							c = 0xC;
							break;
						case 'n':
							c = '\n';
							break;
						case 'r':
							c = '\r';
							break;
						case 't':
							c = '\t';
							break;
						case 'v':
							c = 0xB;
							break;
						}
						d = this->read();
					}
				} else {
					c = d;
					d = this->read();
				}
				if(i >= this->buf.size()) {
					this->buf = this->copyOf(this->buf, this->buf.size() * 2);
				}
				this->buf[i++] = static_cast<char>(c);
			}

			/*
			 * If we broke out of the loop because we found a matching quote character then
			 * arrange to read a new character next time around; otherwise, save the
			 * character.
			 */
			this->peekc = (d == this->ttype) ? StreamTokenizer::NEED_CHAR : d;

			this->sval = wstring::copyValueOf(this->buf, 0, i);
			return this->ttype;
		}

		if(c == '/' && (this->slashSlashCommentsP || this->slashStarCommentsP)) {
			c = this->read();
			if(c == '*' && this->slashStarCommentsP) {
				int prevc = 0;
				while((c = this->read()) != '/' || prevc != '*') {
					if(c == '\r') {
						this->LINENO++;
						c = this->read();
						if(c == '\n') {
							c = this->read();
						}
					} else {
						if(c == '\n') {
							this->LINENO++;
							c = this->read();
						}
					}
					if(c < 0) {
						return this->ttype = StreamTokenizer::TT_EOF;
					}
					prevc = c;
				}
				return this->nextToken();
			} else if(c == '/' && this->slashSlashCommentsP) {
				while((c = this->read()) != '\n' && c != '\r' && c >= 0) {
					;
				}
				this->peekc = c;
				return this->nextToken();
			} else {
				/* Now see if it is still a single line comment */
				if((ct['/'] & StreamTokenizer::CT_COMMENT) != 0) {
					while((c = this->read()) != '\n' && c != '\r' && c >= 0) {
						;
					}
					this->peekc = c;
					return this->nextToken();
				} else {
					this->peekc = c;
					return this->ttype = '/';
				}
			}
		}

		if((ctype & StreamTokenizer::CT_COMMENT) != 0) {
			while((c = this->read()) != '\n' && c != '\r' && c >= 0) {
				;
			}
			this->peekc = c;
			return this->nextToken();
		}

		return this->ttype = c;
	}

	std::vector<char> StreamTokenizer::copyOf(std::vector<char&>& original, const int& newLength) {
		int copySize = newLength;
		int origLenth = original.size();
		if(origLenth < copySize) {
			copySize = origLenth;
		}
		std::vector<char> copy(newLength);
		while(copySize-- > 0) {
			copy[copySize] = original[copySize];
		}
		return copy;
	}

	void StreamTokenizer::pushBack() {
		if(this->ttype != StreamTokenizer::TT_NOTHING) { // No-op if nextToken() not called
			this->pushedBack = true;
		}
	}

	int StreamTokenizer::lineno() {
		return this->LINENO;
	}

	wstring StreamTokenizer::toString() {
		wstring ret;
		switch(this->ttype) {
		case TT_EOF:
			ret = "EOF";
			break;
		case TT_EOL:
			ret = "EOL";
			break;
		case TT_WORD:
			ret = this->sval;
			break;
		case TT_NUMBER:
			ret = "n=" + to_string(this->nval);
			break;
		case TT_NOTHING:
			ret = "NOTHING";
			break;
		default: {
			/*
			 * ttype is the first character of either a quoted string or is an ordinary
			 * character. ttype can definitely not be less than 0, since those are reserved
			 * values used in the previous case statements
			 */
			if(this->ttype < 256 && ((this->ctype[this->ttype] & StreamTokenizer::CT_QUOTE) != 0)) {
				ret = this->sval;
				break;
			}

			std::vector<char> s(3);
			s[0] = s[2] = '\'';
			s[1] = static_cast<char>(this->ttype);
			ret = wstring(s);
			break;
		}
		}
		return "Token[" + ret + "], line " + to_string(this->LINENO);
	}
}
