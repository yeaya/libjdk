#include <com/sun/imageio/plugins/tiff/TIFFFaxDecompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFDecompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFImageMetadata.h>
#include <com/sun/imageio/plugins/tiff/TIFFImageReader.h>
#include <java/io/EOFException.h>
#include <javax/imageio/IIOException.h>
#include <javax/imageio/ImageReader.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFField.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <jcpp.h>

#undef COMPRESSION_CCITT_RLE
#undef COMPRESSION_CCITT_T_4
#undef COMPRESSION_CCITT_T_6
#undef FILL_ORDER_LEFT_TO_RIGHT
#undef FILL_ORDER_RIGHT_TO_LEFT
#undef TAG_COMPRESSION
#undef TAG_FILL_ORDER
#undef TAG_T4_OPTIONS
#undef TAG_T6_OPTIONS

using $TIFFDecompressor = ::com::sun::imageio::plugins::tiff::TIFFDecompressor;
using $TIFFImageMetadata = ::com::sun::imageio::plugins::tiff::TIFFImageMetadata;
using $TIFFImageReader = ::com::sun::imageio::plugins::tiff::TIFFImageReader;
using $EOFException = ::java::io::EOFException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOException = ::javax::imageio::IIOException;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $TIFFField = ::javax::imageio::plugins::tiff::TIFFField;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$ints* TIFFFaxDecompressor::table1 = nullptr;
$ints* TIFFFaxDecompressor::table2 = nullptr;
$bytes* TIFFFaxDecompressor::flipTable = nullptr;
$shorts* TIFFFaxDecompressor::white = nullptr;
$shorts* TIFFFaxDecompressor::additionalMakeup = nullptr;
$shorts* TIFFFaxDecompressor::initBlack = nullptr;
$shorts* TIFFFaxDecompressor::twoBitBlack = nullptr;
$shorts* TIFFFaxDecompressor::black = nullptr;
$bytes* TIFFFaxDecompressor::twoDCodes = nullptr;

void TIFFFaxDecompressor::init$() {
	$TIFFDecompressor::init$();
	this->uncompressedMode = 0;
	this->fillBits = 0;
	this->changingElemSize = 0;
	this->lastChangingElement = 0;
}

void TIFFFaxDecompressor::beginDecoding() {
	$useLocalObjectStack();
	$TIFFDecompressor::beginDecoding();
	if ($instanceOf($TIFFImageMetadata, this->metadata)) {
		$var($TIFFImageMetadata, tmetadata, $cast($TIFFImageMetadata, this->metadata));
		$var($TIFFField, f, nullptr);
		$assign(f, $nc(tmetadata)->getTIFFField($BaselineTIFFTagSet::TAG_FILL_ORDER));
		this->fillOrder = f == nullptr ? $BaselineTIFFTagSet::FILL_ORDER_LEFT_TO_RIGHT : f->getAsInt(0);
		$assign(f, tmetadata->getTIFFField($BaselineTIFFTagSet::TAG_COMPRESSION));
		this->compression = f == nullptr ? $BaselineTIFFTagSet::COMPRESSION_CCITT_RLE : f->getAsInt(0);
		$assign(f, tmetadata->getTIFFField($BaselineTIFFTagSet::TAG_T4_OPTIONS));
		this->t4Options = f == nullptr ? 0 : f->getAsInt(0);
		this->oneD = (this->t4Options & 1);
		this->uncompressedMode = ((this->t4Options & 2) >> 1);
		this->fillBits = ((this->t4Options & 4) >> 2);
		$assign(f, tmetadata->getTIFFField($BaselineTIFFTagSet::TAG_T6_OPTIONS));
		this->t6Options = f == nullptr ? 0 : f->getAsInt(0);
	} else {
		this->fillOrder = $BaselineTIFFTagSet::FILL_ORDER_LEFT_TO_RIGHT;
		this->compression = $BaselineTIFFTagSet::COMPRESSION_CCITT_RLE;
		this->t4Options = 0;
		this->oneD = 0;
		this->uncompressedMode = 0;
		this->fillBits = 0;
		this->t6Options = 0;
	}
}

void TIFFFaxDecompressor::decodeRaw($bytes* b, int32_t dstOffset, int32_t pixelBitStride, int32_t scanlineStride) {
	$useLocalObjectStack();
	$set(this, buffer, b);
	this->w = this->srcWidth;
	this->h = this->srcHeight;
	this->bitsPerScanline = scanlineStride * 8;
	this->lineBitNum = 8 * dstOffset;
	$set(this, data, $new($bytes, this->byteCount));
	this->bitPointer = 0;
	this->bytePointer = 0;
	$set(this, prevChangingElems, $new($ints, this->w + 1));
	$set(this, currChangingElems, $new($ints, this->w + 1));
	$nc(this->stream)->seek(this->offset);
	$nc(this->stream)->readFully(this->data);
	if (this->compression == $BaselineTIFFTagSet::COMPRESSION_CCITT_RLE) {
		decodeRLE();
	} else if (this->compression == $BaselineTIFFTagSet::COMPRESSION_CCITT_T_4) {
		decodeT4();
	} else if (this->compression == $BaselineTIFFTagSet::COMPRESSION_CCITT_T_6) {
		this->uncompressedMode = ((this->t6Options & 2) >> 1);
		decodeT6();
	} else {
		$throwNew($IIOException, $$str({"Unknown compression type "_s, $$str(this->compression)}));
	}
}

void TIFFFaxDecompressor::decodeRLE() {
	for (int32_t i = 0; i < this->h; ++i) {
		decodeNextScanline(this->srcMinY + i);
		if (this->bitPointer != 0) {
			++this->bytePointer;
			this->bitPointer = 0;
		}
		this->lineBitNum += this->bitsPerScanline;
	}
}

void TIFFFaxDecompressor::decodeNextScanline(int32_t lineIndex) {
	$useLocalObjectStack();
	int32_t bits = 0;
	int32_t code = 0;
	int32_t isT = 0;
	int32_t current = 0;
	int32_t entry = 0;
	int32_t twoBits = 0;
	bool isWhite = true;
	int32_t dstEnd = 0;
	int32_t bitOffset = 0;
	this->changingElemSize = 0;
	while (bitOffset < this->w) {
		int32_t runOffset = bitOffset;
		while (isWhite && bitOffset < this->w) {
			current = nextNBits(10);
			entry = $nc(TIFFFaxDecompressor::white)->get(current);
			isT = entry & 1;
			bits = ((int32_t)((uint32_t)entry >> 1)) & 0x0f;
			if (bits == 12) {
				twoBits = nextLesserThan8Bits(2);
				current = ((current << 2) & 0x0c) | twoBits;
				entry = $nc(TIFFFaxDecompressor::additionalMakeup)->get(current);
				bits = ((int32_t)((uint32_t)entry >> 1)) & 7;
				code = ((int32_t)((uint32_t)entry >> 4)) & 0x0fff;
				bitOffset += code;
				updatePointer(4 - bits);
			} else if (bits == 0) {
				warning("Error 0"_s);
			} else if (bits == 15) {
				warning($$str({"Premature EOL in white run of line "_s, $$str(lineIndex), ": read "_s, $$str(bitOffset), " of "_s, $$str(this->w), " expected pixels."_s}));
				return;
			} else {
				code = ((int32_t)((uint32_t)entry >> 5)) & 0x07ff;
				bitOffset += code;
				updatePointer(10 - bits);
				if (isT == 0) {
					isWhite = false;
					$nc(this->currChangingElems)->set(this->changingElemSize++, bitOffset);
				}
			}
		}
		if (bitOffset == this->w) {
			int32_t runLength = bitOffset - runOffset;
			if (isWhite && runLength != 0 && runLength % 64 == 0 && nextNBits(8) != 53) {
				warning("Missing zero white run length terminating code!"_s);
				updatePointer(8);
			}
			break;
		}
		runOffset = bitOffset;
		while (isWhite == false && bitOffset < this->w) {
			current = nextLesserThan8Bits(4);
			entry = $nc(TIFFFaxDecompressor::initBlack)->get(current);
			isT = entry & 1;
			bits = ((int32_t)((uint32_t)entry >> 1)) & 0x0f;
			code = ((int32_t)((uint32_t)entry >> 5)) & 0x07ff;
			if (code == 100) {
				current = nextNBits(9);
				entry = $nc(TIFFFaxDecompressor::black)->get(current);
				isT = entry & 1;
				bits = ((int32_t)((uint32_t)entry >> 1)) & 0x0f;
				code = ((int32_t)((uint32_t)entry >> 5)) & 0x07ff;
				if (bits == 12) {
					updatePointer(5);
					current = nextLesserThan8Bits(4);
					entry = $nc(TIFFFaxDecompressor::additionalMakeup)->get(current);
					bits = ((int32_t)((uint32_t)entry >> 1)) & 7;
					code = ((int32_t)((uint32_t)entry >> 4)) & 0x0fff;
					setToBlack(bitOffset, code);
					bitOffset += code;
					updatePointer(4 - bits);
				} else if (bits == 15) {
					warning($$str({"Premature EOL in black run of line "_s, $$str(lineIndex), ": read "_s, $$str(bitOffset), " of "_s, $$str(this->w), " expected pixels."_s}));
					return;
				} else {
					setToBlack(bitOffset, code);
					bitOffset += code;
					updatePointer(9 - bits);
					if (isT == 0) {
						isWhite = true;
						$nc(this->currChangingElems)->set(this->changingElemSize++, bitOffset);
					}
				}
			} else if (code == 200) {
				current = nextLesserThan8Bits(2);
				entry = $nc(TIFFFaxDecompressor::twoBitBlack)->get(current);
				code = ((int32_t)((uint32_t)entry >> 5)) & 0x07ff;
				bits = ((int32_t)((uint32_t)entry >> 1)) & 0x0f;
				setToBlack(bitOffset, code);
				bitOffset += code;
				updatePointer(2 - bits);
				isWhite = true;
				$nc(this->currChangingElems)->set(this->changingElemSize++, bitOffset);
			} else {
				setToBlack(bitOffset, code);
				bitOffset += code;
				updatePointer(4 - bits);
				isWhite = true;
				$nc(this->currChangingElems)->set(this->changingElemSize++, bitOffset);
			}
		}
		if (bitOffset == this->w) {
			int32_t runLength = bitOffset - runOffset;
			if (!isWhite && runLength != 0 && runLength % 64 == 0 && nextNBits(10) != 55) {
				warning("Missing zero black run length terminating code!"_s);
				updatePointer(10);
			}
			break;
		}
	}
	$nc(this->currChangingElems)->set(this->changingElemSize++, bitOffset);
}

void TIFFFaxDecompressor::decodeT4() {
	$useLocalObjectStack();
	int32_t height = this->h;
	int32_t a0 = 0;
	int32_t a1 = 0;
	int32_t b1 = 0;
	int32_t b2 = 0;
	$var($ints, b, $new($ints, 2));
	int32_t entry = 0;
	int32_t code = 0;
	int32_t bits = 0;
	int32_t color = 0;
	bool isWhite = false;
	int32_t currIndex = 0;
	$var($ints, temp, nullptr);
	if ($nc(this->data)->length < 2) {
		$throwNew($IIOException, "Insufficient data to read initial EOL."_s);
	}
	int32_t next12 = nextNBits(12);
	if (next12 != 1) {
		warning("T.4 compressed data should begin with EOL."_s);
	}
	updatePointer(12);
	int32_t modeFlag = 0;
	int32_t lines = -1;
	while (modeFlag != 1) {
		try {
			modeFlag = findNextLine();
			++lines;
		} catch ($EOFException& eofe) {
			$throwNew($IIOException, "No reference line present."_s);
		}
	}
	int32_t bitOffset = 0;
	decodeNextScanline(this->srcMinY);
	++lines;
	this->lineBitNum += this->bitsPerScanline;
	while (lines < height) {
		try {
			modeFlag = findNextLine();
		} catch ($EOFException& eofe) {
			warning($$str({"Input exhausted before EOL found at line "_s, $$str((this->srcMinY + lines)), ": read 0 of "_s, $$str(this->w), " expected pixels."_s}));
			break;
		}
		if (modeFlag == 0) {
			$assign(temp, this->prevChangingElems);
			$set(this, prevChangingElems, this->currChangingElems);
			$set(this, currChangingElems, temp);
			currIndex = 0;
			a0 = -1;
			isWhite = true;
			bitOffset = 0;
			this->lastChangingElement = 0;
			while (bitOffset < this->w) {
				getNextChangingElement(a0, isWhite, b);
				b1 = b->get(0);
				b2 = b->get(1);
				entry = nextLesserThan8Bits(7);
				entry = ($nc(TIFFFaxDecompressor::twoDCodes)->get(entry) & 0xff);
				code = (int32_t)((uint32_t)(entry & 0x78) >> 3);
				bits = entry & 7;
				if (code == 0) {
					if (!isWhite) {
						setToBlack(bitOffset, b2 - bitOffset);
					}
					bitOffset = (a0 = b2);
					updatePointer(7 - bits);
				} else if (code == 1) {
					updatePointer(7 - bits);
					int32_t number = 0;
					if (isWhite) {
						number = decodeWhiteCodeWord();
						bitOffset += number;
						$nc(this->currChangingElems)->set(currIndex++, bitOffset);
						number = decodeBlackCodeWord();
						setToBlack(bitOffset, number);
						bitOffset += number;
						$nc(this->currChangingElems)->set(currIndex++, bitOffset);
					} else {
						number = decodeBlackCodeWord();
						setToBlack(bitOffset, number);
						bitOffset += number;
						$nc(this->currChangingElems)->set(currIndex++, bitOffset);
						number = decodeWhiteCodeWord();
						bitOffset += number;
						$nc(this->currChangingElems)->set(currIndex++, bitOffset);
					}
					a0 = bitOffset;
				} else if (code <= 8) {
					a1 = b1 + (code - 5);
					$nc(this->currChangingElems)->set(currIndex++, a1);
					if (!isWhite) {
						setToBlack(bitOffset, a1 - bitOffset);
					}
					bitOffset = (a0 = a1);
					isWhite = !isWhite;
					updatePointer(7 - bits);
				} else {
					warning($$str({"Unknown coding mode encountered at line "_s, $$str((this->srcMinY + lines)), ": read "_s, $$str(bitOffset), " of "_s, $$str(this->w), " expected pixels."_s}));
					int32_t numLinesTested = 0;
					while (modeFlag != 1) {
						try {
							modeFlag = findNextLine();
							++numLinesTested;
						} catch ($EOFException& eofe) {
							warning($$str({"Sync loss at line "_s, $$str((this->srcMinY + lines)), ": read "_s, $$str(lines), " of "_s, $$str(height), " lines."_s}));
							return;
						}
					}
					lines += numLinesTested - 1;
					updatePointer(13);
					break;
				}
			}
			$nc(this->currChangingElems)->set(currIndex++, bitOffset);
			this->changingElemSize = currIndex;
		} else {
			decodeNextScanline(this->srcMinY + lines);
		}
		this->lineBitNum += this->bitsPerScanline;
		++lines;
	}
}

void TIFFFaxDecompressor::decodeT6() {
	$synchronized(this) {
		$useLocalObjectStack();
		int32_t height = this->h;
		int32_t bufferOffset = 0;
		int32_t a0 = 0;
		int32_t a1 = 0;
		int32_t b1 = 0;
		int32_t b2 = 0;
		int32_t entry = 0;
		int32_t code = 0;
		int32_t bits = 0;
		int8_t color = 0;
		bool isWhite = false;
		int32_t currIndex = 0;
		$var($ints, temp, nullptr);
		$var($ints, b, $new($ints, 2));
		$var($ints, cce, this->currChangingElems);
		this->changingElemSize = 0;
		$nc(cce)->set(this->changingElemSize++, this->w);
		cce->set(this->changingElemSize++, this->w);
		int32_t bitOffset = 0;
		for (int32_t lines = 0; lines < height; ++lines) {
			a0 = -1;
			isWhite = true;
			$assign(temp, this->prevChangingElems);
			$set(this, prevChangingElems, this->currChangingElems);
			$assign(cce, $set(this, currChangingElems, temp));
			currIndex = 0;
			bitOffset = 0;
			this->lastChangingElement = 0;
			while (bitOffset < this->w) {
				getNextChangingElement(a0, isWhite, b);
				b1 = b->get(0);
				b2 = b->get(1);
				entry = nextLesserThan8Bits(7);
				entry = ($nc(TIFFFaxDecompressor::twoDCodes)->get(entry) & 0xff);
				code = (int32_t)((uint32_t)(entry & 0x78) >> 3);
				bits = entry & 7;
				if (code == 0) {
					if (!isWhite) {
						if (b2 > this->w) {
							b2 = this->w;
							warning($$str({"Decoded row "_s, $$str((this->srcMinY + lines)), " too long; ignoring extra samples."_s}));
						}
						setToBlack(bitOffset, b2 - bitOffset);
					}
					bitOffset = (a0 = b2);
					updatePointer(7 - bits);
				} else if (code == 1) {
					updatePointer(7 - bits);
					int32_t number = 0;
					if (isWhite) {
						number = decodeWhiteCodeWord();
						bitOffset += number;
						$nc(cce)->set(currIndex++, bitOffset);
						number = decodeBlackCodeWord();
						if (number > this->w - bitOffset) {
							number = this->w - bitOffset;
							warning($$str({"Decoded row "_s, $$str((this->srcMinY + lines)), " too long; ignoring extra samples."_s}));
						}
						setToBlack(bitOffset, number);
						bitOffset += number;
						cce->set(currIndex++, bitOffset);
					} else {
						number = decodeBlackCodeWord();
						if (number > this->w - bitOffset) {
							number = this->w - bitOffset;
							warning($$str({"Decoded row "_s, $$str((this->srcMinY + lines)), " too long; ignoring extra samples."_s}));
						}
						setToBlack(bitOffset, number);
						bitOffset += number;
						$nc(cce)->set(currIndex++, bitOffset);
						number = decodeWhiteCodeWord();
						bitOffset += number;
						cce->set(currIndex++, bitOffset);
					}
					a0 = bitOffset;
				} else if (code <= 8) {
					a1 = b1 + (code - 5);
					$nc(cce)->set(currIndex++, a1);
					if (!isWhite) {
						if (a1 > this->w) {
							a1 = this->w;
							warning($$str({"Decoded row "_s, $$str((this->srcMinY + lines)), " too long; ignoring extra samples."_s}));
						}
						setToBlack(bitOffset, a1 - bitOffset);
					}
					bitOffset = (a0 = a1);
					isWhite = !isWhite;
					updatePointer(7 - bits);
				} else if (code == 11) {
					int32_t entranceCode = nextLesserThan8Bits(3);
					if (entranceCode != 7) {
						$var($String, msg, $str({"Unsupported entrance code "_s, $$str(entranceCode), " for extension mode at line "_s, $$str((this->srcMinY + lines)), "."_s}));
						warning(msg);
					}
					int32_t zeros = 0;
					bool exit = false;
					while (!exit) {
						while (nextLesserThan8Bits(1) != 1) {
							++zeros;
						}
						if (zeros > 5) {
							zeros = zeros - 6;
							if (!isWhite && (zeros > 0)) {
								$nc(cce)->set(currIndex++, bitOffset);
							}
							bitOffset += zeros;
							if (zeros > 0) {
								isWhite = true;
							}
							if (nextLesserThan8Bits(1) == 0) {
								if (!isWhite) {
									$nc(cce)->set(currIndex++, bitOffset);
								}
								isWhite = true;
							} else {
								if (isWhite) {
									$nc(cce)->set(currIndex++, bitOffset);
								}
								isWhite = false;
							}
							exit = true;
						}
						if (zeros == 5) {
							if (!isWhite) {
								$nc(cce)->set(currIndex++, bitOffset);
							}
							bitOffset += zeros;
							isWhite = true;
						} else {
							bitOffset += zeros;
							$nc(cce)->set(currIndex++, bitOffset);
							setToBlack(bitOffset, 1);
							++bitOffset;
							isWhite = false;
						}
					}
				} else {
					$var($String, msg, $str({"Unknown coding mode encountered at line "_s, $$str((this->srcMinY + lines)), "."_s}));
					warning(msg);
				}
			}
			if (currIndex <= this->w) {
				$nc(cce)->set(currIndex++, bitOffset);
			}
			this->changingElemSize = currIndex;
			this->lineBitNum += this->bitsPerScanline;
		}
	}
}

void TIFFFaxDecompressor::setToBlack(int32_t bitNum, int32_t numBits) {
	bitNum += this->lineBitNum;
	int32_t lastBit = bitNum + numBits;
	int32_t byteNum = bitNum >> 3;
	int32_t shift = bitNum & 7;
	if (shift > 0) {
		int32_t maskVal = $sl(1, 7 - shift);
		int8_t val = $nc(this->buffer)->get(byteNum);
		while (maskVal > 0 && bitNum < lastBit) {
			val |= maskVal;
			maskVal >>= 1;
			++bitNum;
		}
		this->buffer->set(byteNum, val);
	}
	byteNum = bitNum >> 3;
	while (bitNum < lastBit - 7) {
		$nc(this->buffer)->set(byteNum++, (int8_t)255);
		bitNum += 8;
	}
	while (bitNum < lastBit) {
		byteNum = bitNum >> 3;
		(*$nc(this->buffer))[byteNum] |= $sl(1, 7 - (bitNum & 7));
		++bitNum;
	}
}

int32_t TIFFFaxDecompressor::decodeWhiteCodeWord() {
	int32_t current = 0;
	int32_t entry = 0;
	int32_t bits = 0;
	int32_t isT = 0;
	int32_t twoBits = 0;
	int32_t code = -1;
	int32_t runLength = 0;
	bool isWhite = true;
	while (isWhite) {
		current = nextNBits(10);
		entry = $nc(TIFFFaxDecompressor::white)->get(current);
		isT = entry & 1;
		bits = ((int32_t)((uint32_t)entry >> 1)) & 0x0f;
		if (bits == 12) {
			twoBits = nextLesserThan8Bits(2);
			current = ((current << 2) & 0x0c) | twoBits;
			entry = $nc(TIFFFaxDecompressor::additionalMakeup)->get(current);
			bits = ((int32_t)((uint32_t)entry >> 1)) & 7;
			code = ((int32_t)((uint32_t)entry >> 4)) & 0x0fff;
			runLength += code;
			updatePointer(4 - bits);
		} else if (bits == 0) {
			$throwNew($IIOException, "Error 0"_s);
		} else if (bits == 15) {
			$throwNew($IIOException, "Error 1"_s);
		} else {
			code = ((int32_t)((uint32_t)entry >> 5)) & 0x07ff;
			runLength += code;
			updatePointer(10 - bits);
			if (isT == 0) {
				isWhite = false;
			}
		}
	}
	return runLength;
}

int32_t TIFFFaxDecompressor::decodeBlackCodeWord() {
	int32_t current = 0;
	int32_t entry = 0;
	int32_t bits = 0;
	int32_t isT = 0;
	int32_t twoBits = 0;
	int32_t code = -1;
	int32_t runLength = 0;
	bool isWhite = false;
	while (!isWhite) {
		current = nextLesserThan8Bits(4);
		entry = $nc(TIFFFaxDecompressor::initBlack)->get(current);
		isT = entry & 1;
		bits = ((int32_t)((uint32_t)entry >> 1)) & 0x0f;
		code = ((int32_t)((uint32_t)entry >> 5)) & 0x07ff;
		if (code == 100) {
			current = nextNBits(9);
			entry = $nc(TIFFFaxDecompressor::black)->get(current);
			isT = entry & 1;
			bits = ((int32_t)((uint32_t)entry >> 1)) & 0x0f;
			code = ((int32_t)((uint32_t)entry >> 5)) & 0x07ff;
			if (bits == 12) {
				updatePointer(5);
				current = nextLesserThan8Bits(4);
				entry = $nc(TIFFFaxDecompressor::additionalMakeup)->get(current);
				bits = ((int32_t)((uint32_t)entry >> 1)) & 7;
				code = ((int32_t)((uint32_t)entry >> 4)) & 0x0fff;
				runLength += code;
				updatePointer(4 - bits);
			} else if (bits == 15) {
				$throwNew($IIOException, "Error 2"_s);
			} else {
				runLength += code;
				updatePointer(9 - bits);
				if (isT == 0) {
					isWhite = true;
				}
			}
		} else if (code == 200) {
			current = nextLesserThan8Bits(2);
			entry = $nc(TIFFFaxDecompressor::twoBitBlack)->get(current);
			code = ((int32_t)((uint32_t)entry >> 5)) & 0x07ff;
			runLength += code;
			bits = ((int32_t)((uint32_t)entry >> 1)) & 0x0f;
			updatePointer(2 - bits);
			isWhite = true;
		} else {
			runLength += code;
			updatePointer(4 - bits);
			isWhite = true;
		}
	}
	return runLength;
}

int32_t TIFFFaxDecompressor::findNextLine() {
	int32_t bitIndexMax = $nc(this->data)->length * 8 - 1;
	int32_t bitIndexMax12 = bitIndexMax - 12;
	int32_t bitIndex = this->bytePointer * 8 + this->bitPointer;
	while (bitIndex <= bitIndexMax12) {
		int32_t next12Bits = nextNBits(12);
		bitIndex += 12;
		while (next12Bits != 1 && bitIndex < bitIndexMax) {
			next12Bits = ((next12Bits & 0x07ff) << 1) | (nextLesserThan8Bits(1) & 1);
			++bitIndex;
		}
		if (next12Bits == 1) {
			if (this->oneD == 1) {
				if (bitIndex < bitIndexMax) {
					return nextLesserThan8Bits(1);
				}
			} else {
				return 1;
			}
		}
	}
	$throwNew($EOFException);
}

void TIFFFaxDecompressor::getNextChangingElement(int32_t a0, bool isWhite, $ints* ret) {
	$var($ints, pce, this->prevChangingElems);
	int32_t ces = this->changingElemSize;
	int32_t start = this->lastChangingElement > 0 ? this->lastChangingElement - 1 : 0;
	if (isWhite) {
		start &= (uint32_t)~1;
	} else {
		start |= 1;
	}
	int32_t i = start;
	for (; i < ces; i += 2) {
		int32_t temp = $nc(pce)->get(i);
		if (temp > a0) {
			this->lastChangingElement = i;
			$nc(ret)->set(0, temp);
			break;
		}
	}
	if (i + 1 < ces) {
		$nc(ret)->set(1, $nc(pce)->get(i + 1));
	}
}

int32_t TIFFFaxDecompressor::nextNBits(int32_t bitsToGet) {
	int8_t b = 0;
	int8_t next = 0;
	int8_t next2next = 0;
	int32_t l = $nc(this->data)->length - 1;
	int32_t bp = this->bytePointer;
	if (this->fillOrder == $BaselineTIFFTagSet::FILL_ORDER_LEFT_TO_RIGHT) {
		b = this->data->get(bp);
		if (bp == l) {
			next = 0;
			next2next = 0;
		} else if ((bp + 1) == l) {
			next = this->data->get(bp + 1);
			next2next = 0;
		} else {
			next = this->data->get(bp + 1);
			next2next = this->data->get(bp + 2);
		}
	} else if (this->fillOrder == $BaselineTIFFTagSet::FILL_ORDER_RIGHT_TO_LEFT) {
		b = $nc(TIFFFaxDecompressor::flipTable)->get(this->data->get(bp) & 0xff);
		if (bp == l) {
			next = 0;
			next2next = 0;
		} else if ((bp + 1) == l) {
			next = TIFFFaxDecompressor::flipTable->get(this->data->get(bp + 1) & 0xff);
			next2next = 0;
		} else {
			next = TIFFFaxDecompressor::flipTable->get(this->data->get(bp + 1) & 0xff);
			next2next = TIFFFaxDecompressor::flipTable->get(this->data->get(bp + 2) & 0xff);
		}
	} else {
		$throwNew($IIOException, "Invalid FillOrder"_s);
	}
	int32_t bitsLeft = 8 - this->bitPointer;
	int32_t bitsFromNextByte = bitsToGet - bitsLeft;
	int32_t bitsFromNext2NextByte = 0;
	if (bitsFromNextByte > 8) {
		bitsFromNext2NextByte = bitsFromNextByte - 8;
		bitsFromNextByte = 8;
	}
	++this->bytePointer;
	int32_t i1 = $sl(b & $nc(TIFFFaxDecompressor::table1)->get(bitsLeft), bitsToGet - bitsLeft);
	int32_t i2 = $usr(next & $nc(TIFFFaxDecompressor::table2)->get(bitsFromNextByte), 8 - bitsFromNextByte);
	int32_t i3 = 0;
	if (bitsFromNext2NextByte != 0) {
		i2 <<= bitsFromNext2NextByte;
		i3 = $usr(next2next & TIFFFaxDecompressor::table2->get(bitsFromNext2NextByte), 8 - bitsFromNext2NextByte);
		i2 |= i3;
		++this->bytePointer;
		this->bitPointer = bitsFromNext2NextByte;
	} else if (bitsFromNextByte == 8) {
		this->bitPointer = 0;
		++this->bytePointer;
	} else {
		this->bitPointer = bitsFromNextByte;
	}
	int32_t i = i1 | i2;
	return i;
}

int32_t TIFFFaxDecompressor::nextLesserThan8Bits(int32_t bitsToGet) {
	int8_t b = 0;
	int8_t next = 0;
	int32_t l = $nc(this->data)->length - 1;
	int32_t bp = this->bytePointer;
	if (this->fillOrder == $BaselineTIFFTagSet::FILL_ORDER_LEFT_TO_RIGHT) {
		b = this->data->get(bp);
		if (bp == l) {
			next = 0;
		} else {
			next = this->data->get(bp + 1);
		}
	} else if (this->fillOrder == $BaselineTIFFTagSet::FILL_ORDER_RIGHT_TO_LEFT) {
		b = $nc(TIFFFaxDecompressor::flipTable)->get(this->data->get(bp) & 0xff);
		if (bp == l) {
			next = 0;
		} else {
			next = TIFFFaxDecompressor::flipTable->get(this->data->get(bp + 1) & 0xff);
		}
	} else {
		$throwNew($IIOException, "Invalid FillOrder"_s);
	}
	int32_t bitsLeft = 8 - this->bitPointer;
	int32_t bitsFromNextByte = bitsToGet - bitsLeft;
	int32_t shift = bitsLeft - bitsToGet;
	int32_t i1 = 0;
	int32_t i2 = 0;
	if (shift >= 0) {
		i1 = $usr(b & $nc(TIFFFaxDecompressor::table1)->get(bitsLeft), shift);
		this->bitPointer += bitsToGet;
		if (this->bitPointer == 8) {
			this->bitPointer = 0;
			++this->bytePointer;
		}
	} else {
		i1 = $sl(b & $nc(TIFFFaxDecompressor::table1)->get(bitsLeft), -shift);
		i2 = $usr(next & $nc(TIFFFaxDecompressor::table2)->get(bitsFromNextByte), 8 - bitsFromNextByte);
		i1 |= i2;
		++this->bytePointer;
		this->bitPointer = bitsFromNextByte;
	}
	return i1;
}

void TIFFFaxDecompressor::updatePointer(int32_t bitsToMoveBack) {
	if (bitsToMoveBack > 8) {
		this->bytePointer -= bitsToMoveBack / 8;
		$modAssign(bitsToMoveBack, 8);
	}
	int32_t i = this->bitPointer - bitsToMoveBack;
	if (i < 0) {
		--this->bytePointer;
		this->bitPointer = 8 + i;
	} else {
		this->bitPointer = i;
	}
}

void TIFFFaxDecompressor::warning($String* msg) {
	if ($instanceOf($TIFFImageReader, this->reader)) {
		$nc($cast($TIFFImageReader, this->reader))->forwardWarningMessage(msg);
	}
}

void TIFFFaxDecompressor::clinit$($Class* clazz) {
	$assignStatic(TIFFFaxDecompressor::table1, $new($ints, {
		0,
		1,
		3,
		7,
		15,
		31,
		63,
		127,
		255
	}));
	$assignStatic(TIFFFaxDecompressor::table2, $new($ints, {
		0,
		128,
		192,
		224,
		240,
		248,
		252,
		254,
		255
	}));
	$assignStatic(TIFFFaxDecompressor::flipTable, $new($bytes, {
		0,
		-128,
		64,
		-64,
		32,
		-96,
		96,
		-32,
		16,
		-112,
		80,
		-48,
		48,
		-80,
		112,
		-16,
		8,
		-120,
		72,
		-56,
		40,
		-88,
		104,
		-24,
		24,
		-104,
		88,
		-40,
		56,
		-72,
		120,
		-8,
		4,
		-124,
		68,
		-60,
		36,
		-92,
		100,
		-28,
		20,
		-108,
		84,
		-44,
		52,
		-76,
		116,
		-12,
		12,
		-116,
		76,
		-52,
		44,
		-84,
		108,
		-20,
		28,
		-100,
		92,
		-36,
		60,
		-68,
		124,
		-4,
		2,
		-126,
		66,
		-62,
		34,
		-94,
		98,
		-30,
		18,
		-110,
		82,
		-46,
		50,
		-78,
		114,
		-14,
		10,
		-118,
		74,
		-54,
		42,
		-86,
		106,
		-22,
		26,
		-102,
		90,
		-38,
		58,
		-70,
		122,
		-6,
		6,
		-122,
		70,
		-58,
		38,
		-90,
		102,
		-26,
		22,
		-106,
		86,
		-42,
		54,
		-74,
		118,
		-10,
		14,
		-114,
		78,
		-50,
		46,
		-82,
		110,
		-18,
		30,
		-98,
		94,
		-34,
		62,
		-66,
		126,
		-2,
		1,
		-127,
		65,
		-63,
		33,
		-95,
		97,
		-31,
		17,
		-111,
		81,
		-47,
		49,
		-79,
		113,
		-15,
		9,
		-119,
		73,
		-55,
		41,
		-87,
		105,
		-23,
		25,
		-103,
		89,
		-39,
		57,
		-71,
		121,
		-7,
		5,
		-123,
		69,
		-59,
		37,
		-91,
		101,
		-27,
		21,
		-107,
		85,
		-43,
		53,
		-75,
		117,
		-11,
		13,
		-115,
		77,
		-51,
		45,
		-83,
		109,
		-19,
		29,
		-99,
		93,
		-35,
		61,
		-67,
		125,
		-3,
		3,
		-125,
		67,
		-61,
		35,
		-93,
		99,
		-29,
		19,
		-109,
		83,
		-45,
		51,
		-77,
		115,
		-13,
		11,
		-117,
		75,
		-53,
		43,
		-85,
		107,
		-21,
		27,
		-101,
		91,
		-37,
		59,
		-69,
		123,
		-5,
		7,
		-121,
		71,
		-57,
		39,
		-89,
		103,
		-25,
		23,
		-105,
		87,
		-41,
		55,
		-73,
		119,
		-9,
		15,
		-113,
		79,
		-49,
		47,
		-81,
		111,
		-17,
		31,
		-97,
		95,
		-33,
		63,
		-65,
		127,
		-1
	}));
	$assignStatic(TIFFFaxDecompressor::white, $new($shorts, {
		6430,
		6400,
		6400,
		6400,
		3225,
		3225,
		3225,
		3225,
		944,
		944,
		944,
		944,
		976,
		976,
		976,
		976,
		1456,
		1456,
		1456,
		1456,
		1488,
		1488,
		1488,
		1488,
		718,
		718,
		718,
		718,
		718,
		718,
		718,
		718,
		750,
		750,
		750,
		750,
		750,
		750,
		750,
		750,
		1520,
		1520,
		1520,
		1520,
		1552,
		1552,
		1552,
		1552,
		428,
		428,
		428,
		428,
		428,
		428,
		428,
		428,
		428,
		428,
		428,
		428,
		428,
		428,
		428,
		428,
		654,
		654,
		654,
		654,
		654,
		654,
		654,
		654,
		1072,
		1072,
		1072,
		1072,
		1104,
		1104,
		1104,
		1104,
		1136,
		1136,
		1136,
		1136,
		1168,
		1168,
		1168,
		1168,
		1200,
		1200,
		1200,
		1200,
		1232,
		1232,
		1232,
		1232,
		622,
		622,
		622,
		622,
		622,
		622,
		622,
		622,
		1008,
		1008,
		1008,
		1008,
		1040,
		1040,
		1040,
		1040,
		44,
		44,
		44,
		44,
		44,
		44,
		44,
		44,
		44,
		44,
		44,
		44,
		44,
		44,
		44,
		44,
		396,
		396,
		396,
		396,
		396,
		396,
		396,
		396,
		396,
		396,
		396,
		396,
		396,
		396,
		396,
		396,
		1712,
		1712,
		1712,
		1712,
		1744,
		1744,
		1744,
		1744,
		846,
		846,
		846,
		846,
		846,
		846,
		846,
		846,
		1264,
		1264,
		1264,
		1264,
		1296,
		1296,
		1296,
		1296,
		1328,
		1328,
		1328,
		1328,
		1360,
		1360,
		1360,
		1360,
		1392,
		1392,
		1392,
		1392,
		1424,
		1424,
		1424,
		1424,
		686,
		686,
		686,
		686,
		686,
		686,
		686,
		686,
		910,
		910,
		910,
		910,
		910,
		910,
		910,
		910,
		1968,
		1968,
		1968,
		1968,
		2000,
		2000,
		2000,
		2000,
		2032,
		2032,
		2032,
		2032,
		16,
		16,
		16,
		16,
		10257,
		10257,
		10257,
		10257,
		12305,
		12305,
		12305,
		12305,
		330,
		330,
		330,
		330,
		330,
		330,
		330,
		330,
		330,
		330,
		330,
		330,
		330,
		330,
		330,
		330,
		330,
		330,
		330,
		330,
		330,
		330,
		330,
		330,
		330,
		330,
		330,
		330,
		330,
		330,
		330,
		330,
		362,
		362,
		362,
		362,
		362,
		362,
		362,
		362,
		362,
		362,
		362,
		362,
		362,
		362,
		362,
		362,
		362,
		362,
		362,
		362,
		362,
		362,
		362,
		362,
		362,
		362,
		362,
		362,
		362,
		362,
		362,
		362,
		878,
		878,
		878,
		878,
		878,
		878,
		878,
		878,
		1904,
		1904,
		1904,
		1904,
		1936,
		1936,
		1936,
		1936,
		-18413,
		-18413,
		-16365,
		-16365,
		-14317,
		-14317,
		-10221,
		-10221,
		590,
		590,
		590,
		590,
		590,
		590,
		590,
		590,
		782,
		782,
		782,
		782,
		782,
		782,
		782,
		782,
		1584,
		1584,
		1584,
		1584,
		1616,
		1616,
		1616,
		1616,
		1648,
		1648,
		1648,
		1648,
		1680,
		1680,
		1680,
		1680,
		814,
		814,
		814,
		814,
		814,
		814,
		814,
		814,
		1776,
		1776,
		1776,
		1776,
		1808,
		1808,
		1808,
		1808,
		1840,
		1840,
		1840,
		1840,
		1872,
		1872,
		1872,
		1872,
		6157,
		6157,
		6157,
		6157,
		6157,
		6157,
		6157,
		6157,
		6157,
		6157,
		6157,
		6157,
		6157,
		6157,
		6157,
		6157,
		-12275,
		-12275,
		-12275,
		-12275,
		-12275,
		-12275,
		-12275,
		-12275,
		-12275,
		-12275,
		-12275,
		-12275,
		-12275,
		-12275,
		-12275,
		-12275,
		14353,
		14353,
		14353,
		14353,
		16401,
		16401,
		16401,
		16401,
		22547,
		22547,
		24595,
		24595,
		20497,
		20497,
		20497,
		20497,
		18449,
		18449,
		18449,
		18449,
		26643,
		26643,
		28691,
		28691,
		30739,
		30739,
		-32749,
		-32749,
		-30701,
		-30701,
		-28653,
		-28653,
		-26605,
		-26605,
		-24557,
		-24557,
		-22509,
		-22509,
		-20461,
		-20461,
		8207,
		8207,
		8207,
		8207,
		8207,
		8207,
		8207,
		8207,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		72,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		104,
		4107,
		4107,
		4107,
		4107,
		4107,
		4107,
		4107,
		4107,
		4107,
		4107,
		4107,
		4107,
		4107,
		4107,
		4107,
		4107,
		4107,
		4107,
		4107,
		4107,
		4107,
		4107,
		4107,
		4107,
		4107,
		4107,
		4107,
		4107,
		4107,
		4107,
		4107,
		4107,
		266,
		266,
		266,
		266,
		266,
		266,
		266,
		266,
		266,
		266,
		266,
		266,
		266,
		266,
		266,
		266,
		266,
		266,
		266,
		266,
		266,
		266,
		266,
		266,
		266,
		266,
		266,
		266,
		266,
		266,
		266,
		266,
		298,
		298,
		298,
		298,
		298,
		298,
		298,
		298,
		298,
		298,
		298,
		298,
		298,
		298,
		298,
		298,
		298,
		298,
		298,
		298,
		298,
		298,
		298,
		298,
		298,
		298,
		298,
		298,
		298,
		298,
		298,
		298,
		524,
		524,
		524,
		524,
		524,
		524,
		524,
		524,
		524,
		524,
		524,
		524,
		524,
		524,
		524,
		524,
		556,
		556,
		556,
		556,
		556,
		556,
		556,
		556,
		556,
		556,
		556,
		556,
		556,
		556,
		556,
		556,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		136,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		168,
		460,
		460,
		460,
		460,
		460,
		460,
		460,
		460,
		460,
		460,
		460,
		460,
		460,
		460,
		460,
		460,
		492,
		492,
		492,
		492,
		492,
		492,
		492,
		492,
		492,
		492,
		492,
		492,
		492,
		492,
		492,
		492,
		2059,
		2059,
		2059,
		2059,
		2059,
		2059,
		2059,
		2059,
		2059,
		2059,
		2059,
		2059,
		2059,
		2059,
		2059,
		2059,
		2059,
		2059,
		2059,
		2059,
		2059,
		2059,
		2059,
		2059,
		2059,
		2059,
		2059,
		2059,
		2059,
		2059,
		2059,
		2059,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		200,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232,
		232
	}));
	$assignStatic(TIFFFaxDecompressor::additionalMakeup, $new($shorts, {
		28679,
		28679,
		31752,
		(int16_t)0x00008009,
		(int16_t)0x00008409,
		(int16_t)0x00008809,
		(int16_t)0x00008c09,
		(int16_t)0x00009009,
		(int16_t)29703,
		(int16_t)29703,
		(int16_t)30727,
		(int16_t)30727,
		(int16_t)0x00009409,
		(int16_t)0x00009809,
		(int16_t)0x00009c09,
		(int16_t)0x0000a009
	}));
	$assignStatic(TIFFFaxDecompressor::initBlack, $new($shorts, {
		3226,
		6412,
		200,
		168,
		38,
		38,
		134,
		134,
		100,
		100,
		100,
		100,
		68,
		68,
		68,
		68
	}));
	$assignStatic(TIFFFaxDecompressor::twoBitBlack, $new($shorts, {
		292,
		260,
		226,
		226
	}));
	$assignStatic(TIFFFaxDecompressor::black, $new($shorts, {
		62,
		62,
		30,
		30,
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
		3225,
		3225,
		3225,
		3225,
		3225,
		3225,
		3225,
		3225,
		3225,
		3225,
		3225,
		3225,
		3225,
		3225,
		3225,
		3225,
		3225,
		3225,
		3225,
		3225,
		3225,
		3225,
		3225,
		3225,
		3225,
		3225,
		3225,
		3225,
		3225,
		3225,
		3225,
		3225,
		588,
		588,
		588,
		588,
		588,
		588,
		588,
		588,
		1680,
		1680,
		20499,
		22547,
		24595,
		26643,
		1776,
		1776,
		1808,
		1808,
		-24557,
		-22509,
		-20461,
		-18413,
		1904,
		1904,
		1936,
		1936,
		-16365,
		-14317,
		782,
		782,
		782,
		782,
		814,
		814,
		814,
		814,
		-12269,
		-10221,
		10257,
		10257,
		12305,
		12305,
		14353,
		14353,
		16403,
		18451,
		1712,
		1712,
		1744,
		1744,
		28691,
		30739,
		-32749,
		-30701,
		-28653,
		-26605,
		2061,
		2061,
		2061,
		2061,
		2061,
		2061,
		2061,
		2061,
		424,
		424,
		424,
		424,
		424,
		424,
		424,
		424,
		424,
		424,
		424,
		424,
		424,
		424,
		424,
		424,
		424,
		424,
		424,
		424,
		424,
		424,
		424,
		424,
		424,
		424,
		424,
		424,
		424,
		424,
		424,
		424,
		750,
		750,
		750,
		750,
		1616,
		1616,
		1648,
		1648,
		1424,
		1424,
		1456,
		1456,
		1488,
		1488,
		1520,
		1520,
		1840,
		1840,
		1872,
		1872,
		1968,
		1968,
		8209,
		8209,
		524,
		524,
		524,
		524,
		524,
		524,
		524,
		524,
		556,
		556,
		556,
		556,
		556,
		556,
		556,
		556,
		1552,
		1552,
		1584,
		1584,
		2000,
		2000,
		2032,
		2032,
		976,
		976,
		1008,
		1008,
		1040,
		1040,
		1072,
		1072,
		1296,
		1296,
		1328,
		1328,
		718,
		718,
		718,
		718,
		456,
		456,
		456,
		456,
		456,
		456,
		456,
		456,
		456,
		456,
		456,
		456,
		456,
		456,
		456,
		456,
		456,
		456,
		456,
		456,
		456,
		456,
		456,
		456,
		456,
		456,
		456,
		456,
		456,
		456,
		456,
		456,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		326,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		358,
		490,
		490,
		490,
		490,
		490,
		490,
		490,
		490,
		490,
		490,
		490,
		490,
		490,
		490,
		490,
		490,
		4113,
		4113,
		6161,
		6161,
		848,
		848,
		880,
		880,
		912,
		912,
		944,
		944,
		622,
		622,
		622,
		622,
		654,
		654,
		654,
		654,
		1104,
		1104,
		1136,
		1136,
		1168,
		1168,
		1200,
		1200,
		1232,
		1232,
		1264,
		1264,
		686,
		686,
		686,
		686,
		1360,
		1360,
		1392,
		1392,
		12,
		12,
		12,
		12,
		12,
		12,
		12,
		12,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390,
		390
	}));
	$assignStatic(TIFFFaxDecompressor::twoDCodes, $new($bytes, {
		80,
		88,
		23,
		71,
		30,
		30,
		62,
		62,
		4,
		4,
		4,
		4,
		4,
		4,
		4,
		4,
		11,
		11,
		11,
		11,
		11,
		11,
		11,
		11,
		11,
		11,
		11,
		11,
		11,
		11,
		11,
		11,
		35,
		35,
		35,
		35,
		35,
		35,
		35,
		35,
		35,
		35,
		35,
		35,
		35,
		35,
		35,
		35,
		51,
		51,
		51,
		51,
		51,
		51,
		51,
		51,
		51,
		51,
		51,
		51,
		51,
		51,
		51,
		51,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41,
		41
	}));
}

TIFFFaxDecompressor::TIFFFaxDecompressor() {
}

$Class* TIFFFaxDecompressor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fillOrder", "I", nullptr, $PRIVATE, $field(TIFFFaxDecompressor, fillOrder)},
		{"t4Options", "I", nullptr, $PRIVATE, $field(TIFFFaxDecompressor, t4Options)},
		{"t6Options", "I", nullptr, $PRIVATE, $field(TIFFFaxDecompressor, t6Options)},
		{"uncompressedMode", "I", nullptr, $PRIVATE, $field(TIFFFaxDecompressor, uncompressedMode)},
		{"fillBits", "I", nullptr, $PRIVATE, $field(TIFFFaxDecompressor, fillBits)},
		{"oneD", "I", nullptr, $PRIVATE, $field(TIFFFaxDecompressor, oneD)},
		{"data", "[B", nullptr, $PRIVATE, $field(TIFFFaxDecompressor, data)},
		{"bitPointer", "I", nullptr, $PRIVATE, $field(TIFFFaxDecompressor, bitPointer)},
		{"bytePointer", "I", nullptr, $PRIVATE, $field(TIFFFaxDecompressor, bytePointer)},
		{"buffer", "[B", nullptr, $PRIVATE, $field(TIFFFaxDecompressor, buffer)},
		{"w", "I", nullptr, $PRIVATE, $field(TIFFFaxDecompressor, w)},
		{"h", "I", nullptr, $PRIVATE, $field(TIFFFaxDecompressor, h)},
		{"bitsPerScanline", "I", nullptr, $PRIVATE, $field(TIFFFaxDecompressor, bitsPerScanline)},
		{"lineBitNum", "I", nullptr, $PRIVATE, $field(TIFFFaxDecompressor, lineBitNum)},
		{"changingElemSize", "I", nullptr, $PRIVATE, $field(TIFFFaxDecompressor, changingElemSize)},
		{"prevChangingElems", "[I", nullptr, $PRIVATE, $field(TIFFFaxDecompressor, prevChangingElems)},
		{"currChangingElems", "[I", nullptr, $PRIVATE, $field(TIFFFaxDecompressor, currChangingElems)},
		{"lastChangingElement", "I", nullptr, $PRIVATE, $field(TIFFFaxDecompressor, lastChangingElement)},
		{"table1", "[I", nullptr, $PRIVATE | $STATIC, $staticField(TIFFFaxDecompressor, table1)},
		{"table2", "[I", nullptr, $PRIVATE | $STATIC, $staticField(TIFFFaxDecompressor, table2)},
		{"flipTable", "[B", nullptr, $STATIC, $staticField(TIFFFaxDecompressor, flipTable)},
		{"white", "[S", nullptr, $PRIVATE | $STATIC, $staticField(TIFFFaxDecompressor, white)},
		{"additionalMakeup", "[S", nullptr, $PRIVATE | $STATIC, $staticField(TIFFFaxDecompressor, additionalMakeup)},
		{"initBlack", "[S", nullptr, $PRIVATE | $STATIC, $staticField(TIFFFaxDecompressor, initBlack)},
		{"twoBitBlack", "[S", nullptr, $PRIVATE | $STATIC, $staticField(TIFFFaxDecompressor, twoBitBlack)},
		{"black", "[S", nullptr, $PRIVATE | $STATIC, $staticField(TIFFFaxDecompressor, black)},
		{"twoDCodes", "[B", nullptr, $PRIVATE | $STATIC, $staticField(TIFFFaxDecompressor, twoDCodes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TIFFFaxDecompressor, init$, void)},
		{"beginDecoding", "()V", nullptr, $PUBLIC, $virtualMethod(TIFFFaxDecompressor, beginDecoding, void)},
		{"decodeBlackCodeWord", "()I", nullptr, $PRIVATE, $method(TIFFFaxDecompressor, decodeBlackCodeWord, int32_t), "javax.imageio.IIOException"},
		{"decodeNextScanline", "(I)V", nullptr, $PUBLIC, $virtualMethod(TIFFFaxDecompressor, decodeNextScanline, void, int32_t), "javax.imageio.IIOException"},
		{"decodeRLE", "()V", nullptr, $PUBLIC, $virtualMethod(TIFFFaxDecompressor, decodeRLE, void), "javax.imageio.IIOException"},
		{"decodeRaw", "([BIII)V", nullptr, $PUBLIC, $virtualMethod(TIFFFaxDecompressor, decodeRaw, void, $bytes*, int32_t, int32_t, int32_t), "java.io.IOException"},
		{"decodeT4", "()V", nullptr, $PUBLIC, $virtualMethod(TIFFFaxDecompressor, decodeT4, void), "javax.imageio.IIOException"},
		{"decodeT6", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(TIFFFaxDecompressor, decodeT6, void), "javax.imageio.IIOException"},
		{"decodeWhiteCodeWord", "()I", nullptr, $PRIVATE, $method(TIFFFaxDecompressor, decodeWhiteCodeWord, int32_t), "javax.imageio.IIOException"},
		{"findNextLine", "()I", nullptr, $PRIVATE, $method(TIFFFaxDecompressor, findNextLine, int32_t), "javax.imageio.IIOException,java.io.EOFException"},
		{"getNextChangingElement", "(IZ[I)V", nullptr, $PRIVATE, $method(TIFFFaxDecompressor, getNextChangingElement, void, int32_t, bool, $ints*), "javax.imageio.IIOException"},
		{"nextLesserThan8Bits", "(I)I", nullptr, $PRIVATE, $method(TIFFFaxDecompressor, nextLesserThan8Bits, int32_t, int32_t), "javax.imageio.IIOException"},
		{"nextNBits", "(I)I", nullptr, $PRIVATE, $method(TIFFFaxDecompressor, nextNBits, int32_t, int32_t), "javax.imageio.IIOException"},
		{"setToBlack", "(II)V", nullptr, $PRIVATE, $method(TIFFFaxDecompressor, setToBlack, void, int32_t, int32_t)},
		{"updatePointer", "(I)V", nullptr, $PRIVATE, $method(TIFFFaxDecompressor, updatePointer, void, int32_t)},
		{"warning", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(TIFFFaxDecompressor, warning, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.imageio.plugins.tiff.TIFFFaxDecompressor",
		"com.sun.imageio.plugins.tiff.TIFFDecompressor",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TIFFFaxDecompressor, name, initialize, &classInfo$$, TIFFFaxDecompressor::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TIFFFaxDecompressor);
	});
	return class$;
}

$Class* TIFFFaxDecompressor::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com