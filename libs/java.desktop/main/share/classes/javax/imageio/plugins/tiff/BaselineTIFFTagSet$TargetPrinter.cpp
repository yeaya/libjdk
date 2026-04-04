#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$TargetPrinter.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_ASCII

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

void BaselineTIFFTagSet$TargetPrinter::init$() {
	$TIFFTag::init$("TargetPrinter"_s, 337, $sl(1, $TIFFTag::TIFF_ASCII));
}

BaselineTIFFTagSet$TargetPrinter::BaselineTIFFTagSet$TargetPrinter() {
}

$Class* BaselineTIFFTagSet$TargetPrinter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$TargetPrinter, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$TargetPrinter", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "TargetPrinter", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$TargetPrinter",
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
	$loadClass(BaselineTIFFTagSet$TargetPrinter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$TargetPrinter);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$TargetPrinter::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax