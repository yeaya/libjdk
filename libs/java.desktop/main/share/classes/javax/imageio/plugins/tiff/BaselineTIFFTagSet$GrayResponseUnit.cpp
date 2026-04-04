#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$GrayResponseUnit.h>
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

void BaselineTIFFTagSet$GrayResponseUnit::init$() {
	$TIFFTag::init$("GrayResponseUnit"_s, 290, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(1, "Tenths"_s);
	addValueName(2, "Hundredths"_s);
	addValueName(3, "Thousandths"_s);
	addValueName(4, "Ten-Thousandths"_s);
	addValueName(5, "Hundred-Thousandths"_s);
}

BaselineTIFFTagSet$GrayResponseUnit::BaselineTIFFTagSet$GrayResponseUnit() {
}

$Class* BaselineTIFFTagSet$GrayResponseUnit::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$GrayResponseUnit, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$GrayResponseUnit", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "GrayResponseUnit", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$GrayResponseUnit",
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
	$loadClass(BaselineTIFFTagSet$GrayResponseUnit, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$GrayResponseUnit);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$GrayResponseUnit::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax