#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$InkNames.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_ASCII

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

void BaselineTIFFTagSet$InkNames::init$() {
	$TIFFTag::init$("InkNames"_s, 333, $sl(1, $TIFFTag::TIFF_ASCII));
}

BaselineTIFFTagSet$InkNames::BaselineTIFFTagSet$InkNames() {
}

$Class* BaselineTIFFTagSet$InkNames::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$InkNames, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$InkNames", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "InkNames", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$InkNames",
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
	$loadClass(BaselineTIFFTagSet$InkNames, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$InkNames);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$InkNames::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax