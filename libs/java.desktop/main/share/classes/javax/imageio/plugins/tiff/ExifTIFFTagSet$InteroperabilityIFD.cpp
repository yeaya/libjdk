#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$InteroperabilityIFD.h>
#include <javax/imageio/plugins/tiff/ExifInteroperabilityTagSet.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExifInteroperabilityTagSet = ::javax::imageio::plugins::tiff::ExifInteroperabilityTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

void ExifTIFFTagSet$InteroperabilityIFD::init$() {
	$TIFFTag::init$("InteroperabilityIFD"_s, 0x0000a005, $($ExifInteroperabilityTagSet::getInstance()));
}

ExifTIFFTagSet$InteroperabilityIFD::ExifTIFFTagSet$InteroperabilityIFD() {
}

$Class* ExifTIFFTagSet$InteroperabilityIFD::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$InteroperabilityIFD, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$InteroperabilityIFD", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "InteroperabilityIFD", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$InteroperabilityIFD",
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
	$loadClass(ExifTIFFTagSet$InteroperabilityIFD, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$InteroperabilityIFD);
	});
	return class$;
}

$Class* ExifTIFFTagSet$InteroperabilityIFD::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax