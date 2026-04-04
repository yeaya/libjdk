#include <com/sun/imageio/plugins/tiff/TIFFDeflateCompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFDeflater.h>
#include <javax/imageio/ImageWriteParam.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <jcpp.h>

#undef COMPRESSION_DEFLATE

using $TIFFDeflater = ::com::sun::imageio::plugins::tiff::TIFFDeflater;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageWriteParam = ::javax::imageio::ImageWriteParam;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

void TIFFDeflateCompressor::init$($ImageWriteParam* param, int32_t predictor) {
	$TIFFDeflater::init$("Deflate"_s, $BaselineTIFFTagSet::COMPRESSION_DEFLATE, param, predictor);
}

TIFFDeflateCompressor::TIFFDeflateCompressor() {
}

$Class* TIFFDeflateCompressor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/imageio/ImageWriteParam;I)V", nullptr, $PUBLIC, $method(TIFFDeflateCompressor, init$, void, $ImageWriteParam*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.imageio.plugins.tiff.TIFFDeflateCompressor",
		"com.sun.imageio.plugins.tiff.TIFFDeflater",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TIFFDeflateCompressor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TIFFDeflateCompressor);
	});
	return class$;
}

$Class* TIFFDeflateCompressor::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com