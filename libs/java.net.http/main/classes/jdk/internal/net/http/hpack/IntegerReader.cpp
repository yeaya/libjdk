#include <jdk/internal/net/http/hpack/IntegerReader.h>
#include <java/io/IOException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InternalError.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef CONFIGURED
#undef DONE
#undef FIRST_BYTE_READ
#undef MAX_VALUE
#undef N
#undef NEW

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Arrays = ::java::util::Arrays;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

void IntegerReader::init$() {
	this->state = IntegerReader::NEW;
	this->b = 1;
}

IntegerReader* IntegerReader::configure(int32_t N) {
	return configure(N, $Integer::MAX_VALUE);
}

IntegerReader* IntegerReader::configure(int32_t N, int32_t maxValue) {
	$useLocalObjectStack();
	if (this->state != IntegerReader::NEW) {
		$throwNew($IllegalStateException, "Already configured"_s);
	}
	checkPrefix(N);
	if (maxValue < 0) {
		$throwNew($IllegalArgumentException, $$str({"maxValue >= 0: maxValue="_s, $$str(maxValue)}));
	}
	this->maxValue = maxValue;
	this->N = N;
	this->state = IntegerReader::CONFIGURED;
	return this;
}

bool IntegerReader::read($ByteBuffer* input) {
	$useLocalObjectStack();
	if (this->state == IntegerReader::NEW) {
		$throwNew($IllegalStateException, "Configure first"_s);
	}
	if (this->state == IntegerReader::DONE) {
		return true;
	}
	if (!$nc(input)->hasRemaining()) {
		return false;
	}
	if (this->state == IntegerReader::CONFIGURED) {
		int32_t max = ($sl(2, this->N - 1)) - 1;
		int32_t n = input->get() & max;
		if (n != max) {
			this->value = n;
			this->state = IntegerReader::DONE;
			return true;
		} else {
			this->r = max;
		}
		this->state = IntegerReader::FIRST_BYTE_READ;
	}
	if (this->state == IntegerReader::FIRST_BYTE_READ) {
		int8_t i = 0;
		do {
			if (!input->hasRemaining()) {
				return false;
			}
			i = input->get();
			int64_t increment = this->b * (i & 0x7f);
			if (this->r + increment > this->maxValue) {
				$throwNew($IOException, $($String::format("Integer overflow: maxValue=%,d, value=%,d"_s, $$new($ObjectArray, {
					$($Integer::valueOf(this->maxValue)),
					$($Long::valueOf(this->r + increment))
				}))));
			}
			this->r += increment;
			this->b *= 128;
		} while ((0x80 & i) == 0x80);
		this->value = (int32_t)this->r;
		this->state = IntegerReader::DONE;
		return true;
	}
	$throwNew($InternalError, $($Arrays::toString($$new($ObjectArray, {
		$($Integer::valueOf(this->state)),
		$($Integer::valueOf(this->N)),
		$($Integer::valueOf(this->maxValue)),
		$($Integer::valueOf(this->value)),
		$($Long::valueOf(this->r)),
		$($Long::valueOf(this->b))
	}))));
}

int32_t IntegerReader::get() {
	if (this->state != IntegerReader::DONE) {
		$throwNew($IllegalStateException, "Has not been fully read yet"_s);
	}
	return this->value;
}

void IntegerReader::checkPrefix(int32_t N) {
	$useLocalObjectStack();
	if (N < 1 || N > 8) {
		$throwNew($IllegalArgumentException, $$str({"1 <= N <= 8: N= "_s, $$str(N)}));
	}
}

IntegerReader* IntegerReader::reset() {
	this->b = 1;
	this->state = IntegerReader::NEW;
	return this;
}

IntegerReader::IntegerReader() {
}

$Class* IntegerReader::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NEW", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerReader, NEW)},
		{"CONFIGURED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerReader, CONFIGURED)},
		{"FIRST_BYTE_READ", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerReader, FIRST_BYTE_READ)},
		{"DONE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerReader, DONE)},
		{"state", "I", nullptr, $PRIVATE, $field(IntegerReader, state)},
		{"N", "I", nullptr, $PRIVATE, $field(IntegerReader, N)},
		{"maxValue", "I", nullptr, $PRIVATE, $field(IntegerReader, maxValue)},
		{"value", "I", nullptr, $PRIVATE, $field(IntegerReader, value)},
		{"r", "J", nullptr, $PRIVATE, $field(IntegerReader, r)},
		{"b", "J", nullptr, $PRIVATE, $field(IntegerReader, b)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(IntegerReader, init$, void)},
		{"checkPrefix", "(I)V", nullptr, $PRIVATE | $STATIC, $staticMethod(IntegerReader, checkPrefix, void, int32_t)},
		{"configure", "(I)Ljdk/internal/net/http/hpack/IntegerReader;", nullptr, $PUBLIC, $method(IntegerReader, configure, IntegerReader*, int32_t)},
		{"configure", "(II)Ljdk/internal/net/http/hpack/IntegerReader;", nullptr, $PUBLIC, $method(IntegerReader, configure, IntegerReader*, int32_t, int32_t)},
		{"get", "()I", nullptr, $PUBLIC, $method(IntegerReader, get, int32_t), "java.lang.IllegalStateException"},
		{"read", "(Ljava/nio/ByteBuffer;)Z", nullptr, $PUBLIC, $method(IntegerReader, read, bool, $ByteBuffer*), "java.io.IOException"},
		{"reset", "()Ljdk/internal/net/http/hpack/IntegerReader;", nullptr, $PUBLIC, $method(IntegerReader, reset, IntegerReader*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.hpack.IntegerReader",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IntegerReader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IntegerReader);
	});
	return class$;
}

$Class* IntegerReader::class$ = nullptr;

				} // hpack
			} // http
		} // net
	} // internal
} // jdk