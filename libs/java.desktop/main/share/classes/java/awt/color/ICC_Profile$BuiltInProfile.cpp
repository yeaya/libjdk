#include <java/awt/color/ICC_Profile$BuiltInProfile.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/color/ICC_Profile.h>
#include <java/awt/color/ICC_ProfileGray.h>
#include <java/awt/color/ICC_ProfileRGB.h>
#include <sun/java2d/cmm/ProfileDeferralInfo.h>
#include <jcpp.h>

#undef GRAY
#undef LRGB
#undef PYCC
#undef SRGB
#undef TYPE_3CLR
#undef TYPE_GRAY
#undef TYPE_RGB
#undef TYPE_XYZ
#undef XYZ

using $ColorSpace = ::java::awt::color::ColorSpace;
using $ICC_Profile = ::java::awt::color::ICC_Profile;
using $ICC_ProfileGray = ::java::awt::color::ICC_ProfileGray;
using $ICC_ProfileRGB = ::java::awt::color::ICC_ProfileRGB;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $ProfileDeferralInfo = ::sun::java2d::cmm::ProfileDeferralInfo;

namespace java {
	namespace awt {
		namespace color {

$ICC_Profile* ICC_Profile$BuiltInProfile::SRGB = nullptr;
$ICC_Profile* ICC_Profile$BuiltInProfile::LRGB = nullptr;
$ICC_Profile* ICC_Profile$BuiltInProfile::XYZ = nullptr;
$ICC_Profile* ICC_Profile$BuiltInProfile::PYCC = nullptr;
$ICC_Profile* ICC_Profile$BuiltInProfile::GRAY = nullptr;

void ICC_Profile$BuiltInProfile::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(ICC_Profile$BuiltInProfile::SRGB, $new($ICC_ProfileRGB, $$new($ProfileDeferralInfo, "sRGB.pf"_s, $ColorSpace::TYPE_RGB, 3, 1)));
	$assignStatic(ICC_Profile$BuiltInProfile::LRGB, $new($ICC_ProfileRGB, $$new($ProfileDeferralInfo, "LINEAR_RGB.pf"_s, $ColorSpace::TYPE_RGB, 3, 1)));
	$assignStatic(ICC_Profile$BuiltInProfile::XYZ, $new($ICC_Profile, $$new($ProfileDeferralInfo, "CIEXYZ.pf"_s, $ColorSpace::TYPE_XYZ, 3, 5)));
	$assignStatic(ICC_Profile$BuiltInProfile::PYCC, $new($ICC_Profile, $$new($ProfileDeferralInfo, "PYCC.pf"_s, $ColorSpace::TYPE_3CLR, 3, 4)));
	$assignStatic(ICC_Profile$BuiltInProfile::GRAY, $new($ICC_ProfileGray, $$new($ProfileDeferralInfo, "GRAY.pf"_s, $ColorSpace::TYPE_GRAY, 1, 1)));
}

$Class* ICC_Profile$BuiltInProfile::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SRGB", "Ljava/awt/color/ICC_Profile;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ICC_Profile$BuiltInProfile, SRGB)},
		{"LRGB", "Ljava/awt/color/ICC_Profile;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ICC_Profile$BuiltInProfile, LRGB)},
		{"XYZ", "Ljava/awt/color/ICC_Profile;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ICC_Profile$BuiltInProfile, XYZ)},
		{"PYCC", "Ljava/awt/color/ICC_Profile;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ICC_Profile$BuiltInProfile, PYCC)},
		{"GRAY", "Ljava/awt/color/ICC_Profile;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ICC_Profile$BuiltInProfile, GRAY)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.color.ICC_Profile$BuiltInProfile", "java.awt.color.ICC_Profile", "BuiltInProfile", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"java.awt.color.ICC_Profile$BuiltInProfile",
		nullptr,
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.color.ICC_Profile"
	};
	$loadClass(ICC_Profile$BuiltInProfile, name, initialize, &classInfo$$, ICC_Profile$BuiltInProfile::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ICC_Profile$BuiltInProfile);
	});
	return class$;
}

$Class* ICC_Profile$BuiltInProfile::class$ = nullptr;

		} // color
	} // awt
} // java