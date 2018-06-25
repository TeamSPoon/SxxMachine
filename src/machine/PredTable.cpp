using namespace std;

#include "PredTable.h"
#include "Code.h"
#include "Prolog.h"
#include "Package.h"
#include "ClassNotFoundException.h"
#include "IllegalAccessException.h"
#include "InstantiationException.h"

PredTable::PredTable() {
	tables = std::vector<unordered_map>(33);
}

void PredTable::InsertNameArity(const wstring& N, const int& A, Code* Adr) {
	unordered_map<wstring, Code*> T = tables[A];
	if(T.empty()) {
		tables[A] = T = unordered_map<wstring, Code*>();
	}
	T.emplace(N, Adr);
}

Code* PredTable::IsInPredTable(const wstring& N, const int& A) {
	if(tables[A].empty()) {
		return nullptr;
	}
	return static_cast<Code*>(tables[A][N]);
}

Code* PredTable::LoadPred(PrologMachine* thiz, const wstring& Name, const int& arity)
															// source
// arity before
// bin
// in predtable + 1 !
{
	Code* code;

	code = UpperPrologMachine::Predicates->IsInPredTable(Name, arity + 1);
	if(code != nullptr) {
		return code;
	}
	code = Instanciate(Name, arity);
	UpperPrologMachine::Predicates->InsertNameArity(Name, arity + 1, code);
	code->Init(thiz);
	return code;
}

Code* PredTable::Instanciate(const wstring& Name, const int& arity) {
	type_info loaded_class;
	int reason = 0;
	Code* code = nullptr;
	try {
		Package* p = PredTable::typeid->getPackage();
		wstring pp = "";
		if(p != nullptr) {
			pp = p->getName() + ".";
		}
		wstring s1 = pp + "pred_" + Name + "_" + to_string(arity);
		// String s2 = s1 + ".class" ;
		// System.out.println("Trying to load " + s2) ;
		loaded_class = type_info::forName(s1);
		// System.out.println("Loaded " + s2) ;
		code = static_cast<Code*>(loaded_class.newInstance());
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
		return UpperPrologMachine::Fail0;
	}
	return code;
}
