#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$DeviceSettingDescription.h>
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

void ExifTIFFTagSet$DeviceSettingDescription::init$() {
	$TIFFTag::init$("DeviceSettingDescription"_s, 0x0000a40b, $sl(1, $TIFFTag::TIFF_UNDEFINED));
}

ExifTIFFTagSet$DeviceSettingDescription::ExifTIFFTagSet$DeviceSettingDescription() {
}

$Class* ExifTIFFTagSet$DeviceSettingDescription::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$DeviceSettingDescription, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$DeviceSettingDescription", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "DeviceSettingDescription", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$DeviceSettingDescription",
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
	$loadClass(ExifTIFFTagSet$DeviceSettingDescription, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$DeviceSettingDescription);
	});
	return class$;
}

$Class* ExifTIFFTagSet$DeviceSettingDescription::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax