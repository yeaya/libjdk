#include <sun/java2d/cmm/ProfileDeferralInfo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace cmm {

void ProfileDeferralInfo::init$($String* fn, int32_t type, int32_t ncomp, int32_t pclass) {
	$set(this, filename, fn);
	this->colorSpaceType = type;
	this->numComponents = ncomp;
	this->profileClass = pclass;
}

ProfileDeferralInfo::ProfileDeferralInfo() {
}

$Class* ProfileDeferralInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"colorSpaceType", "I", nullptr, $PUBLIC | $FINAL, $field(ProfileDeferralInfo, colorSpaceType)},
		{"numComponents", "I", nullptr, $PUBLIC | $FINAL, $field(ProfileDeferralInfo, numComponents)},
		{"profileClass", "I", nullptr, $PUBLIC | $FINAL, $field(ProfileDeferralInfo, profileClass)},
		{"filename", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(ProfileDeferralInfo, filename)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;III)V", nullptr, $PUBLIC, $method(ProfileDeferralInfo, init$, void, $String*, int32_t, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.java2d.cmm.ProfileDeferralInfo",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ProfileDeferralInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProfileDeferralInfo);
	});
	return class$;
}

$Class* ProfileDeferralInfo::class$ = nullptr;

		} // cmm
	} // java2d
} // sun