#include <com/sun/imageio/plugins/wbmp/WBMPImageReader.h>
#include <com/sun/imageio/plugins/common/I18N.h>
#include <com/sun/imageio/plugins/common/ReaderUtil.h>
#include <com/sun/imageio/plugins/wbmp/WBMPMetadata.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferByte.h>
#include <java/awt/image/MultiPixelPackedSampleModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <javax/imageio/IIOException.h>
#include <javax/imageio/ImageReadParam.h>
#include <javax/imageio/ImageReader.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/spi/ImageReaderSpi.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <jcpp.h>

#undef TYPE_BYTE_BINARY

using $I18N = ::com::sun::imageio::plugins::common::I18N;
using $ReaderUtil = ::com::sun::imageio::plugins::common::ReaderUtil;
using $WBMPMetadata = ::com::sun::imageio::plugins::wbmp::WBMPMetadata;
using $Rectangle = ::java::awt::Rectangle;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $DataBufferByte = ::java::awt::image::DataBufferByte;
using $MultiPixelPackedSampleModel = ::java::awt::image::MultiPixelPackedSampleModel;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $IIOException = ::javax::imageio::IIOException;
using $ImageReadParam = ::javax::imageio::ImageReadParam;
using $ImageReader = ::javax::imageio::ImageReader;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;
using $ImageReaderSpi = ::javax::imageio::spi::ImageReaderSpi;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace wbmp {

void WBMPImageReader::init$($ImageReaderSpi* originator) {
	$ImageReader::init$(originator);
	$set(this, iis, nullptr);
	this->gotHeader = false;
}

void WBMPImageReader::setInput(Object$* input, bool seekForwardOnly, bool ignoreMetadata) {
	$ImageReader::setInput(input, seekForwardOnly, ignoreMetadata);
	$set(this, iis, $cast($ImageInputStream, input));
	this->gotHeader = false;
}

int32_t WBMPImageReader::getNumImages(bool allowSearch) {
	$useLocalObjectStack();
	if (this->iis == nullptr) {
		$throwNew($IllegalStateException, $($I18N::getString("GetNumImages0"_s)));
	}
	if (this->seekForwardOnly && allowSearch) {
		$throwNew($IllegalStateException, $($I18N::getString("GetNumImages1"_s)));
	}
	return 1;
}

int32_t WBMPImageReader::getWidth(int32_t imageIndex) {
	checkIndex(imageIndex);
	readHeader();
	return this->width;
}

int32_t WBMPImageReader::getHeight(int32_t imageIndex) {
	checkIndex(imageIndex);
	readHeader();
	return this->height;
}

bool WBMPImageReader::isRandomAccessEasy(int32_t imageIndex) {
	checkIndex(imageIndex);
	return true;
}

void WBMPImageReader::checkIndex(int32_t imageIndex) {
	if (imageIndex != 0) {
		$throwNew($IndexOutOfBoundsException, $($I18N::getString("WBMPImageReader0"_s)));
	}
}

void WBMPImageReader::readHeader() {
	if (this->gotHeader) {
		return;
	}
	if (this->iis == nullptr) {
		$throwNew($IllegalStateException, "Input source not set!"_s);
	}
	$set(this, metadata, $new($WBMPMetadata));
	this->wbmpType = $nc(this->iis)->readByte();
	int8_t fixHeaderField = $nc(this->iis)->readByte();
	if (fixHeaderField != 0 || !isValidWbmpType(this->wbmpType)) {
		$throwNew($IIOException, $($I18N::getString("WBMPImageReader2"_s)));
	}
	$nc(this->metadata)->wbmpType = this->wbmpType;
	this->width = $ReaderUtil::readMultiByteInteger(this->iis);
	$nc(this->metadata)->width = this->width;
	this->height = $ReaderUtil::readMultiByteInteger(this->iis);
	$nc(this->metadata)->height = this->height;
	this->gotHeader = true;
}

$Iterator* WBMPImageReader::getImageTypes(int32_t imageIndex) {
	$useLocalObjectStack();
	checkIndex(imageIndex);
	readHeader();
	$var($BufferedImage, bi, $new($BufferedImage, 1, 1, $BufferedImage::TYPE_BYTE_BINARY));
	$var($ArrayList, list, $new($ArrayList, 1));
	list->add($$new($ImageTypeSpecifier, bi));
	return list->iterator();
}

$ImageReadParam* WBMPImageReader::getDefaultReadParam() {
	return $new($ImageReadParam);
}

$IIOMetadata* WBMPImageReader::getImageMetadata(int32_t imageIndex) {
	checkIndex(imageIndex);
	if (this->metadata == nullptr) {
		readHeader();
	}
	return this->metadata;
}

$IIOMetadata* WBMPImageReader::getStreamMetadata() {
	return nullptr;
}

$BufferedImage* WBMPImageReader::read(int32_t imageIndex, $ImageReadParam* param$renamed) {
	$useLocalObjectStack();
	$var($ImageReadParam, param, param$renamed);
	if (this->iis == nullptr) {
		$throwNew($IllegalStateException, $($I18N::getString("WBMPImageReader1"_s)));
	}
	checkIndex(imageIndex);
	clearAbortRequest();
	processImageStarted(imageIndex);
	if (param == nullptr) {
		$assign(param, getDefaultReadParam());
	}
	readHeader();
	$var($Rectangle, sourceRegion, $new($Rectangle, 0, 0, 0, 0));
	$var($Rectangle, destinationRegion, $new($Rectangle, 0, 0, 0, 0));
	computeRegions(param, this->width, this->height, $($nc(param)->getDestination()), sourceRegion, destinationRegion);
	int32_t scaleX = param->getSourceXSubsampling();
	int32_t scaleY = param->getSourceYSubsampling();
	int32_t xOffset = param->getSubsamplingXOffset();
	int32_t yOffset = param->getSubsamplingYOffset();
	$var($BufferedImage, bi, param->getDestination());
	if (bi == nullptr) {
		$assign(bi, $new($BufferedImage, destinationRegion->x + destinationRegion->width, destinationRegion->y + destinationRegion->height, $BufferedImage::TYPE_BYTE_BINARY));
	}
	bool var$0 = destinationRegion->equals($$new($Rectangle, 0, 0, this->width, this->height));
	if (var$0) {
		int32_t var$1 = $nc(bi)->getWidth();
		var$0 = destinationRegion->equals($$new($Rectangle, 0, 0, var$1, bi->getHeight()));
	}
	bool noTransform = var$0;
	$var($WritableRaster, tile, $nc(bi)->getWritableTile(0, 0));
	$var($MultiPixelPackedSampleModel, sm, $cast($MultiPixelPackedSampleModel, bi->getSampleModel()));
	if (noTransform) {
		if (abortRequested()) {
			processReadAborted();
			return bi;
		}
		$var($bytes, var$2, $$sure($DataBufferByte, $nc(tile)->getDataBuffer())->getData());
		$nc(this->iis)->read(var$2, 0, this->height * $nc(sm)->getScanlineStride());
		processImageUpdate(bi, 0, 0, this->width, this->height, 1, 1, $$new($ints, {0}));
		processImageProgress(100.0f);
	} else {
		int32_t len = (this->width + 7) / 8;
		$var($bytes, buf, $new($bytes, len));
		$var($bytes, data, $$sure($DataBufferByte, $nc(tile)->getDataBuffer())->getData());
		int32_t lineStride = $nc(sm)->getScanlineStride();
		$nc(this->iis)->skipBytes(len * sourceRegion->y);
		int32_t skipLength = len * (scaleY - 1);
		$var($ints, srcOff, $new($ints, destinationRegion->width));
		$var($ints, destOff, $new($ints, destinationRegion->width));
		$var($ints, srcPos, $new($ints, destinationRegion->width));
		$var($ints, destPos, $new($ints, destinationRegion->width));
		for (int32_t i = destinationRegion->x, x = sourceRegion->x, j = 0; i < destinationRegion->x + destinationRegion->width; ++i, ++j, x += scaleX) {
			srcPos->set(j, x >> 3);
			srcOff->set(j, 7 - (x & 7));
			destPos->set(j, i >> 3);
			destOff->set(j, 7 - (i & 7));
		}
		for (int32_t j = 0, y = sourceRegion->y, k = destinationRegion->y * lineStride; j < destinationRegion->height; ++j, y += scaleY) {
			if (abortRequested()) {
				break;
			}
			$nc(this->iis)->read(buf, 0, len);
			for (int32_t i = 0; i < destinationRegion->width; ++i) {
				int32_t v = ($sr(buf->get(srcPos->get(i)), srcOff->get(i))) & 1;
				(*$nc(data))[k + destPos->get(i)] |= $sl(v, destOff->get(i));
			}
			k += lineStride;
			$nc(this->iis)->skipBytes(skipLength);
			processImageUpdate(bi, 0, j, destinationRegion->width, 1, 1, 1, $$new($ints, {0}));
			processImageProgress(100.0f * j / destinationRegion->height);
		}
	}
	if (abortRequested()) {
		processReadAborted();
	} else {
		processImageComplete();
	}
	return bi;
}

bool WBMPImageReader::canReadRaster() {
	return true;
}

$Raster* WBMPImageReader::readRaster(int32_t imageIndex, $ImageReadParam* param) {
	$var($BufferedImage, bi, read(imageIndex, param));
	return $nc(bi)->getData();
}

void WBMPImageReader::reset() {
	$ImageReader::reset();
	$set(this, iis, nullptr);
	this->gotHeader = false;
}

bool WBMPImageReader::isValidWbmpType(int32_t type) {
	return type == 0;
}

WBMPImageReader::WBMPImageReader() {
}

$Class* WBMPImageReader::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"iis", "Ljavax/imageio/stream/ImageInputStream;", nullptr, $PRIVATE, $field(WBMPImageReader, iis)},
		{"gotHeader", "Z", nullptr, $PRIVATE, $field(WBMPImageReader, gotHeader)},
		{"width", "I", nullptr, $PRIVATE, $field(WBMPImageReader, width)},
		{"height", "I", nullptr, $PRIVATE, $field(WBMPImageReader, height)},
		{"wbmpType", "I", nullptr, $PRIVATE, $field(WBMPImageReader, wbmpType)},
		{"metadata", "Lcom/sun/imageio/plugins/wbmp/WBMPMetadata;", nullptr, $PRIVATE, $field(WBMPImageReader, metadata)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/imageio/spi/ImageReaderSpi;)V", nullptr, $PUBLIC, $method(WBMPImageReader, init$, void, $ImageReaderSpi*)},
		{"canReadRaster", "()Z", nullptr, $PUBLIC, $virtualMethod(WBMPImageReader, canReadRaster, bool)},
		{"checkIndex", "(I)V", nullptr, $PRIVATE, $method(WBMPImageReader, checkIndex, void, int32_t)},
		{"getDefaultReadParam", "()Ljavax/imageio/ImageReadParam;", nullptr, $PUBLIC, $virtualMethod(WBMPImageReader, getDefaultReadParam, $ImageReadParam*)},
		{"getHeight", "(I)I", nullptr, $PUBLIC, $virtualMethod(WBMPImageReader, getHeight, int32_t, int32_t), "java.io.IOException"},
		{"getImageMetadata", "(I)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC, $virtualMethod(WBMPImageReader, getImageMetadata, $IIOMetadata*, int32_t), "java.io.IOException"},
		{"getImageTypes", "(I)Ljava/util/Iterator;", "(I)Ljava/util/Iterator<Ljavax/imageio/ImageTypeSpecifier;>;", $PUBLIC, $virtualMethod(WBMPImageReader, getImageTypes, $Iterator*, int32_t), "java.io.IOException"},
		{"getNumImages", "(Z)I", nullptr, $PUBLIC, $virtualMethod(WBMPImageReader, getNumImages, int32_t, bool), "java.io.IOException"},
		{"getStreamMetadata", "()Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC, $virtualMethod(WBMPImageReader, getStreamMetadata, $IIOMetadata*), "java.io.IOException"},
		{"getWidth", "(I)I", nullptr, $PUBLIC, $virtualMethod(WBMPImageReader, getWidth, int32_t, int32_t), "java.io.IOException"},
		{"isRandomAccessEasy", "(I)Z", nullptr, $PUBLIC, $virtualMethod(WBMPImageReader, isRandomAccessEasy, bool, int32_t), "java.io.IOException"},
		{"isValidWbmpType", "(I)Z", nullptr, 0, $virtualMethod(WBMPImageReader, isValidWbmpType, bool, int32_t)},
		{"read", "(ILjavax/imageio/ImageReadParam;)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC, $virtualMethod(WBMPImageReader, read, $BufferedImage*, int32_t, $ImageReadParam*), "java.io.IOException"},
		{"readHeader", "()V", nullptr, $PUBLIC, $virtualMethod(WBMPImageReader, readHeader, void), "java.io.IOException"},
		{"readRaster", "(ILjavax/imageio/ImageReadParam;)Ljava/awt/image/Raster;", nullptr, $PUBLIC, $virtualMethod(WBMPImageReader, readRaster, $Raster*, int32_t, $ImageReadParam*), "java.io.IOException"},
		{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(WBMPImageReader, reset, void)},
		{"setInput", "(Ljava/lang/Object;ZZ)V", nullptr, $PUBLIC, $virtualMethod(WBMPImageReader, setInput, void, Object$*, bool, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.imageio.plugins.wbmp.WBMPImageReader",
		"javax.imageio.ImageReader",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WBMPImageReader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WBMPImageReader);
	});
	return class$;
}

$Class* WBMPImageReader::class$ = nullptr;

				} // wbmp
			} // plugins
		} // imageio
	} // sun
} // com