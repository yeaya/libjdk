#include <sun/lwawt/macosx/CPrinterJob$1.h>
#include <java/awt/SecondaryLoop.h>
#include <sun/lwawt/macosx/CPrinterJob.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CPrinterJob = ::sun::lwawt::macosx::CPrinterJob;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CPrinterJob$1::init$($CPrinterJob* this$0) {
	$set(this, this$0, this$0);
}

void CPrinterJob$1::run() {
	$synchronized(this) {
		$CPrinterJob::access$002(this->this$0, false);
	}
	if (this->this$0->printingLoop != nullptr) {
		$nc(this->this$0->printingLoop)->exit();
	}
}

CPrinterJob$1::CPrinterJob$1() {
}

$Class* CPrinterJob$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/lwawt/macosx/CPrinterJob;", nullptr, $FINAL | $SYNTHETIC, $field(CPrinterJob$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/macosx/CPrinterJob;)V", nullptr, 0, $method(CPrinterJob$1, init$, void, $CPrinterJob*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(CPrinterJob$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CPrinterJob",
		"completePrintLoop",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CPrinterJob$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CPrinterJob$1",
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
		"sun.lwawt.macosx.CPrinterJob"
	};
	$loadClass(CPrinterJob$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CPrinterJob$1);
	});
	return class$;
}

$Class* CPrinterJob$1::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun