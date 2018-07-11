package SxxMachine;

public class /**/ Metaterm {

	public final static Code pred_freeze_2 = new pred_freeze_2();
	public final static Code pred_frozen_2 = new pred_frozen_2();
	public final static Code pred_attvar_1 = new pred_attvar_1();
	public final static Code pred_put_attr_3 = new pred_put_attr_3();
	public final static Code pred_get_attr_3 = new pred_get_attr_3();
	public final static Code pred_get_attrs_2 = new pred_get_attrs_2();
	public final static Code pred_put_attrs_2 = new pred_put_attrs_2();
	public final static Code pred_undo_1 = new pred_undo_1();

	public static class pred_freeze_2 extends Code {
		public Operation Exec(Prolog mach) {
			mach.Areg[0].Deref().freeze(mach, mach.Areg[1].Deref());
			return mach.Reg(2);
		}
	}

	public static class pred_frozen_2 extends Code {
		public Operation Exec(Prolog mach) {
			if (!mach.Areg[0].Deref().frozenGoals().Unify(mach.Areg[1].Deref(), mach))
				return Prolog.Fail0;
			return mach.Reg(2);
		}
	}

	public static class pred_attvar_1 extends Code {
		public Operation Exec(Prolog mach) {
			Term arg1 = mach.Areg[0].Deref();
			if (!(arg1.isAttvar()))
				return Prolog.Fail0;
			return mach.Reg(1);
		}
	}

	public static class pred_put_attr_3 extends Code {
		public Operation Exec(Prolog mach) {
			mach.Areg[0].Deref().putAttrValue(mach, mach.Areg[1].Deref(), mach.Areg[2].Deref());
			return mach.Reg(3);
		}
	}

	public static class pred_get_attr_3 extends Code {
		public Operation Exec(Prolog mach) {
			Term t = mach.Areg[0].Deref().findOrAttrValue(mach, false, mach.Areg[2].Deref());
			if (!(t.Unify(mach.Areg[0].Deref(), mach)))
				return Prolog.Fail0;
			return mach.Reg(3);
		}
	}

	public static class pred_get_attrs_2 extends Code {
		public Operation Exec(Prolog mach) {
			if (mach.Areg[1].Deref().Unify(mach.Areg[0].Deref(), mach))
				return Prolog.Fail0;
			return mach.Reg(2);
		}
	}

	public static class pred_put_attrs_2 extends Code {
		public Operation Exec(Prolog mach) {
			mach.Areg[0].Deref().setAttrs(mach, mach.Areg[1].Deref());
			return mach.Reg(2);
		}
	}

	public static class pred_undo_1 extends Code {
		public Operation Exec(Prolog mach) {
			mach.push(mach.Areg[0].Deref());
			return mach.Reg(1);
		}
	}

}