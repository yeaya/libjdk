#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$WhitePoint.h>
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

void BaselineTIFFTagSet$WhitePoint::init$() {
	$TIFFTag::init$("WhitePoint"_s, 318, $sl(1, $TIFFTag::TIFF_RATIONAL), 2);
}

BaselineTIFFTagSet$WhitePoint::BaselineTIFFTagSet$WhitePoint() {
}

$Class* BaselineTIFFTagSet$WhitePoint::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$WhitePoint, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$WhitePoint", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "WhitePoint", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$WhitePoint",
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
	$loadClass(BaselineTIFFTagSet$WhitePoint, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$WhitePoint);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$WhitePoint::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax