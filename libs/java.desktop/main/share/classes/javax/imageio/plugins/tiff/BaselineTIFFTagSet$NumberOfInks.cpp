#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$NumberOfInks.h>
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

void BaselineTIFFTagSet$NumberOfInks::init$() {
	$TIFFTag::init$("NumberOfInks"_s, 334, $sl(1, $TIFFTag::TIFF_SHORT), 1);
}

BaselineTIFFTagSet$NumberOfInks::BaselineTIFFTagSet$NumberOfInks() {
}

$Class* BaselineTIFFTagSet$NumberOfInks::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$NumberOfInks, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$NumberOfInks", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "NumberOfInks", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$NumberOfInks",
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
	$loadClass(BaselineTIFFTagSet$NumberOfInks, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$NumberOfInks);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$NumberOfInks::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax