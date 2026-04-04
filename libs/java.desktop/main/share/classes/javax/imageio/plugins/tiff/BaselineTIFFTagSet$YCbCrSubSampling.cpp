#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$YCbCrSubSampling.h>
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

void BaselineTIFFTagSet$YCbCrSubSampling::init$() {
	$TIFFTag::init$("YCbCrSubSampling"_s, 530, $sl(1, $TIFFTag::TIFF_SHORT), 2);
}

BaselineTIFFTagSet$YCbCrSubSampling::BaselineTIFFTagSet$YCbCrSubSampling() {
}

$Class* BaselineTIFFTagSet$YCbCrSubSampling::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$YCbCrSubSampling, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$YCbCrSubSampling", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "YCbCrSubSampling", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$YCbCrSubSampling",
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
	$loadClass(BaselineTIFFTagSet$YCbCrSubSampling, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$YCbCrSubSampling);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$YCbCrSubSampling::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax