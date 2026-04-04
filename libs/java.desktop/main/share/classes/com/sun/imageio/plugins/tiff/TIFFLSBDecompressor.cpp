#include <com/sun/imageio/plugins/tiff/TIFFLSBDecompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFDecompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFFaxDecompressor.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <jcpp.h>

using $TIFFDecompressor = ::com::sun::imageio::plugins::tiff::TIFFDecompressor;
using $TIFFFaxDecompressor = ::com::sun::imageio::plugins::tiff::TIFFFaxDecompressor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$bytes* TIFFLSBDecompressor::flipTable = nullptr;

void TIFFLSBDecompressor::init$() {
	$TIFFDecompressor::init$();
}

void TIFFLSBDecompressor::decodeRaw($bytes* b, int32_t dstOffset, int32_t bitsPerPixel, int32_t scanlineStride) {
	$nc(this->stream)->seek(this->offset);
	int32_t bytesPerRow = (this->srcWidth * bitsPerPixel + 7) / 8;
	if (bytesPerRow == scanlineStride) {
		int32_t numBytes = bytesPerRow * this->srcHeight;
		$nc(this->stream)->readFully(b, dstOffset, numBytes);
		int32_t xMax = dstOffset + numBytes;
		for (int32_t x = dstOffset; x < xMax; ++x) {
			$nc(b)->set(x, $nc(TIFFLSBDecompressor::flipTable)->get($nc(b)->get(x) & 0xff));
		}
	} else {
		for (int32_t y = 0; y < this->srcHeight; ++y) {
			$nc(this->stream)->readFully(b, dstOffset, bytesPerRow);
			int32_t xMax = dstOffset + bytesPerRow;
			for (int32_t x = dstOffset; x < xMax; ++x) {
				$nc(b)->set(x, $nc(TIFFLSBDecompressor::flipTable)->get($nc(b)->get(x) & 0xff));
			}
			dstOffset += scanlineStride;
		}
	}
}

void TIFFLSBDecompressor::clinit$($Class* clazz) {
	$init($TIFFFaxDecompressor);
	$assignStatic(TIFFLSBDecompressor::flipTable, $TIFFFaxDecompressor::flipTable);
}

TIFFLSBDecompressor::TIFFLSBDecompressor() {
}

$Class* TIFFLSBDecompressor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"flipTable", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TIFFLSBDecompressor, flipTable)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TIFFLSBDecompressor, init$, void)},
		{"decodeRaw", "([BIII)V", nullptr, $PUBLIC, $virtualMethod(TIFFLSBDecompressor, decodeRaw, void, $bytes*, int32_t, int32_t, int32_t), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.imageio.plugins.tiff.TIFFLSBDecompressor",
		"com.sun.imageio.plugins.tiff.TIFFDecompressor",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TIFFLSBDecompressor, name, initialize, &classInfo$$, TIFFLSBDecompressor::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TIFFLSBDecompressor);
	});
	return class$;
}

$Class* TIFFLSBDecompressor::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com