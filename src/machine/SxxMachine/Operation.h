#ifndef OPERATION
#define OPERATION

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Prolog; }

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
	using Operation = std::function<SxxMachine::Operation(Prolog prolog)>;

}


#endif	//#ifndef OPERATION
