#include <jdk/internal/net/http/hpack/ISO_8859_1$Reader.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/Appendable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/ByteBuffer.h>
#include <jdk/internal/net/http/hpack/HPACK$BufferUpdateConsumer.h>
#include <jdk/internal/net/http/hpack/HPACK.h>
#include <jdk/internal/net/http/hpack/ISO_8859_1.h>
#include <jcpp.h>

#undef UPDATER

using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $Appendable = ::java::lang::Appendable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HPACK = ::jdk::internal::net::http::hpack::HPACK;
using $HPACK$BufferUpdateConsumer = ::jdk::internal::net::http::hpack::HPACK$BufferUpdateConsumer;
using $ISO_8859_1 = ::jdk::internal::net::http::hpack::ISO_8859_1;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

class ISO_8859_1$Reader$$Lambda$lambda$new$0 : public $HPACK$BufferUpdateConsumer {
	$class(ISO_8859_1$Reader$$Lambda$lambda$new$0, $NO_CLASS_INIT, $HPACK$BufferUpdateConsumer)
public:
	void init$(ISO_8859_1$Reader* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(int64_t buf, int32_t bufLen) override {
		$nc(inst$)->lambda$new$0(buf, bufLen);
	}
	ISO_8859_1$Reader* inst$ = nullptr;
};
$Class* ISO_8859_1$Reader$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ISO_8859_1$Reader$$Lambda$lambda$new$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/hpack/ISO_8859_1$Reader;)V", nullptr, $PUBLIC, $method(ISO_8859_1$Reader$$Lambda$lambda$new$0, init$, void, ISO_8859_1$Reader*)},
		{"accept", "(JI)V", nullptr, $PUBLIC, $virtualMethod(ISO_8859_1$Reader$$Lambda$lambda$new$0, accept, void, int64_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.ISO_8859_1$Reader$$Lambda$lambda$new$0",
		"java.lang.Object",
		"jdk.internal.net.http.hpack.HPACK$BufferUpdateConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ISO_8859_1$Reader$$Lambda$lambda$new$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ISO_8859_1$Reader$$Lambda$lambda$new$0);
	});
	return class$;
}
$Class* ISO_8859_1$Reader$$Lambda$lambda$new$0::class$ = nullptr;

bool ISO_8859_1$Reader::$assertionsDisabled = false;

void ISO_8859_1$Reader::init$() {
	$set(this, UPDATER, $new(ISO_8859_1$Reader$$Lambda$lambda$new$0, this));
}

void ISO_8859_1$Reader::read($ByteBuffer* source, $Appendable* destination) {
	while (true) {
		int32_t nBytes = $HPACK::read(source, this->buffer, this->bufferLen, this->UPDATER);
		if (nBytes == 0) {
			return;
		}
		if (!ISO_8859_1$Reader::$assertionsDisabled && !(this->bufferLen % 8 == 0)) {
			$throwNew($AssertionError, this->bufferLen);
		}
		while (this->bufferLen > 0) {
			char16_t c = (char16_t)((int64_t)((uint64_t)this->buffer >> 56));
			try {
				$nc(destination)->append(c);
			} catch ($IOException& e) {
				$throwNew($IOException, "Error appending to the destination"_s, e);
			}
			this->buffer <<= 8;
			this->bufferLen -= 8;
		}
	}
}

ISO_8859_1$Reader* ISO_8859_1$Reader::reset() {
	this->buffer = 0;
	this->bufferLen = 0;
	return this;
}

void ISO_8859_1$Reader::lambda$new$0(int64_t buf, int32_t bufLen) {
	this->buffer = buf;
	this->bufferLen = bufLen;
}

void ISO_8859_1$Reader::clinit$($Class* clazz) {
	$load($ISO_8859_1);
	ISO_8859_1$Reader::$assertionsDisabled = !$ISO_8859_1::class$->desiredAssertionStatus();
}

ISO_8859_1$Reader::ISO_8859_1$Reader() {
}

$Class* ISO_8859_1$Reader::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.hpack.ISO_8859_1$Reader$$Lambda$lambda$new$0")) {
			return ISO_8859_1$Reader$$Lambda$lambda$new$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ISO_8859_1$Reader, $assertionsDisabled)},
		{"UPDATER", "Ljdk/internal/net/http/hpack/HPACK$BufferUpdateConsumer;", nullptr, $PRIVATE | $FINAL, $field(ISO_8859_1$Reader, UPDATER)},
		{"buffer", "J", nullptr, $PRIVATE, $field(ISO_8859_1$Reader, buffer)},
		{"bufferLen", "I", nullptr, $PRIVATE, $field(ISO_8859_1$Reader, bufferLen)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ISO_8859_1$Reader, init$, void)},
		{"lambda$new$0", "(JI)V", nullptr, $PRIVATE | $SYNTHETIC, $method(ISO_8859_1$Reader, lambda$new$0, void, int64_t, int32_t)},
		{"read", "(Ljava/nio/ByteBuffer;Ljava/lang/Appendable;)V", nullptr, $PUBLIC, $method(ISO_8859_1$Reader, read, void, $ByteBuffer*, $Appendable*), "java.io.IOException"},
		{"reset", "()Ljdk/internal/net/http/hpack/ISO_8859_1$Reader;", nullptr, $PUBLIC, $method(ISO_8859_1$Reader, reset, ISO_8859_1$Reader*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.hpack.ISO_8859_1$Reader", "jdk.internal.net.http.hpack.ISO_8859_1", "Reader", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.net.http.hpack.ISO_8859_1$Reader",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.hpack.ISO_8859_1"
	};
	$loadClass(ISO_8859_1$Reader, name, initialize, &classInfo$$, ISO_8859_1$Reader::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ISO_8859_1$Reader);
	});
	return class$;
}

$Class* ISO_8859_1$Reader::class$ = nullptr;

				} // hpack
			} // http
		} // net
	} // internal
} // jdk