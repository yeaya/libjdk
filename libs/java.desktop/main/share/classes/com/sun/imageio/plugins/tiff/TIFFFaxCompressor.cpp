#include <com/sun/imageio/plugins/tiff/TIFFFaxCompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFCompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFImageMetadata.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFField.h>
#include <jcpp.h>

#undef BLACK
#undef TAG_FILL_ORDER
#undef WHITE

using $intArray2 = $Array<int32_t, 2>;
using $TIFFCompressor = ::com::sun::imageio::plugins::tiff::TIFFCompressor;
using $TIFFImageMetadata = ::com::sun::imageio::plugins::tiff::TIFFImageMetadata;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $TIFFField = ::javax::imageio::plugins::tiff::TIFFField;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$bytes* TIFFFaxCompressor::byteTable = nullptr;
$ints* TIFFFaxCompressor::termCodesBlack = nullptr;
$ints* TIFFFaxCompressor::termCodesWhite = nullptr;
$ints* TIFFFaxCompressor::makeupCodesBlack = nullptr;
$ints* TIFFFaxCompressor::makeupCodesWhite = nullptr;
$ints* TIFFFaxCompressor::passMode = nullptr;
$ints* TIFFFaxCompressor::vertMode = nullptr;
$ints* TIFFFaxCompressor::horzMode = nullptr;
$intArray2* TIFFFaxCompressor::termCodes = nullptr;
$intArray2* TIFFFaxCompressor::makeupCodes = nullptr;
$intArray2* TIFFFaxCompressor::pass = nullptr;
$intArray2* TIFFFaxCompressor::vert = nullptr;
$intArray2* TIFFFaxCompressor::horz = nullptr;

void TIFFFaxCompressor::init$($String* compressionType, int32_t compressionTagValue, bool isCompressionLossless) {
	$TIFFCompressor::init$(compressionType, compressionTagValue, isCompressionLossless);
	this->inverseFill = false;
}

void TIFFFaxCompressor::setMetadata($IIOMetadata* metadata) {
	$useLocalObjectStack();
	$TIFFCompressor::setMetadata(metadata);
	if ($instanceOf($TIFFImageMetadata, metadata)) {
		$var($TIFFImageMetadata, tim, $cast($TIFFImageMetadata, metadata));
		$var($TIFFField, f, tim->getTIFFField($BaselineTIFFTagSet::TAG_FILL_ORDER));
		this->inverseFill = (f != nullptr && f->getAsInt(0) == 2);
	}
}

int32_t TIFFFaxCompressor::nextState($bytes* data, int32_t base, int32_t bitOffset, int32_t maxOffset) {
	if (data == nullptr) {
		return maxOffset;
	}
	int32_t next = base + ((int32_t)((uint32_t)bitOffset >> 3));
	if (next >= $nc(data)->length) {
		return maxOffset;
	}
	int32_t end = base + ((int32_t)((uint32_t)maxOffset >> 3));
	if (end == data->length) {
		--end;
	}
	int32_t extra = bitOffset & 7;
	int32_t testbyte = 0;
	if ((data->get(next) & ($usr(128, extra))) != 0) {
		testbyte = ~(data->get(next)) & ($usr(255, extra));
		while (next < end) {
			if (testbyte != 0) {
				break;
			}
			testbyte = ~(data->get(++next)) & 0xff;
		}
	} else {
		if ((testbyte = (data->get(next) & ($usr(255, extra)))) != 0) {
			bitOffset = (next - base) * 8 + TIFFFaxCompressor::byteTable->get(testbyte);
			return ((bitOffset < maxOffset) ? bitOffset : maxOffset);
		}
		while (next < end) {
			if ((testbyte = data->get(++next) & 0xff) != 0) {
				bitOffset = (next - base) * 8 + TIFFFaxCompressor::byteTable->get(testbyte);
				return ((bitOffset < maxOffset) ? bitOffset : maxOffset);
			}
		}
	}
	bitOffset = (next - base) * 8 + TIFFFaxCompressor::byteTable->get(testbyte);
	return ((bitOffset < maxOffset) ? bitOffset : maxOffset);
}

void TIFFFaxCompressor::initBitBuf() {
	this->ndex = 0;
	this->bits = 0;
}

int32_t TIFFFaxCompressor::add1DBits($bytes* buf, int32_t where, int32_t count, int32_t color) {
	int32_t sixtyfours = 0;
	int32_t mask = 0;
	int32_t len = where;
	sixtyfours = (int32_t)((uint32_t)count >> 6);
	count = count & 0x3f;
	if (sixtyfours != 0) {
		for (; sixtyfours > 40; sixtyfours -= 40) {
			mask = $nc(TIFFFaxCompressor::makeupCodes->get(color))->get(40);
			this->bits |= $usr(mask & (int32_t)0xfff80000, this->ndex);
			this->ndex += (mask & 0xffff);
			while (this->ndex > 7) {
				$nc(buf)->set(len++, (int8_t)((int32_t)((uint32_t)this->bits >> 24)));
				this->bits <<= 8;
				this->ndex -= 8;
			}
		}
		mask = $nc(TIFFFaxCompressor::makeupCodes->get(color))->get(sixtyfours);
		this->bits |= $usr(mask & (int32_t)0xfff80000, this->ndex);
		this->ndex += (mask & 0xffff);
		while (this->ndex > 7) {
			$nc(buf)->set(len++, (int8_t)((int32_t)((uint32_t)this->bits >> 24)));
			this->bits <<= 8;
			this->ndex -= 8;
		}
	}
	mask = $nc(TIFFFaxCompressor::termCodes->get(color))->get(count);
	this->bits |= $usr(mask & (int32_t)0xfff80000, this->ndex);
	this->ndex += (mask & 0xffff);
	while (this->ndex > 7) {
		$nc(buf)->set(len++, (int8_t)((int32_t)((uint32_t)this->bits >> 24)));
		this->bits <<= 8;
		this->ndex -= 8;
	}
	return (len - where);
}

int32_t TIFFFaxCompressor::add2DBits($bytes* buf, int32_t where, $intArray2* mode, int32_t entry) {
	int32_t mask = 0;
	int32_t len = where;
	int32_t color = 0;
	mask = $nc($nc(mode)->get(color))->get(entry);
	this->bits |= $usr(mask & (int32_t)0xfff80000, this->ndex);
	this->ndex += (mask & 0xffff);
	while (this->ndex > 7) {
		$nc(buf)->set(len++, (int8_t)((int32_t)((uint32_t)this->bits >> 24)));
		this->bits <<= 8;
		this->ndex -= 8;
	}
	return (len - where);
}

int32_t TIFFFaxCompressor::addEOL(bool is1DMode, bool addFill, bool add1, $bytes* buf, int32_t where) {
	int32_t len = where;
	if (addFill) {
		this->ndex += ((this->ndex <= 4) ? 4 - this->ndex : 12 - this->ndex);
	}
	if (is1DMode) {
		this->bits |= $usr(0x00100000, this->ndex);
		this->ndex += 12;
	} else {
		this->bits |= $usr(add1 ? 0x00180000 : 0x00100000, this->ndex);
		this->ndex += 13;
	}
	while (this->ndex > 7) {
		$nc(buf)->set(len++, (int8_t)((int32_t)((uint32_t)this->bits >> 24)));
		this->bits <<= 8;
		this->ndex -= 8;
	}
	return (len - where);
}

int32_t TIFFFaxCompressor::addEOFB($bytes* buf, int32_t where) {
	int32_t len = where;
	this->bits |= $usr(0x00100100, this->ndex);
	this->ndex += 24;
	while (this->ndex > 0) {
		$nc(buf)->set(len++, (int8_t)((int32_t)((uint32_t)this->bits >> 24)));
		this->bits <<= 8;
		this->ndex -= 8;
	}
	return (len - where);
}

int32_t TIFFFaxCompressor::encode1D($bytes* data, int32_t rowOffset, int32_t colOffset, int32_t rowLength, $bytes* compData, int32_t compOffset) {
	int32_t lineAddr = rowOffset;
	int32_t bitIndex = colOffset;
	int32_t last = bitIndex + rowLength;
	int32_t outIndex = compOffset;
	int32_t testbit = ($usr($nc(data)->get(lineAddr + ((int32_t)((uint32_t)bitIndex >> 3))) & 0xff, 7 - (bitIndex & 7))) & 1;
	int32_t currentColor = TIFFFaxCompressor::BLACK;
	if (testbit != 0) {
		outIndex += add1DBits(compData, outIndex, 0, TIFFFaxCompressor::WHITE);
	} else {
		currentColor = TIFFFaxCompressor::WHITE;
	}
	while (bitIndex < last) {
		int32_t bitCount = nextState(data, lineAddr, bitIndex, last) - bitIndex;
		outIndex += add1DBits(compData, outIndex, bitCount, currentColor);
		bitIndex += bitCount;
		currentColor ^= 1;
	}
	return outIndex - compOffset;
}

void TIFFFaxCompressor::clinit$($Class* clazz) {
	$assignStatic(TIFFFaxCompressor::byteTable, $new($bytes, {
		8,
		7,
		6,
		6,
		5,
		5,
		5,
		5,
		4,
		4,
		4,
		4,
		4,
		4,
		4,
		4,
		3,
		3,
		3,
		3,
		3,
		3,
		3,
		3,
		3,
		3,
		3,
		3,
		3,
		3,
		3,
		3,
		2,
		2,
		2,
		2,
		2,
		2,
		2,
		2,
		2,
		2,
		2,
		2,
		2,
		2,
		2,
		2,
		2,
		2,
		2,
		2,
		2,
		2,
		2,
		2,
		2,
		2,
		2,
		2,
		2,
		2,
		2,
		2,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0
	}));
	$assignStatic(TIFFFaxCompressor::termCodesBlack, $new($ints, {
		0x0dc0000a,
		0x40000003,
		(int32_t)0xc0000002,
		(int32_t)0x80000002,
		0x60000003,
		0x30000004,
		0x20000004,
		0x18000005,
		0x14000006,
		0x10000006,
		0x08000007,
		0x0a000007,
		0x0e000007,
		0x04000008,
		0x07000008,
		0x0c000009,
		0x05c0000a,
		0x0600000a,
		0x0200000a,
		0x0ce0000b,
		0x0d00000b,
		0x0d80000b,
		0x06e0000b,
		0x0500000b,
		0x02e0000b,
		0x0300000b,
		0x0ca0000c,
		0x0cb0000c,
		0x0cc0000c,
		0x0cd0000c,
		0x0680000c,
		0x0690000c,
		0x06a0000c,
		0x06b0000c,
		0x0d20000c,
		0x0d30000c,
		0x0d40000c,
		0x0d50000c,
		0x0d60000c,
		0x0d70000c,
		0x06c0000c,
		0x06d0000c,
		0x0da0000c,
		0x0db0000c,
		0x0540000c,
		0x0550000c,
		0x0560000c,
		0x0570000c,
		0x0640000c,
		0x0650000c,
		0x0520000c,
		0x0530000c,
		0x0240000c,
		0x0370000c,
		0x0380000c,
		0x0270000c,
		0x0280000c,
		0x0580000c,
		0x0590000c,
		0x02b0000c,
		0x02c0000c,
		0x05a0000c,
		0x0660000c,
		0x0670000c
	}));
	$assignStatic(TIFFFaxCompressor::termCodesWhite, $new($ints, {
		0x35000008,
		0x1c000006,
		0x70000004,
		(int32_t)0x80000004,
		(int32_t)0xb0000004,
		(int32_t)0xc0000004,
		(int32_t)0xe0000004,
		(int32_t)0xf0000004,
		(int32_t)0x98000005,
		(int32_t)0xa0000005,
		0x38000005,
		0x40000005,
		0x20000006,
		0x0c000006,
		(int32_t)0xd0000006,
		(int32_t)0xd4000006,
		(int32_t)0xa8000006,
		(int32_t)0xac000006,
		0x4e000007,
		0x18000007,
		0x10000007,
		0x2e000007,
		0x06000007,
		0x08000007,
		0x50000007,
		0x56000007,
		0x26000007,
		0x48000007,
		0x30000007,
		0x02000008,
		0x03000008,
		0x1a000008,
		0x1b000008,
		0x12000008,
		0x13000008,
		0x14000008,
		0x15000008,
		0x16000008,
		0x17000008,
		0x28000008,
		0x29000008,
		0x2a000008,
		0x2b000008,
		0x2c000008,
		0x2d000008,
		0x04000008,
		0x05000008,
		0x0a000008,
		0x0b000008,
		0x52000008,
		0x53000008,
		0x54000008,
		0x55000008,
		0x24000008,
		0x25000008,
		0x58000008,
		0x59000008,
		0x5a000008,
		0x5b000008,
		0x4a000008,
		0x4b000008,
		0x32000008,
		0x33000008,
		0x34000008
	}));
	$assignStatic(TIFFFaxCompressor::makeupCodesBlack, $new($ints, {
		0x00000000,
		0x03c0000a,
		0x0c80000c,
		0x0c90000c,
		0x05b0000c,
		0x0330000c,
		0x0340000c,
		0x0350000c,
		0x0360000d,
		0x0368000d,
		0x0250000d,
		0x0258000d,
		0x0260000d,
		0x0268000d,
		0x0390000d,
		0x0398000d,
		0x03a0000d,
		0x03a8000d,
		0x03b0000d,
		0x03b8000d,
		0x0290000d,
		0x0298000d,
		0x02a0000d,
		0x02a8000d,
		0x02d0000d,
		0x02d8000d,
		0x0320000d,
		0x0328000d,
		0x0100000b,
		0x0180000b,
		0x01a0000b,
		0x0120000c,
		0x0130000c,
		0x0140000c,
		0x0150000c,
		0x0160000c,
		0x0170000c,
		0x01c0000c,
		0x01d0000c,
		0x01e0000c,
		0x01f0000c,
		0x00000000,
		0x00000000,
		0x00000000,
		0x00000000,
		0x00000000,
		0x00000000,
		0x00000000,
		0x00000000,
		0x00000000,
		0x00000000,
		0x00000000,
		0x00000000,
		0x00000000,
		0x00000000,
		0x00000000,
		0x00000000,
		0x00000000,
		0x00000000,
		0x00000000
	}));
	$assignStatic(TIFFFaxCompressor::makeupCodesWhite, $new($ints, {
		0x00000000,
		(int32_t)0xd8000005,
		(int32_t)0x90000005,
		0x5c000006,
		0x6e000007,
		0x36000008,
		0x37000008,
		0x64000008,
		0x65000008,
		0x68000008,
		0x67000008,
		0x66000009,
		0x66800009,
		0x69000009,
		0x69800009,
		0x6a000009,
		0x6a800009,
		0x6b000009,
		0x6b800009,
		0x6c000009,
		0x6c800009,
		0x6d000009,
		0x6d800009,
		0x4c000009,
		0x4c800009,
		0x4d000009,
		0x60000006,
		0x4d800009,
		0x0100000b,
		0x0180000b,
		0x01a0000b,
		0x0120000c,
		0x0130000c,
		0x0140000c,
		0x0150000c,
		0x0160000c,
		0x0170000c,
		0x01c0000c,
		0x01d0000c,
		0x01e0000c,
		0x01f0000c,
		0x00000000,
		0x00000000,
		0x00000000,
		0x00000000,
		0x00000000,
		0x00000000,
		0x00000000,
		0x00000000,
		0x00000000,
		0x00000000,
		0x00000000,
		0x00000000,
		0x00000000,
		0x00000000,
		0x00000000,
		0x00000000,
		0x00000000,
		0x00000000,
		0x00000000
	}));
	$assignStatic(TIFFFaxCompressor::passMode, $new($ints, {0x10000004}));
	$assignStatic(TIFFFaxCompressor::vertMode, $new($ints, {
		0x06000007,
		0x0c000006,
		0x60000003,
		(int32_t)0x80000001,
		0x40000003,
		0x08000006,
		0x04000007
	}));
	$assignStatic(TIFFFaxCompressor::horzMode, $new($ints, {0x20000003}));
	$assignStatic(TIFFFaxCompressor::termCodes, $new($intArray2, {
		TIFFFaxCompressor::termCodesWhite,
		TIFFFaxCompressor::termCodesBlack
	}));
	$assignStatic(TIFFFaxCompressor::makeupCodes, $new($intArray2, {
		TIFFFaxCompressor::makeupCodesWhite,
		TIFFFaxCompressor::makeupCodesBlack
	}));
	$assignStatic(TIFFFaxCompressor::pass, $new($intArray2, {
		TIFFFaxCompressor::passMode,
		TIFFFaxCompressor::passMode
	}));
	$assignStatic(TIFFFaxCompressor::vert, $new($intArray2, {
		TIFFFaxCompressor::vertMode,
		TIFFFaxCompressor::vertMode
	}));
	$assignStatic(TIFFFaxCompressor::horz, $new($intArray2, {
		TIFFFaxCompressor::horzMode,
		TIFFFaxCompressor::horzMode
	}));
}

TIFFFaxCompressor::TIFFFaxCompressor() {
}

$Class* TIFFFaxCompressor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"WHITE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(TIFFFaxCompressor, WHITE)},
		{"BLACK", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(TIFFFaxCompressor, BLACK)},
		{"byteTable", "[B", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(TIFFFaxCompressor, byteTable)},
		{"termCodesBlack", "[I", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(TIFFFaxCompressor, termCodesBlack)},
		{"termCodesWhite", "[I", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(TIFFFaxCompressor, termCodesWhite)},
		{"makeupCodesBlack", "[I", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(TIFFFaxCompressor, makeupCodesBlack)},
		{"makeupCodesWhite", "[I", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(TIFFFaxCompressor, makeupCodesWhite)},
		{"passMode", "[I", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(TIFFFaxCompressor, passMode)},
		{"vertMode", "[I", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(TIFFFaxCompressor, vertMode)},
		{"horzMode", "[I", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(TIFFFaxCompressor, horzMode)},
		{"termCodes", "[[I", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(TIFFFaxCompressor, termCodes)},
		{"makeupCodes", "[[I", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(TIFFFaxCompressor, makeupCodes)},
		{"pass", "[[I", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(TIFFFaxCompressor, pass)},
		{"vert", "[[I", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(TIFFFaxCompressor, vert)},
		{"horz", "[[I", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(TIFFFaxCompressor, horz)},
		{"inverseFill", "Z", nullptr, $PROTECTED, $field(TIFFFaxCompressor, inverseFill)},
		{"bits", "I", nullptr, $PROTECTED, $field(TIFFFaxCompressor, bits)},
		{"ndex", "I", nullptr, $PROTECTED, $field(TIFFFaxCompressor, ndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;IZ)V", nullptr, $PROTECTED, $method(TIFFFaxCompressor, init$, void, $String*, int32_t, bool)},
		{"add1DBits", "([BIII)I", nullptr, $PUBLIC, $virtualMethod(TIFFFaxCompressor, add1DBits, int32_t, $bytes*, int32_t, int32_t, int32_t)},
		{"add2DBits", "([BI[[II)I", nullptr, $PUBLIC, $virtualMethod(TIFFFaxCompressor, add2DBits, int32_t, $bytes*, int32_t, $intArray2*, int32_t)},
		{"addEOFB", "([BI)I", nullptr, $PUBLIC, $virtualMethod(TIFFFaxCompressor, addEOFB, int32_t, $bytes*, int32_t)},
		{"addEOL", "(ZZZ[BI)I", nullptr, $PUBLIC, $virtualMethod(TIFFFaxCompressor, addEOL, int32_t, bool, bool, bool, $bytes*, int32_t)},
		{"encode1D", "([BIII[BI)I", nullptr, $PUBLIC, $virtualMethod(TIFFFaxCompressor, encode1D, int32_t, $bytes*, int32_t, int32_t, int32_t, $bytes*, int32_t)},
		{"initBitBuf", "()V", nullptr, $PUBLIC, $virtualMethod(TIFFFaxCompressor, initBitBuf, void)},
		{"nextState", "([BIII)I", nullptr, $PUBLIC, $virtualMethod(TIFFFaxCompressor, nextState, int32_t, $bytes*, int32_t, int32_t, int32_t)},
		{"setMetadata", "(Ljavax/imageio/metadata/IIOMetadata;)V", nullptr, $PUBLIC, $virtualMethod(TIFFFaxCompressor, setMetadata, void, $IIOMetadata*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"com.sun.imageio.plugins.tiff.TIFFFaxCompressor",
		"com.sun.imageio.plugins.tiff.TIFFCompressor",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TIFFFaxCompressor, name, initialize, &classInfo$$, TIFFFaxCompressor::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TIFFFaxCompressor);
	});
	return class$;
}

$Class* TIFFFaxCompressor::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com