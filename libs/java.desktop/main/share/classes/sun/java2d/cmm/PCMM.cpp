#include <sun/java2d/cmm/PCMM.h>

#include <java/awt/color/ICC_Profile.h>
#include <sun/java2d/cmm/ColorTransform.h>
#include <sun/java2d/cmm/Profile.h>
#include <jcpp.h>

#undef PCMM

using $ColorTransformArray = $Array<::sun::java2d::cmm::ColorTransform>;
using $ICC_Profile = ::java::awt::color::ICC_Profile;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ColorTransform = ::sun::java2d::cmm::ColorTransform;
using $Profile = ::sun::java2d::cmm::Profile;

namespace sun {
	namespace java2d {
		namespace cmm {

$MethodInfo _PCMM_MethodInfo_[] = {
	{"createTransform", "(Ljava/awt/color/ICC_Profile;II)Lsun/java2d/cmm/ColorTransform;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PCMM, createTransform, $ColorTransform*, $ICC_Profile*, int32_t, int32_t)},
	{"createTransform", "([Lsun/java2d/cmm/ColorTransform;)Lsun/java2d/cmm/ColorTransform;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PCMM, createTransform, $ColorTransform*, $ColorTransformArray*)},
	{"getProfileData", "(Lsun/java2d/cmm/Profile;)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PCMM, getProfileData, $bytes*, $Profile*)},
	{"getTagData", "(Lsun/java2d/cmm/Profile;I)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PCMM, getTagData, $bytes*, $Profile*, int32_t)},
	{"loadProfile", "([B)Lsun/java2d/cmm/Profile;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PCMM, loadProfile, $Profile*, $bytes*)},
	{"setTagData", "(Lsun/java2d/cmm/Profile;I[B)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PCMM, setTagData, void, $Profile*, int32_t, $bytes*)},
	{}
};

$ClassInfo _PCMM_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.java2d.cmm.PCMM",
	nullptr,
	nullptr,
	nullptr,
	_PCMM_MethodInfo_
};

$Object* allocate$PCMM($Class* clazz) {
	return $of($alloc(PCMM));
}

$Class* PCMM::load$($String* name, bool initialize) {
	$loadClass(PCMM, name, initialize, &_PCMM_ClassInfo_, allocate$PCMM);
	return class$;
}

$Class* PCMM::class$ = nullptr;

		} // cmm
	} // java2d
} // sun