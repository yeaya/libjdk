#include <sun/java2d/cmm/lcms/LCMSImageLayout$ImageLayoutException.h>
#include <sun/java2d/cmm/lcms/LCMSImageLayout.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace cmm {
			namespace lcms {

void LCMSImageLayout$ImageLayoutException::init$($String* message) {
	$Exception::init$(message);
}

LCMSImageLayout$ImageLayoutException::LCMSImageLayout$ImageLayoutException() {
}

LCMSImageLayout$ImageLayoutException::LCMSImageLayout$ImageLayoutException(const LCMSImageLayout$ImageLayoutException& e) : $Exception(e) {
}

void LCMSImageLayout$ImageLayoutException::throw$() {
	throw *this;
}

$Class* LCMSImageLayout$ImageLayoutException::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(LCMSImageLayout$ImageLayoutException, init$, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.cmm.lcms.LCMSImageLayout$ImageLayoutException", "sun.java2d.cmm.lcms.LCMSImageLayout", "ImageLayoutException", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.cmm.lcms.LCMSImageLayout$ImageLayoutException",
		"java.lang.Exception",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.cmm.lcms.LCMSImageLayout"
	};
	$loadClass(LCMSImageLayout$ImageLayoutException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LCMSImageLayout$ImageLayoutException);
	});
	return class$;
}

$Class* LCMSImageLayout$ImageLayoutException::class$ = nullptr;

			} // lcms
		} // cmm
	} // java2d
} // sun