#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$Threshholding.h>
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

void BaselineTIFFTagSet$Threshholding::init$() {
	$TIFFTag::init$("Threshholding"_s, 263, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(1, "None"_s);
	addValueName(2, "OrderedDither"_s);
	addValueName(3, "RandomizedDither"_s);
}

BaselineTIFFTagSet$Threshholding::BaselineTIFFTagSet$Threshholding() {
}

$Class* BaselineTIFFTagSet$Threshholding::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$Threshholding, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$Threshholding", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "Threshholding", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$Threshholding",
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
	$loadClass(BaselineTIFFTagSet$Threshholding, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$Threshholding);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$Threshholding::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax