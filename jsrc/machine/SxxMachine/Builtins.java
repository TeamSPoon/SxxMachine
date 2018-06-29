package SxxMachine;
// some builtins written in Java for Prolog

import java.io.IOException;
import java.io.InputStream;

// Bart Demoen, Paul Tarau Aug 1996 Moncton
// there is a mapping from special names (like <) to tokens
// with only letters - the compiler must be aware of that mapping

// smallerthan implements </2
public class Builtins {

	abstract static public class Borked extends Code {

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			return null;
		}

	}

	public static class pred_unify_3 extends Borked {
	}

	public static class pred_$003D$002E$002E_2 extends Borked {
	}

	public static class pred_length_2 extends Borked {
	}

	public static class pred_unify_6 extends Borked {
	}

	public static class pred_$002D$002D$003E_2 extends Borked {
	}

	public static class pred_isglobal_2 extends Borked {
	}

	public static class pred_$003C$003D_2 extends Borked {
	}

	public static class pred_$003D$003C_2 extends Borked {
	}

	public static class pred_get_performance_stats_2 extends Borked {
	}

	public static class pred_between_3 extends Borked {
	}

	public static class pred_$003D$005C$003D_2 extends Borked {
	}

	public static class pred_style_check_1 extends Borked {
	}

	public static class pred_module_colon_2 extends Borked {
	}

	public static class pred_nb_setval_2 extends Borked {
	}

	public static class pred_name_2 extends Borked {
	}

	public static class pred_number_1 extends Borked {
	}

	public static class pred_recorded_3 extends Borked {
	}

	public static class pred_filter_vars_4 extends Borked {
	}

	public static class pred_intersectv_list_3 extends Borked {
	}

	public static class pred_nonvar_1 extends Borked {

	}

	public static class pred_varbag_3 extends Borked {

	}

	public static class pred_filter_dups_3 extends Borked {

	}

	public static class pred_setup_call_cleanup_3 extends Borked {
	}

	public static class pred_fail_0 extends Code {
		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			return Prolog.Fail0;
		}
	}

	public static class pred_true_0 extends Code {
		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			return Prolog.True0;
		}
	}

	static class pred_smallerthan_2 extends Code {
		protected int Arity() {
			return 2;
		}

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			long i1, i2;
			Term dereffed;

			dereffed = (mach.Areg[0]).Deref();
			i1 = dereffed.LongValue();
			dereffed = (mach.Areg[1]).Deref();
			i2 = dereffed.LongValue();
			if (i1 < i2) {
				mach.Areg[0] = mach.Areg[2];
				mach.Areg[1] = mach.Areg[2] = null;
				return Prolog.Call1;
			}
			return Prolog.Fail0;
		}
	}

	// smallerorequal implements =</2

	static class pred_smallerorequal_2 extends Code {
		protected int Arity() {
			return 2;
		}

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			long i1, i2;
			Term dereffed;

			dereffed = (mach.Areg[0]).Deref();
			i1 = dereffed.LongValue();
			dereffed = (mach.Areg[1]).Deref();
			i2 = dereffed.LongValue();
			if (i1 <= i2) {
				mach.Areg[0] = mach.Areg[2];
				mach.Areg[1] = mach.Areg[2] = null;
				return Prolog.Call1;
			}
			return Prolog.Fail0;
		}
	}

	// arithequal implements =:=/2

	static class pred_arithequal_2 extends Code {
		protected int Arity() {
			return 2;
		}

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			long i1, i2;
			Term dereffed;

			dereffed = (mach.Areg[0]).Deref();
			i1 = dereffed.LongValue();
			dereffed = (mach.Areg[1]).Deref();
			i2 = dereffed.LongValue();
			if (i1 == i2) {
				mach.Areg[0] = mach.Areg[2];
				mach.Areg[1] = mach.Areg[2] = null;
				return Prolog.Call1;
			}
			return Prolog.Fail0;
		}
	}

	// arithdifferent implements =\= /2

	static class pred_arithdifferent_2 extends Code {
		protected int Arity() {
			return 2;
		}

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			long i1, i2;
			Term dereffed;

			dereffed = (mach.Areg[0]).Deref();
			i1 = dereffed.LongValue();
			dereffed = (mach.Areg[1]).Deref();
			i2 = dereffed.LongValue();
			if (i1 != i2) {
				mach.Areg[0] = mach.Areg[2];
				mach.Areg[1] = mach.Areg[2] = null;
				return Prolog.Call1;
			}
			return Prolog.Fail0;
		}
	}

	// is implements is/2

	static class pred_is_2 extends Code {
		protected int Arity() {
			return 2;
		}

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			long i1;
			Term dereffed;

			dereffed = (mach.Areg[1]).Deref();
			i1 = dereffed.LongValue();
			dereffed = (mach.Areg[0]).Deref();
			if (!(dereffed.Unify(new Int(i1))))
				return Prolog.Fail0;
			mach.Areg[0] = mach.Areg[2];
			mach.Areg[1] = mach.Areg[2] = null;
			return Prolog.Call1;
		}
	}

	// unify implements =/2

	static class pred_unify_2 extends Code {
		protected int Arity() {
			return 2;
		}

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			Term arg1 = mach.Areg[0].Deref();
			Term arg2 = mach.Areg[1].Deref();

			if (!(arg1.Unify(arg2)))
				return Prolog.Fail0;
			mach.Areg[0] = mach.Areg[2];
			mach.Areg[1] = mach.Areg[2] = null;
			return Prolog.Call1;
		}
	}

	// univ implements the left direction of =../2

	static class pred_univ_3 extends Code {
		protected int Arity() {
			return 3;
		}

		// Areg[0] is a free variable
		// Areg[1] is a Const
		// Areg[2] is a list of PrologObjects

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			Term arg1 = mach.Areg[0].Deref();
			Term arg2 = mach.Areg[1].Deref();
			Term arg3 = mach.Areg[2].Deref();
			Term tail = arg3;

			int l = 0;
			while (tail.IsList()) {
				tail = (((Fun) tail).Arguments[1]).Deref();
				l++;
			}
			if (l == 0)
				return Prolog.Fail0;
			if (!(tail.IsNil()))
				return Prolog.Fail0;
			if (!(arg2 instanceof Const))
				return Prolog.Fail0;
			Term args[] = new Term[l];
			tail = arg3;
			int i;
			for (i = 0; i < l; i++) {
				args[i] = ((Fun) tail).Arguments[0];
				tail = (((Fun) tail).Arguments[1]).Deref();
			}

			if (!(arg1.Unify(new Fun(((Const) arg2).GetName(), args))))
				return Prolog.Fail0;
			mach.Areg[0] = mach.Areg[3];
			mach.Areg[1] = mach.Areg[2] = mach.Areg[3] = null;
			return Prolog.Call1;
		}
	}

	static class pred_write_1 extends Code {
		public static final Code entry_code = new pred_write_1();

		protected int Arity() {
			return 1;
		}

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			try {
				mach.Areg[0].Deref().formattedOutput(0, System.out);
			} catch (IOException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			System.out.flush();
			mach.Areg[0] = mach.Areg[1];
			mach.Areg[1] = null;
			return Prolog.Call1;
		}
	}

	static class pred_nl_0 extends Code {
		protected int Arity() {
			return 0;
		}

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			System.out.println("");
			return Prolog.Call1;
		}
	}

	static class pred_functor_3 extends Code {
		protected int Arity() {
			return 3;
		}

		static boolean DoFunctor3(Prolog mach, Term arg1, Term arg2, Term arg3) {
			arg1 = arg1.Deref();
			arg2 = arg2.Deref();
			arg3 = arg3.Deref();

			if (arg1 instanceof Var) {
				if ((!(arg2 instanceof Const)) || (!(arg3 instanceof Int)))
					return false;
				int i = (int) (((Int) arg3).IntValue);
				String Name = arg2.GetName();
				Term args[] = new Term[i];
				while (i-- > 0) {
					args[i] = new Var(mach);
				}
				if (!(arg1.Unify(new Fun(Name, args))))
					return false;
			} else {
				String Name = arg1.GetName();
				int arity = arg1.Arity();
				if (!(arg2.Unify(Const.Intern(Name))))
					return false;
				if (!(arg3.Unify(new Int(arity))))
					return false;
			}
			return true;
		}

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			if (!DoFunctor3(mach, mach.Areg[0], mach.Areg[1], mach.Areg[2]))
				return Prolog.Fail0;
			mach.Areg[0] = mach.Areg[3]; // install the continuation
			mach.Areg[1] = mach.Areg[2] = mach.Areg[3] = null;
			return Prolog.Call1;
		}
	}

	static class pred_arg_3 extends Code {
		protected int Arity() {
			return 3;
		}

		static boolean DoArg3(Prolog mach, Term arg1, Term arg2, Term arg3) {
			arg1 = arg1.Deref();
			arg2 = arg2.Deref();
			arg3 = arg3.Deref();

			if (!(arg1 instanceof Int))
				return false;
			if (!(arg2 instanceof Fun))
				return false;
			int i = (int) (((Int) arg1).IntValue);
			if (i < 1)
				return false;
			int l = ((Fun) arg2).Arity();
			if (i > l)
				return false;
			Term x = ((Fun) arg2).Arguments[i - 1];
			x = x.Deref();
			return (arg3.Unify(x));
		}

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			if (!DoArg3(mach, mach.Areg[0], mach.Areg[1], mach.Areg[2]))
				return Prolog.Fail0;
			mach.Areg[0] = mach.Areg[3]; // install the continuation
			mach.Areg[1] = mach.Areg[2] = mach.Areg[3] = null;
			return Prolog.Call1;
		}
	}

	static class pred_nexttoken_1 extends Code {
		protected int Arity() {
			return 1;
		}

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			Term arg1 = mach.Areg[0].Deref();
			if (!(arg1 instanceof Var))
				return Prolog.Fail0;
			Term t = mach.nexttoken();
			if (!(arg1.Unify(t.Deref())))
				return Prolog.Fail0;
			mach.Areg[0] = mach.Areg[1]; // install the continuation
			mach.Areg[1] = null;
			return Prolog.Call1;
		}
	}

	static class pred_cputime_1 extends Code {
		protected int Arity() {
			return 1;
		}

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			Term arg1 = mach.Areg[0].Deref();
			long t = java.lang.System.currentTimeMillis();
			Term o = new Int(t);
			if (!(arg1.Unify(o)))
				return Prolog.Fail0;
			mach.Areg[0] = mach.Areg[1]; // install the continuation
			mach.Areg[1] = null;
			return Prolog.Call1;
		}
	}

	static class findall_list extends PrologObject {
		Var uptonowbegin, uptonowend;
		long time;

		findall_list(Prolog mach) {
			uptonowbegin = uptonowend = new Var(mach);
			time = mach.TimeStamp;
		}

		public Term Deref() {
			return this;
		}

		public boolean Unify(Term that) {
			return that.Bind(this);
		}

		public String toString() {
			return ("findall = " + (uptonowbegin.Deref()).toString() + " - " + (uptonowend.Deref()).toString());
		}

	}

	static class pred_initfindall_1 extends Code {
		public static Code entry_code = new pred_initfindall_1();

		protected int Arity() {
			return 1;
		}

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			Term arg1 = mach.Areg[0].Deref();
			if (!(arg1.Unify(new findall_list(mach))))
				return Prolog.Fail0;
			mach.Areg[0] = mach.Areg[1]; // install the continuation
			mach.Areg[1] = null;
			return Prolog.Call1;
		}
	}

	static class pred_addfindall_2 extends Code {
		protected int Arity() {
			return 2;
		}

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			Term arg1 = mach.Areg[0].Deref();
			findall_list arg2 = (findall_list) (mach.Areg[1].Deref());
			int oldtrail = mach.TrailTop;
			Term copy = arg1.Copy(mach, arg2.time);
			int newtrail = mach.TrailTop;
			while (newtrail-- > oldtrail) {
				mach.TrailStack[newtrail].UnTrailSelf();
				mach.TrailStack[newtrail] = null;
			}
			mach.TrailTop = oldtrail;
			Var NewTail = new Var(mach);
			(arg2.uptonowend).Refers = new Fun(".".intern(), copy, NewTail);
			arg2.uptonowend = NewTail;
			// mach.Areg[0] = mach.Areg[2] ; // install the continuation
			// mach.Areg[1] = mach.Areg[2] = null ;
			return Prolog.Fail0;
		}
	}

	static class pred_retrievefindall_2 extends Code {
		public static Code entry_code = new pred_retrievefindall_2();

		protected int Arity() {
			return 2;
		}

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			Term arg1 = mach.Areg[0].Deref();
			findall_list arg2 = (findall_list) (mach.Areg[1].Deref());
			(arg2.uptonowend).Refers = Const.Nil;
			if (!(arg1.Unify((arg2.uptonowbegin).Deref())))
				return Prolog.Fail0;
			mach.Areg[0] = mach.Areg[2]; // install the continuation
			mach.Areg[1] = mach.Areg[2] = null;
			return Prolog.Call1;
		}
	}

	static class pred_var_equal_2 extends Code {
		protected int Arity() {
			return 2;
		}

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			Term arg1 = mach.Areg[0].Deref();
			Term arg2 = mach.Areg[1].Deref();
			if (arg1 != arg2)
				return Prolog.Fail0;
			mach.Areg[0] = mach.Areg[2]; // install the continuation
			mach.Areg[1] = mach.Areg[2] = null;
			return Prolog.Call1;
		}
	}

	static class pred_trail_1 extends Code {
		protected int Arity() {
			return 1;
		}

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			Term arg1 = mach.Areg[0].Deref();
			if (!(arg1.Unify(new Int((long) (mach.TrailTop)))))
				return Prolog.Fail0;
			mach.Areg[0] = mach.Areg[1]; // install the continuation
			mach.Areg[1] = null;
			return Prolog.Call1;
		}
	}

	static class pred_choice_1 extends Code {
		protected int Arity() {
			return 1;
		}

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			Term arg1 = mach.Areg[0].Deref();
			if (!(arg1.Unify(new Int((long) (mach.CurrentChoice)))))
				return Prolog.Fail0;
			mach.Areg[0] = mach.Areg[1]; // install the continuation
			mach.Areg[1] = null;
			return Prolog.Call1;
		}
	}

	static class pred_type_of_2 extends Code {
		protected int Arity() {
			return 2;
		}

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			Term arg1 = mach.Areg[0].Deref();
			Term arg2 = mach.Areg[1].Deref();
			String s;
			if (arg1 instanceof Var)
				s = "var".intern();
			else if (arg1 instanceof FrozenVar)
				s = "var".intern();
			else if (arg1 instanceof Int)
				s = "integer".intern();
			else if (arg1 instanceof Const)
				s = "atom".intern();
			else if (arg1 instanceof Fun)
				s = "struct".intern();
			else
				s = "unknown".intern();

			if (!(arg2.Unify(Const.Intern(s))))
				return Prolog.Fail0;
			mach.Areg[0] = mach.Areg[2]; // install the continuation
			mach.Areg[1] = mach.Areg[2] = null;
			return Prolog.Call1;
		}
	}

	static class pred_assume_1 extends Code {
		protected int Arity() {
			return 1;
		}

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			Term arg1 = mach.Areg[0].Deref();
			Term ass = (mach.assumptions).Deref();
			mach.TrailEntry(new PopAssumptions(mach, ass));
			mach.assumptions = new Fun(".".intern(), arg1, ass);
			mach.Areg[0] = mach.Areg[1]; // install the continuation
			mach.Areg[1] = null;
			return Prolog.Call1;
		}
	}

	static class pred_allassumed_1 extends Code {
		protected int Arity() {
			return 1;
		}

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			Term arg1 = mach.Areg[0].Deref();
			Term ass = (mach.assumptions).Deref();
			if (!(arg1.Unify(ass)))
				return Prolog.Fail0;
			mach.Areg[0] = mach.Areg[1]; // install the continuation
			mach.Areg[1] = null;
			return Prolog.Call1;
		}
	}

	static class pred_get0_1 extends Code {
		public static final Code entry_code = new pred_get0_1();

		protected int Arity() {
			return 1;
		}

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			Term arg1 = mach.Areg[0].Deref();
			int i;
			try {
				i = readOneChar(mach.currentinput);
			} catch (Exception e) {
				return Prolog.Fail0;
			}
			if (!(arg1.Unify(new Int((long) i))))
				return Prolog.Fail0;
			mach.Areg[0] = mach.Areg[1]; // install the continuation
			mach.Areg[1] = null;
			return Prolog.Call1;
		}

		private static int readOneChar(InputStream currentinput) throws IOException {
			int i;
			if (currentinput.available() == 1) {
				i = currentinput.read();
				if (i != 10) {
					return i;
				}
			}
			i = currentinput.read();
			return i;
		}
	}

	static class pred_halt_0 extends Code {
		protected int Arity() {
			return 0;
		}

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			mach.ExceptionRaised = 2;
			return null;
		}
	}

	static class pred_setarg_3 extends Code {
		protected int Arity() {
			return 3;
		}

		static boolean DoSetArg3(Prolog mach, Term arg1, Term arg2, Term arg3) {
			arg1 = arg1.Deref();
			arg2 = arg2.Deref();
			arg3 = arg3.Deref();

			if (!(arg1 instanceof Int))
				return false;
			if (!(arg2 instanceof Fun))
				return false;
			int i = (int) (((Int) arg1).IntValue);
			if (i < 1)
				return false;
			int l = ((Fun) arg2).Arity();
			if (i > l)
				return false;
			Term x = ((Fun) arg2).Arguments[i - 1];
			Var v = new Var(mach);
			v.Refers = arg3;
			((Fun) arg2).Arguments[i - 1] = v;
			mach.TrailEntry(new SetArgTrail(x, v, mach));
			return true;
		}

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			if (!DoSetArg3(mach, mach.Areg[0], mach.Areg[1], mach.Areg[2]))
				return Prolog.Fail0;
			mach.Areg[0] = mach.Areg[3]; // install the continuation
			mach.Areg[1] = mach.Areg[2] = mach.Areg[3] = null;
			return Prolog.Call1;
		}
	}

	static class pred_compare_3 extends Code {
		static pred_compare_3 entry_code = new pred_compare_3();

		protected int Arity() {
			return 3;
		}

		//	Int < Const < Fun < Var

		static int Compare(Term t, Term s) {
			if (t == s)
				return 0;
			int ta = t.Arity();
			int sa = s.Arity();
			if (ta < sa)
				return -1;
			if (ta > sa)
				return 1;
			if (ta == Term.REAL) {
				long i1 = t.LongValue();
				long i2 = s.LongValue();
				if (i1 < i2)
					return -1;
				if (i1 == i2)
					return 0;
				return 1;
			}
			if (ta == Term.CONST) {
				String s1 = t.GetName();
				String s2 = s.GetName();
				return s1.compareTo(s2);
			}
			if (ta == Term.VAR) {
				return Integer.compare(t.hashCode(), s.hashCode());
			}

			String s1 = t.GetName();
			String s2 = s.GetName();
			int v = s1.compareTo(s2);
			if (v != 0)
				return v;
			;
			for (int i = 0; i < ta; i++) {
				v = Compare(t.Arg(i).Deref(), s.Arg(i).Deref());
				if (v != 0)
					return v;
			}
			return 0;
		}

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			Term arg1 = mach.Areg[0].Deref();
			Term arg2 = mach.Areg[1].Deref();
			Term arg3 = mach.Areg[2].Deref();
			int val = Compare(arg2, arg3);
			String s;
			if (val < 0)
				s = "<".intern();
			else if (val == 0)
				s = "=".intern();
			else
				s = ">".intern();

			if (!(arg1.Unify(Const.Intern(s))))
				return Prolog.Fail0;
			mach.Areg[0] = mach.Areg[3]; // install the continuation
			mach.Areg[1] = mach.Areg[2] = mach.Areg[3] = null;
			return Prolog.Call1;
		}
	}

	static class pred_freeze_internal_2 extends Code {
		protected int Arity() {
			return 2;
		}

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			Term arg1 = mach.Areg[0].Deref();
			Term arg2 = mach.Areg[1].Deref();

			FrozenVar frv = new FrozenVar(mach, arg2);
			if (!(arg1.Unify(frv)))
				return Prolog.Fail0;
			mach.Areg[0] = mach.Areg[2]; // install the continuation
			mach.Areg[1] = mach.Areg[2] = null;
			return Prolog.Call1;
		}
	}

	static class pred_execcontinuation_0 extends Code {
		public static Code entry_code = new pred_execcontinuation_0();

		protected int Arity() {
			return 0;
		}

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			Term arg1 = mach.Areg[0].Deref();

			if (!(arg1 instanceof Continuation))
				return Prolog.Fail0;
			Continuation c = (Continuation) arg1;
			Operation code = c.code;
			int i = Prolog.GetArity(code) + 1;
			while (i-- > 0) {
				mach.Areg[i] = c.Args[i];
			}
			return code;
		}
	}

	static class pred_frozen_2 extends Code {
		protected int Arity() {
			return 2;
		}

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			Term arg1 = mach.Areg[0].Deref();
			Term arg2 = mach.Areg[1].Deref();
			Term goal;

			if (arg1 instanceof Var)
				goal = Const.Intern("true".intern());
			else if (arg1 instanceof FrozenVar)
				goal = (((FrozenVar) arg1).goals).Deref();
			else
				return Prolog.Fail0;

			if (!(arg2.Unify(goal)))
				return Prolog.Fail0;
			mach.Areg[0] = mach.Areg[2]; // install the continuation
			mach.Areg[1] = mach.Areg[2] = null;
			return Prolog.Call1;
		}
	}

}
