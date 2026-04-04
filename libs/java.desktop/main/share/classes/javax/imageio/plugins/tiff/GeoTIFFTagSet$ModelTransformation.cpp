#include <javax/imageio/plugins/tiff/GeoTIFFTagSet$ModelTransformation.h>
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

void GeoTIFFTagSet$ModelTransformation::init$() {
	$TIFFTag::init$("ModelTransformationTag"_s, 0x000085d8, $sl(1, $TIFFTag::TIFF_DOUBLE));
}

GeoTIFFTagSet$ModelTransformation::GeoTIFFTagSet$ModelTransformation() {
}

$Class* GeoTIFFTagSet$ModelTransformation::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GeoTIFFTagSet$ModelTransformation, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.GeoTIFFTagSet$ModelTransformation", "javax.imageio.plugins.tiff.GeoTIFFTagSet", "ModelTransformation", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.GeoTIFFTagSet$ModelTransformation",
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
	$loadClass(GeoTIFFTagSet$ModelTransformation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GeoTIFFTagSet$ModelTransformation);
	});
	return class$;
}

$Class* GeoTIFFTagSet$ModelTransformation::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax