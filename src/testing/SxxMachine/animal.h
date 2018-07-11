#ifndef ANIMAL
#define ANIMAL

#include "../../machine/SxxMachine/Code.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Const; }
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Prolog; }

namespace SxxMachine {
	using namespace SxxMachine;

	class animal {
public:
	static Const* const  s_cut;
	static Const* const  s1;
	static Const* const  s2;
	static Const* const  s_animal;
	static Const* const  s_call;
	static Const* const  s_elephant;
	static Const* const  s_goat;
	static Const* const  s7;
	static Const* const  s_read;
	static Const* const  s_write;
	static Operation* const  reg_animal_1;
public:
	class pred_animal_1 : public Code {

	/*
	
	animal(goat,_6012):-call(_6012).
	animal(elephant,_6086):-call(_6086).
	animal(_6138,_6180):-write('please type one more animal name: ',read(_6138,_6180)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_animal_1__1(Prolog* mach);
	static Operation* exec_pred_animal_1__2(Prolog* mach);
	static Operation* exec_pred_animal_1__3(Prolog* mach);
	};


	};



}


#endif	//#ifndef ANIMAL
