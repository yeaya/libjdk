#include <java/awt/color/ICC_ProfileGray.h>
#include <java/awt/color/ICC_Profile.h>
#include <sun/java2d/cmm/Profile.h>
#include <sun/java2d/cmm/ProfileDeferralInfo.h>
#include <jcpp.h>

using $ICC_Profile = ::java::awt::color::ICC_Profile;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Profile = ::sun::java2d::cmm::Profile;
using $ProfileDeferralInfo = ::sun::java2d::cmm::ProfileDeferralInfo;

namespace java {
	namespace awt {
		namespace color {

void ICC_ProfileGray::init$($Profile* p) {
	$ICC_Profile::init$(p);
}

void ICC_ProfileGray::init$($ProfileDeferralInfo* pdi) {
	$ICC_Profile::init$(pdi);
}

$floats* ICC_ProfileGray::getMediaWhitePoint() {
	return $ICC_Profile::getMediaWhitePoint();
}

float ICC_ProfileGray::getGamma() {
	return getGamma($ICC_Profile::icSigGrayTRCTag);
}

$shorts* ICC_ProfileGray::getTRC() {
	return getTRC($ICC_Profile::icSigGrayTRCTag);
}

ICC_ProfileGray::ICC_ProfileGray() {
}

$Class* ICC_ProfileGray::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ICC_ProfileGray, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/cmm/Profile;)V", nullptr, 0, $method(ICC_ProfileGray, init$, void, $Profile*)},
		{"<init>", "(Lsun/java2d/cmm/ProfileDeferralInfo;)V", nullptr, 0, $method(ICC_ProfileGray, init$, void, $ProfileDeferralInfo*)},
		{"getGamma", "()F", nullptr, $PUBLIC, $virtualMethod(ICC_ProfileGray, getGamma, float)},
		{"getMediaWhitePoint", "()[F", nullptr, $PUBLIC, $virtualMethod(ICC_ProfileGray, getMediaWhitePoint, $floats*)},
		{"getTRC", "()[S", nullptr, $PUBLIC, $virtualMethod(ICC_ProfileGray, getTRC, $shorts*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.color.ICC_ProfileGray",
		"java.awt.color.ICC_Profile",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ICC_ProfileGray, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ICC_ProfileGray);
	});
	return class$;
}

$Class* ICC_ProfileGray::class$ = nullptr;

		} // color
	} // awt
} // java