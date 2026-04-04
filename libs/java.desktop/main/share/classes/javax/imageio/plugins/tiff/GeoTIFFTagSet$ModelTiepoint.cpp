#include <javax/imageio/plugins/tiff/GeoTIFFTagSet$ModelTiepoint.h>
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

void GeoTIFFTagSet$ModelTiepoint::init$() {
	$TIFFTag::init$("ModelTiepointTag"_s, 0x00008482, $sl(1, $TIFFTag::TIFF_DOUBLE));
}

GeoTIFFTagSet$ModelTiepoint::GeoTIFFTagSet$ModelTiepoint() {
}

$Class* GeoTIFFTagSet$ModelTiepoint::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GeoTIFFTagSet$ModelTiepoint, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.GeoTIFFTagSet$ModelTiepoint", "javax.imageio.plugins.tiff.GeoTIFFTagSet", "ModelTiepoint", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.GeoTIFFTagSet$ModelTiepoint",
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
	$loadClass(GeoTIFFTagSet$ModelTiepoint, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GeoTIFFTagSet$ModelTiepoint);
	});
	return class$;
}

$Class* GeoTIFFTagSet$ModelTiepoint::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax