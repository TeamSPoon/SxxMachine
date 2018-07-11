#ifndef PREDTABLE
#define PREDTABLE

#include <string>
#include <unordered_map>
#include <vector>
#include <iostream>
#include <typeinfo>
#include "exceptionhelper.h"
#include "stringbuilder.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Code; }
class Package;
class ClassNotFoundException;
class IllegalAccessException;
class InstantiationException;
class StringBuilder;
class NumberFormatException;

namespace SxxMachine {


	//there is a choice between 3 predicate table implementations
	//we leave them all here, until we decide which is best

	//class PredTable extends java.util.Hashtable {
	//PredTable() {
	//new Hashtable();
	//}
	//void InsertNameArity(String N, int A, Operation Adr) {
	//put(A+N,Adr);
	//}
	//Operation IsInPredTable(String N, int A) {
	//return (Operation)get(A+N);
	//}
	//}

	//class PredTable extends Vector
	//{
	//PredTable() { new Vector(); }
	//
	//void InsertNameArity(String N, int A, Operation Adr)
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
	//Operation IsInPredTable(String N, int A)
	//{ //System.err.println("!!!FIND"+N+"/"+A);
	//if(A>=size()) return null;
	//return (Operation)((Hashtable)elementAt(A)).get(N);
	//}
	//}
	class PredTable {
	public:
		std::vector<std::unordered_map<std::string, Operation*> > tables;

//JAVA TO C++ CONVERTER TODO TASK: Most Java annotations will not have direct C++ equivalents:
//ORIGINAL LINE: @SuppressWarnings("unchecked") PredTable()
		PredTable();

		static Operation* Register(const std::string& name, const int& arity, Operation* op);

		virtual void InsertNameArity(const std::string& N, const int& A, Operation* Adr);

		virtual void InsertNameArityWithContinuation(const std::string& N, const int& A, Code* Adr);

	private:
		Operation* IsInPredTable(const std::string& N, const int& A);

		// Java ONLY
	public:
		virtual Operation* LoadPred(const std::string& Name, const int& arity); // arity is source arity before bin in predtable + 1 !

	private:
		Operation* Instanciate(const std::string& Name, const int& arity);

		std::type_info forName(const std::string& s1) throw(ClassNotFoundException);

		/// <summary>
		/// Returns a string representation of class for the predicate with the given
		/// arguments.
		/// </summary>
		/// <param name="pkg">     package name </param>
		/// <param name="functor"> predicate name </param>
		/// <param name="arity">   predicate arity </param>
		/// <returns> a string representation of class for the predicate that corresponds
		///         to <code>pkg:functor/arity</code>. </returns>
	public:
		static std::string encode(const std::string& pkg, const std::string& functor, const int& arity);

		static std::string decodeFunctor(const std::string& className);

	};
}


#endif	//#ifndef PREDTABLE
