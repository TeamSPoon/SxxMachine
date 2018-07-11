using namespace std;

#include "PredTable.h"
#include "Operation.h"
#include "Prolog.h"
#include "Code.h"
#include "Builtins.h"
#include "Metaterm.h"
#include "Package.h"
#include "ClassNotFoundException.h"
#include "IllegalAccessException.h"
#include "InstantiationException.h"
#include "StringBuilder.h"
#include "NumberFormatException.h"

namespace SxxMachine {

//JAVA TO C++ CONVERTER TODO TASK: Most Java annotations will not have direct C++ equivalents:
//ORIGINAL LINE: @SuppressWarnings("unchecked") PredTable()
	PredTable::PredTable() {
		this->tables = std::vector<unordered_map>(33);
	}

	Operation* PredTable::Register(const wstring& name, const int& arity, Operation* op) {
		Prolog::Predicates->InsertNameArity(name, arity, op);
		return op;
	}

	void PredTable::InsertNameArity(const wstring& N, const int& A, Operation* Adr) {
		N = N;
		unordered_map<wstring, Operation*> T = this->tables[A];
		if(T.empty()) {
			this->tables[A] = T = unordered_map<wstring, Operation*>();
		}
		T.emplace(N, Adr);
	}

	void PredTable::InsertNameArityWithContinuation(const wstring& N, const int& A, Code* Adr) {
		this->InsertNameArity(N, A - 1, Adr);
	}

	Operation* PredTable::IsInPredTable(const wstring& N, const int& A) {
		if(this->tables[A].empty()) {
			return nullptr;
		}
		return (this->tables[A][N]);
	}

	Operation* PredTable::LoadPred(const wstring& Name, const int& arity) {
		Operation* code;

		code = this->IsInPredTable(Name, arity);
		if(code != nullptr) {
			return code;
		}
		code = this->Instanciate(Name, arity);
		this->InsertNameArity(Name, arity, code);
		// code.Init(thiz);
		return code;
	}

	Operation* PredTable::Instanciate(const wstring& Name, const int& arity) {
		type_info loaded_class;
		int reason = 0;
		Operation* code = nullptr;
		try {
			Package* p = PredTable::typeid->getPackage();
			wstring pp = "";
			if(p != nullptr) {
				// pp = p.getName() + ".";
			}
			wstring s1 = pp + "pred_" + Name + "_" + to_string(arity);
			// String s2 = s1 + ".class" ;
			// System.out.println("Trying to load " + s2) ;
			loaded_class = this->forName(s1);
			// System.out.println("Loaded " + s2) ;
			code = static_cast<Operation*>(loaded_class.newInstance());
			// System.out.println("and created "+s2) ;
		} catch(const ClassNotFoundException& e) {
			reason = 1;
		} catch(const IllegalAccessException& e) {
			reason = 2;
		} catch(const InstantiationException& e) {
			reason = 3;
		}

		if(reason > 0) {
			cout << "Predicate " << Name << "/" << arity << " not found; does its .class file exist ?" << endl;
			return Prolog::Fail0;
		}
		return code;
	}

	type_info PredTable::forName(const wstring& s1) throw(ClassNotFoundException) {
		try {
			return type_info::forName(s1);
		} catch(const ClassNotFoundException& e) {
			try {
				wstring s0 = Builtins::typeid->getPackage().getName() + "." + s1;
				return type_info::forName(s0);
			} catch(const ClassNotFoundException& _e2) {
				try {
					wstring s0 = Metaterm::typeid->getName() + "$" + s1;
					return type_info::forName(s0);
				} catch(const ClassNotFoundException& _e3) {
					try {
						wstring s0 = Builtins::typeid->getName() + "$" + s1;
						return type_info::forName(s0);
					} catch(const ClassNotFoundException& _e4) {
						throw e;
					}
				}
			}
		}
	}

	wstring PredTable::encode(const wstring& pkg, const wstring& functor, const int& arity) {
		std::vector<char> x = functor.toCharArray();
		StringBuilder* sb = new StringBuilder(pkg.length() + x.size() * 5 + 10);
		sb->append(pkg);
		sb->append(".PRED_");
		int i = 0;
		int s = i;
		while(i < x.size()) {
			if(!((x[i] >= 'a' && x[i] <= 'z') || (x[i] >= 'A' && x[i] <= 'Z') || (x[i] >= '0' && x[i] <= '9') || x[i] == '_' || x[i] == '$')) {

				sb->append(x, s, i - s);
				sb->append('$')->append(Integer::toHexString(x[i])->substr(4, 4));
				s = i + 1;
			}
			i++;
		}
		if(s < x.size()) {
			sb->append(x, s, x.size() - s);
		}
		sb->append('_')->append(arity);
		return sb->toString();
	}

	wstring PredTable::decodeFunctor(const wstring& className) {
		int length = className.length();
		// Remove the Java package name, if present.
		int start = (int)className.rfind('.');
		start++;
		// Trim the common PRED_ prefix.
		if(className.regionMatches(start, "pred_", 0, 5)) {
			start += 5;
		}
		// Drop the arity from the end.
		int finish = (int)className.rfind('_');
		if(finish < 0) {
			finish = length;
		}

		// replace $XXXX with character with code XXXX
		StringBuilder* sb = new StringBuilder(length);
		int index = start;
		int middle = index;
		while(index < finish) {
			index = (int)className.find('$', index);

			if(index < 0) {
				index = finish;
			} else if(index + 4 < finish) {
				try {
//JAVA TO C++ CONVERTER TODO TASK: Only single-argument parse and valueOf methods are converted:
//ORIGINAL LINE: int c = Integer.parseInt(className.substring(index + 1, (index + 5) - (index + 1)), 16);
					int c = Integer::valueOf(className.substr(index + 1, (index + 5) - (index + 1)), 16);
					sb->append(className.substr(middle, index - middle));
					switch(c) {
					case '\\':
						sb->append("\\\\");
						break;
					case '$':
						sb->append("\\$");
					default:
						sb->append(static_cast<char>(c));
						break;
					}
					index = middle = index + 5;
				} catch(const NumberFormatException& e) {
					index++;
				}
			} else {
				index++;
			}
		}
		if(middle < finish) {
			sb->append(className.substr(middle, finish - middle));
		}
		return sb->toString();
	}
}
