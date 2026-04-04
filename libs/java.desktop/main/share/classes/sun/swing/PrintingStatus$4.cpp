#include <sun/swing/PrintingStatus$4.h>
#include <sun/swing/PrintingStatus.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrintingStatus = ::sun::swing::PrintingStatus;

namespace sun {
	namespace swing {

void PrintingStatus$4::init$($PrintingStatus* this$0) {
	$set(this, this$0, this$0);
}

void PrintingStatus$4::run() {
	this->this$0->disposeOnEDT();
}

PrintingStatus$4::PrintingStatus$4() {
}

$Class* PrintingStatus$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/swing/PrintingStatus;", nullptr, $FINAL | $SYNTHETIC, $field(PrintingStatus$4, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/swing/PrintingStatus;)V", nullptr, 0, $method(PrintingStatus$4, init$, void, $PrintingStatus*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PrintingStatus$4, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.swing.PrintingStatus",
		"dispose",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.PrintingStatus$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.PrintingStatus$4",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.swing.PrintingStatus"
	};
	$loadClass(PrintingStatus$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrintingStatus$4);
	});
	return class$;
}

$Class* PrintingStatus$4::class$ = nullptr;

	} // swing
} // sun