#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$SubSecTimeOriginal.h>
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

void ExifTIFFTagSet$SubSecTimeOriginal::init$() {
	$TIFFTag::init$("SubSecTimeOriginal"_s, 0x00009291, $sl(1, $TIFFTag::TIFF_ASCII));
}

ExifTIFFTagSet$SubSecTimeOriginal::ExifTIFFTagSet$SubSecTimeOriginal() {
}

$Class* ExifTIFFTagSet$SubSecTimeOriginal::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$SubSecTimeOriginal, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$SubSecTimeOriginal", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "SubSecTimeOriginal", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$SubSecTimeOriginal",
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
	$loadClass(ExifTIFFTagSet$SubSecTimeOriginal, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$SubSecTimeOriginal);
	});
	return class$;
}

$Class* ExifTIFFTagSet$SubSecTimeOriginal::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax