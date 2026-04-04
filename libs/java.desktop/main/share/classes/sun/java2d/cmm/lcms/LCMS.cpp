#include <sun/java2d/cmm/lcms/LCMS.h>
#include <java/awt/color/CMMException.h>
#include <java/awt/color/ICC_Profile.h>
#include <java/security/AccessController.h>
#include <sun/java2d/cmm/ColorTransform.h>
#include <sun/java2d/cmm/PCMM.h>
#include <sun/java2d/cmm/Profile.h>
#include <sun/java2d/cmm/lcms/LCMS$1.h>
#include <sun/java2d/cmm/lcms/LCMSImageLayout.h>
#include <sun/java2d/cmm/lcms/LCMSProfile.h>
#include <sun/java2d/cmm/lcms/LCMSTransform.h>
#include <jcpp.h>

#undef IL
#undef LCMS

using $ColorTransformArray = $Array<::sun::java2d::cmm::ColorTransform>;
using $LCMSProfileArray = $Array<::sun::java2d::cmm::lcms::LCMSProfile>;
using $CMMException = ::java::awt::color::CMMException;
using $ICC_Profile = ::java::awt::color::ICC_Profile;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $ColorTransform = ::sun::java2d::cmm::ColorTransform;
using $PCMM = ::sun::java2d::cmm::PCMM;
using $Profile = ::sun::java2d::cmm::Profile;
using $LCMS$1 = ::sun::java2d::cmm::lcms::LCMS$1;
using $LCMSImageLayout = ::sun::java2d::cmm::lcms::LCMSImageLayout;
using $LCMSProfile = ::sun::java2d::cmm::lcms::LCMSProfile;
using $LCMSTransform = ::sun::java2d::cmm::lcms::LCMSTransform;

namespace sun {
	namespace java2d {
		namespace cmm {
			namespace lcms {

LCMS* LCMS::theLcms = nullptr;

$Profile* LCMS::loadProfile($bytes* data) {
	$var($Object, disposerRef, $new($Object));
	int64_t ptr = loadProfileNative(data, disposerRef);
	if (ptr != 0) {
		return $new($LCMSProfile, ptr, disposerRef);
	}
	return nullptr;
}

$LCMSProfile* LCMS::getLcmsProfile($Profile* p) {
	$init(LCMS);
	if ($instanceOf($LCMSProfile, p)) {
		return $cast($LCMSProfile, p);
	}
	$throwNew($CMMException, $$str({"Invalid profile: "_s, p}));
}

void LCMS::setTagDataNative(int64_t ptr, int32_t tagSignature, $bytes* data) {
	$init(LCMS);
	$prepareNativeStatic(setTagDataNative, void, int64_t ptr, int32_t tagSignature, $bytes* data);
	$invokeNativeStatic(ptr, tagSignature, data);
	$finishNativeStatic();
}

$bytes* LCMS::getProfileDataNative(int64_t ptr) {
	$init(LCMS);
	$prepareNativeStatic(getProfileDataNative, $bytes*, int64_t ptr);
	$var($bytes, $ret, $invokeNativeStaticObject(ptr));
	$finishNativeStatic();
	return $ret;
}

$bytes* LCMS::getTagNative(int64_t profileID, int32_t signature) {
	$init(LCMS);
	$prepareNativeStatic(getTagNative, $bytes*, int64_t profileID, int32_t signature);
	$var($bytes, $ret, $invokeNativeStaticObject(profileID, signature));
	$finishNativeStatic();
	return $ret;
}

int64_t LCMS::loadProfileNative($bytes* data, Object$* ref) {
	$init(LCMS);
	$prepareNativeStatic(loadProfileNative, int64_t, $bytes* data, Object$* ref);
	int64_t $ret = $invokeNativeStatic(data, ref);
	$finishNativeStatic();
	return $ret;
}

$bytes* LCMS::getProfileData($Profile* p) {
	return $$nc(getLcmsProfile(p))->getProfileData();
}

$bytes* LCMS::getTagData($Profile* p, int32_t tagSignature) {
	return $$nc(getLcmsProfile(p))->getTag(tagSignature);
}

void LCMS::setTagData($Profile* p, int32_t tagSignature, $bytes* data) {
	$synchronized(this) {
		$$nc(getLcmsProfile(p))->setTag(tagSignature, data);
	}
}

$LCMSProfile* LCMS::getProfileID($ICC_Profile* profile) {
	$init(LCMS);
	$prepareNativeStatic(getProfileID, $LCMSProfile*, $ICC_Profile* profile);
	$var($LCMSProfile, $ret, $invokeNativeStaticObject(profile));
	$finishNativeStatic();
	return $ret;
}

int64_t LCMS::createTransform($LCMSProfileArray* profiles, int32_t renderType, int32_t inFormatter, bool isInIntPacked, int32_t outFormatter, bool isOutIntPacked, Object$* disposerRef) {
	$init(LCMS);
	$var($longs, ptrs, $new($longs, $nc(profiles)->length));
	for (int32_t i = 0; i < profiles->length; ++i) {
		if (profiles->get(i) == nullptr) {
			$throwNew($CMMException, "Unknown profile ID"_s);
		}
		ptrs->set(i, $nc(profiles->get(i))->getLcmsPtr());
	}
	return createNativeTransform(ptrs, renderType, inFormatter, isInIntPacked, outFormatter, isOutIntPacked, disposerRef);
}

int64_t LCMS::createNativeTransform($longs* profileIDs, int32_t renderType, int32_t inFormatter, bool isInIntPacked, int32_t outFormatter, bool isOutIntPacked, Object$* disposerRef) {
	$init(LCMS);
	$prepareNativeStatic(createNativeTransform, int64_t, $longs* profileIDs, int32_t renderType, int32_t inFormatter, bool isInIntPacked, int32_t outFormatter, bool isOutIntPacked, Object$* disposerRef);
	int64_t $ret = $invokeNativeStatic(profileIDs, renderType, inFormatter, isInIntPacked, outFormatter, isOutIntPacked, disposerRef);
	$finishNativeStatic();
	return $ret;
}

$ColorTransform* LCMS::createTransform($ICC_Profile* profile, int32_t renderType, int32_t transformType) {
	return $new($LCMSTransform, profile, renderType, renderType);
}

$ColorTransform* LCMS::createTransform($ColorTransformArray* transforms) {
	$synchronized(this) {
		return $new($LCMSTransform, transforms);
	}
}

void LCMS::colorConvert($LCMSTransform* trans, $LCMSImageLayout* src, $LCMSImageLayout* dest) {
	$init(LCMS);
	$prepareNativeStatic(colorConvert, void, $LCMSTransform* trans, $LCMSImageLayout* src, $LCMSImageLayout* dest);
	$invokeNativeStatic(trans, src, dest);
	$finishNativeStatic();
}

void LCMS::initLCMS($Class* Trans, $Class* IL, $Class* Pf) {
	$init(LCMS);
	$prepareNativeStatic(initLCMS, void, $Class* Trans, $Class* IL, $Class* Pf);
	$invokeNativeStatic(Trans, IL, Pf);
	$finishNativeStatic();
}

void LCMS::init$() {
}

$PCMM* LCMS::getModule() {
	$init(LCMS);
	$synchronized(class$) {
		$beforeCallerSensitive();
		if (LCMS::theLcms != nullptr) {
			return LCMS::theLcms;
		}
		$AccessController::doPrivileged($$new($LCMS$1));
		$load($LCMSTransform);
		$load($LCMSImageLayout);
		$load($ICC_Profile);
		initLCMS($LCMSTransform::class$, $LCMSImageLayout::class$, $ICC_Profile::class$);
		$assignStatic(LCMS::theLcms, $new(LCMS));
		return LCMS::theLcms;
	}
}

void LCMS::clinit$($Class* clazz) {
	$assignStatic(LCMS::theLcms, nullptr);
}

LCMS::LCMS() {
}

$Class* LCMS::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"theLcms", "Lsun/java2d/cmm/lcms/LCMS;", nullptr, $PRIVATE | $STATIC, $staticField(LCMS, theLcms)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(LCMS, init$, void)},
		{"colorConvert", "(Lsun/java2d/cmm/lcms/LCMSTransform;Lsun/java2d/cmm/lcms/LCMSImageLayout;Lsun/java2d/cmm/lcms/LCMSImageLayout;)V", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(LCMS, colorConvert, void, $LCMSTransform*, $LCMSImageLayout*, $LCMSImageLayout*)},
		{"createNativeTransform", "([JIIZIZLjava/lang/Object;)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(LCMS, createNativeTransform, int64_t, $longs*, int32_t, int32_t, bool, int32_t, bool, Object$*)},
		{"createTransform", "([Lsun/java2d/cmm/lcms/LCMSProfile;IIZIZLjava/lang/Object;)J", nullptr, $STATIC, $staticMethod(LCMS, createTransform, int64_t, $LCMSProfileArray*, int32_t, int32_t, bool, int32_t, bool, Object$*)},
		{"createTransform", "(Ljava/awt/color/ICC_Profile;II)Lsun/java2d/cmm/ColorTransform;", nullptr, $PUBLIC, $virtualMethod(LCMS, createTransform, $ColorTransform*, $ICC_Profile*, int32_t, int32_t)},
		{"createTransform", "([Lsun/java2d/cmm/ColorTransform;)Lsun/java2d/cmm/ColorTransform;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(LCMS, createTransform, $ColorTransform*, $ColorTransformArray*)},
		{"getLcmsProfile", "(Lsun/java2d/cmm/Profile;)Lsun/java2d/cmm/lcms/LCMSProfile;", nullptr, $PRIVATE | $STATIC, $staticMethod(LCMS, getLcmsProfile, $LCMSProfile*, $Profile*)},
		{"getModule", "()Lsun/java2d/cmm/PCMM;", nullptr, $STATIC | $SYNCHRONIZED, $staticMethod(LCMS, getModule, $PCMM*)},
		{"getProfileData", "(Lsun/java2d/cmm/Profile;)[B", nullptr, $PUBLIC, $virtualMethod(LCMS, getProfileData, $bytes*, $Profile*)},
		{"getProfileDataNative", "(J)[B", nullptr, $STATIC | $NATIVE, $staticMethod(LCMS, getProfileDataNative, $bytes*, int64_t)},
		{"getProfileID", "(Ljava/awt/color/ICC_Profile;)Lsun/java2d/cmm/lcms/LCMSProfile;", nullptr, $STATIC | $SYNCHRONIZED | $NATIVE, $staticMethod(LCMS, getProfileID, $LCMSProfile*, $ICC_Profile*)},
		{"getTagData", "(Lsun/java2d/cmm/Profile;I)[B", nullptr, $PUBLIC, $virtualMethod(LCMS, getTagData, $bytes*, $Profile*, int32_t)},
		{"getTagNative", "(JI)[B", nullptr, $STATIC | $NATIVE, $staticMethod(LCMS, getTagNative, $bytes*, int64_t, int32_t)},
		{"initLCMS", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;Ljava/lang/Class<*>;)V", $PUBLIC | $STATIC | $NATIVE, $staticMethod(LCMS, initLCMS, void, $Class*, $Class*, $Class*)},
		{"loadProfile", "([B)Lsun/java2d/cmm/Profile;", nullptr, $PUBLIC, $virtualMethod(LCMS, loadProfile, $Profile*, $bytes*)},
		{"loadProfileNative", "([BLjava/lang/Object;)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(LCMS, loadProfileNative, int64_t, $bytes*, Object$*)},
		{"setTagData", "(Lsun/java2d/cmm/Profile;I[B)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(LCMS, setTagData, void, $Profile*, int32_t, $bytes*)},
		{"setTagDataNative", "(JI[B)V", nullptr, $STATIC | $NATIVE, $staticMethod(LCMS, setTagDataNative, void, int64_t, int32_t, $bytes*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.cmm.lcms.LCMS$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.java2d.cmm.lcms.LCMS",
		"java.lang.Object",
		"sun.java2d.cmm.PCMM",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.java2d.cmm.lcms.LCMS$1"
	};
	$loadClass(LCMS, name, initialize, &classInfo$$, LCMS::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LCMS);
	});
	return class$;
}

$Class* LCMS::class$ = nullptr;

			} // lcms
		} // cmm
	} // java2d
} // sun