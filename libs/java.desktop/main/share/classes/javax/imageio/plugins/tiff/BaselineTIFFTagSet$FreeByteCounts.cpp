#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$FreeByteCounts.h>
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

void BaselineTIFFTagSet$FreeByteCounts::init$() {
	$TIFFTag::init$("FreeByteCounts"_s, 289, $sl(1, $TIFFTag::TIFF_LONG));
}

BaselineTIFFTagSet$FreeByteCounts::BaselineTIFFTagSet$FreeByteCounts() {
}

$Class* BaselineTIFFTagSet$FreeByteCounts::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$FreeByteCounts, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$FreeByteCounts", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "FreeByteCounts", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$FreeByteCounts",
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
	$loadClass(BaselineTIFFTagSet$FreeByteCounts, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$FreeByteCounts);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$FreeByteCounts::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax