#include <sun/awt/image/ByteInterleavedRaster.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/ComponentSampleModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferByte.h>
#include <java/awt/image/PixelInterleavedSampleModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/RasterFormatException.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/SinglePixelPackedSampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <sun/awt/image/ByteComponentRaster.h>
#include <sun/awt/image/SunWritableRaster.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ComponentSampleModel = ::java::awt::image::ComponentSampleModel;
using $DataBufferByte = ::java::awt::image::DataBufferByte;
using $PixelInterleavedSampleModel = ::java::awt::image::PixelInterleavedSampleModel;
using $Raster = ::java::awt::image::Raster;
using $RasterFormatException = ::java::awt::image::RasterFormatException;
using $SampleModel = ::java::awt::image::SampleModel;
using $SinglePixelPackedSampleModel = ::java::awt::image::SinglePixelPackedSampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteComponentRaster = ::sun::awt::image::ByteComponentRaster;

namespace sun {
	namespace awt {
		namespace image {

void ByteInterleavedRaster::init$($SampleModel* sampleModel, $Point* origin) {
	$useLocalObjectStack();
	$var($DataBufferByte, var$0, $cast($DataBufferByte, $nc(sampleModel)->createDataBuffer()));
	int32_t var$1 = $nc(origin)->x;
	int32_t var$2 = origin->y;
	int32_t var$3 = sampleModel->getWidth();
	ByteInterleavedRaster::init$(sampleModel, var$0, $$new($Rectangle, var$1, var$2, var$3, sampleModel->getHeight()), origin, nullptr);
}

void ByteInterleavedRaster::init$($SampleModel* sampleModel, $DataBufferByte* dataBuffer, $Point* origin) {
	int32_t var$0 = $nc(origin)->x;
	int32_t var$1 = origin->y;
	int32_t var$2 = $nc(sampleModel)->getWidth();
	ByteInterleavedRaster::init$(sampleModel, dataBuffer, $$new($Rectangle, var$0, var$1, var$2, sampleModel->getHeight()), origin, nullptr);
}

bool ByteInterleavedRaster::isInterleaved($ComponentSampleModel* sm) {
	$useLocalObjectStack();
	int32_t numBands = $nc(this->sampleModel)->getNumBands();
	if (numBands == 1) {
		return true;
	}
	$var($ints, bankIndices, $nc(sm)->getBankIndices());
	for (int32_t i = 0; i < numBands; ++i) {
		if ($nc(bankIndices)->get(i) != 0) {
			return false;
		}
	}
	$var($ints, bandOffsets, sm->getBandOffsets());
	int32_t minOffset = $nc(bandOffsets)->get(0);
	int32_t maxOffset = minOffset;
	for (int32_t i = 1; i < numBands; ++i) {
		int32_t offset = bandOffsets->get(i);
		if (offset < minOffset) {
			minOffset = offset;
		}
		if (offset > maxOffset) {
			maxOffset = offset;
		}
	}
	if (maxOffset - minOffset >= sm->getPixelStride()) {
		return false;
	}
	return true;
}

void ByteInterleavedRaster::init$($SampleModel* sampleModel, $DataBufferByte* dataBuffer, $Rectangle* aRegion, $Point* origin, ByteInterleavedRaster* parent) {
	$useLocalObjectStack();
	$ByteComponentRaster::init$(sampleModel, dataBuffer, aRegion, origin, parent);
	this->packed = false;
	this->maxX = this->minX + this->width;
	this->maxY = this->minY + this->height;
	$set(this, data, stealData(dataBuffer, 0));
	int32_t xOffset = $nc(aRegion)->x - $nc(origin)->x;
	int32_t yOffset = aRegion->y - origin->y;
	if ($instanceOf($PixelInterleavedSampleModel, sampleModel) || ($instanceOf($ComponentSampleModel, sampleModel) && isInterleaved($cast($ComponentSampleModel, sampleModel)))) {
		$var($ComponentSampleModel, csm, $cast($ComponentSampleModel, sampleModel));
		this->scanlineStride = $nc(csm)->getScanlineStride();
		this->pixelStride = csm->getPixelStride();
		$set(this, dataOffsets, csm->getBandOffsets());
		for (int32_t i = 0; i < getNumDataElements(); ++i) {
			(*$nc(this->dataOffsets))[i] += xOffset * this->pixelStride + yOffset * this->scanlineStride;
		}
	} else if ($instanceOf($SinglePixelPackedSampleModel, sampleModel)) {
		$var($SinglePixelPackedSampleModel, sppsm, $cast($SinglePixelPackedSampleModel, sampleModel));
		this->packed = true;
		$set(this, bitMasks, sppsm->getBitMasks());
		$set(this, bitOffsets, sppsm->getBitOffsets());
		this->scanlineStride = sppsm->getScanlineStride();
		this->pixelStride = 1;
		$set(this, dataOffsets, $new($ints, 1));
		this->dataOffsets->set(0, $nc(dataBuffer)->getOffset());
		(*$nc(this->dataOffsets))[0] += xOffset * this->pixelStride + yOffset * this->scanlineStride;
	} else {
		$throwNew($RasterFormatException, $$str({"ByteInterleavedRasters must have PixelInterleavedSampleModel, SinglePixelPackedSampleModel or interleaved ComponentSampleModel.  Sample model is "_s, sampleModel}));
	}
	this->bandOffset = $nc(this->dataOffsets)->get(0);
	this->dbOffsetPacked = $nc(dataBuffer)->getOffset() - this->sampleModelTranslateY * this->scanlineStride - this->sampleModelTranslateX * this->pixelStride;
	this->dbOffset = this->dbOffsetPacked - (xOffset * this->pixelStride + yOffset * this->scanlineStride);
	this->inOrder = false;
	if (this->numDataElements == this->pixelStride) {
		this->inOrder = true;
		for (int32_t i = 1; i < this->numDataElements; ++i) {
			if ($nc(this->dataOffsets)->get(i) - $nc(this->dataOffsets)->get(0) != i) {
				this->inOrder = false;
				break;
			}
		}
	}
	verify();
}

$ints* ByteInterleavedRaster::getDataOffsets() {
	return $cast($ints, $nc(this->dataOffsets)->clone());
}

int32_t ByteInterleavedRaster::getDataOffset(int32_t band) {
	return $nc(this->dataOffsets)->get(band);
}

int32_t ByteInterleavedRaster::getScanlineStride() {
	return this->scanlineStride;
}

int32_t ByteInterleavedRaster::getPixelStride() {
	return this->pixelStride;
}

$bytes* ByteInterleavedRaster::getDataStorage() {
	return this->data;
}

$Object* ByteInterleavedRaster::getDataElements(int32_t x, int32_t y, Object$* obj) {
	if ((x < this->minX) || (y < this->minY) || (x >= this->maxX) || (y >= this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($bytes, outData, nullptr);
	if (obj == nullptr) {
		$assign(outData, $new($bytes, this->numDataElements));
	} else {
		$assign(outData, $cast($bytes, obj));
	}
	int32_t off = (y - this->minY) * this->scanlineStride + (x - this->minX) * this->pixelStride;
	for (int32_t band = 0; band < this->numDataElements; ++band) {
		$nc(outData)->set(band, $nc(this->data)->get($nc(this->dataOffsets)->get(band) + off));
	}
	return outData;
}

$Object* ByteInterleavedRaster::getDataElements(int32_t x, int32_t y, int32_t w, int32_t h, Object$* obj) {
	return getByteData(x, y, w, h, $cast($bytes, obj));
}

$bytes* ByteInterleavedRaster::getByteData(int32_t x, int32_t y, int32_t w, int32_t h, int32_t band, $bytes* outData$renamed) {
	$var($bytes, outData, outData$renamed);
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	if (outData == nullptr) {
		$assign(outData, $new($bytes, w * h));
	}
	int32_t yoff = (y - this->minY) * this->scanlineStride + (x - this->minX) * this->pixelStride + $nc(this->dataOffsets)->get(band);
	int32_t xoff = 0;
	int32_t off = 0;
	int32_t xstart = 0;
	int32_t ystart = 0;
	if (this->pixelStride == 1) {
		if (this->scanlineStride == w) {
			$System::arraycopy(this->data, yoff, outData, 0, w * h);
		} else {
			for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
				$System::arraycopy(this->data, yoff, outData, off, w);
				off += w;
			}
		}
	} else {
		for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
			xoff = yoff;
			for (xstart = 0; xstart < w; ++xstart, xoff += this->pixelStride) {
				$nc(outData)->set(off++, $nc(this->data)->get(xoff));
			}
		}
	}
	return outData;
}

$bytes* ByteInterleavedRaster::getByteData(int32_t x, int32_t y, int32_t w, int32_t h, $bytes* outData$renamed) {
	$var($bytes, outData, outData$renamed);
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	if (outData == nullptr) {
		$assign(outData, $new($bytes, this->numDataElements * w * h));
	}
	int32_t yoff = (y - this->minY) * this->scanlineStride + (x - this->minX) * this->pixelStride;
	int32_t xoff = 0;
	int32_t off = 0;
	int32_t xstart = 0;
	int32_t ystart = 0;
	if (this->inOrder) {
		yoff += $nc(this->dataOffsets)->get(0);
		int32_t rowBytes = w * this->pixelStride;
		if (this->scanlineStride == rowBytes) {
			$System::arraycopy(this->data, yoff, outData, off, rowBytes * h);
		} else {
			for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
				$System::arraycopy(this->data, yoff, outData, off, rowBytes);
				off += rowBytes;
			}
		}
	} else if (this->numDataElements == 1) {
		yoff += $nc(this->dataOffsets)->get(0);
		for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
			xoff = yoff;
			for (xstart = 0; xstart < w; ++xstart, xoff += this->pixelStride) {
				$nc(outData)->set(off++, $nc(this->data)->get(xoff));
			}
		}
	} else if (this->numDataElements == 2) {
		yoff += $nc(this->dataOffsets)->get(0);
		int32_t d1 = this->dataOffsets->get(1) - this->dataOffsets->get(0);
		for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
			xoff = yoff;
			for (xstart = 0; xstart < w; ++xstart, xoff += this->pixelStride) {
				$nc(outData)->set(off++, $nc(this->data)->get(xoff));
				outData->set(off++, this->data->get(xoff + d1));
			}
		}
	} else if (this->numDataElements == 3) {
		yoff += $nc(this->dataOffsets)->get(0);
		int32_t d1 = this->dataOffsets->get(1) - this->dataOffsets->get(0);
		int32_t d2 = this->dataOffsets->get(2) - this->dataOffsets->get(0);
		for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
			xoff = yoff;
			for (xstart = 0; xstart < w; ++xstart, xoff += this->pixelStride) {
				$nc(outData)->set(off++, $nc(this->data)->get(xoff));
				outData->set(off++, this->data->get(xoff + d1));
				outData->set(off++, this->data->get(xoff + d2));
			}
		}
	} else if (this->numDataElements == 4) {
		yoff += $nc(this->dataOffsets)->get(0);
		int32_t d1 = this->dataOffsets->get(1) - this->dataOffsets->get(0);
		int32_t d2 = this->dataOffsets->get(2) - this->dataOffsets->get(0);
		int32_t d3 = this->dataOffsets->get(3) - this->dataOffsets->get(0);
		for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
			xoff = yoff;
			for (xstart = 0; xstart < w; ++xstart, xoff += this->pixelStride) {
				$nc(outData)->set(off++, $nc(this->data)->get(xoff));
				outData->set(off++, this->data->get(xoff + d1));
				outData->set(off++, this->data->get(xoff + d2));
				outData->set(off++, this->data->get(xoff + d3));
			}
		}
	} else {
		for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
			xoff = yoff;
			for (xstart = 0; xstart < w; ++xstart, xoff += this->pixelStride) {
				for (int32_t c = 0; c < this->numDataElements; ++c) {
					$nc(outData)->set(off++, $nc(this->data)->get($nc(this->dataOffsets)->get(c) + xoff));
				}
			}
		}
	}
	return outData;
}

void ByteInterleavedRaster::setDataElements(int32_t x, int32_t y, Object$* obj) {
	if ((x < this->minX) || (y < this->minY) || (x >= this->maxX) || (y >= this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($bytes, inData, $cast($bytes, obj));
	int32_t off = (y - this->minY) * this->scanlineStride + (x - this->minX) * this->pixelStride;
	for (int32_t i = 0; i < this->numDataElements; ++i) {
		$nc(this->data)->set($nc(this->dataOffsets)->get(i) + off, $nc(inData)->get(i));
	}
	markDirty();
}

void ByteInterleavedRaster::setDataElements(int32_t x, int32_t y, $Raster* inRaster) {
	int32_t srcOffX = $nc(inRaster)->getMinX();
	int32_t srcOffY = inRaster->getMinY();
	int32_t dstOffX = x + srcOffX;
	int32_t dstOffY = y + srcOffY;
	int32_t width = inRaster->getWidth();
	int32_t height = inRaster->getHeight();
	if ((dstOffX < this->minX) || (dstOffY < this->minY) || (dstOffX + width > this->maxX) || (dstOffY + height > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	setDataElements(dstOffX, dstOffY, srcOffX, srcOffY, width, height, inRaster);
}

void ByteInterleavedRaster::setDataElements(int32_t dstX, int32_t dstY, int32_t srcX, int32_t srcY, int32_t width, int32_t height, $Raster* inRaster) {
	$useLocalObjectStack();
	if (width <= 0 || height <= 0) {
		return;
	}
	int32_t srcOffX = $nc(inRaster)->getMinX();
	int32_t srcOffY = inRaster->getMinY();
	$var($Object, tdata, nullptr);
	if ($instanceOf(ByteInterleavedRaster, inRaster)) {
		$var(ByteInterleavedRaster, bct, $cast(ByteInterleavedRaster, inRaster));
		$var($bytes, bdata, bct->getDataStorage());
		if (this->inOrder && bct->inOrder && this->pixelStride == bct->pixelStride) {
			int32_t toff = bct->getDataOffset(0);
			int32_t tss = bct->getScanlineStride();
			int32_t tps = bct->getPixelStride();
			int32_t srcOffset = toff + (srcY - srcOffY) * tss + (srcX - srcOffX) * tps;
			int32_t dstOffset = $nc(this->dataOffsets)->get(0) + (dstY - this->minY) * this->scanlineStride + (dstX - this->minX) * this->pixelStride;
			int32_t nbytes = width * this->pixelStride;
			for (int32_t tmpY = 0; tmpY < height; ++tmpY) {
				$System::arraycopy(bdata, srcOffset, this->data, dstOffset, nbytes);
				srcOffset += tss;
				dstOffset += this->scanlineStride;
			}
			markDirty();
			return;
		}
	}
	for (int32_t startY = 0; startY < height; ++startY) {
		$assign(tdata, inRaster->getDataElements(srcOffX, srcOffY + startY, width, 1, tdata));
		setDataElements(dstX, dstY + startY, width, 1, tdata);
	}
}

void ByteInterleavedRaster::setDataElements(int32_t x, int32_t y, int32_t w, int32_t h, Object$* obj) {
	putByteData(x, y, w, h, $cast($bytes, obj));
}

void ByteInterleavedRaster::putByteData(int32_t x, int32_t y, int32_t w, int32_t h, int32_t band, $bytes* inData) {
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t yoff = (y - this->minY) * this->scanlineStride + (x - this->minX) * this->pixelStride + $nc(this->dataOffsets)->get(band);
	int32_t xoff = 0;
	int32_t off = 0;
	int32_t xstart = 0;
	int32_t ystart = 0;
	if (this->pixelStride == 1) {
		if (this->scanlineStride == w) {
			$System::arraycopy(inData, 0, this->data, yoff, w * h);
		} else {
			for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
				$System::arraycopy(inData, off, this->data, yoff, w);
				off += w;
			}
		}
	} else {
		for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
			xoff = yoff;
			for (xstart = 0; xstart < w; ++xstart, xoff += this->pixelStride) {
				$nc(this->data)->set(xoff, $nc(inData)->get(off++));
			}
		}
	}
	markDirty();
}

void ByteInterleavedRaster::putByteData(int32_t x, int32_t y, int32_t w, int32_t h, $bytes* inData) {
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t yoff = (y - this->minY) * this->scanlineStride + (x - this->minX) * this->pixelStride;
	int32_t xoff = 0;
	int32_t off = 0;
	int32_t xstart = 0;
	int32_t ystart = 0;
	if (this->inOrder) {
		yoff += $nc(this->dataOffsets)->get(0);
		int32_t rowBytes = w * this->pixelStride;
		if (rowBytes == this->scanlineStride) {
			$System::arraycopy(inData, 0, this->data, yoff, rowBytes * h);
		} else {
			for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
				$System::arraycopy(inData, off, this->data, yoff, rowBytes);
				off += rowBytes;
			}
		}
	} else if (this->numDataElements == 1) {
		yoff += $nc(this->dataOffsets)->get(0);
		for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
			xoff = yoff;
			for (xstart = 0; xstart < w; ++xstart, xoff += this->pixelStride) {
				$nc(this->data)->set(xoff, $nc(inData)->get(off++));
			}
		}
	} else if (this->numDataElements == 2) {
		yoff += $nc(this->dataOffsets)->get(0);
		int32_t d1 = this->dataOffsets->get(1) - this->dataOffsets->get(0);
		for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
			xoff = yoff;
			for (xstart = 0; xstart < w; ++xstart, xoff += this->pixelStride) {
				$nc(this->data)->set(xoff, $nc(inData)->get(off++));
				this->data->set(xoff + d1, inData->get(off++));
			}
		}
	} else if (this->numDataElements == 3) {
		yoff += $nc(this->dataOffsets)->get(0);
		int32_t d1 = this->dataOffsets->get(1) - this->dataOffsets->get(0);
		int32_t d2 = this->dataOffsets->get(2) - this->dataOffsets->get(0);
		for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
			xoff = yoff;
			for (xstart = 0; xstart < w; ++xstart, xoff += this->pixelStride) {
				$nc(this->data)->set(xoff, $nc(inData)->get(off++));
				this->data->set(xoff + d1, inData->get(off++));
				this->data->set(xoff + d2, inData->get(off++));
			}
		}
	} else if (this->numDataElements == 4) {
		yoff += $nc(this->dataOffsets)->get(0);
		int32_t d1 = this->dataOffsets->get(1) - this->dataOffsets->get(0);
		int32_t d2 = this->dataOffsets->get(2) - this->dataOffsets->get(0);
		int32_t d3 = this->dataOffsets->get(3) - this->dataOffsets->get(0);
		for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
			xoff = yoff;
			for (xstart = 0; xstart < w; ++xstart, xoff += this->pixelStride) {
				$nc(this->data)->set(xoff, $nc(inData)->get(off++));
				this->data->set(xoff + d1, inData->get(off++));
				this->data->set(xoff + d2, inData->get(off++));
				this->data->set(xoff + d3, inData->get(off++));
			}
		}
	} else {
		for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
			xoff = yoff;
			for (xstart = 0; xstart < w; ++xstart, xoff += this->pixelStride) {
				for (int32_t c = 0; c < this->numDataElements; ++c) {
					$nc(this->data)->set($nc(this->dataOffsets)->get(c) + xoff, $nc(inData)->get(off++));
				}
			}
		}
	}
	markDirty();
}

int32_t ByteInterleavedRaster::getSample(int32_t x, int32_t y, int32_t b) {
	if ((x < this->minX) || (y < this->minY) || (x >= this->maxX) || (y >= this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	if (this->packed) {
		int32_t offset = y * this->scanlineStride + x + this->dbOffsetPacked;
		int8_t sample = $nc(this->data)->get(offset);
		return $usr(sample & $nc(this->bitMasks)->get(b), $nc(this->bitOffsets)->get(b));
	} else {
		int32_t offset = y * this->scanlineStride + x * this->pixelStride + this->dbOffset;
		return $nc(this->data)->get(offset + $nc(this->dataOffsets)->get(b)) & 0xff;
	}
}

void ByteInterleavedRaster::setSample(int32_t x, int32_t y, int32_t b, int32_t s) {
	if ((x < this->minX) || (y < this->minY) || (x >= this->maxX) || (y >= this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	if (this->packed) {
		int32_t offset = y * this->scanlineStride + x + this->dbOffsetPacked;
		int32_t bitMask = $nc(this->bitMasks)->get(b);
		int8_t value = $nc(this->data)->get(offset);
		value &= (uint8_t)~bitMask;
		value |= ($sl(s, $nc(this->bitOffsets)->get(b))) & bitMask;
		this->data->set(offset, value);
	} else {
		int32_t offset = y * this->scanlineStride + x * this->pixelStride + this->dbOffset;
		$nc(this->data)->set(offset + $nc(this->dataOffsets)->get(b), (int8_t)s);
	}
	markDirty();
}

$ints* ByteInterleavedRaster::getSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $ints* iArray) {
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($ints, samples, nullptr);
	if (iArray != nullptr) {
		$assign(samples, iArray);
	} else {
		$assign(samples, $new($ints, w * h));
	}
	int32_t lineOffset = y * this->scanlineStride + x * this->pixelStride;
	int32_t dstOffset = 0;
	if (this->packed) {
		lineOffset += this->dbOffsetPacked;
		int32_t bitMask = $nc(this->bitMasks)->get(b);
		int32_t bitOffset = $nc(this->bitOffsets)->get(b);
		for (int32_t j = 0; j < h; ++j) {
			int32_t sampleOffset = lineOffset;
			for (int32_t i = 0; i < w; ++i) {
				int32_t value = $nc(this->data)->get(sampleOffset++);
				$nc(samples)->set(dstOffset++, ($usr(value & bitMask, bitOffset)));
			}
			lineOffset += this->scanlineStride;
		}
	} else {
		lineOffset += this->dbOffset + $nc(this->dataOffsets)->get(b);
		for (int32_t j = 0; j < h; ++j) {
			int32_t sampleOffset = lineOffset;
			for (int32_t i = 0; i < w; ++i) {
				$nc(samples)->set(dstOffset++, $nc(this->data)->get(sampleOffset) & 0xff);
				sampleOffset += this->pixelStride;
			}
			lineOffset += this->scanlineStride;
		}
	}
	return samples;
}

void ByteInterleavedRaster::setSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $ints* iArray) {
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t lineOffset = y * this->scanlineStride + x * this->pixelStride;
	int32_t srcOffset = 0;
	if (this->packed) {
		lineOffset += this->dbOffsetPacked;
		int32_t bitMask = $nc(this->bitMasks)->get(b);
		for (int32_t j = 0; j < h; ++j) {
			int32_t sampleOffset = lineOffset;
			for (int32_t i = 0; i < w; ++i) {
				int8_t value = $nc(this->data)->get(sampleOffset);
				value &= (uint8_t)~bitMask;
				int32_t sample = $nc(iArray)->get(srcOffset++);
				value |= ($sl(sample, $nc(this->bitOffsets)->get(b))) & bitMask;
				this->data->set(sampleOffset++, value);
			}
			lineOffset += this->scanlineStride;
		}
	} else {
		lineOffset += this->dbOffset + $nc(this->dataOffsets)->get(b);
		for (int32_t i = 0; i < h; ++i) {
			int32_t sampleOffset = lineOffset;
			for (int32_t j = 0; j < w; ++j) {
				$nc(this->data)->set(sampleOffset, (int8_t)$nc(iArray)->get(srcOffset++));
				sampleOffset += this->pixelStride;
			}
			lineOffset += this->scanlineStride;
		}
	}
	markDirty();
}

$ints* ByteInterleavedRaster::getPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ints* iArray) {
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($ints, pixels, nullptr);
	if (iArray != nullptr) {
		$assign(pixels, iArray);
	} else {
		$assign(pixels, $new($ints, w * h * this->numBands));
	}
	int32_t lineOffset = y * this->scanlineStride + x * this->pixelStride;
	int32_t dstOffset = 0;
	if (this->packed) {
		lineOffset += this->dbOffsetPacked;
		for (int32_t j = 0; j < h; ++j) {
			for (int32_t i = 0; i < w; ++i) {
				int32_t value = $nc(this->data)->get(lineOffset + i);
				for (int32_t k = 0; k < this->numBands; ++k) {
					$nc(pixels)->set(dstOffset++, $usr(value & $nc(this->bitMasks)->get(k), $nc(this->bitOffsets)->get(k)));
				}
			}
			lineOffset += this->scanlineStride;
		}
	} else {
		lineOffset += this->dbOffset;
		int32_t d0 = $nc(this->dataOffsets)->get(0);
		if (this->numBands == 1) {
			for (int32_t j = 0; j < h; ++j) {
				int32_t pixelOffset = lineOffset + d0;
				for (int32_t i = 0; i < w; ++i) {
					$nc(pixels)->set(dstOffset++, $nc(this->data)->get(pixelOffset) & 0xff);
					pixelOffset += this->pixelStride;
				}
				lineOffset += this->scanlineStride;
			}
		} else if (this->numBands == 2) {
			int32_t d1 = this->dataOffsets->get(1) - d0;
			for (int32_t j = 0; j < h; ++j) {
				int32_t pixelOffset = lineOffset + d0;
				for (int32_t i = 0; i < w; ++i) {
					$nc(pixels)->set(dstOffset++, $nc(this->data)->get(pixelOffset) & 0xff);
					pixels->set(dstOffset++, this->data->get(pixelOffset + d1) & 0xff);
					pixelOffset += this->pixelStride;
				}
				lineOffset += this->scanlineStride;
			}
		} else if (this->numBands == 3) {
			int32_t d1 = this->dataOffsets->get(1) - d0;
			int32_t d2 = this->dataOffsets->get(2) - d0;
			for (int32_t j = 0; j < h; ++j) {
				int32_t pixelOffset = lineOffset + d0;
				for (int32_t i = 0; i < w; ++i) {
					$nc(pixels)->set(dstOffset++, $nc(this->data)->get(pixelOffset) & 0xff);
					pixels->set(dstOffset++, this->data->get(pixelOffset + d1) & 0xff);
					pixels->set(dstOffset++, this->data->get(pixelOffset + d2) & 0xff);
					pixelOffset += this->pixelStride;
				}
				lineOffset += this->scanlineStride;
			}
		} else if (this->numBands == 4) {
			int32_t d1 = this->dataOffsets->get(1) - d0;
			int32_t d2 = this->dataOffsets->get(2) - d0;
			int32_t d3 = this->dataOffsets->get(3) - d0;
			for (int32_t j = 0; j < h; ++j) {
				int32_t pixelOffset = lineOffset + d0;
				for (int32_t i = 0; i < w; ++i) {
					$nc(pixels)->set(dstOffset++, $nc(this->data)->get(pixelOffset) & 0xff);
					pixels->set(dstOffset++, this->data->get(pixelOffset + d1) & 0xff);
					pixels->set(dstOffset++, this->data->get(pixelOffset + d2) & 0xff);
					pixels->set(dstOffset++, this->data->get(pixelOffset + d3) & 0xff);
					pixelOffset += this->pixelStride;
				}
				lineOffset += this->scanlineStride;
			}
		} else {
			for (int32_t j = 0; j < h; ++j) {
				int32_t pixelOffset = lineOffset;
				for (int32_t i = 0; i < w; ++i) {
					for (int32_t k = 0; k < this->numBands; ++k) {
						$nc(pixels)->set(dstOffset++, $nc(this->data)->get(pixelOffset + this->dataOffsets->get(k)) & 0xff);
					}
					pixelOffset += this->pixelStride;
				}
				lineOffset += this->scanlineStride;
			}
		}
	}
	return pixels;
}

void ByteInterleavedRaster::setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ints* iArray) {
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t lineOffset = y * this->scanlineStride + x * this->pixelStride;
	int32_t srcOffset = 0;
	if (this->packed) {
		lineOffset += this->dbOffsetPacked;
		for (int32_t j = 0; j < h; ++j) {
			for (int32_t i = 0; i < w; ++i) {
				int32_t value = 0;
				for (int32_t k = 0; k < this->numBands; ++k) {
					int32_t srcValue = $nc(iArray)->get(srcOffset++);
					value |= (($sl(srcValue, $nc(this->bitOffsets)->get(k))) & $nc(this->bitMasks)->get(k));
				}
				$nc(this->data)->set(lineOffset + i, (int8_t)value);
			}
			lineOffset += this->scanlineStride;
		}
	} else {
		lineOffset += this->dbOffset;
		int32_t d0 = $nc(this->dataOffsets)->get(0);
		if (this->numBands == 1) {
			for (int32_t j = 0; j < h; ++j) {
				int32_t pixelOffset = lineOffset + d0;
				for (int32_t i = 0; i < w; ++i) {
					$nc(this->data)->set(pixelOffset, (int8_t)$nc(iArray)->get(srcOffset++));
					pixelOffset += this->pixelStride;
				}
				lineOffset += this->scanlineStride;
			}
		} else if (this->numBands == 2) {
			int32_t d1 = this->dataOffsets->get(1) - d0;
			for (int32_t j = 0; j < h; ++j) {
				int32_t pixelOffset = lineOffset + d0;
				for (int32_t i = 0; i < w; ++i) {
					$nc(this->data)->set(pixelOffset, (int8_t)$nc(iArray)->get(srcOffset++));
					this->data->set(pixelOffset + d1, (int8_t)iArray->get(srcOffset++));
					pixelOffset += this->pixelStride;
				}
				lineOffset += this->scanlineStride;
			}
		} else if (this->numBands == 3) {
			int32_t d1 = this->dataOffsets->get(1) - d0;
			int32_t d2 = this->dataOffsets->get(2) - d0;
			for (int32_t j = 0; j < h; ++j) {
				int32_t pixelOffset = lineOffset + d0;
				for (int32_t i = 0; i < w; ++i) {
					$nc(this->data)->set(pixelOffset, (int8_t)$nc(iArray)->get(srcOffset++));
					this->data->set(pixelOffset + d1, (int8_t)iArray->get(srcOffset++));
					this->data->set(pixelOffset + d2, (int8_t)iArray->get(srcOffset++));
					pixelOffset += this->pixelStride;
				}
				lineOffset += this->scanlineStride;
			}
		} else if (this->numBands == 4) {
			int32_t d1 = this->dataOffsets->get(1) - d0;
			int32_t d2 = this->dataOffsets->get(2) - d0;
			int32_t d3 = this->dataOffsets->get(3) - d0;
			for (int32_t j = 0; j < h; ++j) {
				int32_t pixelOffset = lineOffset + d0;
				for (int32_t i = 0; i < w; ++i) {
					$nc(this->data)->set(pixelOffset, (int8_t)$nc(iArray)->get(srcOffset++));
					this->data->set(pixelOffset + d1, (int8_t)iArray->get(srcOffset++));
					this->data->set(pixelOffset + d2, (int8_t)iArray->get(srcOffset++));
					this->data->set(pixelOffset + d3, (int8_t)iArray->get(srcOffset++));
					pixelOffset += this->pixelStride;
				}
				lineOffset += this->scanlineStride;
			}
		} else {
			for (int32_t j = 0; j < h; ++j) {
				int32_t pixelOffset = lineOffset;
				for (int32_t i = 0; i < w; ++i) {
					for (int32_t k = 0; k < this->numBands; ++k) {
						$nc(this->data)->set(pixelOffset + this->dataOffsets->get(k), (int8_t)$nc(iArray)->get(srcOffset++));
					}
					pixelOffset += this->pixelStride;
				}
				lineOffset += this->scanlineStride;
			}
		}
	}
	markDirty();
}

void ByteInterleavedRaster::setRect(int32_t dx, int32_t dy, $Raster* srcRaster) {
	if (!($instanceOf(ByteInterleavedRaster, srcRaster))) {
		$ByteComponentRaster::setRect(dx, dy, srcRaster);
		return;
	}
	int32_t width = $nc(srcRaster)->getWidth();
	int32_t height = srcRaster->getHeight();
	int32_t srcOffX = srcRaster->getMinX();
	int32_t srcOffY = srcRaster->getMinY();
	int32_t dstOffX = dx + srcOffX;
	int32_t dstOffY = dy + srcOffY;
	if (dstOffX < this->minX) {
		int32_t skipX = this->minX - dstOffX;
		width -= skipX;
		srcOffX += skipX;
		dstOffX = this->minX;
	}
	if (dstOffY < this->minY) {
		int32_t skipY = this->minY - dstOffY;
		height -= skipY;
		srcOffY += skipY;
		dstOffY = this->minY;
	}
	if (dstOffX + width > this->maxX) {
		width = this->maxX - dstOffX;
	}
	if (dstOffY + height > this->maxY) {
		height = this->maxY - dstOffY;
	}
	setDataElements(dstOffX, dstOffY, srcOffX, srcOffY, width, height, srcRaster);
}

$Raster* ByteInterleavedRaster::createChild(int32_t x, int32_t y, int32_t width, int32_t height, int32_t x0, int32_t y0, $ints* bandList) {
	$var($WritableRaster, newRaster, createWritableChild(x, y, width, height, x0, y0, bandList));
	return $cast($Raster, newRaster);
}

$WritableRaster* ByteInterleavedRaster::createWritableChild(int32_t x, int32_t y, int32_t width, int32_t height, int32_t x0, int32_t y0, $ints* bandList) {
	$useLocalObjectStack();
	if (x < this->minX) {
		$throwNew($RasterFormatException, "x lies outside the raster"_s);
	}
	if (y < this->minY) {
		$throwNew($RasterFormatException, "y lies outside the raster"_s);
	}
	if ((x + width < x) || (x + width > this->minX + this->width)) {
		$throwNew($RasterFormatException, "(x + width) is outside of Raster"_s);
	}
	if ((y + height < y) || (y + height > this->minY + this->height)) {
		$throwNew($RasterFormatException, "(y + height) is outside of Raster"_s);
	}
	$var($SampleModel, sm, nullptr);
	if (bandList != nullptr) {
		$assign(sm, $nc(this->sampleModel)->createSubsetSampleModel(bandList));
	} else {
		$assign(sm, this->sampleModel);
	}
	int32_t deltaX = x0 - x;
	int32_t deltaY = y0 - y;
	$var($DataBufferByte, var$0, $cast($DataBufferByte, this->dataBuffer));
	$var($Rectangle, var$1, $new($Rectangle, x0, y0, width, height));
	return $new(ByteInterleavedRaster, sm, var$0, var$1, $$new($Point, this->sampleModelTranslateX + deltaX, this->sampleModelTranslateY + deltaY), this);
}

$WritableRaster* ByteInterleavedRaster::createCompatibleWritableRaster(int32_t w, int32_t h) {
	$useLocalObjectStack();
	if (w <= 0 || h <= 0) {
		$throwNew($RasterFormatException, $$str({"negative "_s, ((w <= 0) ? "width"_s : "height"_s)}));
	}
	$var($SampleModel, sm, $nc(this->sampleModel)->createCompatibleSampleModel(w, h));
	return $new(ByteInterleavedRaster, sm, $$new($Point, 0, 0));
}

$WritableRaster* ByteInterleavedRaster::createCompatibleWritableRaster() {
	return createCompatibleWritableRaster(this->width, this->height);
}

$String* ByteInterleavedRaster::toString() {
	$useLocalObjectStack();
	return $new($String, $$str({"ByteInterleavedRaster: width = "_s, $$str(this->width), " height = "_s, $$str(this->height), " #numDataElements "_s, $$str(this->numDataElements), " dataOff[0] = "_s, $$str($nc(this->dataOffsets)->get(0))}));
}

ByteInterleavedRaster::ByteInterleavedRaster() {
}

$Class* ByteInterleavedRaster::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inOrder", "Z", nullptr, 0, $field(ByteInterleavedRaster, inOrder)},
		{"dbOffset", "I", nullptr, 0, $field(ByteInterleavedRaster, dbOffset)},
		{"dbOffsetPacked", "I", nullptr, 0, $field(ByteInterleavedRaster, dbOffsetPacked)},
		{"packed", "Z", nullptr, 0, $field(ByteInterleavedRaster, packed)},
		{"bitMasks", "[I", nullptr, 0, $field(ByteInterleavedRaster, bitMasks)},
		{"bitOffsets", "[I", nullptr, 0, $field(ByteInterleavedRaster, bitOffsets)},
		{"maxX", "I", nullptr, $PRIVATE, $field(ByteInterleavedRaster, maxX)},
		{"maxY", "I", nullptr, $PRIVATE, $field(ByteInterleavedRaster, maxY)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/image/SampleModel;Ljava/awt/Point;)V", nullptr, $PUBLIC, $method(ByteInterleavedRaster, init$, void, $SampleModel*, $Point*)},
		{"<init>", "(Ljava/awt/image/SampleModel;Ljava/awt/image/DataBufferByte;Ljava/awt/Point;)V", nullptr, $PUBLIC, $method(ByteInterleavedRaster, init$, void, $SampleModel*, $DataBufferByte*, $Point*)},
		{"<init>", "(Ljava/awt/image/SampleModel;Ljava/awt/image/DataBufferByte;Ljava/awt/Rectangle;Ljava/awt/Point;Lsun/awt/image/ByteInterleavedRaster;)V", nullptr, $PUBLIC, $method(ByteInterleavedRaster, init$, void, $SampleModel*, $DataBufferByte*, $Rectangle*, $Point*, ByteInterleavedRaster*)},
		{"createChild", "(IIIIII[I)Ljava/awt/image/Raster;", nullptr, $PUBLIC, $virtualMethod(ByteInterleavedRaster, createChild, $Raster*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, $ints*)},
		{"createCompatibleWritableRaster", "(II)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC, $virtualMethod(ByteInterleavedRaster, createCompatibleWritableRaster, $WritableRaster*, int32_t, int32_t)},
		{"createCompatibleWritableRaster", "()Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC, $virtualMethod(ByteInterleavedRaster, createCompatibleWritableRaster, $WritableRaster*)},
		{"createWritableChild", "(IIIIII[I)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC, $virtualMethod(ByteInterleavedRaster, createWritableChild, $WritableRaster*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, $ints*)},
		{"getByteData", "(IIIII[B)[B", nullptr, $PUBLIC, $virtualMethod(ByteInterleavedRaster, getByteData, $bytes*, int32_t, int32_t, int32_t, int32_t, int32_t, $bytes*)},
		{"getByteData", "(IIII[B)[B", nullptr, $PUBLIC, $virtualMethod(ByteInterleavedRaster, getByteData, $bytes*, int32_t, int32_t, int32_t, int32_t, $bytes*)},
		{"getDataElements", "(IILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ByteInterleavedRaster, getDataElements, $Object*, int32_t, int32_t, Object$*)},
		{"getDataElements", "(IIIILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ByteInterleavedRaster, getDataElements, $Object*, int32_t, int32_t, int32_t, int32_t, Object$*)},
		{"getDataOffset", "(I)I", nullptr, $PUBLIC, $virtualMethod(ByteInterleavedRaster, getDataOffset, int32_t, int32_t)},
		{"getDataOffsets", "()[I", nullptr, $PUBLIC, $virtualMethod(ByteInterleavedRaster, getDataOffsets, $ints*)},
		{"getDataStorage", "()[B", nullptr, $PUBLIC, $virtualMethod(ByteInterleavedRaster, getDataStorage, $bytes*)},
		{"getPixelStride", "()I", nullptr, $PUBLIC, $virtualMethod(ByteInterleavedRaster, getPixelStride, int32_t)},
		{"getPixels", "(IIII[I)[I", nullptr, $PUBLIC, $virtualMethod(ByteInterleavedRaster, getPixels, $ints*, int32_t, int32_t, int32_t, int32_t, $ints*)},
		{"getSample", "(III)I", nullptr, $PUBLIC, $virtualMethod(ByteInterleavedRaster, getSample, int32_t, int32_t, int32_t, int32_t)},
		{"getSamples", "(IIIII[I)[I", nullptr, $PUBLIC, $virtualMethod(ByteInterleavedRaster, getSamples, $ints*, int32_t, int32_t, int32_t, int32_t, int32_t, $ints*)},
		{"getScanlineStride", "()I", nullptr, $PUBLIC, $virtualMethod(ByteInterleavedRaster, getScanlineStride, int32_t)},
		{"isInterleaved", "(Ljava/awt/image/ComponentSampleModel;)Z", nullptr, $PRIVATE, $method(ByteInterleavedRaster, isInterleaved, bool, $ComponentSampleModel*)},
		{"putByteData", "(IIIII[B)V", nullptr, $PUBLIC, $virtualMethod(ByteInterleavedRaster, putByteData, void, int32_t, int32_t, int32_t, int32_t, int32_t, $bytes*)},
		{"putByteData", "(IIII[B)V", nullptr, $PUBLIC, $virtualMethod(ByteInterleavedRaster, putByteData, void, int32_t, int32_t, int32_t, int32_t, $bytes*)},
		{"setDataElements", "(IILjava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ByteInterleavedRaster, setDataElements, void, int32_t, int32_t, Object$*)},
		{"setDataElements", "(IILjava/awt/image/Raster;)V", nullptr, $PUBLIC, $virtualMethod(ByteInterleavedRaster, setDataElements, void, int32_t, int32_t, $Raster*)},
		{"setDataElements", "(IIIIIILjava/awt/image/Raster;)V", nullptr, $PRIVATE, $method(ByteInterleavedRaster, setDataElements, void, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, $Raster*)},
		{"setDataElements", "(IIIILjava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ByteInterleavedRaster, setDataElements, void, int32_t, int32_t, int32_t, int32_t, Object$*)},
		{"setPixels", "(IIII[I)V", nullptr, $PUBLIC, $virtualMethod(ByteInterleavedRaster, setPixels, void, int32_t, int32_t, int32_t, int32_t, $ints*)},
		{"setRect", "(IILjava/awt/image/Raster;)V", nullptr, $PUBLIC, $virtualMethod(ByteInterleavedRaster, setRect, void, int32_t, int32_t, $Raster*)},
		{"setSample", "(IIII)V", nullptr, $PUBLIC, $virtualMethod(ByteInterleavedRaster, setSample, void, int32_t, int32_t, int32_t, int32_t)},
		{"setSamples", "(IIIII[I)V", nullptr, $PUBLIC, $virtualMethod(ByteInterleavedRaster, setSamples, void, int32_t, int32_t, int32_t, int32_t, int32_t, $ints*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ByteInterleavedRaster, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.image.ByteInterleavedRaster",
		"sun.awt.image.ByteComponentRaster",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ByteInterleavedRaster, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ByteInterleavedRaster);
	});
	return class$;
}

$Class* ByteInterleavedRaster::class$ = nullptr;

		} // image
	} // awt
} // sun