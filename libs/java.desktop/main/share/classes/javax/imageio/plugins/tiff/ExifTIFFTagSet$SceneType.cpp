#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$SceneType.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet.h>
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

void ExifTIFFTagSet$SceneType::init$() {
	$TIFFTag::init$("SceneType"_s, 0x0000a301, $sl(1, $TIFFTag::TIFF_UNDEFINED), 1);
	addValueName(1, "A directly photographed image"_s);
}

ExifTIFFTagSet$SceneType::ExifTIFFTagSet$SceneType() {
}

$Class* ExifTIFFTagSet$SceneType::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$SceneType, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$SceneType", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "SceneType", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$SceneType",
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
		"javax.imageio.plugins.tiff.ExifTIFFTagSet"
	};
	$loadClass(ExifTIFFTagSet$SceneType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$SceneType);
	});
	return class$;
}

$Class* ExifTIFFTagSet$SceneType::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax