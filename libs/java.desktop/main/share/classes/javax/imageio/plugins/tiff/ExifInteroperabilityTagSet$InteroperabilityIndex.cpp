#include <javax/imageio/plugins/tiff/ExifInteroperabilityTagSet$InteroperabilityIndex.h>
#include <javax/imageio/plugins/tiff/ExifInteroperabilityTagSet.h>
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

void ExifInteroperabilityTagSet$InteroperabilityIndex::init$() {
	$TIFFTag::init$("InteroperabilityIndex"_s, 1, $sl(1, $TIFFTag::TIFF_ASCII));
}

ExifInteroperabilityTagSet$InteroperabilityIndex::ExifInteroperabilityTagSet$InteroperabilityIndex() {
}

$Class* ExifInteroperabilityTagSet$InteroperabilityIndex::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifInteroperabilityTagSet$InteroperabilityIndex, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifInteroperabilityTagSet$InteroperabilityIndex", "javax.imageio.plugins.tiff.ExifInteroperabilityTagSet", "InteroperabilityIndex", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifInteroperabilityTagSet$InteroperabilityIndex",
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
		"javax.imageio.plugins.tiff.ExifInteroperabilityTagSet"
	};
	$loadClass(ExifInteroperabilityTagSet$InteroperabilityIndex, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifInteroperabilityTagSet$InteroperabilityIndex);
	});
	return class$;
}

$Class* ExifInteroperabilityTagSet$InteroperabilityIndex::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax