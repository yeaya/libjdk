#include <jdk/internal/net/http/hpack/StringReader.h>
#include <java/lang/Appendable.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Arrays.h>
#include <jdk/internal/net/http/hpack/Huffman$Reader.h>
#include <jdk/internal/net/http/hpack/ISO_8859_1$Reader.h>
#include <jdk/internal/net/http/hpack/IntegerReader.h>
#include <jdk/internal/net/http/hpack/QuickHuffman$Reader.h>
#include <jcpp.h>

#undef DONE
#undef FIRST_BYTE_READ
#undef LENGTH_READ
#undef NEW

using $Appendable = ::java::lang::Appendable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Arrays = ::java::util::Arrays;
using $ISO_8859_1$Reader = ::jdk::internal::net::http::hpack::ISO_8859_1$Reader;
using $IntegerReader = ::jdk::internal::net::http::hpack::IntegerReader;
using $QuickHuffman$Reader = ::jdk::internal::net::http::hpack::QuickHuffman$Reader;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

void StringReader::init$() {
	$set(this, intReader, $new($IntegerReader));
	$set(this, huffmanReader, $new($QuickHuffman$Reader));
	$set(this, plainReader, $new($ISO_8859_1$Reader));
	this->state = StringReader::NEW;
}

bool StringReader::read($ByteBuffer* input, $Appendable* output) {
	$useLocalObjectStack();
	if (this->state == StringReader::DONE) {
		return true;
	}
	if (!$nc(input)->hasRemaining()) {
		return false;
	}
	if (this->state == StringReader::NEW) {
		int32_t p = input->position();
		this->huffman = (input->get(p) & 0x80) != 0;
		this->state = StringReader::FIRST_BYTE_READ;
		this->intReader->configure(7);
	}
	if (this->state == StringReader::FIRST_BYTE_READ) {
		bool lengthRead = this->intReader->read(input);
		if (!lengthRead) {
			return false;
		}
		this->remainingLength = this->intReader->get();
		this->state = StringReader::LENGTH_READ;
	}
	if (this->state == StringReader::LENGTH_READ) {
		bool isLast = input->remaining() >= this->remainingLength;
		int32_t oldLimit = input->limit();
		if (isLast) {
			input->limit(input->position() + this->remainingLength);
		}
		this->remainingLength -= $Math::min(input->remaining(), this->remainingLength);
		if (this->huffman) {
			this->huffmanReader->read(input, output, isLast);
		} else {
			this->plainReader->read(input, output);
		}
		if (isLast) {
			input->limit(oldLimit);
			this->state = StringReader::DONE;
		}
		return isLast;
	}
	$throwNew($InternalError, $($Arrays::toString($$new($ObjectArray, {
		$($Integer::valueOf(this->state)),
		$($Boolean::valueOf(this->huffman)),
		$($Integer::valueOf(this->remainingLength))
	}))));
}

bool StringReader::isHuffmanEncoded() {
	if (this->state < StringReader::FIRST_BYTE_READ) {
		$throwNew($IllegalStateException, "Has not been fully read yet"_s);
	}
	return this->huffman;
}

void StringReader::reset() {
	if (this->huffman) {
		this->huffmanReader->reset();
	} else {
		this->plainReader->reset();
	}
	this->intReader->reset();
	this->state = StringReader::NEW;
}

StringReader::StringReader() {
}

$Class* StringReader::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NEW", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringReader, NEW)},
		{"FIRST_BYTE_READ", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringReader, FIRST_BYTE_READ)},
		{"LENGTH_READ", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringReader, LENGTH_READ)},
		{"DONE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringReader, DONE)},
		{"intReader", "Ljdk/internal/net/http/hpack/IntegerReader;", nullptr, $PRIVATE | $FINAL, $field(StringReader, intReader)},
		{"huffmanReader", "Ljdk/internal/net/http/hpack/Huffman$Reader;", nullptr, $PRIVATE | $FINAL, $field(StringReader, huffmanReader)},
		{"plainReader", "Ljdk/internal/net/http/hpack/ISO_8859_1$Reader;", nullptr, $PRIVATE | $FINAL, $field(StringReader, plainReader)},
		{"state", "I", nullptr, $PRIVATE, $field(StringReader, state)},
		{"huffman", "Z", nullptr, $PRIVATE, $field(StringReader, huffman)},
		{"remainingLength", "I", nullptr, $PRIVATE, $field(StringReader, remainingLength)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(StringReader, init$, void)},
		{"isHuffmanEncoded", "()Z", nullptr, 0, $method(StringReader, isHuffmanEncoded, bool)},
		{"read", "(Ljava/nio/ByteBuffer;Ljava/lang/Appendable;)Z", nullptr, 0, $method(StringReader, read, bool, $ByteBuffer*, $Appendable*), "java.io.IOException"},
		{"reset", "()V", nullptr, 0, $method(StringReader, reset, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.hpack.StringReader",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(StringReader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StringReader);
	});
	return class$;
}

$Class* StringReader::class$ = nullptr;

				} // hpack
			} // http
		} // net
	} // internal
} // jdk