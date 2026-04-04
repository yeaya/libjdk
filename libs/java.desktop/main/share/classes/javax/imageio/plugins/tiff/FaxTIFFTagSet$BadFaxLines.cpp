#include <javax/imageio/plugins/tiff/FaxTIFFTagSet$BadFaxLines.h>
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

void FaxTIFFTagSet$BadFaxLines::init$() {
	$TIFFTag::init$("BadFaxLines"_s, 326, $sl(1, $TIFFTag::TIFF_SHORT) | $sl(1, $TIFFTag::TIFF_LONG), 1);
}

FaxTIFFTagSet$BadFaxLines::FaxTIFFTagSet$BadFaxLines() {
}

$Class* FaxTIFFTagSet$BadFaxLines::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FaxTIFFTagSet$BadFaxLines, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.FaxTIFFTagSet$BadFaxLines", "javax.imageio.plugins.tiff.FaxTIFFTagSet", "BadFaxLines", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.FaxTIFFTagSet$BadFaxLines",
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
	$loadClass(FaxTIFFTagSet$BadFaxLines, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FaxTIFFTagSet$BadFaxLines);
	});
	return class$;
}

$Class* FaxTIFFTagSet$BadFaxLines::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax