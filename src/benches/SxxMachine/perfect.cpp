using namespace std;

#include "perfect.h"
#include "../../machine/SxxMachine/Const.h"
#include "../../machine/SxxMachine/Int.h"
#include "../../machine/SxxMachine/Prolog.h"
#include "../../machine/SxxMachine/Term.h"
#include "../../machine/SxxMachine/Data.h"
#include "../../machine/SxxMachine/Var.h"
#include "../../bootlib/SxxMachine/sxx_library.h"
#include "../../machine/SxxMachine/Builtins.h"

namespace SxxMachine {
	using namespace SxxMachine;
	using pred_or_2 = SxxMachine::sxx_meta::pred_or_2;
Const* const  perfect::s_cut = Data::Intern("cut");
Const* const  perfect::s1 = Data::Intern("*");
Const* const  perfect::s2 = Data::Intern("+");
Const* const  perfect::s3 = Data::Intern("-");
Const* const  perfect::s4 = Data::Intern(".");
Const* const  perfect::s5 = Data::Intern(":-");
Const* const  perfect::s_arithequal = Data::Intern("arithequal");
Const* const  perfect::s_calc = Data::Intern("calc");
Const* const  perfect::s_call = Data::Intern("call");
Const* const  perfect::s_divisible = Data::Intern("divisible");
Const* const  perfect::s_findall = Data::Intern("findall");
Const* const  perfect::s_generateList = Data::Intern("generateList");
Const* const  perfect::s_is = Data::Intern("is");
Const* const  perfect::s_isprime = Data::Intern("isprime");
Const* const  perfect::s_listperf = Data::Intern("listperf");
Const* const  perfect::s_mod = Data::Intern("mod");
Const* const  perfect::s_not = Data::Intern("not");
Const* const  perfect::s_ok = Data::Intern("ok");
Const* const  perfect::s_perfect = Data::Intern("perfect");
Const* const  perfect::s_power = Data::Intern("power");
Const* const  perfect::s_smallerorequal = Data::Intern("smallerorequal");
Const* const  perfect::s_smallerthan = Data::Intern("smallerthan");
Const* const  perfect::s_top = Data::Intern("top");
Int* const  perfect::posint0 = Data::Number(0LL);
Int* const  perfect::posint1 = Data::Number(1LL);
Int* const  perfect::posint2 = Data::Number(2LL);
Int* const  perfect::posint6 = Data::Number(6LL);
Int* const  perfect::posint28 = Data::Number(28LL);
Int* const  perfect::posint100 = Data::Number(100LL);
Int* const  perfect::posint496 = Data::Number(496LL);
Int* const  perfect::posint8128 = Data::Number(8128LL);
Int* const  perfect::posint2096128 = Data::Number(2096128LL);
Int* const  perfect::posint33550336 = Data::Number(33550336LL);
Int* const  perfect::posint8589869056 = Data::BigInt("8589869056");
Int* const  perfect::posint137438691328 = Data::BigInt("137438691328");
Int* const  perfect::posint35184367894528 = Data::BigInt("35184367894528");
Int* const  perfect::posint144115187807420416 = Data::BigInt("144115187807420416");
Int* const  perfect::posint2305843008139952128 = Data::BigInt("2305843008139952128");
Int* const  perfect::posint9444732965670570950656 = Data::BigInt("9444732965670570950656");
Int* const  perfect::posint2417851639228158837784576 = Data::BigInt("2417851639228158837784576");
Int* const  perfect::posint38685626227663735544086528 = Data::BigInt("38685626227663735544086528");
Int* const  perfect::posint9903520314282971830448816128 = Data::BigInt("9903520314282971830448816128");
Int* const  perfect::posint40564819207303336344294875201536 = Data::BigInt("40564819207303336344294875201536");
Int* const  perfect::posint166153499473114483824745506383331328 = Data::BigInt("166153499473114483824745506383331328");
Int* const  perfect::posint2658455991569831744654692615953842176 = Data::BigInt("2658455991569831744654692615953842176");
Int* const  perfect::posint10889035741470030830754200461521744560128 = Data::BigInt("10889035741470030830754200461521744560128");
Int* const  perfect::posint2787593149816327892690784192460327776944128 = Data::BigInt("2787593149816327892690784192460327776944128");
Int* const  perfect::posint44601490397061246283066714178813853366747136 = Data::BigInt("44601490397061246283066714178813853366747136");
Int* const  perfect::posint182687704666362864775460301858080473799697891328 = Data::BigInt("182687704666362864775460301858080473799697891328");
Int* const  perfect::posint46768052394588893382517909811217778170473142550528 = Data::BigInt("46768052394588893382517909811217778170473142550528");
Int* const  perfect::posint191561942608236107294793378084303638130997321548169216 = Data::BigInt("191561942608236107294793378084303638130997321548169216");
Int* const  perfect::posint12554203470773361527671578846336104669690446551334525075456 = Data::BigInt("12554203470773361527671578846336104669690446551334525075456");
Int* const  perfect::posint3213876088517980551083924184681057554444177758164088967397376 = Data::BigInt("3213876088517980551083924184681057554444177758164088967397376");
const Operation perfect::reg_top_0 = PredTable::Register("top", 0, new SxxMachine::sxx_library::pred_top_0());
const Operation perfect::reg_ok_1 = PredTable::Register("ok", 1, new pred_ok_1());
const Operation perfect::reg_divisible_2 = PredTable::Register("divisible", 2, new pred_divisible_2());
const Operation perfect::reg_isprime_2 = PredTable::Register("isprime", 2, new pred_isprime_2());
const Operation perfect::reg_power_3 = PredTable::Register("power", 3, new pred_power_3());
const Operation perfect::reg_calc_3 = PredTable::Register("calc", 3, new pred_calc_3());
const Operation perfect::reg_listperf_2 = PredTable::Register("listperf", 2, new pred_listperf_2());
const Operation perfect::reg_generateList_2 = PredTable::Register("generateList", 2, new pred_generateList_2());
const Operation perfect::reg_perfect_2 = PredTable::Register("perfect", 2, new pred_perfect_2());

	Operation perfect::pred_top_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation perfect::pred_top_0::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0]} ;*/
		std::vector<Term*> aregs = mach->RegPull(0);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_top_0__1(mach));
	}

	Operation perfect::pred_top_0::exec_pred_top_0__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		local_aregs[0] = var1;
		local_aregs[1] = Data::F(perfect::s_perfect, perfect::posint100, var1->Deref());
		local_aregs[2] = var2;
		local_aregs[3] = Data::F(perfect::s_ok, { var2->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_findall_3::exec_static);
	}

	Operation perfect::pred_ok_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation perfect::pred_ok_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_ok_1__1(mach));
	}

	Operation perfect::pred_ok_1::exec_pred_ok_1__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Data::F(perfect::s4, perfect::posint3213876088517980551083924184681057554444177758164088967397376, Data::F(perfect::s4, perfect::posint12554203470773361527671578846336104669690446551334525075456, Data::F(perfect::s4, perfect::posint191561942608236107294793378084303638130997321548169216, Data::F(perfect::s4, perfect::posint46768052394588893382517909811217778170473142550528, Data::F(perfect::s4, perfect::posint182687704666362864775460301858080473799697891328, Data::F(perfect::s4, perfect::posint44601490397061246283066714178813853366747136, Data::F(perfect::s4, perfect::posint2787593149816327892690784192460327776944128, Data::F(perfect::s4, perfect::posint10889035741470030830754200461521744560128, Data::F(perfect::s4, perfect::posint2658455991569831744654692615953842176, Data::F(perfect::s4, perfect::posint166153499473114483824745506383331328, Data::F(perfect::s4, perfect::posint40564819207303336344294875201536, Data::F(perfect::s4, perfect::posint9903520314282971830448816128, Data::F(perfect::s4, perfect::posint38685626227663735544086528, Data::F(perfect::s4, perfect::posint2417851639228158837784576, Data::F(perfect::s4, perfect::posint9444732965670570950656, Data::F(perfect::s4, perfect::posint2305843008139952128, Data::F(perfect::s4, perfect::posint144115187807420416, Data::F(perfect::s4, perfect::posint35184367894528, Data::F(perfect::s4, perfect::posint137438691328, Data::F(perfect::s4, perfect::posint8589869056, Data::F(perfect::s4, perfect::posint33550336, Data::F(perfect::s4, perfect::posint2096128, Data::F(perfect::s4, perfect::posint8128, Data::F(perfect::s4, perfect::posint496, Data::F(perfect::s4, perfect::posint28, Data::F(perfect::s4, perfect::posint6, Const::Nil))))))))))))))))))))))))))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation perfect::pred_divisible_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation perfect::pred_divisible_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_divisible_2__1(mach));
	}

	Operation perfect::pred_divisible_2::exec_pred_divisible_2__1(Prolog* mach) {
		mach->FillAlternative(pred_divisible_2::exec_pred_divisible_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var3;
		local_aregs[1] = Data::F(perfect::s1, { var2->Deref(), var2->Deref() });
		local_aregs[2] = Data::F(perfect::s_smallerorequal, { var3->Deref(), var1->Deref(), Data::F(perfect::s_arithequal, perfect::posint0, Data::F(perfect::s_mod, { var1->Deref(), var2->Deref() }), continuation) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_is_2::exec_static);
	}

	Operation perfect::pred_divisible_2::exec_pred_divisible_2__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var1->Deref();
		local_aregs[2] = Data::F(perfect::s_is, var3, Data::F(perfect::s2, { var2->Deref(), perfect::posint1 }), Data::F(perfect::s_divisible, { var1->Deref(), var3->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_smallerthan_2::exec_static);
	}

	Operation perfect::pred_isprime_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation perfect::pred_isprime_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_isprime_2__1(mach));
	}

	Operation perfect::pred_isprime_2::exec_pred_isprime_2__1(Prolog* mach) {
		mach->FillAlternative(pred_isprime_2::exec_pred_isprime_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(perfect::s4, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var3;
		local_aregs[1] = perfect::posint2;
		local_aregs[2] = Data::F(perfect::s_smallerthan, perfect::posint1, var1->Deref(), Data::F(perfect::s_not, Data::F(perfect::s_divisible, { var1->Deref(), var3->Deref() }), continuation));
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_is_2::exec_static);
	}

	Operation perfect::pred_isprime_2::exec_pred_isprime_2__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(perfect::s4, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_isprime_2::exec_static);
	}

	Operation perfect::pred_power_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation perfect::pred_power_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_power_3__1(mach));
	}

	Operation perfect::pred_power_3::exec_pred_power_3__1(Prolog* mach) {
		mach->FillAlternative(pred_power_3::exec_pred_power_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(perfect::posint0))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(perfect::posint1))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation perfect::pred_power_3::exec_pred_power_3__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var4;
		local_aregs[1] = Data::F(perfect::s3, { var2->Deref(), perfect::posint1 });
		local_aregs[2] = Data::F(perfect::s_power, { var1->Deref(), var4->Deref(), var5, Data::F(perfect::s_is, { var3->Deref(), Data::F(perfect::s1, { var5->Deref(), var1->Deref() }), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_is_2::exec_static);
	}

	Operation perfect::pred_calc_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation perfect::pred_calc_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_calc_3__1(mach));
	}

	Operation perfect::pred_calc_3::exec_pred_calc_3__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(perfect::posint2))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = perfect::posint2;
		local_aregs[1] = var1->Deref();
		local_aregs[2] = var3;
		local_aregs[3] = Data::F(perfect::s_is, var4, Data::F(perfect::s3, { var3->Deref(), perfect::posint1 }), Data::F(perfect::s_power, perfect::posint2, Data::F(perfect::s3, { var1->Deref(), perfect::posint1 }), var5, Data::F(perfect::s_is, { var2->Deref(), Data::F(perfect::s1, { var4->Deref(), var5->Deref() }), continuation })));
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_power_3::exec_static);
	}

	Operation perfect::pred_listperf_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation perfect::pred_listperf_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_listperf_2__1(mach));
	}

	Operation perfect::pred_listperf_2::exec_pred_listperf_2__1(Prolog* mach) {
		mach->FillAlternative(pred_listperf_2::exec_pred_listperf_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(perfect::s4, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = perfect::posint2;
		local_aregs[1] = var1->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_calc_3::exec_static);
	}

	Operation perfect::pred_listperf_2::exec_pred_listperf_2__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(perfect::s4, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_listperf_2::exec_static);
	}

	Operation perfect::pred_generateList_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation perfect::pred_generateList_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_generateList_2__1(mach));
	}

	Operation perfect::pred_generateList_2::exec_pred_generateList_2__1(Prolog* mach) {
		mach->FillAlternative(pred_generateList_2::exec_pred_generateList_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(perfect::posint0))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation perfect::pred_generateList_2::exec_pred_generateList_2__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(perfect::s4, var2, var3)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = perfect::posint0;
		local_aregs[1] = var1->Deref();
		local_aregs[2] = Data::F(perfect::s_is, { var2->Deref(), Data::F(perfect::s2, { var1->Deref(), perfect::posint1 }), Data::F(perfect::s_is, var4, Data::F(perfect::s3, { var1->Deref(), perfect::posint1 }), Data::F(perfect::s_generateList, { var4->Deref(), var3->Deref(), continuation })) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_smallerthan_2::exec_static);
	}

	Operation perfect::pred_perfect_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation perfect::pred_perfect_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_perfect_2__1(mach));
	}

	Operation perfect::pred_perfect_2::exec_pred_perfect_2__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var3;
		local_aregs[2] = Data::F(perfect::s_findall, var4, Data::F(perfect::s_isprime, { var3->Deref(), var4->Deref() }), var5, Data::F(perfect::s_listperf, { var5->Deref(), var2->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_generateList_2::exec_static);
	}
}
