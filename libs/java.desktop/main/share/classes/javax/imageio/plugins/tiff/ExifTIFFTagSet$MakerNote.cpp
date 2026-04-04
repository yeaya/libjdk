#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$MakerNote.h>
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

void ExifTIFFTagSet$MakerNote::init$() {
	$TIFFTag::init$("MakerNote"_s, 0x0000927c, $sl(1, $TIFFTag::TIFF_UNDEFINED));
}

ExifTIFFTagSet$MakerNote::ExifTIFFTagSet$MakerNote() {
}

$Class* ExifTIFFTagSet$MakerNote::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$MakerNote, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$MakerNote", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "MakerNote", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$MakerNote",
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
	$loadClass(ExifTIFFTagSet$MakerNote, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$MakerNote);
	});
	return class$;
}

$Class* ExifTIFFTagSet$MakerNote::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax