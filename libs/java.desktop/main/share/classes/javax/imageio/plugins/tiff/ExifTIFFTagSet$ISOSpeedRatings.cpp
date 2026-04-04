#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$ISOSpeedRatings.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_SHORT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

void ExifTIFFTagSet$ISOSpeedRatings::init$() {
	$TIFFTag::init$("ISOSpeedRatings"_s, 0x00008827, $sl(1, $TIFFTag::TIFF_SHORT));
}

ExifTIFFTagSet$ISOSpeedRatings::ExifTIFFTagSet$ISOSpeedRatings() {
}

$Class* ExifTIFFTagSet$ISOSpeedRatings::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$ISOSpeedRatings, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$ISOSpeedRatings", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "ISOSpeedRatings", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$ISOSpeedRatings",
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
	$loadClass(ExifTIFFTagSet$ISOSpeedRatings, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$ISOSpeedRatings);
	});
	return class$;
}

$Class* ExifTIFFTagSet$ISOSpeedRatings::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax