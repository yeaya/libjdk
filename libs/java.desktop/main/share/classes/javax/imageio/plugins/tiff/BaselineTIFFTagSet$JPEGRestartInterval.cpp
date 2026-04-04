#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$JPEGRestartInterval.h>
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

void BaselineTIFFTagSet$JPEGRestartInterval::init$() {
	$TIFFTag::init$("JPEGRestartInterval"_s, 515, $sl(1, $TIFFTag::TIFF_SHORT), 1);
}

BaselineTIFFTagSet$JPEGRestartInterval::BaselineTIFFTagSet$JPEGRestartInterval() {
}

$Class* BaselineTIFFTagSet$JPEGRestartInterval::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$JPEGRestartInterval, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGRestartInterval", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "JPEGRestartInterval", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGRestartInterval",
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
	$loadClass(BaselineTIFFTagSet$JPEGRestartInterval, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$JPEGRestartInterval);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$JPEGRestartInterval::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax