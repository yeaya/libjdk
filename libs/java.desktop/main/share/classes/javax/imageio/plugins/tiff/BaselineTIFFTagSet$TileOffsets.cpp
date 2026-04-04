#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$TileOffsets.h>
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

void BaselineTIFFTagSet$TileOffsets::init$() {
	$TIFFTag::init$("TileOffsets"_s, 324, $sl(1, $TIFFTag::TIFF_LONG));
}

BaselineTIFFTagSet$TileOffsets::BaselineTIFFTagSet$TileOffsets() {
}

$Class* BaselineTIFFTagSet$TileOffsets::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$TileOffsets, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$TileOffsets", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "TileOffsets", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$TileOffsets",
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
	$loadClass(BaselineTIFFTagSet$TileOffsets, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$TileOffsets);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$TileOffsets::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax