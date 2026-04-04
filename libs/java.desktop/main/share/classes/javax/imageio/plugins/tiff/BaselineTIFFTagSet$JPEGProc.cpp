#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$JPEGProc.h>
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

void BaselineTIFFTagSet$JPEGProc::init$() {
	$TIFFTag::init$("JPEGProc"_s, 512, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(1, "Baseline sequential process"_s);
	addValueName(14, "Lossless process with Huffman coding"_s);
}

BaselineTIFFTagSet$JPEGProc::BaselineTIFFTagSet$JPEGProc() {
}

$Class* BaselineTIFFTagSet$JPEGProc::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$JPEGProc, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGProc", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "JPEGProc", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGProc",
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
	$loadClass(BaselineTIFFTagSet$JPEGProc, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$JPEGProc);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$JPEGProc::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax