#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$FileSource.h>
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

void ExifTIFFTagSet$FileSource::init$() {
	$TIFFTag::init$("FileSource"_s, 0x0000a300, $sl(1, $TIFFTag::TIFF_UNDEFINED), 1);
	addValueName(3, "DSC"_s);
}

ExifTIFFTagSet$FileSource::ExifTIFFTagSet$FileSource() {
}

$Class* ExifTIFFTagSet$FileSource::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$FileSource, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$FileSource", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "FileSource", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$FileSource",
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
	$loadClass(ExifTIFFTagSet$FileSource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$FileSource);
	});
	return class$;
}

$Class* ExifTIFFTagSet$FileSource::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax