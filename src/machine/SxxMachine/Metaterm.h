#ifndef METATERM
#define METATERM

#include "Code.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Prolog; }

namespace SxxMachine {

	class Metaterm {

	public:
		class pred_freeze_2 : public Code {
		public:
			Operation Exec(Prolog* mach) override;
		};

	public:
		class pred_frozen_2 : public Code {
		public:
			Operation Exec(Prolog* mach) override;
		};

	public:
		class pred_attvar_1 : public Code {
		public:
			Operation Exec(Prolog* mach) override;
		};

	public:
		class pred_put_attr_3 : public Code {
		public:
			Operation Exec(Prolog* mach) override;
		};

	public:
		class pred_get_attr_3 : public Code {
		public:
			Operation Exec(Prolog* mach) override;
		};

	public:
		class pred_get_attrs_2 : public Code {
		public:
			Operation Exec(Prolog* mach) override;
		};

	public:
		class pred_put_attrs_2 : public Code {
		public:
			Operation Exec(Prolog* mach) override;
		};

	public:
		class pred_undo_1 : public Code {
		public:
			Operation Exec(Prolog* mach) override;
		};

	};
}


#endif	//#ifndef METATERM
