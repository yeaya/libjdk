#include <sun/java2d/cmm/lcms/LCMS$1.h>
#include <sun/java2d/cmm/lcms/LCMS.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace cmm {
			namespace lcms {

void LCMS$1::init$() {
}

$Object* LCMS$1::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("awt"_s);
	$System::loadLibrary("lcms"_s);
	return nullptr;
}

LCMS$1::LCMS$1() {
}

$Class* LCMS$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(LCMS$1, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(LCMS$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.java2d.cmm.lcms.LCMS",
		"getModule",
		"()Lsun/java2d/cmm/PCMM;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.cmm.lcms.LCMS$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.cmm.lcms.LCMS$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.cmm.lcms.LCMS"
	};
	$loadClass(LCMS$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LCMS$1);
	});
	return class$;
}

$Class* LCMS$1::class$ = nullptr;

			} // lcms
		} // cmm
	} // java2d
} // sun