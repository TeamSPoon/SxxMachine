#ifndef OPERATION
#define OPERATION

#include "IOperation.h"

namespace SxxMachine {

	/// <summary>
	/// Superclass any single step operation in the Prolog interpreter.
	/// <para>
	/// Most implementations should sublass <seealso cref="Predicate"/> instead to gain the
	/// common <seealso cref="Predicate#cont"/> field to store the next step of the program.
	/// 
	/// @author Mutsunori Banbara (banbara@kobe-u.ac.jp)
	/// @author Naoyuki Tamura (tamura@kobe-u.ac.jp)
	/// @version 1.0
	/// </para>
	/// </summary>
	//@FunctionalInterface
	class Operation : public IOperation {
		/// <summary>
		/// Executes this operation and returns a continuation goal.
		/// </summary>
		/// <param name="prolog"> current Prolog engine </param>
		/// <exception cref="PrologException"> if a Prolog exception is raised. </exception>
		/// <seealso cref= Prolog </seealso>
	};

}


#endif	//#ifndef OPERATION
