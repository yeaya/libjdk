#include <javax/imageio/plugins/tiff/FaxTIFFTagSet$ConsecutiveBadFaxLines.h>
#include <javax/imageio/plugins/tiff/FaxTIFFTagSet.h>
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

void FaxTIFFTagSet$ConsecutiveBadFaxLines::init$() {
	$TIFFTag::init$("ConsecutiveBadFaxLines"_s, 328, $sl(1, $TIFFTag::TIFF_SHORT) | $sl(1, $TIFFTag::TIFF_LONG), 1);
}

FaxTIFFTagSet$ConsecutiveBadFaxLines::FaxTIFFTagSet$ConsecutiveBadFaxLines() {
}

$Class* FaxTIFFTagSet$ConsecutiveBadFaxLines::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FaxTIFFTagSet$ConsecutiveBadFaxLines, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.FaxTIFFTagSet$ConsecutiveBadFaxLines", "javax.imageio.plugins.tiff.FaxTIFFTagSet", "ConsecutiveBadFaxLines", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.FaxTIFFTagSet$ConsecutiveBadFaxLines",
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
	$loadClass(FaxTIFFTagSet$ConsecutiveBadFaxLines, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FaxTIFFTagSet$ConsecutiveBadFaxLines);
	});
	return class$;
}

$Class* FaxTIFFTagSet$ConsecutiveBadFaxLines::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax