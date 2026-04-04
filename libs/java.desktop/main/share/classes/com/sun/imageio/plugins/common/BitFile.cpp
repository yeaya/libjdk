#include <com/sun/imageio/plugins/common/BitFile.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

void BitFile::init$($ImageOutputStream* output, bool blocks) {
	this->blocks = false;
	$set(this, output, output);
	this->blocks = blocks;
	$set(this, buffer, $new($bytes, 256));
	this->index = 0;
	this->bitsLeft = 8;
}

void BitFile::flush() {
	int32_t numBytes = this->index + (this->bitsLeft == 8 ? 0 : 1);
	if (numBytes > 0) {
		if (this->blocks) {
			$nc(this->output)->write(numBytes);
		}
		$nc(this->output)->write(this->buffer, 0, numBytes);
		$nc(this->buffer)->set(0, 0);
		this->index = 0;
		this->bitsLeft = 8;
	}
}

void BitFile::writeBits(int32_t bits, int32_t numbits) {
	int32_t bitsWritten = 0;
	int32_t numBytes = 255;
	do {
		if ((this->index == 254 && this->bitsLeft == 0) || this->index > 254) {
			if (this->blocks) {
				$nc(this->output)->write(numBytes);
			}
			$nc(this->output)->write(this->buffer, 0, numBytes);
			$nc(this->buffer)->set(0, 0);
			this->index = 0;
			this->bitsLeft = 8;
		}
		if (numbits <= this->bitsLeft) {
			if (this->blocks) {
				(*$nc(this->buffer))[this->index] |= $sl(bits & (($sl(1, numbits)) - 1), 8 - this->bitsLeft);
				bitsWritten += numbits;
				this->bitsLeft -= numbits;
				numbits = 0;
			} else {
				(*$nc(this->buffer))[this->index] |= $sl(bits & (($sl(1, numbits)) - 1), this->bitsLeft - numbits);
				bitsWritten += numbits;
				this->bitsLeft -= numbits;
				numbits = 0;
			}
		} else if (this->blocks) {
			(*$nc(this->buffer))[this->index] |= $sl(bits & (($sl(1, this->bitsLeft)) - 1), 8 - this->bitsLeft);
			bitsWritten += this->bitsLeft;
			bits >>= this->bitsLeft;
			numbits -= this->bitsLeft;
			this->buffer->set(++this->index, 0);
			this->bitsLeft = 8;
		} else {
			int32_t topbits = ($usr(bits, numbits - this->bitsLeft)) & (($sl(1, this->bitsLeft)) - 1);
			(*$nc(this->buffer))[this->index] |= topbits;
			numbits -= this->bitsLeft;
			bitsWritten += this->bitsLeft;
			this->buffer->set(++this->index, 0);
			this->bitsLeft = 8;
		}
	} while (numbits != 0);
}

BitFile::BitFile() {
}

$Class* BitFile::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"output", "Ljavax/imageio/stream/ImageOutputStream;", nullptr, 0, $field(BitFile, output)},
		{"buffer", "[B", nullptr, 0, $field(BitFile, buffer)},
		{"index", "I", nullptr, 0, $field(BitFile, index)},
		{"bitsLeft", "I", nullptr, 0, $field(BitFile, bitsLeft)},
		{"blocks", "Z", nullptr, 0, $field(BitFile, blocks)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/imageio/stream/ImageOutputStream;Z)V", nullptr, $PUBLIC, $method(BitFile, init$, void, $ImageOutputStream*, bool)},
		{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(BitFile, flush, void), "java.io.IOException"},
		{"writeBits", "(II)V", nullptr, $PUBLIC, $virtualMethod(BitFile, writeBits, void, int32_t, int32_t), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.imageio.plugins.common.BitFile",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BitFile, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BitFile);
	});
	return class$;
}

$Class* BitFile::class$ = nullptr;

				} // common
			} // plugins
		} // imageio
	} // sun
} // com