#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$TransferFunction.h>
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

void BaselineTIFFTagSet$TransferFunction::init$() {
	$TIFFTag::init$("TransferFunction"_s, 301, $sl(1, $TIFFTag::TIFF_SHORT));
}

BaselineTIFFTagSet$TransferFunction::BaselineTIFFTagSet$TransferFunction() {
}

$Class* BaselineTIFFTagSet$TransferFunction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$TransferFunction, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$TransferFunction", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "TransferFunction", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$TransferFunction",
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
	$loadClass(BaselineTIFFTagSet$TransferFunction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$TransferFunction);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$TransferFunction::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax