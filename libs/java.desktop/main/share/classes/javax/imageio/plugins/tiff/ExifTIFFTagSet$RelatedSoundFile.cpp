#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$RelatedSoundFile.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet.h>
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

void ExifTIFFTagSet$RelatedSoundFile::init$() {
	$TIFFTag::init$("RelatedSoundFile"_s, 0x0000a004, $sl(1, $TIFFTag::TIFF_ASCII), 13);
}

ExifTIFFTagSet$RelatedSoundFile::ExifTIFFTagSet$RelatedSoundFile() {
}

$Class* ExifTIFFTagSet$RelatedSoundFile::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$RelatedSoundFile, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$RelatedSoundFile", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "RelatedSoundFile", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$RelatedSoundFile",
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
	$loadClass(ExifTIFFTagSet$RelatedSoundFile, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$RelatedSoundFile);
	});
	return class$;
}

$Class* ExifTIFFTagSet$RelatedSoundFile::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax