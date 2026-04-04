#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$YCbCrCoefficients.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
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

void BaselineTIFFTagSet$YCbCrCoefficients::init$() {
	$TIFFTag::init$("YCbCrCoefficients"_s, 529, $sl(1, $TIFFTag::TIFF_RATIONAL), 3);
}

BaselineTIFFTagSet$YCbCrCoefficients::BaselineTIFFTagSet$YCbCrCoefficients() {
}

$Class* BaselineTIFFTagSet$YCbCrCoefficients::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$YCbCrCoefficients, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$YCbCrCoefficients", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "YCbCrCoefficients", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$YCbCrCoefficients",
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
	$loadClass(BaselineTIFFTagSet$YCbCrCoefficients, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$YCbCrCoefficients);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$YCbCrCoefficients::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax