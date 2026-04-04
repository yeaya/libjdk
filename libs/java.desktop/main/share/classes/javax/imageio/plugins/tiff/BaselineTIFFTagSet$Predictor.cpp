#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$Predictor.h>
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

void BaselineTIFFTagSet$Predictor::init$() {
	$TIFFTag::init$("Predictor"_s, 317, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(1, "None"_s);
	addValueName(2, "Horizontal Differencing"_s);
}

BaselineTIFFTagSet$Predictor::BaselineTIFFTagSet$Predictor() {
}

$Class* BaselineTIFFTagSet$Predictor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$Predictor, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$Predictor", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "Predictor", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$Predictor",
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
	$loadClass(BaselineTIFFTagSet$Predictor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$Predictor);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$Predictor::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax