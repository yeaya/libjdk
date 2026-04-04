#include <javax/imageio/plugins/tiff/GeoTIFFTagSet$ModelPixelScale.h>
#include <javax/imageio/plugins/tiff/GeoTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_DOUBLE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

void GeoTIFFTagSet$ModelPixelScale::init$() {
	$TIFFTag::init$("ModelPixelScaleTag"_s, 0x0000830e, $sl(1, $TIFFTag::TIFF_DOUBLE));
}

GeoTIFFTagSet$ModelPixelScale::GeoTIFFTagSet$ModelPixelScale() {
}

$Class* GeoTIFFTagSet$ModelPixelScale::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GeoTIFFTagSet$ModelPixelScale, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.GeoTIFFTagSet$ModelPixelScale", "javax.imageio.plugins.tiff.GeoTIFFTagSet", "ModelPixelScale", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.GeoTIFFTagSet$ModelPixelScale",
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
		"javax.imageio.plugins.tiff.GeoTIFFTagSet"
	};
	$loadClass(GeoTIFFTagSet$ModelPixelScale, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GeoTIFFTagSet$ModelPixelScale);
	});
	return class$;
}

$Class* GeoTIFFTagSet$ModelPixelScale::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax