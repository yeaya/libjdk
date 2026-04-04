#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSDOP.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet.h>
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

void ExifGPSTagSet$GPSDOP::init$() {
	$TIFFTag::init$("GPSDOP"_s, 11, $sl(1, $TIFFTag::TIFF_RATIONAL));
}

ExifGPSTagSet$GPSDOP::ExifGPSTagSet$GPSDOP() {
}

$Class* ExifGPSTagSet$GPSDOP::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifGPSTagSet$GPSDOP, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDOP", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSDOP", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDOP",
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
		"javax.imageio.plugins.tiff.ExifGPSTagSet"
	};
	$loadClass(ExifGPSTagSet$GPSDOP, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifGPSTagSet$GPSDOP);
	});
	return class$;
}

$Class* ExifGPSTagSet$GPSDOP::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax