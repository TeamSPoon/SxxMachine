using namespace std;

#include "Lexer.h"
#include "Prolog.h"

Lexer::PrologTokenizer::PrologTokenizer(InputStream* I) : StreamTokenizer(I) {
	parseNumbers();
	slashStarComments(true);
	// add more options here
}

Lexer::Lexer(InputStream* I, PrologMachine* p) throw(exception) : StreamTokenizer(I) {
	parseNumbers();
	eolIsSignificant(true);
	ordinaryChar('.');
	ordinaryChar('/');
	quoteChar('\'');
	quoteChar('"');
	wordChar('$');
	wordChar('_');
	slashStarComments(true);
	commentChar('%');
	dict = unordered_map();
	prologmachine = p;
}

Lexer::Lexer(const wstring& s, PrologMachine* p) throw(exception) : Lexer(new FileInputStream(s), p) {
}

Lexer::Lexer(PrologMachine* p) throw(exception) : Lexer(System::in, p) {
}

wstring Lexer::char2string(const int& c) {
	return "" + StringHelper::toString(static_cast<char>(c));
}

bool Lexer::atEOF() {
	return TT_EOF == ttype;
}

bool Lexer::atEOC() {
	return !inClause;
}

Term* Lexer::make_const() {
	Const tempVar(sval.intern());
	return new Funct((wstring("const")).intern(), &tempVar);
}

Term* Lexer::make_int() {
	Int tempVar(static_cast<int>(nval));
	return new Funct((wstring("int")).intern(), &tempVar);
}

Term* Lexer::make_real() {
	return Somethingwrong; // new realToken(nval);
}

Term* Lexer::make_var() {
	sval = sval.intern();
	Var* X;
	Int* I;
	long long occ = 0;
	if(sval == anonymous) {
		X = new Var(prologmachine);
		I = new Int(occ);
	} else {
		X = static_cast<Var*>(dict[sval]);
		if(X == nullptr) {
			X = new Var(prologmachine);
			dict.emplace(sval, X);
		} else {
			occ = (static_cast<Int*>(dict[X]))->IntValue;
			occ++;
		}
		I = new Int(occ);
		dict.emplace(X, I);
	}
	Const tempVar(sval.intern());
	return new Funct((wstring("var")).intern(), X, &tempVar, I);
}

void Lexer::whitespaceChar(const char& c) {
	whitespaceChars(c, c);
}

void Lexer::wordChar(const char& c) {
	wordChars(c, c);
}

Term* Lexer::next0() throw(exception) {
	int n = nextToken();
	inClause = true;
	Term* T = Somethingwrong;
	wstring old_sval = "";

	switch(n) {
	case TT_WORD: {
		char c = sval[0];
		if(isupper(c) || '_' == c) {
			T = make_var();
		} else {
			T = make_const();
		}
	}
		break;
	case TT_NUMBER:
		if(floor(nval) == nval) {
			T = make_int();
		} else {
			T = make_real();
		}
		break;
	case TT_EOF:
		T = new Const((wstring("end_of_file")).intern());
		inClause = false;
		break;
	case TT_EOL:
		T = next();
		break;
	case ':':
		if('-' == nextToken()) {
			sval = (wstring(":-")).intern();
		} else {
			old_sval = sval;
			pushBack();
			sval = (wstring(":")).intern();
		}
		Const tempVar(sval.intern());
		T = new Funct((wstring("const")).intern(), &tempVar);
		sval = old_sval;
		break;
	case '-':
		if('>' == nextToken()) {
			sval = (wstring("->")).intern();
		} else {
			old_sval = sval;
			pushBack();
			sval = (wstring("-")).intern();
		}
		Const tempVar2(sval.intern());
		T = new Funct((wstring("const")).intern(), &tempVar2);
		sval = old_sval;
		break;

	case '.': {
		int c = nextToken();
		if(TT_EOL == c || TT_EOF == c) {
			inClause = false;
			dict.clear();
			T = new Const((wstring("end_of_clause")).intern());
		} else {
			old_sval = sval;
			pushBack();
			sval = (wstring(".")).intern();
			T = make_const();
			sval = old_sval;
		}
		break;

	}
	case '\'':
		T = make_const();
		break;
	// case '"': T=make_string();
	// break;

	case '(':
		Const tempVar3((wstring("(")).intern());
		T = new Funct((wstring("const")).intern(), &tempVar3);
		break;
	case ')':
		Const tempVar4((wstring(")")).intern());
		T = new Funct((wstring("const")).intern(), &tempVar4);
		break;
	case '[':
		Const tempVar5((wstring("[")).intern());
		T = new Funct((wstring("const")).intern(), &tempVar5);
		break;
	case ']':
		Const tempVar6((wstring("]")).intern());
		T = new Funct((wstring("const")).intern(), &tempVar6);
		break;
	case '|':
		Const tempVar7((wstring("|")).intern());
		T = new Funct((wstring("const")).intern(), &tempVar7);
		break;

	case ',':
		Const tempVar8((wstring(",")).intern());
		T = new Funct((wstring("const")).intern(), &tempVar8);
		break;
	case ';':
		Const tempVar9((wstring(";")).intern());
		T = new Funct((wstring("const")).intern(), &tempVar9);
		break;

	case '=':
	case '>':
	case '<':
		sval = char2string(n);
		Const tempVar10(sval.intern());
		T = new Funct((wstring("const")).intern(), &tempVar10);
		break;

	default:
		sval = char2string(n);
		T = make_const();
	}
	return T;
}

Term* Lexer::next() {
	try {
		return next0();
	} catch(const exception& e) {
		Const tempVar((e.what()).intern());
		return new Funct((wstring("exception")).intern(), &tempVar);
	}
}

StreamTokenizer::StreamTokenizer() {
	wordChars('a', 'z');
	wordChars('A', 'Z');
	wordChars(128 + 32, 255);
	whitespaceChars(0, ' ');
	commentChar('/');
	quoteChar('"');
	quoteChar('\'');
	parseNumbers();
}

//JAVA TO C++ CONVERTER TODO TASK: Most Java annotations will not have direct C++ equivalents:
//ORIGINAL LINE: @Deprecated("As of JDK version 1.1, the preferred way to tokenize an input") public StreamTokenizer(java.io.InputStream is)
StreamTokenizer::StreamTokenizer(InputStream* is) : StreamTokenizer() {
	if(is == nullptr) {
		throw NullPointerException();
	}
	input = is;
}

StreamTokenizer::StreamTokenizer(Reader* r) : StreamTokenizer() {
	if(r == nullptr) {
		throw NullPointerException();
	}
	reader = r;
}

void StreamTokenizer::resetSyntax() {
	for(int i = ctype.size(); --i >= 0;) {
		ctype[i] = 0;
	}
}

void StreamTokenizer::wordChars(const int& low, const int& hi) {
	if(low < 0) {
		low = 0;
	}
	if(hi >= ctype.size()) {
		hi = ctype.size() - 1;
	}
	while(low <= hi) {
		ctype[low++] |= CT_ALPHA;
	}
}

void StreamTokenizer::whitespaceChars(const int& low, const int& hi) {
	if(low < 0) {
		low = 0;
	}
	if(hi >= ctype.size()) {
		hi = ctype.size() - 1;
	}
	while(low <= hi) {
		ctype[low++] = CT_WHITESPACE;
	}
}

void StreamTokenizer::ordinaryChars(const int& low, const int& hi) {
	if(low < 0) {
		low = 0;
	}
	if(hi >= ctype.size()) {
		hi = ctype.size() - 1;
	}
	while(low <= hi) {
		ctype[low++] = 0;
	}
}

void StreamTokenizer::ordinaryChar(const int& ch) {
	if(ch >= 0 && ch < ctype.size()) {
		ctype[ch] = 0;
	}
}

void StreamTokenizer::commentChar(const int& ch) {
	if(ch >= 0 && ch < ctype.size()) {
		ctype[ch] = CT_COMMENT;
	}
}

void StreamTokenizer::quoteChar(const int& ch) {
	if(ch >= 0 && ch < ctype.size()) {
		ctype[ch] = CT_QUOTE;
	}
}

void StreamTokenizer::parseNumbers() {
	for(int i = '0'; i <= '9'; i++) {
		ctype[i] |= CT_DIGIT;
	}
	ctype['.'] |= CT_DIGIT;
	ctype['-'] |= CT_DIGIT;
}

void StreamTokenizer::eolIsSignificant(const bool& flag) {
	eolIsSignificantP = flag;
}

void StreamTokenizer::slashStarComments(const bool& flag) {
	slashStarCommentsP = flag;
}

void StreamTokenizer::slashSlashComments(const bool& flag) {
	slashSlashCommentsP = flag;
}

void StreamTokenizer::lowerCaseMode(const bool& fl) {
	forceLower = fl;
}

int StreamTokenizer::read() throw(IOException) {
	if(reader != nullptr) {
		return reader->read();
	} else if(input != nullptr) {
		return input->read();
	} else {
		throw IllegalStateException();
	}
}

int StreamTokenizer::nextToken() throw(IOException) {
	if(pushedBack) {
		pushedBack = false;
		return ttype;
	}
	std::vector<char> ct = ctype;
	sval = "";

	int c = peekc;
	if(c < 0) {
		c = NEED_CHAR;
	}
	if(c == SKIP_LF) {
		c = read();
		if(c < 0) {
			return ttype = TT_EOF;
		}
		if(c == '\n') {
			c = NEED_CHAR;
		}
	}
	if(c == NEED_CHAR) {
		c = read();
		if(c < 0) {
			return ttype = TT_EOF;
		}
	}
	ttype = c; // Just to be safe

	/*
	 * Set peekc so that the next invocation of nextToken will read another
	 * character unless peekc is reset in this invocation
	 */
	peekc = NEED_CHAR;

	int ctype = c < 256 ? ct[c] : CT_ALPHA;
	while((ctype & CT_WHITESPACE) != 0) {
		if(c == '\r') {
			LINENO++;
			if(eolIsSignificantP) {
				peekc = SKIP_LF;
				return ttype = TT_EOL;
			}
			c = read();
			if(c == '\n') {
				c = read();
			}
		} else {
			if(c == '\n') {
				LINENO++;
				if(eolIsSignificantP) {
					return ttype = TT_EOL;
				}
			}
			c = read();
		}
		if(c < 0) {
			return ttype = TT_EOF;
		}
		ctype = c < 256 ? ct[c] : CT_ALPHA;
	}

	if((ctype & CT_DIGIT) != 0) {
		bool neg = false;
		if(c == '-') {
			c = read();
			if(c != '.' && (c < '0' || c > '9')) {
				peekc = c;
				return ttype = '-';
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
			c = read();
		}
		peekc = c;
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
		nval = neg ? -v : v;
		return ttype = TT_NUMBER;
	}

	if((ctype & CT_ALPHA) != 0) {
		int i = 0;
		do {
			if(i >= buf.size()) {
				buf = Arrays::copyOf(buf, buf.size() * 2);
			}
			buf[i++] = static_cast<char>(c);
			c = read();
			ctype = c < 0 ? CT_WHITESPACE : c < 256 ? ct[c] : CT_ALPHA;
		} while((ctype & (CT_ALPHA | CT_DIGIT)) != 0);
		peekc = c;
		sval = wstring::copyValueOf(buf, 0, i);
		if(forceLower) {
			sval = StringHelper::toLower(sval);
		}
		return ttype = TT_WORD;
	}

	if((ctype & CT_QUOTE) != 0) {
		ttype = c;
		int i = 0;
		/*
		 * Invariants (because \Octal needs a lookahead): (i) c contains char value (ii)
		 * d contains the lookahead
		 */
		int d = read();
		while(d >= 0 && d != ttype && d != '\n' && d != '\r') {
			if(d == '\\') {
				c = read();
				int first = c; // To allow \377, but not \477
				if(c >= '0' && c <= '7') {
					c = c - '0';
					int c2 = read();
					if('0' <= c2 && c2 <= '7') {
						c = (c << 3) + (c2 - '0');
						c2 = read();
						if('0' <= c2 && c2 <= '7' && first <= '3') {
							c = (c << 3) + (c2 - '0');
							d = read();
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
					d = read();
				}
			} else {
				c = d;
				d = read();
			}
			if(i >= buf.size()) {
				buf = Arrays::copyOf(buf, buf.size() * 2);
			}
			buf[i++] = static_cast<char>(c);
		}

		/*
		 * If we broke out of the loop because we found a matching quote character then
		 * arrange to read a new character next time around; otherwise, save the
		 * character.
		 */
		peekc = (d == ttype) ? NEED_CHAR : d;

		sval = wstring::copyValueOf(buf, 0, i);
		return ttype;
	}

	if(c == '/' && (slashSlashCommentsP || slashStarCommentsP)) {
		c = read();
		if(c == '*' && slashStarCommentsP) {
			int prevc = 0;
			while((c = read()) != '/' || prevc != '*') {
				if(c == '\r') {
					LINENO++;
					c = read();
					if(c == '\n') {
						c = read();
					}
				} else {
					if(c == '\n') {
						LINENO++;
						c = read();
					}
				}
				if(c < 0) {
					return ttype = TT_EOF;
				}
				prevc = c;
			}
			return nextToken();
		} else if(c == '/' && slashSlashCommentsP) {
			while((c = read()) != '\n' && c != '\r' && c >= 0) {
				;
			}
			peekc = c;
			return nextToken();
		} else {
			/* Now see if it is still a single line comment */
			if((ct['/'] & CT_COMMENT) != 0) {
				while((c = read()) != '\n' && c != '\r' && c >= 0) {
					;
				}
				peekc = c;
				return nextToken();
			} else {
				peekc = c;
				return ttype = '/';
			}
		}
	}

	if((ctype & CT_COMMENT) != 0) {
		while((c = read()) != '\n' && c != '\r' && c >= 0) {
			;
		}
		peekc = c;
		return nextToken();
	}

	return ttype = c;
}

void StreamTokenizer::pushBack() {
	if(ttype != TT_NOTHING) { // No-op if nextToken() not called
		pushedBack = true;
	}
}

int StreamTokenizer::lineno() {
	return LINENO;
}

wstring StreamTokenizer::toString() {
	wstring ret;
	switch(ttype) {
	case TT_EOF:
		ret = "EOF";
		break;
	case TT_EOL:
		ret = "EOL";
		break;
	case TT_WORD:
		ret = sval;
		break;
	case TT_NUMBER:
		ret = "n=" + to_string(nval);
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
		if(ttype < 256 && ((ctype[ttype] & CT_QUOTE) != 0)) {
			ret = sval;
			break;
		}

		std::vector<char> s(3);
		s[0] = s[2] = '\'';
		s[1] = static_cast<char>(ttype);
		ret = wstring(s);
		break;
	}
	}
	return "Token[" + ret + "], line " + to_string(LINENO);
}
