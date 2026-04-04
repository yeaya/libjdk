#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$SpectralSensitivity.h>
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

void ExifTIFFTagSet$SpectralSensitivity::init$() {
	$TIFFTag::init$("SpectralSensitivity"_s, 0x00008824, $sl(1, $TIFFTag::TIFF_ASCII));
}

ExifTIFFTagSet$SpectralSensitivity::ExifTIFFTagSet$SpectralSensitivity() {
}

$Class* ExifTIFFTagSet$SpectralSensitivity::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$SpectralSensitivity, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$SpectralSensitivity", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "SpectralSensitivity", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$SpectralSensitivity",
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
	$loadClass(ExifTIFFTagSet$SpectralSensitivity, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$SpectralSensitivity);
	});
	return class$;
}

$Class* ExifTIFFTagSet$SpectralSensitivity::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax