#ifndef MU
#define MU

#include "../../machine/SxxMachine/Operation.h"
#include "../../machine/SxxMachine/Code.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Const; }
namespace SxxMachine { class Int; }
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Prolog; }

namespace SxxMachine {

	using namespace SxxMachine;

	class mu {
	public:
		static Const* const  s_cut;
		static Const* const  s1;
		static Const* const  s2;
		static Const* const  s3;
		static Const* const  s_a;
		static Const* const  s_append;
		static Const* const  s_call;
		static Const* const  s_i;
		static Const* const  s_is;
		static Const* const  s_m;
		static Const* const  s_mu;
		static Const* const  s_rule;
		static Const* const  s_rule1;
		static Const* const  s_rule2;
		static Const* const  s_rule3;
		static Const* const  s_rule4;
		static Const* const  s_smallerthan;
		static Const* const  s_theorem;
		static Const* const  s_top;
		static Const* const  s_u;
		static Int* const  posint0;
		static Int* const  posint1;
		static Int* const  posint2;
		static Int* const  posint3;
		static Int* const  posint4;
		static Int* const  posint5;
		static const Operation reg_top_0;
		static const Operation reg_mu_0;
		static const Operation reg_theorem_3;
		static const Operation reg_rule_3;
		static const Operation reg_rule1_2;
		static const Operation reg_rule2_2;
		static const Operation reg_rule3_2;
		static const Operation reg_rule4_2;
		static const Operation reg_append_3;

	public:
		class pred_top_0 : public Code {

			/*
			
			top(_5398):-mu(_5398).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_top_0__1(Prolog* mach);
		};

	public:
		class pred_mu_0 : public Code {

			/*
			
			mu(_5510):-theorem([m,u,i,i,u],5,_5482,cut(1,_5510)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_mu_0__1(Prolog* mach);
		};

	public:
		class pred_theorem_3 : public Code {

			/*
			
			theorem([m,i],_5652,[[a,m,i]],_5676):-call(_5676).
			theorem(_5770,_5782,[[_5768|_5770]|_5776],_5876):-smallerthan(0,_5782,is(_5800,_5782-1,theorem(_5806,_5800,_5776,rule(_5768,_5806,_5770,_5876)))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_theorem_3__1(Prolog* mach);

			static Operation exec_pred_theorem_3__2(Prolog* mach);
		};

	public:
		class pred_rule_3 : public Code {

			/*
			
			rule(1,_6176,_6178,_6224):-rule1(_6176,_6178,_6224).
			rule(2,_6346,_6348,_6394):-rule2(_6346,_6348,_6394).
			rule(3,_6516,_6518,_6564):-rule3(_6516,_6518,_6564).
			rule(4,_6686,_6688,_6734):-rule4(_6686,_6688,_6734).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_rule_3__1(Prolog* mach);

			static Operation exec_pred_rule_3__2(Prolog* mach);

			static Operation exec_pred_rule_3__3(Prolog* mach);

			static Operation exec_pred_rule_3__4(Prolog* mach);
		};

	public:
		class pred_rule1_2 : public Code {

			/*
			
			rule1([i],[i,u],_6896):-call(_6896).
			rule1([_6986|_6988],[_6986|_6994],_7040):-rule1(_6988,_6994,_7040).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_rule1_2__1(Prolog* mach);

			static Operation exec_pred_rule1_2__2(Prolog* mach);
		};

	public:
		class pred_rule2_2 : public Code {

			/*
			
			rule2([m|_7160],[m|_7166],_7214):-append(_7160,_7160,_7166,_7214).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_rule2_2__1(Prolog* mach);
		};

	public:
		class pred_rule3_2 : public Code {

			/*
			
			rule3([i,i,i|_7366],[u|_7366],_7400):-call(_7400).
			rule3([_7502|_7504],[_7502|_7510],_7556):-rule3(_7504,_7510,_7556).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_rule3_2__1(Prolog* mach);

			static Operation exec_pred_rule3_2__2(Prolog* mach);
		};

	public:
		class pred_rule4_2 : public Code {

			/*
			
			rule4([u,u|_7694],_7694,_7722):-call(_7722).
			rule4([_7830|_7832],[_7830|_7838],_7884):-rule4(_7832,_7838,_7884).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_rule4_2__1(Prolog* mach);

			static Operation exec_pred_rule4_2__2(Prolog* mach);
		};

	public:
		class pred_append_3 : public Code {

			/*
			
			append([],_8022,_8022,_8046):-call(_8046).
			append([_8174|_8176],_8188,[_8174|_8182],_8238):-append(_8176,_8188,_8182,_8238).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_append_3__1(Prolog* mach);

			static Operation exec_pred_append_3__2(Prolog* mach);
		};

	};

}


#endif	//#ifndef MU
