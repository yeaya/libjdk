#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$ColorSpace.h>
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

void ExifTIFFTagSet$ColorSpace::init$() {
	$TIFFTag::init$("ColorSpace"_s, 0x0000a001, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(1, "sRGB"_s);
	addValueName(0x0000ffff, "Uncalibrated"_s);
}

ExifTIFFTagSet$ColorSpace::ExifTIFFTagSet$ColorSpace() {
}

$Class* ExifTIFFTagSet$ColorSpace::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$ColorSpace, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$ColorSpace", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "ColorSpace", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$ColorSpace",
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
	$loadClass(ExifTIFFTagSet$ColorSpace, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$ColorSpace);
	});
	return class$;
}

$Class* ExifTIFFTagSet$ColorSpace::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax