#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$JPEGACTables.h>
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

void BaselineTIFFTagSet$JPEGACTables::init$() {
	$TIFFTag::init$("JPEGACTables"_s, 521, $sl(1, $TIFFTag::TIFF_LONG));
}

BaselineTIFFTagSet$JPEGACTables::BaselineTIFFTagSet$JPEGACTables() {
}

$Class* BaselineTIFFTagSet$JPEGACTables::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$JPEGACTables, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGACTables", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "JPEGACTables", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGACTables",
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
	$loadClass(BaselineTIFFTagSet$JPEGACTables, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$JPEGACTables);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$JPEGACTables::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax