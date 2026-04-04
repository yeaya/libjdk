#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$ImageDescription.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_ASCII

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

void BaselineTIFFTagSet$ImageDescription::init$() {
	$TIFFTag::init$("ImageDescription"_s, 270, $sl(1, $TIFFTag::TIFF_ASCII));
}

BaselineTIFFTagSet$ImageDescription::BaselineTIFFTagSet$ImageDescription() {
}

$Class* BaselineTIFFTagSet$ImageDescription::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$ImageDescription, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$ImageDescription", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "ImageDescription", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$ImageDescription",
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
	$loadClass(BaselineTIFFTagSet$ImageDescription, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$ImageDescription);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$ImageDescription::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax