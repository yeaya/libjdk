#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$FreeOffsets.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_LONG

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

void BaselineTIFFTagSet$FreeOffsets::init$() {
	$TIFFTag::init$("FreeOffsets"_s, 288, $sl(1, $TIFFTag::TIFF_LONG));
}

BaselineTIFFTagSet$FreeOffsets::BaselineTIFFTagSet$FreeOffsets() {
}

$Class* BaselineTIFFTagSet$FreeOffsets::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$FreeOffsets, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$FreeOffsets", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "FreeOffsets", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$FreeOffsets",
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
	$loadClass(BaselineTIFFTagSet$FreeOffsets, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$FreeOffsets);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$FreeOffsets::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax