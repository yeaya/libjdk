#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$CFAPattern.h>
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

void ExifTIFFTagSet$CFAPattern::init$() {
	$TIFFTag::init$("CFAPattern"_s, 0x0000a302, $sl(1, $TIFFTag::TIFF_UNDEFINED));
}

ExifTIFFTagSet$CFAPattern::ExifTIFFTagSet$CFAPattern() {
}

$Class* ExifTIFFTagSet$CFAPattern::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$CFAPattern, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$CFAPattern", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "CFAPattern", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$CFAPattern",
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
	$loadClass(ExifTIFFTagSet$CFAPattern, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$CFAPattern);
	});
	return class$;
}

$Class* ExifTIFFTagSet$CFAPattern::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax