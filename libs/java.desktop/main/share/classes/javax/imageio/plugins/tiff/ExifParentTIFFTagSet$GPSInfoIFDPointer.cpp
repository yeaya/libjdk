#include <javax/imageio/plugins/tiff/ExifParentTIFFTagSet$GPSInfoIFDPointer.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet.h>
#include <javax/imageio/plugins/tiff/ExifParentTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExifGPSTagSet = ::javax::imageio::plugins::tiff::ExifGPSTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

void ExifParentTIFFTagSet$GPSInfoIFDPointer::init$() {
	$TIFFTag::init$("GPSInfoIFDPointer"_s, 0x00008825, $($ExifGPSTagSet::getInstance()));
}

ExifParentTIFFTagSet$GPSInfoIFDPointer::ExifParentTIFFTagSet$GPSInfoIFDPointer() {
}

$Class* ExifParentTIFFTagSet$GPSInfoIFDPointer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifParentTIFFTagSet$GPSInfoIFDPointer, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifParentTIFFTagSet$GPSInfoIFDPointer", "javax.imageio.plugins.tiff.ExifParentTIFFTagSet", "GPSInfoIFDPointer", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifParentTIFFTagSet$GPSInfoIFDPointer",
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
		"javax.imageio.plugins.tiff.ExifParentTIFFTagSet"
	};
	$loadClass(ExifParentTIFFTagSet$GPSInfoIFDPointer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifParentTIFFTagSet$GPSInfoIFDPointer);
	});
	return class$;
}

$Class* ExifParentTIFFTagSet$GPSInfoIFDPointer::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax