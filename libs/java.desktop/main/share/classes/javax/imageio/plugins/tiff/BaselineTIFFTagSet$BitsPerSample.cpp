#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$BitsPerSample.h>
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

void BaselineTIFFTagSet$BitsPerSample::init$() {
	$TIFFTag::init$("BitsPerSample"_s, 258, $sl(1, $TIFFTag::TIFF_SHORT));
}

BaselineTIFFTagSet$BitsPerSample::BaselineTIFFTagSet$BitsPerSample() {
}

$Class* BaselineTIFFTagSet$BitsPerSample::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$BitsPerSample, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$BitsPerSample", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "BitsPerSample", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$BitsPerSample",
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
	$loadClass(BaselineTIFFTagSet$BitsPerSample, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$BitsPerSample);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$BitsPerSample::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax