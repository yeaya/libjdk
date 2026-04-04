#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$WhiteBalance.h>
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

void ExifTIFFTagSet$WhiteBalance::init$() {
	$TIFFTag::init$("WhiteBalance"_s, 0x0000a403, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(0, "Auto white balance"_s);
	addValueName(1, "Manual white balance"_s);
}

ExifTIFFTagSet$WhiteBalance::ExifTIFFTagSet$WhiteBalance() {
}

$Class* ExifTIFFTagSet$WhiteBalance::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$WhiteBalance, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$WhiteBalance", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "WhiteBalance", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$WhiteBalance",
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
	$loadClass(ExifTIFFTagSet$WhiteBalance, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$WhiteBalance);
	});
	return class$;
}

$Class* ExifTIFFTagSet$WhiteBalance::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax