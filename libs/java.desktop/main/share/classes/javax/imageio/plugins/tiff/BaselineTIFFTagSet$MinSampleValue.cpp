#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$MinSampleValue.h>
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

void BaselineTIFFTagSet$MinSampleValue::init$() {
	$TIFFTag::init$("MinSampleValue"_s, 280, $sl(1, $TIFFTag::TIFF_SHORT));
}

BaselineTIFFTagSet$MinSampleValue::BaselineTIFFTagSet$MinSampleValue() {
}

$Class* BaselineTIFFTagSet$MinSampleValue::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$MinSampleValue, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$MinSampleValue", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "MinSampleValue", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$MinSampleValue",
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
	$loadClass(BaselineTIFFTagSet$MinSampleValue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$MinSampleValue);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$MinSampleValue::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax