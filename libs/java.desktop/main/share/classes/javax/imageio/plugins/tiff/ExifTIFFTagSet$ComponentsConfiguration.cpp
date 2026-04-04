#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$ComponentsConfiguration.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet.h>
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

void ExifTIFFTagSet$ComponentsConfiguration::init$() {
	$TIFFTag::init$("ComponentsConfiguration"_s, 0x00009101, $sl(1, $TIFFTag::TIFF_UNDEFINED), 4);
	addValueName(0, "DoesNotExist"_s);
	addValueName(1, "Y"_s);
	addValueName(2, "Cb"_s);
	addValueName(3, "Cr"_s);
	addValueName(4, "R"_s);
	addValueName(5, "G"_s);
	addValueName(6, "B"_s);
}

ExifTIFFTagSet$ComponentsConfiguration::ExifTIFFTagSet$ComponentsConfiguration() {
}

$Class* ExifTIFFTagSet$ComponentsConfiguration::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$ComponentsConfiguration, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$ComponentsConfiguration", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "ComponentsConfiguration", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$ComponentsConfiguration",
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
		"javax.imageio.plugins.tiff.ExifTIFFTagSet"
	};
	$loadClass(ExifTIFFTagSet$ComponentsConfiguration, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$ComponentsConfiguration);
	});
	return class$;
}

$Class* ExifTIFFTagSet$ComponentsConfiguration::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax