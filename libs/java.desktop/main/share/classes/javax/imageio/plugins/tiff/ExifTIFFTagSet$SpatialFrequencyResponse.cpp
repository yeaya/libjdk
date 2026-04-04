#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$SpatialFrequencyResponse.h>
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

void ExifTIFFTagSet$SpatialFrequencyResponse::init$() {
	$TIFFTag::init$("SpatialFrequencyResponse"_s, 0x0000a20c, $sl(1, $TIFFTag::TIFF_UNDEFINED));
}

ExifTIFFTagSet$SpatialFrequencyResponse::ExifTIFFTagSet$SpatialFrequencyResponse() {
}

$Class* ExifTIFFTagSet$SpatialFrequencyResponse::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$SpatialFrequencyResponse, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$SpatialFrequencyResponse", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "SpatialFrequencyResponse", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$SpatialFrequencyResponse",
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
	$loadClass(ExifTIFFTagSet$SpatialFrequencyResponse, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$SpatialFrequencyResponse);
	});
	return class$;
}

$Class* ExifTIFFTagSet$SpatialFrequencyResponse::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax