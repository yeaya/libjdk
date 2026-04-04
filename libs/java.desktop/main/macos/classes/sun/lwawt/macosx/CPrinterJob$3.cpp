#include <sun/lwawt/macosx/CPrinterJob$3.h>
#include <java/awt/print/PrinterAbortException.h>
#include <sun/lwawt/macosx/CPrinterJob.h>
#include <jcpp.h>

using $PrinterAbortException = ::java::awt::print::PrinterAbortException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CPrinterJob = ::sun::lwawt::macosx::CPrinterJob;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CPrinterJob$3::init$($CPrinterJob* this$0) {
	$set(this, this$0, this$0);
}

void CPrinterJob$3::run() {
	try {
		this->this$0->cancelDoc();
	} catch ($PrinterAbortException& pae) {
	}
}

CPrinterJob$3::CPrinterJob$3() {
}

$Class* CPrinterJob$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/lwawt/macosx/CPrinterJob;", nullptr, $FINAL | $SYNTHETIC, $field(CPrinterJob$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/macosx/CPrinterJob;)V", nullptr, 0, $method(CPrinterJob$3, init$, void, $CPrinterJob*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(CPrinterJob$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CPrinterJob",
		"cancelCheck",
		"()Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CPrinterJob$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CPrinterJob$3",
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
	$loadClass(CPrinterJob$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CPrinterJob$3);
	});
	return class$;
}

$Class* CPrinterJob$3::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun