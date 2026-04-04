#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$YPosition.h>
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

void BaselineTIFFTagSet$YPosition::init$() {
	$TIFFTag::init$("YPosition"_s, 287, $sl(1, $TIFFTag::TIFF_RATIONAL), 1);
}

BaselineTIFFTagSet$YPosition::BaselineTIFFTagSet$YPosition() {
}

$Class* BaselineTIFFTagSet$YPosition::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$YPosition, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$YPosition", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "YPosition", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$YPosition",
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
	$loadClass(BaselineTIFFTagSet$YPosition, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$YPosition);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$YPosition::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax