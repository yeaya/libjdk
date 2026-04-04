#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$JPEGInterchangeFormatLength.h>
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

void BaselineTIFFTagSet$JPEGInterchangeFormatLength::init$() {
	$TIFFTag::init$("JPEGInterchangeFormatLength"_s, 514, $sl(1, $TIFFTag::TIFF_LONG), 1);
}

BaselineTIFFTagSet$JPEGInterchangeFormatLength::BaselineTIFFTagSet$JPEGInterchangeFormatLength() {
}

$Class* BaselineTIFFTagSet$JPEGInterchangeFormatLength::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$JPEGInterchangeFormatLength, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGInterchangeFormatLength", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "JPEGInterchangeFormatLength", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGInterchangeFormatLength",
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
	$loadClass(BaselineTIFFTagSet$JPEGInterchangeFormatLength, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$JPEGInterchangeFormatLength);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$JPEGInterchangeFormatLength::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax