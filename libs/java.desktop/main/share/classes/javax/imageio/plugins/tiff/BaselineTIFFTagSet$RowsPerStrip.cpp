#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$RowsPerStrip.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_LONG
#undef TIFF_SHORT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

void BaselineTIFFTagSet$RowsPerStrip::init$() {
	$TIFFTag::init$("RowsPerStrip"_s, 278, ($sl(1, $TIFFTag::TIFF_SHORT)) | ($sl(1, $TIFFTag::TIFF_LONG)), 1);
}

BaselineTIFFTagSet$RowsPerStrip::BaselineTIFFTagSet$RowsPerStrip() {
}

$Class* BaselineTIFFTagSet$RowsPerStrip::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$RowsPerStrip, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$RowsPerStrip", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "RowsPerStrip", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$RowsPerStrip",
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
	$loadClass(BaselineTIFFTagSet$RowsPerStrip, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$RowsPerStrip);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$RowsPerStrip::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax