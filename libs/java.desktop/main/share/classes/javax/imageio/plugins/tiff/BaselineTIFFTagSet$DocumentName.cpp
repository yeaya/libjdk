#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$DocumentName.h>
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

void BaselineTIFFTagSet$DocumentName::init$() {
	$TIFFTag::init$("DocumentName"_s, 269, $sl(1, $TIFFTag::TIFF_ASCII));
}

BaselineTIFFTagSet$DocumentName::BaselineTIFFTagSet$DocumentName() {
}

$Class* BaselineTIFFTagSet$DocumentName::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$DocumentName, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$DocumentName", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "DocumentName", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$DocumentName",
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
	$loadClass(BaselineTIFFTagSet$DocumentName, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$DocumentName);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$DocumentName::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax