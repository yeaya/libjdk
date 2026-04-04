#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$PhotometricInterpretation.h>
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

void BaselineTIFFTagSet$PhotometricInterpretation::init$() {
	$TIFFTag::init$("PhotometricInterpretation"_s, 262, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(0, "WhiteIsZero"_s);
	addValueName(1, "BlackIsZero"_s);
	addValueName(2, "RGB"_s);
	addValueName(3, "Palette Color"_s);
	addValueName(4, "Transparency Mask"_s);
	addValueName(5, "CMYK"_s);
	addValueName(6, "YCbCr"_s);
	addValueName(8, "CIELAB"_s);
	addValueName(9, "ICCLAB"_s);
}

BaselineTIFFTagSet$PhotometricInterpretation::BaselineTIFFTagSet$PhotometricInterpretation() {
}

$Class* BaselineTIFFTagSet$PhotometricInterpretation::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$PhotometricInterpretation, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$PhotometricInterpretation", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "PhotometricInterpretation", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$PhotometricInterpretation",
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
	$loadClass(BaselineTIFFTagSet$PhotometricInterpretation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$PhotometricInterpretation);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$PhotometricInterpretation::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax