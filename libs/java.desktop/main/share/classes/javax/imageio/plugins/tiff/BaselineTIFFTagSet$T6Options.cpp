#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$T6Options.h>
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

void BaselineTIFFTagSet$T6Options::init$() {
	$TIFFTag::init$("T6Options"_s, 293, $sl(1, $TIFFTag::TIFF_LONG), 1);
	addValueName(0, "Default"_s);
	addValueName(2, "Uncompressed"_s);
}

BaselineTIFFTagSet$T6Options::BaselineTIFFTagSet$T6Options() {
}

$Class* BaselineTIFFTagSet$T6Options::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$T6Options, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$T6Options", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "T6Options", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$T6Options",
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
	$loadClass(BaselineTIFFTagSet$T6Options, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$T6Options);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$T6Options::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax