#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$PageNumber.h>
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

void BaselineTIFFTagSet$PageNumber::init$() {
	$TIFFTag::init$("PageNumber"_s, 297, $sl(1, $TIFFTag::TIFF_SHORT));
}

BaselineTIFFTagSet$PageNumber::BaselineTIFFTagSet$PageNumber() {
}

$Class* BaselineTIFFTagSet$PageNumber::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$PageNumber, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$PageNumber", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "PageNumber", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$PageNumber",
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
	$loadClass(BaselineTIFFTagSet$PageNumber, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$PageNumber);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$PageNumber::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax