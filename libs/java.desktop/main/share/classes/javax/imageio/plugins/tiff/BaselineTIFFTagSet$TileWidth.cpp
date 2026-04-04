#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$TileWidth.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_LONG
#undef TIFF_SHORT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

void BaselineTIFFTagSet$TileWidth::init$() {
	$TIFFTag::init$("TileWidth"_s, 322, ($sl(1, $TIFFTag::TIFF_SHORT)) | ($sl(1, $TIFFTag::TIFF_LONG)), 1);
}

BaselineTIFFTagSet$TileWidth::BaselineTIFFTagSet$TileWidth() {
}

$Class* BaselineTIFFTagSet$TileWidth::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$TileWidth, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$TileWidth", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "TileWidth", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$TileWidth",
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
	$loadClass(BaselineTIFFTagSet$TileWidth, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$TileWidth);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$TileWidth::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax