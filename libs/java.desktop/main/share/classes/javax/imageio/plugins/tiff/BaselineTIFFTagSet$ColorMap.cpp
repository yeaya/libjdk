#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$ColorMap.h>
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

void BaselineTIFFTagSet$ColorMap::init$() {
	$TIFFTag::init$("ColorMap"_s, 320, $sl(1, $TIFFTag::TIFF_SHORT));
}

BaselineTIFFTagSet$ColorMap::BaselineTIFFTagSet$ColorMap() {
}

$Class* BaselineTIFFTagSet$ColorMap::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$ColorMap, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$ColorMap", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "ColorMap", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$ColorMap",
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
	$loadClass(BaselineTIFFTagSet$ColorMap, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$ColorMap);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$ColorMap::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax