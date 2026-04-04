#include <javax/imageio/plugins/tiff/FaxTIFFTagSet$CleanFaxData.h>
#include <javax/imageio/plugins/tiff/FaxTIFFTagSet.h>
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

void FaxTIFFTagSet$CleanFaxData::init$() {
	$TIFFTag::init$("CleanFaxData"_s, 327, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(0, "No errors"_s);
	addValueName(1, "Errors corrected"_s);
	addValueName(2, "Errors uncorrected"_s);
}

FaxTIFFTagSet$CleanFaxData::FaxTIFFTagSet$CleanFaxData() {
}

$Class* FaxTIFFTagSet$CleanFaxData::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FaxTIFFTagSet$CleanFaxData, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.FaxTIFFTagSet$CleanFaxData", "javax.imageio.plugins.tiff.FaxTIFFTagSet", "CleanFaxData", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.FaxTIFFTagSet$CleanFaxData",
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
		"javax.imageio.plugins.tiff.FaxTIFFTagSet"
	};
	$loadClass(FaxTIFFTagSet$CleanFaxData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FaxTIFFTagSet$CleanFaxData);
	});
	return class$;
}

$Class* FaxTIFFTagSet$CleanFaxData::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax