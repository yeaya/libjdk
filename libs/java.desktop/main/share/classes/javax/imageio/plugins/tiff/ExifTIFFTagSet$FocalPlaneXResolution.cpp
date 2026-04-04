#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$FocalPlaneXResolution.h>
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

void ExifTIFFTagSet$FocalPlaneXResolution::init$() {
	$TIFFTag::init$("FocalPlaneXResolution"_s, 0x0000a20e, $sl(1, $TIFFTag::TIFF_RATIONAL), 1);
}

ExifTIFFTagSet$FocalPlaneXResolution::ExifTIFFTagSet$FocalPlaneXResolution() {
}

$Class* ExifTIFFTagSet$FocalPlaneXResolution::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$FocalPlaneXResolution, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$FocalPlaneXResolution", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "FocalPlaneXResolution", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$FocalPlaneXResolution",
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
	$loadClass(ExifTIFFTagSet$FocalPlaneXResolution, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$FocalPlaneXResolution);
	});
	return class$;
}

$Class* ExifTIFFTagSet$FocalPlaneXResolution::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax