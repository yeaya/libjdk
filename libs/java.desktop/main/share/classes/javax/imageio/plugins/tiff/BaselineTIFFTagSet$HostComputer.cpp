#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$HostComputer.h>
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

void BaselineTIFFTagSet$HostComputer::init$() {
	$TIFFTag::init$("HostComputer"_s, 316, $sl(1, $TIFFTag::TIFF_ASCII));
}

BaselineTIFFTagSet$HostComputer::BaselineTIFFTagSet$HostComputer() {
}

$Class* BaselineTIFFTagSet$HostComputer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$HostComputer, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$HostComputer", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "HostComputer", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$HostComputer",
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
	$loadClass(BaselineTIFFTagSet$HostComputer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$HostComputer);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$HostComputer::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax