#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$JPEGTables.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_UNDEFINED

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

void BaselineTIFFTagSet$JPEGTables::init$() {
	$TIFFTag::init$("JPEGTables"_s, 347, $sl(1, $TIFFTag::TIFF_UNDEFINED));
}

BaselineTIFFTagSet$JPEGTables::BaselineTIFFTagSet$JPEGTables() {
}

$Class* BaselineTIFFTagSet$JPEGTables::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$JPEGTables, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGTables", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "JPEGTables", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGTables",
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
	$loadClass(BaselineTIFFTagSet$JPEGTables, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$JPEGTables);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$JPEGTables::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax