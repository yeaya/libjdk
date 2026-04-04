#include <javax/imageio/plugins/tiff/GeoTIFFTagSet$GeoKeyDirectory.h>
#include <javax/imageio/plugins/tiff/GeoTIFFTagSet.h>
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

void GeoTIFFTagSet$GeoKeyDirectory::init$() {
	$TIFFTag::init$("GeoKeyDirectoryTag"_s, 0x000087af, $sl(1, $TIFFTag::TIFF_SHORT));
}

GeoTIFFTagSet$GeoKeyDirectory::GeoTIFFTagSet$GeoKeyDirectory() {
}

$Class* GeoTIFFTagSet$GeoKeyDirectory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GeoTIFFTagSet$GeoKeyDirectory, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.GeoTIFFTagSet$GeoKeyDirectory", "javax.imageio.plugins.tiff.GeoTIFFTagSet", "GeoKeyDirectory", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.GeoTIFFTagSet$GeoKeyDirectory",
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
		"javax.imageio.plugins.tiff.GeoTIFFTagSet"
	};
	$loadClass(GeoTIFFTagSet$GeoKeyDirectory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GeoTIFFTagSet$GeoKeyDirectory);
	});
	return class$;
}

$Class* GeoTIFFTagSet$GeoKeyDirectory::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax