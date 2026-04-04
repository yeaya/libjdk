#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$FlashPixVersion.h>
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

void ExifTIFFTagSet$FlashPixVersion::init$() {
	$TIFFTag::init$("FlashPixVersion"_s, 0x0000a000, $sl(1, $TIFFTag::TIFF_UNDEFINED), 4);
}

ExifTIFFTagSet$FlashPixVersion::ExifTIFFTagSet$FlashPixVersion() {
}

$Class* ExifTIFFTagSet$FlashPixVersion::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$FlashPixVersion, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$FlashPixVersion", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "FlashPixVersion", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$FlashPixVersion",
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
	$loadClass(ExifTIFFTagSet$FlashPixVersion, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$FlashPixVersion);
	});
	return class$;
}

$Class* ExifTIFFTagSet$FlashPixVersion::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax