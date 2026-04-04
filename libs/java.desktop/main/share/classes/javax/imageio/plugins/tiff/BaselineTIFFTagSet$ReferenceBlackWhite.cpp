#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$ReferenceBlackWhite.h>
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

void BaselineTIFFTagSet$ReferenceBlackWhite::init$() {
	$TIFFTag::init$("ReferenceBlackWhite"_s, 532, $sl(1, $TIFFTag::TIFF_RATIONAL));
}

BaselineTIFFTagSet$ReferenceBlackWhite::BaselineTIFFTagSet$ReferenceBlackWhite() {
}

$Class* BaselineTIFFTagSet$ReferenceBlackWhite::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$ReferenceBlackWhite, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$ReferenceBlackWhite", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "ReferenceBlackWhite", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$ReferenceBlackWhite",
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
	$loadClass(BaselineTIFFTagSet$ReferenceBlackWhite, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$ReferenceBlackWhite);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$ReferenceBlackWhite::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax