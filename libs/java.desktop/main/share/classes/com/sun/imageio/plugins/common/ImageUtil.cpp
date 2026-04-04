#include <com/sun/imageio/plugins/common/ImageUtil.h>
#include <com/sun/imageio/plugins/common/BogusColorSpace.h>
#include <com/sun/imageio/plugins/common/I18N.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Transparency.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/color/ICC_ColorSpace.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ComponentColorModel.h>
#include <java/awt/image/ComponentSampleModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferByte.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/DataBufferShort.h>
#include <java/awt/image/DataBufferUShort.h>
#include <java/awt/image/DirectColorModel.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/MultiPixelPackedSampleModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/SinglePixelPackedSampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Math.h>
#include <java/util/Iterator.h>
#include <javax/imageio/IIOException.h>
#include <javax/imageio/ImageReadParam.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/ImageWriter.h>
#include <javax/imageio/spi/ImageWriterSpi.h>
#include <jcpp.h>

#undef CS_CIEXYZ
#undef CS_GRAY
#undef CS_LINEAR_RGB
#undef CS_PYCC
#undef OPAQUE
#undef TRANSLUCENT
#undef TYPE_BYTE
#undef TYPE_DOUBLE
#undef TYPE_FLOAT
#undef TYPE_INT
#undef TYPE_SHORT
#undef TYPE_USHORT

using $BogusColorSpace = ::com::sun::imageio::plugins::common::BogusColorSpace;
using $I18N = ::com::sun::imageio::plugins::common::I18N;
using $Rectangle = ::java::awt::Rectangle;
using $Transparency = ::java::awt::Transparency;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $ICC_ColorSpace = ::java::awt::color::ICC_ColorSpace;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $ComponentColorModel = ::java::awt::image::ComponentColorModel;
using $ComponentSampleModel = ::java::awt::image::ComponentSampleModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferByte = ::java::awt::image::DataBufferByte;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $DataBufferShort = ::java::awt::image::DataBufferShort;
using $DataBufferUShort = ::java::awt::image::DataBufferUShort;
using $DirectColorModel = ::java::awt::image::DirectColorModel;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $MultiPixelPackedSampleModel = ::java::awt::image::MultiPixelPackedSampleModel;
using $Raster = ::java::awt::image::Raster;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $SampleModel = ::java::awt::image::SampleModel;
using $SinglePixelPackedSampleModel = ::java::awt::image::SinglePixelPackedSampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $IIOException = ::javax::imageio::IIOException;
using $ImageReadParam = ::javax::imageio::ImageReadParam;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $ImageWriter = ::javax::imageio::ImageWriter;
using $ImageWriterSpi = ::javax::imageio::spi::ImageWriterSpi;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

void ImageUtil::init$() {
}

$ColorModel* ImageUtil::createColorModel($SampleModel* sampleModel) {
	$useLocalObjectStack();
	if (sampleModel == nullptr) {
		$throwNew($IllegalArgumentException, "sampleModel == null!"_s);
	}
	int32_t dataType = $nc(sampleModel)->getDataType();
	switch (dataType) {
	case $DataBuffer::TYPE_BYTE:
	case $DataBuffer::TYPE_USHORT:
	case $DataBuffer::TYPE_SHORT:
	case $DataBuffer::TYPE_INT:
	case $DataBuffer::TYPE_FLOAT:
	case $DataBuffer::TYPE_DOUBLE:
		break;
	default:
		return nullptr;
	}
	$var($ColorModel, colorModel, nullptr);
	$var($ints, sampleSize, sampleModel->getSampleSize());
	if ($instanceOf($ComponentSampleModel, sampleModel)) {
		int32_t numBands = sampleModel->getNumBands();
		$var($ColorSpace, colorSpace, nullptr);
		if (numBands <= 2) {
			$assign(colorSpace, $ColorSpace::getInstance($ColorSpace::CS_GRAY));
		} else if (numBands <= 4) {
			$assign(colorSpace, $ColorSpace::getInstance($ColorSpace::CS_sRGB));
		} else {
			$assign(colorSpace, $new($BogusColorSpace, numBands));
		}
		bool hasAlpha = (numBands == 2) || (numBands == 4);
		bool isAlphaPremultiplied = false;
		int32_t transparency = hasAlpha ? $Transparency::TRANSLUCENT : $Transparency::OPAQUE;
		$assign(colorModel, $new($ComponentColorModel, colorSpace, sampleSize, hasAlpha, isAlphaPremultiplied, transparency, dataType));
	} else if (sampleModel->getNumBands() <= 4 && $instanceOf($SinglePixelPackedSampleModel, sampleModel)) {
		$var($SinglePixelPackedSampleModel, sppsm, $cast($SinglePixelPackedSampleModel, sampleModel));
		$var($ints, bitMasks, sppsm->getBitMasks());
		int32_t rmask = 0;
		int32_t gmask = 0;
		int32_t bmask = 0;
		int32_t amask = 0;
		int32_t numBands = $nc(bitMasks)->length;
		if (numBands <= 2) {
			rmask = (gmask = (bmask = bitMasks->get(0)));
			if (numBands == 2) {
				amask = bitMasks->get(1);
			}
		} else {
			rmask = bitMasks->get(0);
			gmask = bitMasks->get(1);
			bmask = bitMasks->get(2);
			if (numBands == 4) {
				amask = bitMasks->get(3);
			}
		}
		int32_t bits = 0;
		for (int32_t i = 0; i < $nc(sampleSize)->length; ++i) {
			bits += sampleSize->get(i);
		}
		return $new($DirectColorModel, bits, rmask, gmask, bmask, amask);
	} else if ($instanceOf($MultiPixelPackedSampleModel, sampleModel)) {
		int32_t bitsPerSample = $nc(sampleSize)->get(0);
		int32_t numEntries = $sl(1, bitsPerSample);
		$var($bytes, map, $new($bytes, numEntries));
		for (int32_t i = 0; i < numEntries; ++i) {
			map->set(i, (int8_t)($div(i * 255, (numEntries - 1))));
		}
		$assign(colorModel, $new($IndexColorModel, bitsPerSample, numEntries, map, map, map));
	}
	return colorModel;
}

$bytes* ImageUtil::getPackedBinaryData($Raster* raster, $Rectangle* rect) {
	$useLocalObjectStack();
	$var($SampleModel, sm, $nc(raster)->getSampleModel());
	if (!isBinary(sm)) {
		$throwNew($IllegalArgumentException, $($I18N::getString("ImageUtil0"_s)));
	}
	int32_t rectX = $nc(rect)->x;
	int32_t rectY = rect->y;
	int32_t rectWidth = rect->width;
	int32_t rectHeight = rect->height;
	$var($DataBuffer, dataBuffer, raster->getDataBuffer());
	int32_t dx = rectX - raster->getSampleModelTranslateX();
	int32_t dy = rectY - raster->getSampleModelTranslateY();
	$var($MultiPixelPackedSampleModel, mpp, $cast($MultiPixelPackedSampleModel, sm));
	int32_t lineStride = $nc(mpp)->getScanlineStride();
	int32_t var$0 = $nc(dataBuffer)->getOffset();
	int32_t eltOffset = var$0 + mpp->getOffset(dx, dy);
	int32_t bitOffset = mpp->getBitOffset(dx);
	int32_t numBytesPerRow = (rectWidth + 7) / 8;
	if ($instanceOf($DataBufferByte, dataBuffer) && eltOffset == 0 && bitOffset == 0 && numBytesPerRow == lineStride && $nc($($cast($DataBufferByte, dataBuffer)->getData()))->length == numBytesPerRow * rectHeight) {
		return $cast($DataBufferByte, dataBuffer)->getData();
	}
	$var($bytes, binaryDataArray, $new($bytes, numBytesPerRow * rectHeight));
	int32_t b = 0;
	if (bitOffset == 0) {
		if ($instanceOf($DataBufferByte, dataBuffer)) {
			$var($bytes, data, $cast($DataBufferByte, dataBuffer)->getData());
			int32_t stride = numBytesPerRow;
			int32_t offset = 0;
			for (int32_t y = 0; y < rectHeight; ++y) {
				$System::arraycopy(data, eltOffset, binaryDataArray, offset, stride);
				offset += stride;
				eltOffset += lineStride;
			}
		} else if ($instanceOf($DataBufferShort, dataBuffer) || $instanceOf($DataBufferUShort, dataBuffer)) {
			$var($shorts, data, $instanceOf($DataBufferShort, dataBuffer) ? $cast($DataBufferShort, dataBuffer)->getData() : $cast($DataBufferUShort, dataBuffer)->getData());
			for (int32_t y = 0; y < rectHeight; ++y) {
				int32_t xRemaining = rectWidth;
				int32_t i = eltOffset;
				while (xRemaining > 8) {
					int16_t datum = $nc(data)->get(i++);
					binaryDataArray->set(b++, (int8_t)(((int32_t)((uint32_t)datum >> 8)) & 0xff));
					binaryDataArray->set(b++, (int8_t)(datum & 0xff));
					xRemaining -= 16;
				}
				if (xRemaining > 0) {
					binaryDataArray->set(b++, (int8_t)(((int32_t)((uint32_t)$nc(data)->get(i) >> 8)) & 0xff));
				}
				eltOffset += lineStride;
			}
		} else if ($instanceOf($DataBufferInt, dataBuffer)) {
			$var($ints, data, $cast($DataBufferInt, dataBuffer)->getData());
			for (int32_t y = 0; y < rectHeight; ++y) {
				int32_t xRemaining = rectWidth;
				int32_t i = eltOffset;
				while (xRemaining > 24) {
					int32_t datum = $nc(data)->get(i++);
					binaryDataArray->set(b++, (int8_t)(((int32_t)((uint32_t)datum >> 24)) & 0xff));
					binaryDataArray->set(b++, (int8_t)(((int32_t)((uint32_t)datum >> 16)) & 0xff));
					binaryDataArray->set(b++, (int8_t)(((int32_t)((uint32_t)datum >> 8)) & 0xff));
					binaryDataArray->set(b++, (int8_t)(datum & 0xff));
					xRemaining -= 32;
				}
				int32_t shift = 24;
				while (xRemaining > 0) {
					binaryDataArray->set(b++, (int8_t)(($usr($nc(data)->get(i), shift)) & 0xff));
					shift -= 8;
					xRemaining -= 8;
				}
				eltOffset += lineStride;
			}
		}
	} else if ($instanceOf($DataBufferByte, dataBuffer)) {
		$var($bytes, data, $cast($DataBufferByte, dataBuffer)->getData());
		if ((bitOffset & 7) == 0) {
			int32_t stride = numBytesPerRow;
			int32_t offset = 0;
			for (int32_t y = 0; y < rectHeight; ++y) {
				$System::arraycopy(data, eltOffset, binaryDataArray, offset, stride);
				offset += stride;
				eltOffset += lineStride;
			}
		} else {
			int32_t leftShift = bitOffset & 7;
			int32_t rightShift = 8 - leftShift;
			for (int32_t y = 0; y < rectHeight; ++y) {
				int32_t i = eltOffset;
				int32_t xRemaining = rectWidth;
				while (xRemaining > 0) {
					if (xRemaining > rightShift) {
						int32_t var$1 = $sl($nc(data)->get(i++) & 0xff, leftShift);
						binaryDataArray->set(b++, (int8_t)(var$1 | ($usr(data->get(i) & 0xff, rightShift))));
					} else {
						binaryDataArray->set(b++, (int8_t)($sl($nc(data)->get(i) & 0xff, leftShift)));
					}
					xRemaining -= 8;
				}
				eltOffset += lineStride;
			}
		}
	} else if ($instanceOf($DataBufferShort, dataBuffer) || $instanceOf($DataBufferUShort, dataBuffer)) {
		$var($shorts, data, $instanceOf($DataBufferShort, dataBuffer) ? $cast($DataBufferShort, dataBuffer)->getData() : $cast($DataBufferUShort, dataBuffer)->getData());
		for (int32_t y = 0; y < rectHeight; ++y) {
			int32_t bOffset = bitOffset;
			for (int32_t x = 0; x < rectWidth; x += 8, bOffset += 8) {
				int32_t i = eltOffset + bOffset / 16;
				int32_t mod = bOffset % 16;
				int32_t left = $nc(data)->get(i) & 0xffff;
				if (mod <= 8) {
					binaryDataArray->set(b++, (int8_t)($usr(left, 8 - mod)));
				} else {
					int32_t delta = mod - 8;
					int32_t right = data->get(i + 1) & 0xffff;
					binaryDataArray->set(b++, (int8_t)(($sl(left, delta)) | ($usr(right, 16 - delta))));
				}
			}
			eltOffset += lineStride;
		}
	} else if ($instanceOf($DataBufferInt, dataBuffer)) {
		$var($ints, data, $cast($DataBufferInt, dataBuffer)->getData());
		for (int32_t y = 0; y < rectHeight; ++y) {
			int32_t bOffset = bitOffset;
			for (int32_t x = 0; x < rectWidth; x += 8, bOffset += 8) {
				int32_t i = eltOffset + bOffset / 32;
				int32_t mod = bOffset % 32;
				int32_t left = $nc(data)->get(i);
				if (mod <= 24) {
					binaryDataArray->set(b++, (int8_t)($usr(left, 24 - mod)));
				} else {
					int32_t delta = mod - 24;
					int32_t right = data->get(i + 1);
					binaryDataArray->set(b++, (int8_t)(($sl(left, delta)) | ($usr(right, 32 - delta))));
				}
			}
			eltOffset += lineStride;
		}
	}
	return binaryDataArray;
}

$bytes* ImageUtil::getUnpackedBinaryData($Raster* raster, $Rectangle* rect) {
	$useLocalObjectStack();
	$var($SampleModel, sm, $nc(raster)->getSampleModel());
	if (!isBinary(sm)) {
		$throwNew($IllegalArgumentException, $($I18N::getString("ImageUtil0"_s)));
	}
	int32_t rectX = $nc(rect)->x;
	int32_t rectY = rect->y;
	int32_t rectWidth = rect->width;
	int32_t rectHeight = rect->height;
	$var($DataBuffer, dataBuffer, raster->getDataBuffer());
	int32_t dx = rectX - raster->getSampleModelTranslateX();
	int32_t dy = rectY - raster->getSampleModelTranslateY();
	$var($MultiPixelPackedSampleModel, mpp, $cast($MultiPixelPackedSampleModel, sm));
	int32_t lineStride = $nc(mpp)->getScanlineStride();
	int32_t var$0 = $nc(dataBuffer)->getOffset();
	int32_t eltOffset = var$0 + mpp->getOffset(dx, dy);
	int32_t bitOffset = mpp->getBitOffset(dx);
	$var($bytes, bdata, $new($bytes, rectWidth * rectHeight));
	int32_t maxY = rectY + rectHeight;
	int32_t maxX = rectX + rectWidth;
	int32_t k = 0;
	if ($instanceOf($DataBufferByte, dataBuffer)) {
		$var($bytes, data, $cast($DataBufferByte, dataBuffer)->getData());
		for (int32_t y = rectY; y < maxY; ++y) {
			int32_t bOffset = eltOffset * 8 + bitOffset;
			for (int32_t x = rectX; x < maxX; ++x) {
				int8_t b = $nc(data)->get(bOffset / 8);
				bdata->set(k++, (int8_t)(($usr(b, (7 - bOffset) & 7)) & 1));
				++bOffset;
			}
			eltOffset += lineStride;
		}
	} else if ($instanceOf($DataBufferShort, dataBuffer) || $instanceOf($DataBufferUShort, dataBuffer)) {
		$var($shorts, data, $instanceOf($DataBufferShort, dataBuffer) ? $cast($DataBufferShort, dataBuffer)->getData() : $cast($DataBufferUShort, dataBuffer)->getData());
		for (int32_t y = rectY; y < maxY; ++y) {
			int32_t bOffset = eltOffset * 16 + bitOffset;
			for (int32_t x = rectX; x < maxX; ++x) {
				int16_t s = $nc(data)->get(bOffset / 16);
				bdata->set(k++, (int8_t)(($usr(s, 15 - bOffset % 16)) & 1));
				++bOffset;
			}
			eltOffset += lineStride;
		}
	} else if ($instanceOf($DataBufferInt, dataBuffer)) {
		$var($ints, data, $cast($DataBufferInt, dataBuffer)->getData());
		for (int32_t y = rectY; y < maxY; ++y) {
			int32_t bOffset = eltOffset * 32 + bitOffset;
			for (int32_t x = rectX; x < maxX; ++x) {
				int32_t i = $nc(data)->get(bOffset / 32);
				bdata->set(k++, (int8_t)(($usr(i, 31 - bOffset % 32)) & 1));
				++bOffset;
			}
			eltOffset += lineStride;
		}
	}
	return bdata;
}

void ImageUtil::setPackedBinaryData($bytes* binaryDataArray, $WritableRaster* raster, $Rectangle* rect) {
	$useLocalObjectStack();
	$var($SampleModel, sm, $nc(raster)->getSampleModel());
	if (!isBinary(sm)) {
		$throwNew($IllegalArgumentException, $($I18N::getString("ImageUtil0"_s)));
	}
	int32_t rectX = $nc(rect)->x;
	int32_t rectY = rect->y;
	int32_t rectWidth = rect->width;
	int32_t rectHeight = rect->height;
	$var($DataBuffer, dataBuffer, raster->getDataBuffer());
	int32_t dx = rectX - raster->getSampleModelTranslateX();
	int32_t dy = rectY - raster->getSampleModelTranslateY();
	$var($MultiPixelPackedSampleModel, mpp, $cast($MultiPixelPackedSampleModel, sm));
	int32_t lineStride = $nc(mpp)->getScanlineStride();
	int32_t var$0 = $nc(dataBuffer)->getOffset();
	int32_t eltOffset = var$0 + mpp->getOffset(dx, dy);
	int32_t bitOffset = mpp->getBitOffset(dx);
	int32_t b = 0;
	if (bitOffset == 0) {
		if ($instanceOf($DataBufferByte, dataBuffer)) {
			$var($bytes, data, $cast($DataBufferByte, dataBuffer)->getData());
			if (data == binaryDataArray) {
				return;
			}
			int32_t stride = (rectWidth + 7) / 8;
			int32_t offset = 0;
			for (int32_t y = 0; y < rectHeight; ++y) {
				$System::arraycopy(binaryDataArray, offset, data, eltOffset, stride);
				offset += stride;
				eltOffset += lineStride;
			}
		} else if ($instanceOf($DataBufferShort, dataBuffer) || $instanceOf($DataBufferUShort, dataBuffer)) {
			$var($shorts, data, $instanceOf($DataBufferShort, dataBuffer) ? $cast($DataBufferShort, dataBuffer)->getData() : $cast($DataBufferUShort, dataBuffer)->getData());
			for (int32_t y = 0; y < rectHeight; ++y) {
				int32_t xRemaining = rectWidth;
				int32_t i = eltOffset;
				while (xRemaining > 8) {
					int32_t var$1 = ($nc(binaryDataArray)->get(b++) & 0xff) << 8;
					$nc(data)->set(i++, (int16_t)(var$1 | (binaryDataArray->get(b++) & 0xff)));
					xRemaining -= 16;
				}
				if (xRemaining > 0) {
					$nc(data)->set(i++, (int16_t)(($nc(binaryDataArray)->get(b++) & 0xff) << 8));
				}
				eltOffset += lineStride;
			}
		} else if ($instanceOf($DataBufferInt, dataBuffer)) {
			$var($ints, data, $cast($DataBufferInt, dataBuffer)->getData());
			for (int32_t y = 0; y < rectHeight; ++y) {
				int32_t xRemaining = rectWidth;
				int32_t i = eltOffset;
				while (xRemaining > 24) {
					int32_t var$4 = ($nc(binaryDataArray)->get(b++) & 0xff) << 24;
					int32_t var$3 = var$4 | ((binaryDataArray->get(b++) & 0xff) << 16);
					int32_t var$2 = var$3 | ((binaryDataArray->get(b++) & 0xff) << 8);
					$nc(data)->set(i++, (var$2 | (binaryDataArray->get(b++) & 0xff)));
					xRemaining -= 32;
				}
				int32_t shift = 24;
				while (xRemaining > 0) {
					(*$nc(data))[i] |= ($sl($nc(binaryDataArray)->get(b++) & 0xff, shift));
					shift -= 8;
					xRemaining -= 8;
				}
				eltOffset += lineStride;
			}
		}
	} else {
		int32_t stride = (rectWidth + 7) / 8;
		int32_t offset = 0;
		if ($instanceOf($DataBufferByte, dataBuffer)) {
			$var($bytes, data, $cast($DataBufferByte, dataBuffer)->getData());
			if ((bitOffset & 7) == 0) {
				for (int32_t y = 0; y < rectHeight; ++y) {
					$System::arraycopy(binaryDataArray, offset, data, eltOffset, stride);
					offset += stride;
					eltOffset += lineStride;
				}
			} else {
				int32_t rightShift = bitOffset & 7;
				int32_t leftShift = 8 - rightShift;
				int32_t leftShift8 = 8 + leftShift;
				int32_t mask = (int8_t)($sl(255, leftShift));
				int32_t mask1 = (int8_t)~mask;
				for (int32_t y = 0; y < rectHeight; ++y) {
					int32_t i = eltOffset;
					int32_t xRemaining = rectWidth;
					while (xRemaining > 0) {
						int8_t datum = $nc(binaryDataArray)->get(b++);
						if (xRemaining > leftShift8) {
							$nc(data)->set(i, (int8_t)(($nc(data)->get(i) & mask) | ($usr(datum & 0xff, rightShift))));
							data->set(++i, (int8_t)($sl(datum & 0xff, leftShift)));
						} else if (xRemaining > leftShift) {
							$nc(data)->set(i, (int8_t)(($nc(data)->get(i) & mask) | ($usr(datum & 0xff, rightShift))));
							++i;
							data->set(i, (int8_t)((data->get(i) & mask1) | ($sl(datum & 0xff, leftShift))));
						} else {
							int32_t remainMask = ($sl(1, leftShift - xRemaining)) - 1;
							$nc(data)->set(i, (int8_t)(($nc(data)->get(i) & (mask | remainMask)) | ($usr(datum & 0xff, rightShift) & ~remainMask)));
						}
						xRemaining -= 8;
					}
					eltOffset += lineStride;
				}
			}
		} else if ($instanceOf($DataBufferShort, dataBuffer) || $instanceOf($DataBufferUShort, dataBuffer)) {
			$var($shorts, data, $instanceOf($DataBufferShort, dataBuffer) ? $cast($DataBufferShort, dataBuffer)->getData() : $cast($DataBufferUShort, dataBuffer)->getData());
			int32_t rightShift = bitOffset & 7;
			int32_t leftShift = 8 - rightShift;
			int32_t leftShift16 = 16 + leftShift;
			int32_t mask = (int16_t)(~($sl(255, leftShift)));
			int32_t mask1 = (int16_t)($sl(0x0000ffff, leftShift));
			int32_t mask2 = (int16_t)~mask1;
			for (int32_t y = 0; y < rectHeight; ++y) {
				int32_t bOffset = bitOffset;
				int32_t xRemaining = rectWidth;
				for (int32_t x = 0; x < rectWidth; x += 8, bOffset += 8, xRemaining -= 8) {
					int32_t i = eltOffset + (bOffset >> 4);
					int32_t mod = bOffset & 0x0f;
					int32_t datum = $nc(binaryDataArray)->get(b++) & 0xff;
					if (mod <= 8) {
						if (xRemaining < 8) {
							datum &= (uint32_t)$sl(255, 8 - xRemaining);
						}
						$nc(data)->set(i, (int16_t)(($nc(data)->get(i) & mask) | ($sl(datum, leftShift))));
					} else if (xRemaining > leftShift16) {
						$nc(data)->set(i, (int16_t)(($nc(data)->get(i) & mask1) | (($usr(datum, rightShift)) & 0xffff)));
						data->set(++i, (int16_t)(($sl(datum, leftShift)) & 0xffff));
					} else if (xRemaining > leftShift) {
						$nc(data)->set(i, (int16_t)(($nc(data)->get(i) & mask1) | (($usr(datum, rightShift)) & 0xffff)));
						++i;
						data->set(i, (int16_t)((data->get(i) & mask2) | (($sl(datum, leftShift)) & 0xffff)));
					} else {
						int32_t remainMask = ($sl(1, leftShift - xRemaining)) - 1;
						$nc(data)->set(i, (int16_t)(($nc(data)->get(i) & (mask1 | remainMask)) | ((($usr(datum, rightShift)) & 0xffff) & ~remainMask)));
					}
				}
				eltOffset += lineStride;
			}
		} else if ($instanceOf($DataBufferInt, dataBuffer)) {
			$var($ints, data, $cast($DataBufferInt, dataBuffer)->getData());
			int32_t rightShift = bitOffset & 7;
			int32_t leftShift = 8 - rightShift;
			int32_t leftShift32 = 32 + leftShift;
			int32_t mask = $sl(-1, leftShift);
			int32_t mask1 = ~mask;
			for (int32_t y = 0; y < rectHeight; ++y) {
				int32_t bOffset = bitOffset;
				int32_t xRemaining = rectWidth;
				for (int32_t x = 0; x < rectWidth; x += 8, bOffset += 8, xRemaining -= 8) {
					int32_t i = eltOffset + (bOffset >> 5);
					int32_t mod = bOffset & 0x1f;
					int32_t datum = $nc(binaryDataArray)->get(b++) & 0xff;
					if (mod <= 24) {
						int32_t shift = 24 - mod;
						if (xRemaining < 8) {
							datum &= (uint32_t)$sl(255, 8 - xRemaining);
						}
						$nc(data)->set(i, ($nc(data)->get(i) & (~($sl(255, shift)))) | ($sl(datum, shift)));
					} else if (xRemaining > leftShift32) {
						$nc(data)->set(i, ($nc(data)->get(i) & mask) | ($usr(datum, rightShift)));
						data->set(++i, $sl(datum, leftShift));
					} else if (xRemaining > leftShift) {
						$nc(data)->set(i, ($nc(data)->get(i) & mask) | ($usr(datum, rightShift)));
						++i;
						data->set(i, (data->get(i) & mask1) | ($sl(datum, leftShift)));
					} else {
						int32_t remainMask = ($sl(1, leftShift - xRemaining)) - 1;
						$nc(data)->set(i, ($nc(data)->get(i) & (mask | remainMask)) | ($usr(datum, rightShift) & ~remainMask));
					}
				}
				eltOffset += lineStride;
			}
		}
	}
}

void ImageUtil::setUnpackedBinaryData($bytes* bdata, $WritableRaster* raster, $Rectangle* rect) {
	$useLocalObjectStack();
	$var($SampleModel, sm, $nc(raster)->getSampleModel());
	if (!isBinary(sm)) {
		$throwNew($IllegalArgumentException, $($I18N::getString("ImageUtil0"_s)));
	}
	int32_t rectX = $nc(rect)->x;
	int32_t rectY = rect->y;
	int32_t rectWidth = rect->width;
	int32_t rectHeight = rect->height;
	$var($DataBuffer, dataBuffer, raster->getDataBuffer());
	int32_t dx = rectX - raster->getSampleModelTranslateX();
	int32_t dy = rectY - raster->getSampleModelTranslateY();
	$var($MultiPixelPackedSampleModel, mpp, $cast($MultiPixelPackedSampleModel, sm));
	int32_t lineStride = $nc(mpp)->getScanlineStride();
	int32_t var$0 = $nc(dataBuffer)->getOffset();
	int32_t eltOffset = var$0 + mpp->getOffset(dx, dy);
	int32_t bitOffset = mpp->getBitOffset(dx);
	int32_t k = 0;
	if ($instanceOf($DataBufferByte, dataBuffer)) {
		$var($bytes, data, $cast($DataBufferByte, dataBuffer)->getData());
		for (int32_t y = 0; y < rectHeight; ++y) {
			int32_t bOffset = eltOffset * 8 + bitOffset;
			for (int32_t x = 0; x < rectWidth; ++x) {
				if ($nc(bdata)->get(k++) != (int8_t)0) {
					(*$nc(data))[bOffset / 8] |= (int8_t)($sl(1, (7 - bOffset) & 7));
				}
				++bOffset;
			}
			eltOffset += lineStride;
		}
	} else if ($instanceOf($DataBufferShort, dataBuffer) || $instanceOf($DataBufferUShort, dataBuffer)) {
		$var($shorts, data, $instanceOf($DataBufferShort, dataBuffer) ? $cast($DataBufferShort, dataBuffer)->getData() : $cast($DataBufferUShort, dataBuffer)->getData());
		for (int32_t y = 0; y < rectHeight; ++y) {
			int32_t bOffset = eltOffset * 16 + bitOffset;
			for (int32_t x = 0; x < rectWidth; ++x) {
				if ($nc(bdata)->get(k++) != (int8_t)0) {
					(*$nc(data))[bOffset / 16] |= (int16_t)($sl(1, 15 - bOffset % 16));
				}
				++bOffset;
			}
			eltOffset += lineStride;
		}
	} else if ($instanceOf($DataBufferInt, dataBuffer)) {
		$var($ints, data, $cast($DataBufferInt, dataBuffer)->getData());
		for (int32_t y = 0; y < rectHeight; ++y) {
			int32_t bOffset = eltOffset * 32 + bitOffset;
			for (int32_t x = 0; x < rectWidth; ++x) {
				if ($nc(bdata)->get(k++) != (int8_t)0) {
					(*$nc(data))[bOffset / 32] |= ($sl(1, 31 - bOffset % 32));
				}
				++bOffset;
			}
			eltOffset += lineStride;
		}
	}
}

bool ImageUtil::isBinary($SampleModel* sm) {
	bool var$0 = $instanceOf($MultiPixelPackedSampleModel, sm) && $cast($MultiPixelPackedSampleModel, sm)->getPixelBitStride() == 1;
	return var$0 && sm->getNumBands() == 1;
}

$ColorModel* ImageUtil::createColorModel($ColorSpace* colorSpace$renamed, $SampleModel* sampleModel) {
	$useLocalObjectStack();
	$var($ColorSpace, colorSpace, colorSpace$renamed);
	$var($ColorModel, colorModel, nullptr);
	if (sampleModel == nullptr) {
		$throwNew($IllegalArgumentException, $($I18N::getString("ImageUtil1"_s)));
	}
	int32_t numBands = $nc(sampleModel)->getNumBands();
	if (numBands < 1 || numBands > 4) {
		return nullptr;
	}
	int32_t dataType = sampleModel->getDataType();
	if ($instanceOf($ComponentSampleModel, sampleModel)) {
		if (dataType < $DataBuffer::TYPE_BYTE || dataType > $DataBuffer::TYPE_DOUBLE) {
			return nullptr;
		}
		if (colorSpace == nullptr) {
			$assign(colorSpace, numBands <= 2 ? $ColorSpace::getInstance($ColorSpace::CS_GRAY) : $ColorSpace::getInstance($ColorSpace::CS_sRGB));
		}
		bool useAlpha = (numBands == 2) || (numBands == 4);
		int32_t transparency = useAlpha ? $Transparency::TRANSLUCENT : $Transparency::OPAQUE;
		bool premultiplied = false;
		int32_t dataTypeSize = $DataBuffer::getDataTypeSize(dataType);
		$var($ints, bits, $new($ints, numBands));
		for (int32_t i = 0; i < numBands; ++i) {
			bits->set(i, dataTypeSize);
		}
		$assign(colorModel, $new($ComponentColorModel, colorSpace, bits, useAlpha, premultiplied, transparency, dataType));
	} else if ($instanceOf($SinglePixelPackedSampleModel, sampleModel)) {
		$var($SinglePixelPackedSampleModel, sppsm, $cast($SinglePixelPackedSampleModel, sampleModel));
		$var($ints, bitMasks, sppsm->getBitMasks());
		int32_t rmask = 0;
		int32_t gmask = 0;
		int32_t bmask = 0;
		int32_t amask = 0;
		numBands = $nc(bitMasks)->length;
		if (numBands <= 2) {
			rmask = (gmask = (bmask = bitMasks->get(0)));
			if (numBands == 2) {
				amask = bitMasks->get(1);
			}
		} else {
			rmask = bitMasks->get(0);
			gmask = bitMasks->get(1);
			bmask = bitMasks->get(2);
			if (numBands == 4) {
				amask = bitMasks->get(3);
			}
		}
		$var($ints, sampleSize, sppsm->getSampleSize());
		int32_t bits = 0;
		for (int32_t i = 0; i < $nc(sampleSize)->length; ++i) {
			bits += sampleSize->get(i);
		}
		if (colorSpace == nullptr) {
			$assign(colorSpace, $ColorSpace::getInstance($ColorSpace::CS_sRGB));
		}
		$assign(colorModel, $new($DirectColorModel, colorSpace, bits, rmask, gmask, bmask, amask, false, sampleModel->getDataType()));
	} else if ($instanceOf($MultiPixelPackedSampleModel, sampleModel)) {
		int32_t bits = $cast($MultiPixelPackedSampleModel, sampleModel)->getPixelBitStride();
		int32_t size = $sl(1, bits);
		$var($bytes, comp, $new($bytes, size));
		for (int32_t i = 0; i < size; ++i) {
			comp->set(i, (int8_t)($div(255 * i, (size - 1))));
		}
		$assign(colorModel, $new($IndexColorModel, bits, size, comp, comp, comp));
	}
	return colorModel;
}

int32_t ImageUtil::getElementSize($SampleModel* sm) {
	int32_t elementSize = $DataBuffer::getDataTypeSize($nc(sm)->getDataType());
	if ($instanceOf($MultiPixelPackedSampleModel, sm)) {
		$var($MultiPixelPackedSampleModel, mppsm, $cast($MultiPixelPackedSampleModel, sm));
		int32_t var$0 = mppsm->getSampleSize(0);
		return var$0 * mppsm->getNumBands();
	} else if ($instanceOf($ComponentSampleModel, sm)) {
		return sm->getNumBands() * elementSize;
	} else if ($instanceOf($SinglePixelPackedSampleModel, sm)) {
		return elementSize;
	}
	return elementSize * sm->getNumBands();
}

int64_t ImageUtil::getTileSize($SampleModel* sm) {
	$useLocalObjectStack();
	int32_t elementSize = $DataBuffer::getDataTypeSize($nc(sm)->getDataType());
	if ($instanceOf($MultiPixelPackedSampleModel, sm)) {
		$var($MultiPixelPackedSampleModel, mppsm, $cast($MultiPixelPackedSampleModel, sm));
		int32_t var$1 = mppsm->getScanlineStride();
		int32_t var$0 = var$1 * mppsm->getHeight();
		return (var$0 + $div((mppsm->getDataBitOffset() + elementSize - 1), elementSize)) * ((elementSize + 7) / 8);
	} else if ($instanceOf($ComponentSampleModel, sm)) {
		$var($ComponentSampleModel, csm, $cast($ComponentSampleModel, sm));
		$var($ints, bandOffsets, csm->getBandOffsets());
		int32_t maxBandOff = $nc(bandOffsets)->get(0);
		for (int32_t i = 1; i < bandOffsets->length; ++i) {
			maxBandOff = $Math::max(maxBandOff, bandOffsets->get(i));
		}
		int64_t size = 0;
		int32_t pixelStride = csm->getPixelStride();
		int32_t scanlineStride = csm->getScanlineStride();
		if (maxBandOff >= 0) {
			size += maxBandOff + 1;
		}
		if (pixelStride > 0) {
			size += pixelStride * (sm->getWidth() - 1);
		}
		if (scanlineStride > 0) {
			size += scanlineStride * (sm->getHeight() - 1);
		}
		$var($ints, bankIndices, csm->getBankIndices());
		maxBandOff = $nc(bankIndices)->get(0);
		for (int32_t i = 1; i < bankIndices->length; ++i) {
			maxBandOff = $Math::max(maxBandOff, bankIndices->get(i));
		}
		return size * (maxBandOff + 1) * ((elementSize + 7) / 8);
	} else if ($instanceOf($SinglePixelPackedSampleModel, sm)) {
		$var($SinglePixelPackedSampleModel, sppsm, $cast($SinglePixelPackedSampleModel, sm));
		int32_t var$3 = sppsm->getScanlineStride();
		int32_t var$2 = var$3 * (sppsm->getHeight() - 1);
		int64_t size = var$2 + sppsm->getWidth();
		return size * ((elementSize + 7) / 8);
	}
	return 0;
}

int64_t ImageUtil::getBandSize($SampleModel* sm) {
	int32_t elementSize = $DataBuffer::getDataTypeSize($nc(sm)->getDataType());
	if ($instanceOf($ComponentSampleModel, sm)) {
		$var($ComponentSampleModel, csm, $cast($ComponentSampleModel, sm));
		int32_t pixelStride = csm->getPixelStride();
		int32_t scanlineStride = csm->getScanlineStride();
		int64_t size = $Math::min(pixelStride, scanlineStride);
		if (pixelStride > 0) {
			size += pixelStride * (sm->getWidth() - 1);
		}
		if (scanlineStride > 0) {
			size += scanlineStride * (sm->getHeight() - 1);
		}
		return size * ((elementSize + 7) / 8);
	} else {
		return getTileSize(sm);
	}
}

bool ImageUtil::isIndicesForGrayscale($bytes* r, $bytes* g, $bytes* b) {
	if ($nc(r)->length != $nc(g)->length || r->length != $nc(b)->length) {
		return false;
	}
	int32_t size = r->length;
	if (size != 256) {
		return false;
	}
	for (int32_t i = 0; i < size; ++i) {
		int8_t temp = (int8_t)i;
		if (r->get(i) != temp || g->get(i) != temp || $nc(b)->get(i) != temp) {
			return false;
		}
	}
	return true;
}

$String* ImageUtil::convertObjectToString(Object$* obj) {
	$useLocalObjectStack();
	if (obj == nullptr) {
		return ""_s;
	}
	$var($String, s, ""_s);
	if ($instanceOf($bytes, obj)) {
		$var($bytes, bArray, $cast($bytes, obj));
		for (int32_t i = 0; i < bArray->length; ++i) {
			$plusAssign(s, $$str({$$str(bArray->get(i)), " "_s}));
		}
		return s;
	}
	if ($instanceOf($ints, obj)) {
		$var($ints, iArray, $cast($ints, obj));
		for (int32_t i = 0; i < iArray->length; ++i) {
			$plusAssign(s, $$str({$$str(iArray->get(i)), " "_s}));
		}
		return s;
	}
	if ($instanceOf($shorts, obj)) {
		$var($shorts, sArray, $cast($shorts, obj));
		for (int32_t i = 0; i < sArray->length; ++i) {
			$plusAssign(s, $$str({$$str(sArray->get(i)), " "_s}));
		}
		return s;
	}
	return $nc($of(obj))->toString();
}

void ImageUtil::canEncodeImage($ImageWriter* writer, $ImageTypeSpecifier* type) {
	$useLocalObjectStack();
	$var($ImageWriterSpi, spi, $nc(writer)->getOriginatingProvider());
	if (type != nullptr && spi != nullptr && !spi->canEncodeImage(type)) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append($($I18N::getString("ImageUtil2"_s)));
		var$0->append(" "_s);
		var$0->append($($of(writer)->getClass()->getName()));
		$throwNew($IIOException, $$str(var$0));
	}
}

void ImageUtil::canEncodeImage($ImageWriter* writer, $ColorModel* colorModel, $SampleModel* sampleModel) {
	$var($ImageTypeSpecifier, type, nullptr);
	if (colorModel != nullptr && sampleModel != nullptr) {
		$assign(type, $new($ImageTypeSpecifier, colorModel, sampleModel));
	}
	canEncodeImage(writer, type);
}

bool ImageUtil::imageIsContiguous($RenderedImage* image) {
	$useLocalObjectStack();
	$var($SampleModel, sm, nullptr);
	if ($instanceOf($BufferedImage, image)) {
		$var($WritableRaster, ras, $cast($BufferedImage, image)->getRaster());
		$assign(sm, $nc(ras)->getSampleModel());
	} else {
		$assign(sm, $nc(image)->getSampleModel());
	}
	if ($instanceOf($ComponentSampleModel, sm)) {
		$var($ComponentSampleModel, csm, $cast($ComponentSampleModel, sm));
		int32_t var$0 = csm->getPixelStride();
		if (var$0 != csm->getNumBands()) {
			return false;
		}
		$var($ints, bandOffsets, csm->getBandOffsets());
		for (int32_t i = 0; i < $nc(bandOffsets)->length; ++i) {
			if (bandOffsets->get(i) != i) {
				return false;
			}
		}
		$var($ints, bankIndices, csm->getBankIndices());
		for (int32_t i = 0; i < bandOffsets->length; ++i) {
			if ($nc(bankIndices)->get(i) != 0) {
				return false;
			}
		}
		return true;
	}
	return ImageUtil::isBinary(sm);
}

$ImageTypeSpecifier* ImageUtil::getDestinationType($ImageReadParam* param, $Iterator* imageTypes) {
	$useLocalObjectStack();
	if (imageTypes == nullptr || !imageTypes->hasNext()) {
		$throwNew($IllegalArgumentException, "imageTypes null or empty!"_s);
	}
	$var($ImageTypeSpecifier, imageType, nullptr);
	if (param != nullptr) {
		$assign(imageType, param->getDestinationType());
	}
	if (imageType == nullptr) {
		$var($Object, o, $nc(imageTypes)->next());
		if (!($instanceOf($ImageTypeSpecifier, o))) {
			$throwNew($IllegalArgumentException, "Non-ImageTypeSpecifier retrieved from imageTypes!"_s);
		}
		$assign(imageType, $cast($ImageTypeSpecifier, o));
	} else {
		bool foundIt = false;
		while ($nc(imageTypes)->hasNext()) {
			$var($ImageTypeSpecifier, type, $cast($ImageTypeSpecifier, imageTypes->next()));
			if ($nc(type)->equals(imageType)) {
				foundIt = true;
				break;
			}
		}
		if (!foundIt) {
			$throwNew($IIOException, "Destination type from ImageReadParam does not match!"_s);
		}
	}
	return imageType;
}

bool ImageUtil::isNonStandardICCColorSpace($ColorSpace* cs) {
	$useLocalObjectStack();
	bool var$3 = $instanceOf($ICC_ColorSpace, cs) && !cs->isCS_sRGB();
	bool var$2 = var$3 && !$of(cs)->equals($($ColorSpace::getInstance($ColorSpace::CS_LINEAR_RGB)));
	bool var$1 = var$2 && !$of(cs)->equals($($ColorSpace::getInstance($ColorSpace::CS_GRAY)));
	bool var$0 = var$1 && !$of(cs)->equals($($ColorSpace::getInstance($ColorSpace::CS_CIEXYZ)));
	return var$0 && !$of(cs)->equals($($ColorSpace::getInstance($ColorSpace::CS_PYCC)));
}

ImageUtil::ImageUtil() {
}

$Class* ImageUtil::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ImageUtil, init$, void)},
		{"canEncodeImage", "(Ljavax/imageio/ImageWriter;Ljavax/imageio/ImageTypeSpecifier;)V", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(ImageUtil, canEncodeImage, void, $ImageWriter*, $ImageTypeSpecifier*), "javax.imageio.IIOException"},
		{"canEncodeImage", "(Ljavax/imageio/ImageWriter;Ljava/awt/image/ColorModel;Ljava/awt/image/SampleModel;)V", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(ImageUtil, canEncodeImage, void, $ImageWriter*, $ColorModel*, $SampleModel*), "javax.imageio.IIOException"},
		{"convertObjectToString", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(ImageUtil, convertObjectToString, $String*, Object$*)},
		{"createColorModel", "(Ljava/awt/image/SampleModel;)Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(ImageUtil, createColorModel, $ColorModel*, $SampleModel*)},
		{"createColorModel", "(Ljava/awt/color/ColorSpace;Ljava/awt/image/SampleModel;)Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $STATIC, $staticMethod(ImageUtil, createColorModel, $ColorModel*, $ColorSpace*, $SampleModel*)},
		{"getBandSize", "(Ljava/awt/image/SampleModel;)J", nullptr, $PUBLIC | $STATIC, $staticMethod(ImageUtil, getBandSize, int64_t, $SampleModel*)},
		{"getDestinationType", "(Ljavax/imageio/ImageReadParam;Ljava/util/Iterator;)Ljavax/imageio/ImageTypeSpecifier;", "(Ljavax/imageio/ImageReadParam;Ljava/util/Iterator<Ljavax/imageio/ImageTypeSpecifier;>;)Ljavax/imageio/ImageTypeSpecifier;", $PUBLIC | $STATIC | $FINAL, $staticMethod(ImageUtil, getDestinationType, $ImageTypeSpecifier*, $ImageReadParam*, $Iterator*), "javax.imageio.IIOException"},
		{"getElementSize", "(Ljava/awt/image/SampleModel;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(ImageUtil, getElementSize, int32_t, $SampleModel*)},
		{"getPackedBinaryData", "(Ljava/awt/image/Raster;Ljava/awt/Rectangle;)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(ImageUtil, getPackedBinaryData, $bytes*, $Raster*, $Rectangle*)},
		{"getTileSize", "(Ljava/awt/image/SampleModel;)J", nullptr, $PUBLIC | $STATIC, $staticMethod(ImageUtil, getTileSize, int64_t, $SampleModel*)},
		{"getUnpackedBinaryData", "(Ljava/awt/image/Raster;Ljava/awt/Rectangle;)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(ImageUtil, getUnpackedBinaryData, $bytes*, $Raster*, $Rectangle*)},
		{"imageIsContiguous", "(Ljava/awt/image/RenderedImage;)Z", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(ImageUtil, imageIsContiguous, bool, $RenderedImage*)},
		{"isBinary", "(Ljava/awt/image/SampleModel;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(ImageUtil, isBinary, bool, $SampleModel*)},
		{"isIndicesForGrayscale", "([B[B[B)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(ImageUtil, isIndicesForGrayscale, bool, $bytes*, $bytes*, $bytes*)},
		{"isNonStandardICCColorSpace", "(Ljava/awt/color/ColorSpace;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(ImageUtil, isNonStandardICCColorSpace, bool, $ColorSpace*)},
		{"setPackedBinaryData", "([BLjava/awt/image/WritableRaster;Ljava/awt/Rectangle;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ImageUtil, setPackedBinaryData, void, $bytes*, $WritableRaster*, $Rectangle*)},
		{"setUnpackedBinaryData", "([BLjava/awt/image/WritableRaster;Ljava/awt/Rectangle;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ImageUtil, setUnpackedBinaryData, void, $bytes*, $WritableRaster*, $Rectangle*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.imageio.plugins.common.ImageUtil",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ImageUtil, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageUtil);
	});
	return class$;
}

$Class* ImageUtil::class$ = nullptr;

				} // common
			} // plugins
		} // imageio
	} // sun
} // com