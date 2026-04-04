#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$ImageUniqueID.h>
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

void ExifTIFFTagSet$ImageUniqueID::init$() {
	$TIFFTag::init$("ImageUniqueID"_s, 0x0000a420, $sl(1, $TIFFTag::TIFF_ASCII), 33);
}

ExifTIFFTagSet$ImageUniqueID::ExifTIFFTagSet$ImageUniqueID() {
}

$Class* ExifTIFFTagSet$ImageUniqueID::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$ImageUniqueID, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$ImageUniqueID", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "ImageUniqueID", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$ImageUniqueID",
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
	$loadClass(ExifTIFFTagSet$ImageUniqueID, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$ImageUniqueID);
	});
	return class$;
}

$Class* ExifTIFFTagSet$ImageUniqueID::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax