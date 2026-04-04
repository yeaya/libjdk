#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$FocalLengthIn35mmFilm.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet.h>
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

void ExifTIFFTagSet$FocalLengthIn35mmFilm::init$() {
	$TIFFTag::init$("FocalLengthIn35mmFilm"_s, 0x0000a405, $sl(1, $TIFFTag::TIFF_SHORT), 1);
}

ExifTIFFTagSet$FocalLengthIn35mmFilm::ExifTIFFTagSet$FocalLengthIn35mmFilm() {
}

$Class* ExifTIFFTagSet$FocalLengthIn35mmFilm::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$FocalLengthIn35mmFilm, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$FocalLengthIn35mmFilm", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "FocalLengthIn35mmFilm", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$FocalLengthIn35mmFilm",
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
	$loadClass(ExifTIFFTagSet$FocalLengthIn35mmFilm, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$FocalLengthIn35mmFilm);
	});
	return class$;
}

$Class* ExifTIFFTagSet$FocalLengthIn35mmFilm::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax