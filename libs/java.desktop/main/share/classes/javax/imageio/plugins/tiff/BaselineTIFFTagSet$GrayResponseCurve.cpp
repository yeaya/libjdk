#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$GrayResponseCurve.h>
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

void BaselineTIFFTagSet$GrayResponseCurve::init$() {
	$TIFFTag::init$("GrayResponseCurve"_s, 291, $sl(1, $TIFFTag::TIFF_SHORT));
}

BaselineTIFFTagSet$GrayResponseCurve::BaselineTIFFTagSet$GrayResponseCurve() {
}

$Class* BaselineTIFFTagSet$GrayResponseCurve::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$GrayResponseCurve, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$GrayResponseCurve", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "GrayResponseCurve", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$GrayResponseCurve",
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
	$loadClass(BaselineTIFFTagSet$GrayResponseCurve, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$GrayResponseCurve);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$GrayResponseCurve::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax