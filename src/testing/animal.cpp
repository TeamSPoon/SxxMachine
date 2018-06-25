using namespace std;

#include "animal.h"
#include "../machine/Term.h"
#include "../machine/Prolog.h"
#include "../library/sxx_builtins_cafe.h"
#include "../machine/builtins.h"

Const* animal::s0 = Const::Intern("cut");
Const* animal::s1 = Const::Intern(".");
Const* animal::s2 = Const::Intern(":-");
Const* animal::s3 = Const::Intern("animal");
Const* animal::s4 = Const::Intern("call");
Const* animal::s5 = Const::Intern("elephant");
Const* animal::s6 = Const::Intern("goat");
Const* animal::s7 = Const::Intern("please type one more animal name: ");
Const* animal::s8 = Const::Intern("read");
Const* animal::s9 = Const::Intern("write");

static* function < Function*pred_animal_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_animal_1__1(mach));
}

static* function < Function*pred_animal_1::(PrologMachine*) {
	mach::FillAlternative(pred_animal_1::exec_pred_animal_1__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(animal::s6))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_animal_1::(PrologMachine*) {
	mach::FillAlternative(pred_animal_1::exec_pred_animal_1__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(animal::s5))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_animal_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = animal::s7;
local_aregs[1] = F(animal::s8, { var1->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_write_1::exec_pred_write_1);
}
