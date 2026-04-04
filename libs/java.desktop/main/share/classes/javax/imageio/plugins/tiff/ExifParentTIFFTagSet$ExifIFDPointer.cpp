#include <javax/imageio/plugins/tiff/ExifParentTIFFTagSet$ExifIFDPointer.h>
#include <javax/imageio/plugins/tiff/ExifParentTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExifTIFFTagSet = ::javax::imageio::plugins::tiff::ExifTIFFTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

void ExifParentTIFFTagSet$ExifIFDPointer::init$() {
	$TIFFTag::init$("ExifIFDPointer"_s, 0x00008769, $($ExifTIFFTagSet::getInstance()));
}

ExifParentTIFFTagSet$ExifIFDPointer::ExifParentTIFFTagSet$ExifIFDPointer() {
}

$Class* ExifParentTIFFTagSet$ExifIFDPointer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifParentTIFFTagSet$ExifIFDPointer, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifParentTIFFTagSet$ExifIFDPointer", "javax.imageio.plugins.tiff.ExifParentTIFFTagSet", "ExifIFDPointer", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifParentTIFFTagSet$ExifIFDPointer",
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
	$loadClass(ExifParentTIFFTagSet$ExifIFDPointer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifParentTIFFTagSet$ExifIFDPointer);
	});
	return class$;
}

$Class* ExifParentTIFFTagSet$ExifIFDPointer::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax