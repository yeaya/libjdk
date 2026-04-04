#include <sun/print/CUPSPrinter$1.h>
#include <sun/print/CUPSPrinter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace print {

void CUPSPrinter$1::init$() {
}

$Object* CUPSPrinter$1::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("awt"_s);
	return nullptr;
}

CUPSPrinter$1::CUPSPrinter$1() {
}

$Class* CUPSPrinter$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CUPSPrinter$1, init$, void)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(CUPSPrinter$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.print.CUPSPrinter",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.print.CUPSPrinter$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.print.CUPSPrinter$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.print.CUPSPrinter"
	};
	$loadClass(CUPSPrinter$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CUPSPrinter$1);
	});
	return class$;
}

$Class* CUPSPrinter$1::class$ = nullptr;

	} // print
} // sun