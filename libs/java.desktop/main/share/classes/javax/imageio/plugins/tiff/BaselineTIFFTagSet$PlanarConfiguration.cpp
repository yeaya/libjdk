#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$PlanarConfiguration.h>
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

void BaselineTIFFTagSet$PlanarConfiguration::init$() {
	$TIFFTag::init$("PlanarConfiguration"_s, 284, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(1, "Chunky"_s);
	addValueName(2, "Planar"_s);
}

BaselineTIFFTagSet$PlanarConfiguration::BaselineTIFFTagSet$PlanarConfiguration() {
}

$Class* BaselineTIFFTagSet$PlanarConfiguration::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaselineTIFFTagSet$PlanarConfiguration, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$PlanarConfiguration", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "PlanarConfiguration", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.BaselineTIFFTagSet$PlanarConfiguration",
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
	$loadClass(BaselineTIFFTagSet$PlanarConfiguration, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaselineTIFFTagSet$PlanarConfiguration);
	});
	return class$;
}

$Class* BaselineTIFFTagSet$PlanarConfiguration::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax