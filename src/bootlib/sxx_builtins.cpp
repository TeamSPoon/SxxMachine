using namespace std;

#include "sxx_builtins.h"
#include "../machine/Term.h"
#include "../machine/Prolog.h"
#include "../library/sxx_builtins_cafe.h"
#include "../machine/builtins.h"
#include "../benches/sdda.h"
#include "sxx_library.h"

Const* sxx_builtins::s0 = Const::Intern("cut");
Const* sxx_builtins::s1 = Const::Intern("*->");
Const* sxx_builtins::s2 = Const::Intern(",");
Const* sxx_builtins::s3 = Const::Intern("->");
Const* sxx_builtins::s4 = Const::Intern(".");
Const* sxx_builtins::s5 = Const::Intern(":-");
Const* sxx_builtins::s6 = Const::Intern(";");
Const* sxx_builtins::s7 = Const::Intern("=");
Const* sxx_builtins::s8 = Const::Intern("\\+");
Const* sxx_builtins::s9 = Const::Intern("call");
Const* sxx_builtins::s10 = Const::Intern("cut");
Const* sxx_builtins::s11 = Const::Intern("dotwo");
Const* sxx_builtins::s12 = Const::Intern("fail");
Const* sxx_builtins::s13 = Const::Intern("forall");
Const* sxx_builtins::s14 = Const::Intern("nb_setarg");
Const* sxx_builtins::s15 = Const::Intern("not");
Const* sxx_builtins::s16 = Const::Intern("one_of_or_else");
Const* sxx_builtins::s17 = Const::Intern("or");
Const* sxx_builtins::s18 = Const::Intern("redo_each_call");
Const* sxx_builtins::s19 = Const::Intern("setup_call_cleanup");
Const* sxx_builtins::s20 = Const::Intern("true");
Const* sxx_builtins::s21 = Const::Intern("undo");
Const* sxx_builtins::s22 = Const::Intern("unify");
Int* sxx_builtins::posint1 = Term::Number(1);

static* function < Function*pred_or_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_or_2__1(mach));
}

static* function < Function*pred_or_2::(PrologMachine*) {
	mach::FillAlternative(pred_or_2::exec_pred_or_2__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins::s3,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins::s0, &tempVar,F(sxx_builtins::s9, { var2->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call2;
}

static* function < Function*pred_or_2::(PrologMachine*) {
	mach::FillAlternative(pred_or_2::exec_pred_or_2__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins::s3,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var3->Deref();
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call2;
}

static* function < Function*pred_or_2::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var5 = V(mach);
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins::s1,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins::s11,sxx_builtins::s20);
local_aregs[1] = var4;
local_aregs[2] = F(sxx_builtins::s17,F(sxx_builtins::s2,F(sxx_builtins::s9, { var1->Deref() }),F(sxx_builtins::s14,sxx_builtins::posint1,var4->Deref(),sxx_builtins::s12)),F(sxx_builtins::s6,F(sxx_builtins::s7, { var4->Deref(), F(sxx_builtins::s11,sxx_builtins::s20) }),var5),continuation);
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_unify_2::exec_static);
}

static* function < Function*pred_forall_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_forall_2__1(mach));
}

static* function < Function*pred_forall_2::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins::s8,F(sxx_builtins::s2,F(sxx_builtins::s9, { var1->Deref() }),F(sxx_builtins::s8,F(sxx_builtins::s8,F(sxx_builtins::s9,var3)))));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_not_1::exec_static);
}

static* function < Function*pred_undo_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_undo_1__1(mach));
}

static* function < Function*pred_undo_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call2;
}

static* function < Function*pred_redo_each_call_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_redo_each_call_3__1(mach));
}

static* function < Function*pred_redo_each_call_3::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = var2->Deref();
local_aregs[2] = var3->Deref();
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_setup_call_cleanup_3::exec_static);
}

static* function < Function*pred_one_of_or_else_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_one_of_or_else_3__1(mach));
}

static* function < Function*pred_one_of_or_else_3::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var6 = V(mach);
Var* var5 = V(mach);
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins::s1,var4,var5);
local_aregs[1] = var6;
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_or_2::exec_static);
}
