using namespace std;

#include "animal.h"
#include "../../machine/SxxMachine/Const.h"
#include "../../machine/SxxMachine/Prolog.h"
#include "../../machine/SxxMachine/Term.h"
#include "../../machine/SxxMachine/Data.h"
#include "../../machine/SxxMachine/Var.h"
#include "../../machine/SxxMachine/Builtins.h"

namespace SxxMachine {
	using namespace SxxMachine;
	using pred_or_2 = SxxMachine::sxx_meta::pred_or_2;
Const* const  animal::s_cut = Data::Intern("cut");
Const* const  animal::s1 = Data::Intern(".");
Const* const  animal::s2 = Data::Intern(":-");
Const* const  animal::s_animal = Data::Intern("animal");
Const* const  animal::s_call = Data::Intern("call");
Const* const  animal::s_elephant = Data::Intern("elephant");
Const* const  animal::s_goat = Data::Intern("goat");
Const* const  animal::s7 = Data::Intern("please type one more animal name: ");
Const* const  animal::s_read = Data::Intern("read");
Const* const  animal::s_write = Data::Intern("write");
const Operation animal::reg_animal_1 = PredTable::Register("animal", 1, new pred_animal_1());

	Operation animal::pred_animal_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation animal::pred_animal_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_animal_1__1(mach));
	}

	Operation animal::pred_animal_1::exec_pred_animal_1__1(Prolog* mach) {
		mach->FillAlternative(pred_animal_1::exec_pred_animal_1__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(animal::s_goat))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation animal::pred_animal_1::exec_pred_animal_1__2(Prolog* mach) {
		mach->FillAlternative(pred_animal_1::exec_pred_animal_1__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(animal::s_elephant))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation animal::pred_animal_1::exec_pred_animal_1__3(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = animal::s7;
		local_aregs[1] = Data::F(animal::s_read, { var1->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_write_1::exec_static);
	}
}
