#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$ICCProfile.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_UNDEFINED

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

void BaselineTIFFTagSet$ICCProfile::init$() {
	$TIFFTag::init$("ICC Profile"_s, 0x00008773, $sl(1, $TIFFTag::TIFF_UNDEFINED));
}

BaselineTIFFTagSet$ICCProfile::BaselineTIFFTagSet$ICCProfile() {
}

$Class* BaselineTIFFTagSet$ICCProfile::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$ICCProfile, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$ICCProfile", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "ICCProfile", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$ICCProfile",
		"javax.imageio.plugins.tiff.TIFFTag",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
	};
	$loadClass(BaselineTIFFTagSet$ICCProfile, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$ICCProfile);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$ICCProfile::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax