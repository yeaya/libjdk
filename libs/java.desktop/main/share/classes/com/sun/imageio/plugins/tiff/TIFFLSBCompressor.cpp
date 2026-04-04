#include <com/sun/imageio/plugins/tiff/TIFFLSBCompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFCompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFFaxDecompressor.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <jcpp.h>

#undef COMPRESSION_NONE

using $TIFFCompressor = ::com::sun::imageio::plugins::tiff::TIFFCompressor;
using $TIFFFaxDecompressor = ::com::sun::imageio::plugins::tiff::TIFFFaxDecompressor;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

void TIFFLSBCompressor::init$() {
	$TIFFCompressor::init$(""_s, $BaselineTIFFTagSet::COMPRESSION_NONE, true);
}

int32_t TIFFLSBCompressor::encode($bytes* b, int32_t off, int32_t width, int32_t height, $ints* bitsPerSample, int32_t scanlineStride) {
	$useLocalObjectStack();
	int32_t bitsPerPixel = 0;
	for (int32_t i = 0; i < $nc(bitsPerSample)->length; ++i) {
		bitsPerPixel += bitsPerSample->get(i);
	}
	int32_t bytesPerRow = (bitsPerPixel * width + 7) / 8;
	$var($bytes, compData, $new($bytes, bytesPerRow));
	$init($TIFFFaxDecompressor);
	$var($bytes, flipTable, $TIFFFaxDecompressor::flipTable);
	for (int32_t row = 0; row < height; ++row) {
		$System::arraycopy(b, off, compData, 0, bytesPerRow);
		for (int32_t j = 0; j < bytesPerRow; ++j) {
			compData->set(j, $nc(flipTable)->get(compData->get(j) & 0xff));
		}
		$nc(this->stream)->write(compData, 0, bytesPerRow);
		off += scanlineStride;
	}
	return height * bytesPerRow;
}

TIFFLSBCompressor::TIFFLSBCompressor() {
}

$Class* TIFFLSBCompressor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TIFFLSBCompressor, init$, void)},
		{"encode", "([BIII[II)I", nullptr, $PUBLIC, $virtualMethod(TIFFLSBCompressor, encode, int32_t, $bytes*, int32_t, int32_t, int32_t, $ints*, int32_t), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.imageio.plugins.tiff.TIFFLSBCompressor",
		"com.sun.imageio.plugins.tiff.TIFFCompressor",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TIFFLSBCompressor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TIFFLSBCompressor);
	});
	return class$;
}

$Class* TIFFLSBCompressor::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com