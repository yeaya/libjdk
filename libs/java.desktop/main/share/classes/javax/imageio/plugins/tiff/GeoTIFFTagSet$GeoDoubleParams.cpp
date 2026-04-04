#include <javax/imageio/plugins/tiff/GeoTIFFTagSet$GeoDoubleParams.h>
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

void GeoTIFFTagSet$GeoDoubleParams::init$() {
	$TIFFTag::init$("GeoDoubleParamsTag"_s, 0x000087b0, $sl(1, $TIFFTag::TIFF_DOUBLE));
}

GeoTIFFTagSet$GeoDoubleParams::GeoTIFFTagSet$GeoDoubleParams() {
}

$Class* GeoTIFFTagSet$GeoDoubleParams::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GeoTIFFTagSet$GeoDoubleParams, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.GeoTIFFTagSet$GeoDoubleParams", "javax.imageio.plugins.tiff.GeoTIFFTagSet", "GeoDoubleParams", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.GeoTIFFTagSet$GeoDoubleParams",
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
	$loadClass(GeoTIFFTagSet$GeoDoubleParams, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GeoTIFFTagSet$GeoDoubleParams);
	});
	return class$;
}

$Class* GeoTIFFTagSet$GeoDoubleParams::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax