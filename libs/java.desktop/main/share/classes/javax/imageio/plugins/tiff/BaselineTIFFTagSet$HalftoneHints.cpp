#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$HalftoneHints.h>
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

void BaselineTIFFTagSet$HalftoneHints::init$() {
	$TIFFTag::init$("HalftoneHints"_s, 321, $sl(1, $TIFFTag::TIFF_SHORT), 2);
}

BaselineTIFFTagSet$HalftoneHints::BaselineTIFFTagSet$HalftoneHints() {
}

$Class* BaselineTIFFTagSet$HalftoneHints::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$HalftoneHints, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$HalftoneHints", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "HalftoneHints", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$HalftoneHints",
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
	$loadClass(BaselineTIFFTagSet$HalftoneHints, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$HalftoneHints);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$HalftoneHints::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax