#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$SamplesPerPixel.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
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

void BaselineTIFFTagSet$SamplesPerPixel::init$() {
	$TIFFTag::init$("SamplesPerPixel"_s, 277, $sl(1, $TIFFTag::TIFF_SHORT), 1);
}

BaselineTIFFTagSet$SamplesPerPixel::BaselineTIFFTagSet$SamplesPerPixel() {
}

$Class* BaselineTIFFTagSet$SamplesPerPixel::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$SamplesPerPixel, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$SamplesPerPixel", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "SamplesPerPixel", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$SamplesPerPixel",
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
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
	};
	$loadClass(BaselineTIFFTagSet$SamplesPerPixel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$SamplesPerPixel);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$SamplesPerPixel::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax