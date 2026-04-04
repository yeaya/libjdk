#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$CustomRendered.h>
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

void ExifTIFFTagSet$CustomRendered::init$() {
	$TIFFTag::init$("CustomRendered"_s, 0x0000a401, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(0, "Normal process"_s);
	addValueName(1, "Custom process"_s);
}

ExifTIFFTagSet$CustomRendered::ExifTIFFTagSet$CustomRendered() {
}

$Class* ExifTIFFTagSet$CustomRendered::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$CustomRendered, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$CustomRendered", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "CustomRendered", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$CustomRendered",
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
	$loadClass(ExifTIFFTagSet$CustomRendered, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$CustomRendered);
	});
	return class$;
}

$Class* ExifTIFFTagSet$CustomRendered::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax