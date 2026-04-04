#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$NewSubfileType.h>
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

void BaselineTIFFTagSet$NewSubfileType::init$() {
	$TIFFTag::init$("NewSubfileType"_s, 254, $sl(1, $TIFFTag::TIFF_LONG), 1);
	addValueName(0, "Default"_s);
	addValueName(1, "ReducedResolution"_s);
	addValueName(2, "SinglePage"_s);
	addValueName(2 | 1, "SinglePage+ReducedResolution"_s);
	addValueName(4, "Transparency"_s);
	addValueName(4 | 1, "Transparency+ReducedResolution"_s);
	addValueName(4 | 2, "Transparency+SinglePage"_s);
	addValueName((4 | 2) | 1, "Transparency+SinglePage+ReducedResolution"_s);
}

BaselineTIFFTagSet$NewSubfileType::BaselineTIFFTagSet$NewSubfileType() {
}

$Class* BaselineTIFFTagSet$NewSubfileType::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$NewSubfileType, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$NewSubfileType", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "NewSubfileType", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$NewSubfileType",
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
	$loadClass(BaselineTIFFTagSet$NewSubfileType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$NewSubfileType);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$NewSubfileType::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax