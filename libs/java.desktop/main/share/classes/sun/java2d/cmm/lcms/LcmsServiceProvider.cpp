#include <sun/java2d/cmm/lcms/LcmsServiceProvider.h>
#include <sun/java2d/cmm/CMMServiceProvider.h>
#include <sun/java2d/cmm/PCMM.h>
#include <sun/java2d/cmm/lcms/LCMS.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CMMServiceProvider = ::sun::java2d::cmm::CMMServiceProvider;
using $PCMM = ::sun::java2d::cmm::PCMM;
using $LCMS = ::sun::java2d::cmm::lcms::LCMS;

namespace sun {
	namespace java2d {
		namespace cmm {
			namespace lcms {

void LcmsServiceProvider::init$() {
	$CMMServiceProvider::init$();
}

$PCMM* LcmsServiceProvider::getModule() {
	return $LCMS::getModule();
}

LcmsServiceProvider::LcmsServiceProvider() {
}

$Class* LcmsServiceProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LcmsServiceProvider, init$, void)},
		{"getModule", "()Lsun/java2d/cmm/PCMM;", nullptr, $PROTECTED, $virtualMethod(LcmsServiceProvider, getModule, $PCMM*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.java2d.cmm.lcms.LcmsServiceProvider",
		"sun.java2d.cmm.CMMServiceProvider",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LcmsServiceProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LcmsServiceProvider);
	});
	return class$;
}

$Class* LcmsServiceProvider::class$ = nullptr;

			} // lcms
		} // cmm
	} // java2d
} // sun