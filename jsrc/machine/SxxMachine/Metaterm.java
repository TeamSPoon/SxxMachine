 package SxxMachine;
/*
class  Metaterm extends Code {

	public static Code pred_freeze_2(Prolog mach) {
		mach.Areg[0].Deref().freeze(mach, mach.Areg[1].Deref());
		mach.Areg[0] = mach.Areg[2]; // install the continuation
		mach.Areg[1] = mach.Areg[2] = null;
		return Prolog.Call1;
	}

	public static Code pred_frozen_2(Prolog mach) {
		if (!mach.Areg[0].Deref().frozenGoals().Unify(mach, mach.Areg[1].Deref()))
			return Prolog.Fail0;
		mach.Areg[0] = mach.Areg[2]; // install the continuation
		mach.Areg[1] = mach.Areg[2] = null;
		return Prolog.Call1;
	}

	public static Code pred_attvar_1(Prolog mach) {
		Term arg1 = mach.Areg[0].Deref();
		if (!(arg1.isAttvar()))
			return Prolog.Fail0;
		mach.Areg[0] = mach.Areg[1]; // install the continuation
		mach.Areg[1] = null;
		return Prolog.Call1;
	}

	public static Code pred_put_attr_3(Prolog mach) {
		mach.Areg[0].Deref().putAttrValue(mach, mach.Areg[1].Deref(), mach.Areg[2].Deref());
		mach.Areg[0] = mach.Areg[3]; // install the continuation
		mach.Areg[1] = mach.Areg[2] = mach.Areg[3] = null;
		return Prolog.Call1;
	}

	public static Code pred_get_attr_3(Prolog mach) {
		Term t = mach.Areg[0].Deref().findOrAttrValue(mach, false, mach.Areg[2].Deref());
		if (!(t.Unify(mach.Areg[0].Deref())))
			return Prolog.Fail0;
		mach.Areg[0] = mach.Areg[3]; // install the continuation
		mach.Areg[1] = mach.Areg[2] = mach.Areg[3] = null;
		return Prolog.Call1;
	}

	public static Code pred_get_attrs_2(Prolog mach) {
		if (mach.Areg[1].Deref().Unify(mach.Areg[0].Deref()))
			return Prolog.Fail0;
		mach.Areg[0] = mach.Areg[2]; // install the continuation
		mach.Areg[1] = mach.Areg[2] = null;
		return Prolog.Call1;
	}

	public static Code pred_put_attrs_2(Prolog mach) {
		mach.Areg[0].Deref().setAttrs(mach, mach.Areg[1].Deref());
		mach.Areg[0] = mach.Areg[2]; // install the continuation
		mach.Areg[1] = mach.Areg[2] = null;
		return Prolog.Call1;
	}

	public static Code pred_undo_1(Prolog mach) {
		mach.Areg[0].Deref();
		mach.Areg[0] = mach.Areg[2]; // install the continuation
		mach.Areg[1] = mach.Areg[2] = null;
		return Prolog.Call1;
	}
}*/