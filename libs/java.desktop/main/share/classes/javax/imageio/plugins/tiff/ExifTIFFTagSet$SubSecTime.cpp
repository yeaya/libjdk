#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$SubSecTime.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet.h>
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

void ExifTIFFTagSet$SubSecTime::init$() {
	$TIFFTag::init$("SubSecTime"_s, 0x00009290, $sl(1, $TIFFTag::TIFF_ASCII));
}

ExifTIFFTagSet$SubSecTime::ExifTIFFTagSet$SubSecTime() {
}

$Class* ExifTIFFTagSet$SubSecTime::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$SubSecTime, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$SubSecTime", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "SubSecTime", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$SubSecTime",
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
	$loadClass(ExifTIFFTagSet$SubSecTime, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$SubSecTime);
	});
	return class$;
}

$Class* ExifTIFFTagSet$SubSecTime::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax