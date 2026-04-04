#include <jdk/internal/net/http/hpack/IntegerWriter.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InternalError.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef CONFIGURED
#undef DONE
#undef FIRST_BYTE_WRITTEN
#undef N
#undef NEW

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Arrays = ::java::util::Arrays;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

void IntegerWriter::init$() {
	this->state = IntegerWriter::NEW;
}

IntegerWriter* IntegerWriter::configure(int32_t value, int32_t N, int32_t payload) {
	$useLocalObjectStack();
	if (this->state != IntegerWriter::NEW) {
		$throwNew($IllegalStateException, "Already configured"_s);
	}
	if (value < 0) {
		$throwNew($IllegalArgumentException, $$str({"value >= 0: value="_s, $$str(value)}));
	}
	checkPrefix(N);
	this->value = value;
	this->N = N;
	this->payload = (payload & 0xff) & ($sl(-1, N));
	this->state = IntegerWriter::CONFIGURED;
	return this;
}

bool IntegerWriter::write($ByteBuffer* output) {
	$useLocalObjectStack();
	if (this->state == IntegerWriter::NEW) {
		$throwNew($IllegalStateException, "Configure first"_s);
	}
	if (this->state == IntegerWriter::DONE) {
		return true;
	}
	if (!$nc(output)->hasRemaining()) {
		return false;
	}
	if (this->state == IntegerWriter::CONFIGURED) {
		int32_t max = ($sl(2, this->N - 1)) - 1;
		if (this->value < max) {
			output->put((int8_t)(this->payload | this->value));
			this->state = IntegerWriter::DONE;
			return true;
		}
		output->put((int8_t)(this->payload | max));
		this->value -= max;
		this->state = IntegerWriter::FIRST_BYTE_WRITTEN;
	}
	if (this->state == IntegerWriter::FIRST_BYTE_WRITTEN) {
		while (this->value >= 128 && output->hasRemaining()) {
			output->put((int8_t)((this->value & 0x7f) + 0x80));
			this->value /= 128;
		}
		if (!output->hasRemaining()) {
			return false;
		}
		output->put((int8_t)this->value);
		this->state = IntegerWriter::DONE;
		return true;
	}
	$throwNew($InternalError, $($Arrays::toString($$new($ObjectArray, {
		$($Integer::valueOf(this->state)),
		$($Integer::valueOf(this->payload)),
		$($Integer::valueOf(this->N)),
		$($Integer::valueOf(this->value))
	}))));
}

void IntegerWriter::checkPrefix(int32_t N) {
	$useLocalObjectStack();
	if (N < 1 || N > 8) {
		$throwNew($IllegalArgumentException, $$str({"1 <= N <= 8: N= "_s, $$str(N)}));
	}
}

IntegerWriter* IntegerWriter::reset() {
	this->state = IntegerWriter::NEW;
	return this;
}

IntegerWriter::IntegerWriter() {
}

$Class* IntegerWriter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NEW", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerWriter, NEW)},
		{"CONFIGURED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerWriter, CONFIGURED)},
		{"FIRST_BYTE_WRITTEN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerWriter, FIRST_BYTE_WRITTEN)},
		{"DONE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerWriter, DONE)},
		{"state", "I", nullptr, $PRIVATE, $field(IntegerWriter, state)},
		{"payload", "I", nullptr, $PRIVATE, $field(IntegerWriter, payload)},
		{"N", "I", nullptr, $PRIVATE, $field(IntegerWriter, N)},
		{"value", "I", nullptr, $PRIVATE, $field(IntegerWriter, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(IntegerWriter, init$, void)},
		{"checkPrefix", "(I)V", nullptr, $PRIVATE | $STATIC, $staticMethod(IntegerWriter, checkPrefix, void, int32_t)},
		{"configure", "(III)Ljdk/internal/net/http/hpack/IntegerWriter;", nullptr, $PUBLIC, $method(IntegerWriter, configure, IntegerWriter*, int32_t, int32_t, int32_t)},
		{"reset", "()Ljdk/internal/net/http/hpack/IntegerWriter;", nullptr, $PUBLIC, $method(IntegerWriter, reset, IntegerWriter*)},
		{"write", "(Ljava/nio/ByteBuffer;)Z", nullptr, $PUBLIC, $method(IntegerWriter, write, bool, $ByteBuffer*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.hpack.IntegerWriter",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IntegerWriter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IntegerWriter);
	});
	return class$;
}

$Class* IntegerWriter::class$ = nullptr;

				} // hpack
			} // http
		} // net
	} // internal
} // jdk