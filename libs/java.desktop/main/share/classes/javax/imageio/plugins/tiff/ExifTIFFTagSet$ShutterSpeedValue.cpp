#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$ShutterSpeedValue.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_SRATIONAL

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

void ExifTIFFTagSet$ShutterSpeedValue::init$() {
	$TIFFTag::init$("ShutterSpeedValue"_s, 0x00009201, $sl(1, $TIFFTag::TIFF_SRATIONAL), 1);
}

ExifTIFFTagSet$ShutterSpeedValue::ExifTIFFTagSet$ShutterSpeedValue() {
}

$Class* ExifTIFFTagSet$ShutterSpeedValue::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$ShutterSpeedValue, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$ShutterSpeedValue", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "ShutterSpeedValue", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$ShutterSpeedValue",
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
	$loadClass(ExifTIFFTagSet$ShutterSpeedValue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$ShutterSpeedValue);
	});
	return class$;
}

$Class* ExifTIFFTagSet$ShutterSpeedValue::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax