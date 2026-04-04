#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$JPEGDCTables.h>
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

void BaselineTIFFTagSet$JPEGDCTables::init$() {
	$TIFFTag::init$("JPEGDCTables"_s, 520, $sl(1, $TIFFTag::TIFF_LONG));
}

BaselineTIFFTagSet$JPEGDCTables::BaselineTIFFTagSet$JPEGDCTables() {
}

$Class* BaselineTIFFTagSet$JPEGDCTables::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$JPEGDCTables, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGDCTables", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "JPEGDCTables", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGDCTables",
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
	$loadClass(BaselineTIFFTagSet$JPEGDCTables, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$JPEGDCTables);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$JPEGDCTables::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax