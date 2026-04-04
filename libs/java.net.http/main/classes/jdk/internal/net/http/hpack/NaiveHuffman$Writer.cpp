#include <jdk/internal/net/http/hpack/NaiveHuffman$Writer.h>
#include <java/lang/CharSequence.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/nio/ByteBuffer.h>
#include <jdk/internal/net/http/hpack/NaiveHuffman$Code.h>
#include <jdk/internal/net/http/hpack/NaiveHuffman.h>
#include <jcpp.h>

#undef EOS
#undef INSTANCE

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $NaiveHuffman = ::jdk::internal::net::http::hpack::NaiveHuffman;
using $NaiveHuffman$Code = ::jdk::internal::net::http::hpack::NaiveHuffman$Code;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

void NaiveHuffman$Writer::init$() {
	this->avail = 8;
}

NaiveHuffman$Writer* NaiveHuffman$Writer::from($CharSequence* input, int32_t start, int32_t end) {
	$useLocalObjectStack();
	if (start < 0 || end < 0 || end > $nc(input)->length() || start > end) {
		$throwNew($IndexOutOfBoundsException, $($String::format("input.length()=%s, start=%s, end=%s"_s, $$new($ObjectArray, {
			$($Integer::valueOf($nc(input)->length())),
			$($Integer::valueOf(start)),
			$($Integer::valueOf(end))
		}))));
	}
	this->pos = start;
	this->end = end;
	$set(this, source, input);
	return this;
}

bool NaiveHuffman$Writer::write($ByteBuffer* destination) {
	$useLocalObjectStack();
	for (; this->pos < this->end; ++this->pos) {
		if (this->rem == 0) {
			$init($NaiveHuffman);
			$var($NaiveHuffman$Code, desc, $nc($NaiveHuffman::INSTANCE)->codeOf($nc(this->source)->charAt(this->pos)));
			this->rem = $nc(desc)->length;
			this->code = desc->code;
		}
		while (this->rem > 0) {
			if (this->rem < this->avail) {
				this->curr |= ($sl(this->code, this->avail - this->rem));
				this->avail -= this->rem;
				this->rem = 0;
			} else {
				int32_t c = (this->curr | ($usr(this->code, this->rem - this->avail)));
				if ($nc(destination)->hasRemaining()) {
					destination->put((int8_t)c);
				} else {
					return false;
				}
				this->curr = c;
				this->code <<= (32 - this->rem + this->avail);
				$usrAssign(this->code, 32 - this->rem + this->avail);
				this->rem -= this->avail;
				this->curr = 0;
				this->avail = 8;
			}
		}
	}
	if (this->avail < 8) {
		if ($nc(destination)->hasRemaining()) {
			$init($NaiveHuffman);
			destination->put((int8_t)(this->curr | ($usr($nc($nc($NaiveHuffman::INSTANCE)->EOS)->code, $nc($nc($NaiveHuffman::INSTANCE)->EOS)->length - this->avail))));
			this->avail = 8;
		} else {
			return false;
		}
	}
	return true;
}

NaiveHuffman$Writer* NaiveHuffman$Writer::reset() {
	$set(this, source, nullptr);
	this->end = -1;
	this->pos = -1;
	this->avail = 8;
	this->curr = 0;
	this->code = 0;
	return this;
}

int32_t NaiveHuffman$Writer::lengthOf($CharSequence* value, int32_t start, int32_t end) {
	$init($NaiveHuffman);
	return $nc($NaiveHuffman::INSTANCE)->lengthOf(value, start, end);
}

NaiveHuffman$Writer::NaiveHuffman$Writer() {
}

$Class* NaiveHuffman$Writer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pos", "I", nullptr, $PRIVATE, $field(NaiveHuffman$Writer, pos)},
		{"avail", "I", nullptr, $PRIVATE, $field(NaiveHuffman$Writer, avail)},
		{"curr", "I", nullptr, $PRIVATE, $field(NaiveHuffman$Writer, curr)},
		{"rem", "I", nullptr, $PRIVATE, $field(NaiveHuffman$Writer, rem)},
		{"code", "I", nullptr, $PRIVATE, $field(NaiveHuffman$Writer, code)},
		{"source", "Ljava/lang/CharSequence;", nullptr, $PRIVATE, $field(NaiveHuffman$Writer, source)},
		{"end", "I", nullptr, $PRIVATE, $field(NaiveHuffman$Writer, end)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NaiveHuffman$Writer, init$, void)},
		{"from", "(Ljava/lang/CharSequence;II)Ljdk/internal/net/http/hpack/NaiveHuffman$Writer;", nullptr, $PUBLIC, $virtualMethod(NaiveHuffman$Writer, from, NaiveHuffman$Writer*, $CharSequence*, int32_t, int32_t)},
		{"lengthOf", "(Ljava/lang/CharSequence;II)I", nullptr, $PUBLIC, $virtualMethod(NaiveHuffman$Writer, lengthOf, int32_t, $CharSequence*, int32_t, int32_t)},
		{"reset", "()Ljdk/internal/net/http/hpack/NaiveHuffman$Writer;", nullptr, $PUBLIC, $virtualMethod(NaiveHuffman$Writer, reset, NaiveHuffman$Writer*)},
		{"write", "(Ljava/nio/ByteBuffer;)Z", nullptr, $PUBLIC, $virtualMethod(NaiveHuffman$Writer, write, bool, $ByteBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.hpack.NaiveHuffman$Writer", "jdk.internal.net.http.hpack.NaiveHuffman", "Writer", $STATIC | $FINAL},
		{"jdk.internal.net.http.hpack.Huffman$Writer", "jdk.internal.net.http.hpack.Huffman", "Writer", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.hpack.NaiveHuffman$Writer",
		"java.lang.Object",
		"jdk.internal.net.http.hpack.Huffman$Writer",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.hpack.NaiveHuffman"
	};
	$loadClass(NaiveHuffman$Writer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NaiveHuffman$Writer);
	});
	return class$;
}

$Class* NaiveHuffman$Writer::class$ = nullptr;

				} // hpack
			} // http
		} // net
	} // internal
} // jdk