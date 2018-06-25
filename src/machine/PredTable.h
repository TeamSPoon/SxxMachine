#ifndef PREDTABLE
#define PREDTABLE

#include <string>
#include <unordered_map>
#include <vector>
#include <iostream>
#include <typeinfo>
#include "exceptionhelper.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Code;
class PrologMachine;
class Package;
class ClassNotFoundException;
class IllegalAccessException;
class InstantiationException;

//there is a choice between 3 predicate table implementations
//we leave them all here, until we decide which is best

//class PredTable extends java.util.Hashtable {
//PredTable() {
//new Hashtable();
//}
//void InsertNameArity(String N, int A, Code Adr) {
//put(A+N,Adr);
//}
//Code IsInPredTable(String N, int A) {
//return (Code)get(A+N);
//}
//}

//class PredTable extends Vector
//{
//PredTable() { new Vector(); }
//
//void InsertNameArity(String N, int A, Code Adr)
//{ //System.err.println("!!!SIZE="+size()+"ADD"+N+"/"+A);
//if (size() <= A) setSize(A+1);
//Hashtable T = (Hashtable)elementAt(A);
//if (T == null)
//{ T = new Hashtable();
//setElementAt(T,A);
//}
//T.put(N,Adr);
//}
//
//Code IsInPredTable(String N, int A)
//{ //System.err.println("!!!FIND"+N+"/"+A);
//if(A>=size()) return null;
//return (Code)((Hashtable)elementAt(A)).get(N);
//}
//}
class PredTable {
public:
	std::vector<std::unordered_map<std::string, Code*> > tables;

	PredTable();

	virtual void InsertNameArity(const std::string& N, const int& A, Code* Adr);

	virtual Code* IsInPredTable(const std::string& N, const int& A);

	// Java ONLY
	virtual Code* LoadPred(PrologMachine* thiz, const std::string& Name, const int& arity); // arity is

private:
	Code* Instanciate(const std::string& Name, const int& arity);
};


#endif	//#ifndef PREDTABLE
