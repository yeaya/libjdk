#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$DateTimeOriginal.h>
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

void ExifTIFFTagSet$DateTimeOriginal::init$() {
	$TIFFTag::init$("DateTimeOriginal"_s, 0x00009003, $sl(1, $TIFFTag::TIFF_ASCII), 20);
}

ExifTIFFTagSet$DateTimeOriginal::ExifTIFFTagSet$DateTimeOriginal() {
}

$Class* ExifTIFFTagSet$DateTimeOriginal::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$DateTimeOriginal, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$DateTimeOriginal", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "DateTimeOriginal", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$DateTimeOriginal",
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
	$loadClass(ExifTIFFTagSet$DateTimeOriginal, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$DateTimeOriginal);
	});
	return class$;
}

$Class* ExifTIFFTagSet$DateTimeOriginal::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax