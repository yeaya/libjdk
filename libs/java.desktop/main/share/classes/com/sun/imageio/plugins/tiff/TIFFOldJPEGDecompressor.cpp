#include <com/sun/imageio/plugins/tiff/TIFFOldJPEGDecompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFDecompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFImageMetadata.h>
#include <com/sun/imageio/plugins/tiff/TIFFImageReader.h>
#include <com/sun/imageio/plugins/tiff/TIFFJPEGDecompressor.h>
#include <java/awt/image/BufferedImage.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <javax/imageio/IIOException.h>
#include <javax/imageio/ImageReadParam.h>
#include <javax/imageio/ImageReader.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFField.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <javax/imageio/stream/MemoryCacheImageInputStream.h>
#include <jcpp.h>

#undef DHT
#undef DQT
#undef DRI
#undef EOI
#undef SOF0
#undef SOI
#undef SOS
#undef TAG_JPEG_AC_TABLES
#undef TAG_JPEG_DC_TABLES
#undef TAG_JPEG_INTERCHANGE_FORMAT
#undef TAG_JPEG_INTERCHANGE_FORMAT_LENGTH
#undef TAG_JPEG_Q_TABLES
#undef TAG_JPEG_RESTART_INTERVAL
#undef TAG_STRIP_OFFSETS
#undef TAG_TILE_OFFSETS
#undef TAG_Y_CB_CR_SUBSAMPLING

using $TIFFImageMetadata = ::com::sun::imageio::plugins::tiff::TIFFImageMetadata;
using $TIFFImageReader = ::com::sun::imageio::plugins::tiff::TIFFImageReader;
using $TIFFJPEGDecompressor = ::com::sun::imageio::plugins::tiff::TIFFJPEGDecompressor;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOException = ::javax::imageio::IIOException;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $TIFFField = ::javax::imageio::plugins::tiff::TIFFField;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;
using $MemoryCacheImageInputStream = ::javax::imageio::stream::MemoryCacheImageInputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

void TIFFOldJPEGDecompressor::init$() {
	$TIFFJPEGDecompressor::init$();
	this->isInitialized = false;
	$set(this, JPEGStreamOffset, nullptr);
	this->SOFPosition = -1;
	$set(this, SOSMarker, nullptr);
	this->subsamplingX = 2;
	this->subsamplingY = 2;
}

void TIFFOldJPEGDecompressor::initialize() {
	$synchronized(this) {
		$useLocalObjectStack();
		if (this->isInitialized) {
			return;
		}
		$var($TIFFImageMetadata, tim, $cast($TIFFImageMetadata, this->metadata));
		$var($TIFFField, JPEGInterchangeFormatField, $nc(tim)->getTIFFField($BaselineTIFFTagSet::TAG_JPEG_INTERCHANGE_FORMAT));
		$var($TIFFField, segmentOffsetField, tim->getTIFFField($BaselineTIFFTagSet::TAG_TILE_OFFSETS));
		if (segmentOffsetField == nullptr) {
			$assign(segmentOffsetField, tim->getTIFFField($BaselineTIFFTagSet::TAG_STRIP_OFFSETS));
			if (segmentOffsetField == nullptr) {
				$assign(segmentOffsetField, JPEGInterchangeFormatField);
			}
		}
		$var($longs, segmentOffsets, $nc(segmentOffsetField)->getAsLongs());
		bool isTiled = $nc(segmentOffsets)->length > 1;
		if (!isTiled) {
			$nc(this->stream)->seek(this->offset);
			$nc(this->stream)->mark();
			bool var$0 = $nc(this->stream)->read() == 255;
			if (var$0 && this->stream->read() == $TIFFJPEGDecompressor::SOI) {
				$set(this, JPEGStreamOffset, $Long::valueOf(this->offset));
				$nc($cast($TIFFImageReader, this->reader))->forwardWarningMessage("SOI marker detected at start of strip or tile."_s);
				this->isInitialized = true;
				return;
			}
			$nc(this->stream)->reset();
			if (JPEGInterchangeFormatField != nullptr) {
				int64_t jpegInterchangeOffset = JPEGInterchangeFormatField->getAsLong(0);
				$var($TIFFField, JPEGInterchangeFormatLengthField, tim->getTIFFField($BaselineTIFFTagSet::TAG_JPEG_INTERCHANGE_FORMAT_LENGTH));
				if (JPEGInterchangeFormatLengthField == nullptr) {
					$set(this, JPEGStreamOffset, $Long::valueOf(jpegInterchangeOffset));
					$nc($cast($TIFFImageReader, this->reader))->forwardWarningMessage("JPEGInterchangeFormatLength field is missing"_s);
					this->isInitialized = true;
					return;
				} else {
					int64_t jpegInterchangeLength = JPEGInterchangeFormatLengthField->getAsLong(0);
					if (jpegInterchangeOffset < segmentOffsets->get(0) && (jpegInterchangeOffset + jpegInterchangeLength) > segmentOffsets->get(0)) {
						$set(this, JPEGStreamOffset, $Long::valueOf(jpegInterchangeOffset));
						this->isInitialized = true;
						return;
					}
				}
			}
		}
		$var($TIFFField, YCbCrSubsamplingField, tim->getTIFFField($BaselineTIFFTagSet::TAG_Y_CB_CR_SUBSAMPLING));
		if (YCbCrSubsamplingField != nullptr) {
			this->subsamplingX = $nc($(YCbCrSubsamplingField->getAsChars()))->get(0);
			this->subsamplingY = $nc($(YCbCrSubsamplingField->getAsChars()))->get(1);
		}
		if (JPEGInterchangeFormatField != nullptr) {
			int64_t jpegInterchangeOffset = JPEGInterchangeFormatField->getAsLong(0);
			$var($TIFFField, JPEGInterchangeFormatLengthField, tim->getTIFFField($BaselineTIFFTagSet::TAG_JPEG_INTERCHANGE_FORMAT_LENGTH));
			if (JPEGInterchangeFormatLengthField != nullptr) {
				int64_t jpegInterchangeLength = JPEGInterchangeFormatLengthField->getAsLong(0);
				if (jpegInterchangeLength >= 2 && jpegInterchangeOffset + jpegInterchangeLength <= segmentOffsets->get(0)) {
					$nc(this->stream)->mark();
					$nc(this->stream)->seek(jpegInterchangeOffset + jpegInterchangeLength - 2);
					bool var$1 = $nc(this->stream)->read() == 255;
					if (var$1 && this->stream->read() == $TIFFJPEGDecompressor::EOI) {
						$set(this, tables, $new($bytes, (int32_t)(jpegInterchangeLength - 2)));
					} else {
						$set(this, tables, $new($bytes, (int32_t)jpegInterchangeLength));
					}
					$nc(this->stream)->reset();
					$nc(this->stream)->mark();
					$nc(this->stream)->seek(jpegInterchangeOffset);
					$nc(this->stream)->readFully(this->tables);
					$nc(this->stream)->reset();
					$nc($cast($TIFFImageReader, this->reader))->forwardWarningMessage("Incorrect JPEG interchange format: using JPEGInterchangeFormat offset to derive tables."_s);
				} else {
					$nc($cast($TIFFImageReader, this->reader))->forwardWarningMessage("JPEGInterchangeFormat+JPEGInterchangeFormatLength > offset to first strip or tile."_s);
				}
			}
		}
		if (this->tables == nullptr) {
			$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
			int64_t streamLength = $nc(this->stream)->length();
			baos->write(255);
			baos->write($TIFFJPEGDecompressor::SOI);
			$var($TIFFField, f, tim->getTIFFField($BaselineTIFFTagSet::TAG_JPEG_Q_TABLES));
			if (f == nullptr) {
				$throwNew($IIOException, "JPEGQTables field missing!"_s);
			}
			$var($longs, off, $nc(f)->getAsLongs());
			for (int32_t i = 0; i < $nc(off)->length; ++i) {
				baos->write(255);
				baos->write(TIFFOldJPEGDecompressor::DQT);
				char16_t markerLength = (char16_t)67;
				baos->write(((int32_t)((uint32_t)markerLength >> 8)) & 0xff);
				baos->write(markerLength & 0xff);
				baos->write(i);
				$var($bytes, qtable, $new($bytes, 64));
				if (streamLength != -1 && off->get(i) > streamLength) {
					$throwNew($IIOException, $$str({"JPEGQTables offset for index "_s, $$str(i), " is not in the stream!"_s}));
				}
				$nc(this->stream)->seek(off->get(i));
				$nc(this->stream)->readFully(qtable);
				baos->write(qtable);
			}
			for (int32_t k = 0; k < 2; ++k) {
				int32_t tableTagNumber = k == 0 ? $BaselineTIFFTagSet::TAG_JPEG_DC_TABLES : $BaselineTIFFTagSet::TAG_JPEG_AC_TABLES;
				$assign(f, tim->getTIFFField(tableTagNumber));
				$var($String, fieldName, tableTagNumber == $BaselineTIFFTagSet::TAG_JPEG_DC_TABLES ? "JPEGDCTables"_s : "JPEGACTables"_s);
				if (f == nullptr) {
					$throwNew($IIOException, $$str({fieldName, " field missing!"_s}));
				}
				$assign(off, $nc(f)->getAsLongs());
				for (int32_t i = 0; i < $nc(off)->length; ++i) {
					baos->write(255);
					baos->write(TIFFOldJPEGDecompressor::DHT);
					$var($bytes, blengths, $new($bytes, 16));
					if (streamLength != -1 && off->get(i) > streamLength) {
						$throwNew($IIOException, $$str({fieldName, " offset for index "_s, $$str(i), " is not in the stream!"_s}));
					}
					$nc(this->stream)->seek(off->get(i));
					$nc(this->stream)->readFully(blengths);
					int32_t numCodes = 0;
					for (int32_t j = 0; j < 16; ++j) {
						numCodes += blengths->get(j) & 0xff;
					}
					char16_t markerLength = (char16_t)(19 + numCodes);
					baos->write(((int32_t)((uint32_t)markerLength >> 8)) & 0xff);
					baos->write(markerLength & 0xff);
					baos->write(i | (k << 4));
					baos->write(blengths);
					$var($bytes, bcodes, $new($bytes, numCodes));
					$nc(this->stream)->readFully(bcodes);
					baos->write(bcodes);
				}
			}
			baos->write((int8_t)255);
			baos->write((int8_t)TIFFOldJPEGDecompressor::SOF0);
			int16_t sval = (int16_t)(8 + 3 * this->samplesPerPixel);
			baos->write((int8_t)(((int32_t)((uint32_t)sval >> 8)) & 0xff));
			baos->write((int8_t)(sval & 0xff));
			baos->write((int8_t)8);
			sval = (int16_t)this->srcHeight;
			baos->write((int8_t)(((int32_t)((uint32_t)sval >> 8)) & 0xff));
			baos->write((int8_t)(sval & 0xff));
			sval = (int16_t)this->srcWidth;
			baos->write((int8_t)(((int32_t)((uint32_t)sval >> 8)) & 0xff));
			baos->write((int8_t)(sval & 0xff));
			baos->write((int8_t)this->samplesPerPixel);
			if (this->samplesPerPixel == 1) {
				baos->write((int8_t)1);
				baos->write((int8_t)17);
				baos->write((int8_t)0);
			} else {
				for (int32_t i = 0; i < 3; ++i) {
					baos->write((int8_t)(i + 1));
					baos->write((i != 0) ? (int8_t)17 : (int8_t)(((this->subsamplingX & 0x0f) << 4) | (this->subsamplingY & 0x0f)));
					baos->write((int8_t)i);
				}
			}
			;
			$assign(f, tim->getTIFFField($BaselineTIFFTagSet::TAG_JPEG_RESTART_INTERVAL));
			if (f != nullptr) {
				char16_t restartInterval = $nc($(f->getAsChars()))->get(0);
				if (restartInterval != 0) {
					baos->write((int8_t)255);
					baos->write((int8_t)TIFFOldJPEGDecompressor::DRI);
					sval = 4;
					baos->write((int8_t)(((int32_t)((uint32_t)sval >> 8)) & 0xff));
					baos->write((int8_t)(sval & 0xff));
					baos->write((int8_t)(((int32_t)((uint32_t)restartInterval >> 8)) & 0xff));
					baos->write((int8_t)(restartInterval & 0xff));
				}
			}
			$set(this, tables, baos->toByteArray());
		}
		int32_t idx = 0;
		int32_t idxMax = $nc(this->tables)->length - 1;
		while (idx < idxMax) {
			if ((this->tables->get(idx) & 0xff) == 0xff && (this->tables->get(idx + 1) & 0xff) == TIFFOldJPEGDecompressor::SOF0) {
				this->SOFPosition = idx;
				break;
			}
			++idx;
		}
		if (this->SOFPosition == -1) {
			$var($bytes, tmpTables, $new($bytes, this->tables->length + 10 + 3 * this->samplesPerPixel));
			$System::arraycopy(this->tables, 0, tmpTables, 0, this->tables->length);
			int32_t tmpOffset = this->tables->length;
			this->SOFPosition = this->tables->length;
			$set(this, tables, tmpTables);
			this->tables->set(tmpOffset++, (int8_t)255);
			this->tables->set(tmpOffset++, (int8_t)TIFFOldJPEGDecompressor::SOF0);
			int16_t sval = (int16_t)(8 + 3 * this->samplesPerPixel);
			this->tables->set(tmpOffset++, (int8_t)(((int32_t)((uint32_t)sval >> 8)) & 0xff));
			this->tables->set(tmpOffset++, (int8_t)(sval & 0xff));
			this->tables->set(tmpOffset++, (int8_t)8);
			sval = (int16_t)this->srcHeight;
			this->tables->set(tmpOffset++, (int8_t)(((int32_t)((uint32_t)sval >> 8)) & 0xff));
			this->tables->set(tmpOffset++, (int8_t)(sval & 0xff));
			sval = (int16_t)this->srcWidth;
			this->tables->set(tmpOffset++, (int8_t)(((int32_t)((uint32_t)sval >> 8)) & 0xff));
			this->tables->set(tmpOffset++, (int8_t)(sval & 0xff));
			this->tables->set(tmpOffset++, (int8_t)this->samplesPerPixel);
			if (this->samplesPerPixel == 1) {
				this->tables->set(tmpOffset++, (int8_t)1);
				this->tables->set(tmpOffset++, (int8_t)17);
				this->tables->set(tmpOffset++, (int8_t)0);
			} else {
				for (int32_t i = 0; i < 3; ++i) {
					this->tables->set(tmpOffset++, (int8_t)(i + 1));
					this->tables->set(tmpOffset++, (i != 0) ? (int8_t)17 : (int8_t)(((this->subsamplingX & 0x0f) << 4) | (this->subsamplingY & 0x0f)));
					this->tables->set(tmpOffset++, (int8_t)i);
				}
			}
			;
		}
		$nc(this->stream)->mark();
		$nc(this->stream)->seek(segmentOffsets->get(0));
		bool var$2 = $nc(this->stream)->read() == 255;
		if (var$2 && this->stream->read() == TIFFOldJPEGDecompressor::SOS) {
			int32_t var$3 = $nc(this->stream)->read() << 8;
			int32_t SOSLength = var$3 | this->stream->read();
			$set(this, SOSMarker, $new($bytes, SOSLength + 2));
			this->SOSMarker->set(0, (int8_t)255);
			this->SOSMarker->set(1, (int8_t)TIFFOldJPEGDecompressor::SOS);
			this->SOSMarker->set(2, (int8_t)((SOSLength & 0xff00) >> 8));
			this->SOSMarker->set(3, (int8_t)(SOSLength & 0xff));
			$nc(this->stream)->readFully(this->SOSMarker, 4, SOSLength - 2);
		} else {
			$set(this, SOSMarker, $new($bytes, 2 + 6 + 2 * this->samplesPerPixel));
			int32_t SOSMarkerIndex = 0;
			this->SOSMarker->set(SOSMarkerIndex++, (int8_t)255);
			this->SOSMarker->set(SOSMarkerIndex++, (int8_t)TIFFOldJPEGDecompressor::SOS);
			int16_t sval = (int16_t)(6 + 2 * this->samplesPerPixel);
			this->SOSMarker->set(SOSMarkerIndex++, (int8_t)(((int32_t)((uint32_t)sval >> 8)) & 0xff));
			this->SOSMarker->set(SOSMarkerIndex++, (int8_t)(sval & 0xff));
			this->SOSMarker->set(SOSMarkerIndex++, (int8_t)this->samplesPerPixel);
			if (this->samplesPerPixel == 1) {
				this->SOSMarker->set(SOSMarkerIndex++, (int8_t)1);
				this->SOSMarker->set(SOSMarkerIndex++, (int8_t)0);
			} else {
				for (int32_t i = 0; i < 3; ++i) {
					this->SOSMarker->set(SOSMarkerIndex++, (int8_t)(i + 1));
					this->SOSMarker->set(SOSMarkerIndex++, (int8_t)((i << 4) | i));
				}
			}
			;
			this->SOSMarker->set(SOSMarkerIndex++, (int8_t)0);
			this->SOSMarker->set(SOSMarkerIndex++, (int8_t)63);
			this->SOSMarker->set(SOSMarkerIndex++, (int8_t)0);
		}
		$nc(this->stream)->reset();
		this->isInitialized = true;
	}
}

void TIFFOldJPEGDecompressor::decodeRaw($bytes* b, int32_t dstOffset, int32_t bitsPerPixel, int32_t scanlineStride) {
	$useLocalObjectStack();
	initialize();
	$var($TIFFImageMetadata, tim, $cast($TIFFImageMetadata, this->metadata));
	if (this->JPEGStreamOffset != nullptr) {
		$nc(this->stream)->seek(this->JPEGStreamOffset->longValue());
		$nc(this->JPEGReader)->setInput(this->stream, false, true);
	} else {
		int32_t tableLength = $nc(this->tables)->length;
		int32_t bufLength = tableLength + $nc(this->SOSMarker)->length + this->byteCount + 2;
		$var($bytes, buf, $new($bytes, bufLength));
		$System::arraycopy(this->tables, 0, buf, 0, tableLength);
		int32_t bufOffset = tableLength;
		int16_t sval = (int16_t)this->srcHeight;
		buf->set(this->SOFPosition + 5, (int8_t)(((int32_t)((uint32_t)sval >> 8)) & 0xff));
		buf->set(this->SOFPosition + 6, (int8_t)(sval & 0xff));
		sval = (int16_t)this->srcWidth;
		buf->set(this->SOFPosition + 7, (int8_t)(((int32_t)((uint32_t)sval >> 8)) & 0xff));
		buf->set(this->SOFPosition + 8, (int8_t)(sval & 0xff));
		$nc(this->stream)->seek(this->offset);
		$var($bytes, twoBytes, $new($bytes, 2));
		$nc(this->stream)->readFully(twoBytes);
		if (!((twoBytes->get(0) & 0xff) == 0xff && (twoBytes->get(1) & 0xff) == TIFFOldJPEGDecompressor::SOS)) {
			$System::arraycopy(this->SOSMarker, 0, buf, bufOffset, $nc(this->SOSMarker)->length);
			bufOffset += this->SOSMarker->length;
		}
		buf->set(bufOffset++, twoBytes->get(0));
		buf->set(bufOffset++, twoBytes->get(1));
		$nc(this->stream)->readFully(buf, bufOffset, this->byteCount - 2);
		bufOffset += this->byteCount - 2;
		buf->set(bufOffset++, (int8_t)255);
		buf->set(bufOffset++, (int8_t)$TIFFJPEGDecompressor::EOI);
		$var($ByteArrayInputStream, bais, $new($ByteArrayInputStream, buf, 0, bufOffset));
		$var($ImageInputStream, is, $new($MemoryCacheImageInputStream, bais));
		$nc(this->JPEGReader)->setInput(is, true, true);
	}
	$nc(this->JPEGParam)->setDestination(this->rawImage);
	$nc(this->JPEGReader)->read(0, this->JPEGParam);
}

void TIFFOldJPEGDecompressor::finalize() {
	$TIFFJPEGDecompressor::finalize();
	$nc(this->JPEGReader)->dispose();
}

TIFFOldJPEGDecompressor::TIFFOldJPEGDecompressor() {
}

$Class* TIFFOldJPEGDecompressor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DHT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TIFFOldJPEGDecompressor, DHT)},
		{"DQT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TIFFOldJPEGDecompressor, DQT)},
		{"DRI", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TIFFOldJPEGDecompressor, DRI)},
		{"SOF0", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TIFFOldJPEGDecompressor, SOF0)},
		{"SOS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TIFFOldJPEGDecompressor, SOS)},
		{"isInitialized", "Z", nullptr, $PRIVATE, $field(TIFFOldJPEGDecompressor, isInitialized)},
		{"JPEGStreamOffset", "Ljava/lang/Long;", nullptr, $PRIVATE, $field(TIFFOldJPEGDecompressor, JPEGStreamOffset)},
		{"SOFPosition", "I", nullptr, $PRIVATE, $field(TIFFOldJPEGDecompressor, SOFPosition)},
		{"SOSMarker", "[B", nullptr, $PRIVATE, $field(TIFFOldJPEGDecompressor, SOSMarker)},
		{"subsamplingX", "I", nullptr, $PRIVATE, $field(TIFFOldJPEGDecompressor, subsamplingX)},
		{"subsamplingY", "I", nullptr, $PRIVATE, $field(TIFFOldJPEGDecompressor, subsamplingY)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TIFFOldJPEGDecompressor, init$, void)},
		{"decodeRaw", "([BIII)V", nullptr, $PUBLIC, $virtualMethod(TIFFOldJPEGDecompressor, decodeRaw, void, $bytes*, int32_t, int32_t, int32_t), "java.io.IOException"},
		{"finalize", "()V", nullptr, $PROTECTED, $virtualMethod(TIFFOldJPEGDecompressor, finalize, void), "java.lang.Throwable"},
		{"initialize", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(TIFFOldJPEGDecompressor, initialize, void), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.imageio.plugins.tiff.TIFFOldJPEGDecompressor",
		"com.sun.imageio.plugins.tiff.TIFFJPEGDecompressor",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TIFFOldJPEGDecompressor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TIFFOldJPEGDecompressor);
	});
	return class$;
}

$Class* TIFFOldJPEGDecompressor::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com