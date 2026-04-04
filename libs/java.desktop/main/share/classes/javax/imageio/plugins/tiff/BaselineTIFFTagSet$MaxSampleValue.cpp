#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$MaxSampleValue.h>
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

void BaselineTIFFTagSet$MaxSampleValue::init$() {
	$TIFFTag::init$("MaxSampleValue"_s, 281, $sl(1, $TIFFTag::TIFF_SHORT));
}

BaselineTIFFTagSet$MaxSampleValue::BaselineTIFFTagSet$MaxSampleValue() {
}

$Class* BaselineTIFFTagSet$MaxSampleValue::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$MaxSampleValue, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$MaxSampleValue", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "MaxSampleValue", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$MaxSampleValue",
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
	$loadClass(BaselineTIFFTagSet$MaxSampleValue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$MaxSampleValue);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$MaxSampleValue::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax