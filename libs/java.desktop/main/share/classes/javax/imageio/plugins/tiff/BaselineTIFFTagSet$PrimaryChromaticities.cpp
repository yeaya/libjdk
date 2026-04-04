#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$PrimaryChromaticities.h>
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

void BaselineTIFFTagSet$PrimaryChromaticities::init$() {
	$TIFFTag::init$("PrimaryChromaticities"_s, 319, $sl(1, $TIFFTag::TIFF_RATIONAL), 6);
}

BaselineTIFFTagSet$PrimaryChromaticities::BaselineTIFFTagSet$PrimaryChromaticities() {
}

$Class* BaselineTIFFTagSet$PrimaryChromaticities::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$PrimaryChromaticities, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$PrimaryChromaticities", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "PrimaryChromaticities", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$PrimaryChromaticities",
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
	$loadClass(BaselineTIFFTagSet$PrimaryChromaticities, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$PrimaryChromaticities);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$PrimaryChromaticities::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax