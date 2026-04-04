#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$T4Options.h>
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

void BaselineTIFFTagSet$T4Options::init$() {
	$TIFFTag::init$("T4Options"_s, 292, $sl(1, $TIFFTag::TIFF_LONG), 1);
	addValueName(0, "Default 1DCoding"_s);
	addValueName(1, "2DCoding"_s);
	addValueName(2, "Uncompressed"_s);
	addValueName(1 | 2, "2DCoding+Uncompressed"_s);
	addValueName(4, "EOLByteAligned"_s);
	addValueName(1 | 4, "2DCoding+EOLByteAligned"_s);
	addValueName(2 | 4, "Uncompressed+EOLByteAligned"_s);
	addValueName((1 | 2) | 4, "2DCoding+Uncompressed+EOLByteAligned"_s);
}

BaselineTIFFTagSet$T4Options::BaselineTIFFTagSet$T4Options() {
}

$Class* BaselineTIFFTagSet$T4Options::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$T4Options, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$T4Options", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "T4Options", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$T4Options",
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
	$loadClass(BaselineTIFFTagSet$T4Options, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$T4Options);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$T4Options::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax