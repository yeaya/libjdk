#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$JPEGInterchangeFormat.h>
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

void BaselineTIFFTagSet$JPEGInterchangeFormat::init$() {
	$TIFFTag::init$("JPEGInterchangeFormat"_s, 513, $sl(1, $TIFFTag::TIFF_LONG), 1);
}

BaselineTIFFTagSet$JPEGInterchangeFormat::BaselineTIFFTagSet$JPEGInterchangeFormat() {
}

$Class* BaselineTIFFTagSet$JPEGInterchangeFormat::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$JPEGInterchangeFormat, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGInterchangeFormat", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "JPEGInterchangeFormat", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGInterchangeFormat",
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
	$loadClass(BaselineTIFFTagSet$JPEGInterchangeFormat, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$JPEGInterchangeFormat);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$JPEGInterchangeFormat::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax