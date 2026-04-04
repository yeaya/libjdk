#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$CompressedBitsPerPixel.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_RATIONAL

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

void ExifTIFFTagSet$CompressedBitsPerPixel::init$() {
	$TIFFTag::init$("CompressedBitsPerPixel"_s, 0x00009102, $sl(1, $TIFFTag::TIFF_RATIONAL), 1);
}

ExifTIFFTagSet$CompressedBitsPerPixel::ExifTIFFTagSet$CompressedBitsPerPixel() {
}

$Class* ExifTIFFTagSet$CompressedBitsPerPixel::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$CompressedBitsPerPixel, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$CompressedBitsPerPixel", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "CompressedBitsPerPixel", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$CompressedBitsPerPixel",
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
	$loadClass(ExifTIFFTagSet$CompressedBitsPerPixel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$CompressedBitsPerPixel);
	});
	return class$;
}

$Class* ExifTIFFTagSet$CompressedBitsPerPixel::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax