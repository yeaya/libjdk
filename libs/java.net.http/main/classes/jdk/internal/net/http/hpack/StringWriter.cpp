#include <jdk/internal/net/http/hpack/StringWriter.h>
#include <java/lang/CharSequence.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InternalError.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Arrays.h>
#include <jdk/internal/net/http/hpack/Huffman$Writer.h>
#include <jdk/internal/net/http/hpack/ISO_8859_1$Writer.h>
#include <jdk/internal/net/http/hpack/IntegerWriter.h>
#include <jdk/internal/net/http/hpack/QuickHuffman$Writer.h>
#include <jcpp.h>

#undef CONFIGURED
#undef DONE
#undef LENGTH_WRITTEN
#undef NEW

using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Arrays = ::java::util::Arrays;
using $ISO_8859_1$Writer = ::jdk::internal::net::http::hpack::ISO_8859_1$Writer;
using $IntegerWriter = ::jdk::internal::net::http::hpack::IntegerWriter;
using $QuickHuffman$Writer = ::jdk::internal::net::http::hpack::QuickHuffman$Writer;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

void StringWriter::init$() {
	$set(this, intWriter, $new($IntegerWriter));
	$set(this, huffmanWriter, $new($QuickHuffman$Writer));
	$set(this, plainWriter, $new($ISO_8859_1$Writer));
	this->state = StringWriter::NEW;
}

StringWriter* StringWriter::configure($CharSequence* input, bool huffman) {
	return configure(input, 0, $nc(input)->length(), huffman);
}

StringWriter* StringWriter::configure($CharSequence* input, int32_t start, int32_t end, bool huffman) {
	$useLocalObjectStack();
	if (start < 0 || end < 0 || end > $nc(input)->length() || start > end) {
		$throwNew($IndexOutOfBoundsException, $($String::format("input.length()=%s, start=%s, end=%s"_s, $$new($ObjectArray, {
			$($Integer::valueOf($nc(input)->length())),
			$($Integer::valueOf(start)),
			$($Integer::valueOf(end))
		}))));
	}
	if (!huffman) {
		this->plainWriter->configure(input, start, end);
		this->intWriter->configure(end - start, 7, 0);
	} else {
		this->huffmanWriter->from(input, start, end);
		this->intWriter->configure(this->huffmanWriter->lengthOf(input, start, end), 7, 128);
	}
	this->huffman = huffman;
	this->state = StringWriter::CONFIGURED;
	return this;
}

bool StringWriter::write($ByteBuffer* output) {
	$useLocalObjectStack();
	if (this->state == StringWriter::DONE) {
		return true;
	}
	if (this->state == StringWriter::NEW) {
		$throwNew($IllegalStateException, "Configure first"_s);
	}
	if (!$nc(output)->hasRemaining()) {
		return false;
	}
	if (this->state == StringWriter::CONFIGURED) {
		if (this->intWriter->write(output)) {
			this->state = StringWriter::LENGTH_WRITTEN;
		} else {
			return false;
		}
	}
	if (this->state == StringWriter::LENGTH_WRITTEN) {
		bool written = this->huffman ? this->huffmanWriter->write(output) : this->plainWriter->write(output);
		if (written) {
			this->state = StringWriter::DONE;
			return true;
		} else {
			return false;
		}
	}
	$throwNew($InternalError, $($Arrays::toString($$new($ObjectArray, {
		$($Integer::valueOf(this->state)),
		$($Boolean::valueOf(this->huffman))
	}))));
}

void StringWriter::reset() {
	this->intWriter->reset();
	if (this->huffman) {
		this->huffmanWriter->reset();
	} else {
		this->plainWriter->reset();
	}
	this->state = StringWriter::NEW;
}

StringWriter::StringWriter() {
}

$Class* StringWriter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NEW", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringWriter, NEW)},
		{"CONFIGURED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringWriter, CONFIGURED)},
		{"LENGTH_WRITTEN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringWriter, LENGTH_WRITTEN)},
		{"DONE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringWriter, DONE)},
		{"intWriter", "Ljdk/internal/net/http/hpack/IntegerWriter;", nullptr, $PRIVATE | $FINAL, $field(StringWriter, intWriter)},
		{"huffmanWriter", "Ljdk/internal/net/http/hpack/Huffman$Writer;", nullptr, $PRIVATE | $FINAL, $field(StringWriter, huffmanWriter)},
		{"plainWriter", "Ljdk/internal/net/http/hpack/ISO_8859_1$Writer;", nullptr, $PRIVATE | $FINAL, $field(StringWriter, plainWriter)},
		{"state", "I", nullptr, $PRIVATE, $field(StringWriter, state)},
		{"huffman", "Z", nullptr, $PRIVATE, $field(StringWriter, huffman)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(StringWriter, init$, void)},
		{"configure", "(Ljava/lang/CharSequence;Z)Ljdk/internal/net/http/hpack/StringWriter;", nullptr, 0, $method(StringWriter, configure, StringWriter*, $CharSequence*, bool)},
		{"configure", "(Ljava/lang/CharSequence;IIZ)Ljdk/internal/net/http/hpack/StringWriter;", nullptr, 0, $method(StringWriter, configure, StringWriter*, $CharSequence*, int32_t, int32_t, bool)},
		{"reset", "()V", nullptr, 0, $method(StringWriter, reset, void)},
		{"write", "(Ljava/nio/ByteBuffer;)Z", nullptr, 0, $method(StringWriter, write, bool, $ByteBuffer*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.hpack.StringWriter",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(StringWriter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StringWriter);
	});
	return class$;
}

$Class* StringWriter::class$ = nullptr;

				} // hpack
			} // http
		} // net
	} // internal
} // jdk