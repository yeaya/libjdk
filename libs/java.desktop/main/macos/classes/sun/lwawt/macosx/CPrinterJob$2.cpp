#include <sun/lwawt/macosx/CPrinterJob$2.h>
#include <java/awt/EventQueue.h>
#include <java/awt/SecondaryLoop.h>
#include <java/awt/Toolkit.h>
#include <sun/lwawt/macosx/CPrinterJob.h>
#include <jcpp.h>

using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CPrinterJob = ::sun::lwawt::macosx::CPrinterJob;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CPrinterJob$2::init$($CPrinterJob* this$0) {
	$set(this, this$0, this$0);
}

$Object* CPrinterJob$2::run() {
	$useLocalObjectStack();
	return $$nc($$nc($Toolkit::getDefaultToolkit())->getSystemEventQueue())->createSecondaryLoop();
}

CPrinterJob$2::CPrinterJob$2() {
}

$Class* CPrinterJob$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/lwawt/macosx/CPrinterJob;", nullptr, $FINAL | $SYNTHETIC, $field(CPrinterJob$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/macosx/CPrinterJob;)V", nullptr, 0, $method(CPrinterJob$2, init$, void, $CPrinterJob*)},
		{"run", "()Ljava/awt/SecondaryLoop;", nullptr, $PUBLIC, $virtualMethod(CPrinterJob$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CPrinterJob",
		"print",
		"(Ljavax/print/attribute/PrintRequestAttributeSet;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CPrinterJob$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CPrinterJob$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/awt/SecondaryLoop;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CPrinterJob"
	};
	$loadClass(CPrinterJob$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CPrinterJob$2);
	});
	return class$;
}

$Class* CPrinterJob$2::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun