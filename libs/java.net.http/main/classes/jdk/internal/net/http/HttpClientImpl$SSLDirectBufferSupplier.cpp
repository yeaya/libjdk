#include <jdk/internal/net/http/HttpClientImpl$SSLDirectBufferSupplier.h>
#include <java/lang/AssertionError.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Objects.h>
#include <jdk/internal/net/http/HttpClientImpl.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jdk/internal/net/http/common/Utils.h>
#include <jcpp.h>

#undef BUFSIZE
#undef POOL_SIZE

using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Objects = ::java::util::Objects;
using $HttpClientImpl = ::jdk::internal::net::http::HttpClientImpl;
using $Utils = ::jdk::internal::net::http::common::Utils;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

bool HttpClientImpl$SSLDirectBufferSupplier::$assertionsDisabled = false;

void HttpClientImpl$SSLDirectBufferSupplier::init$($HttpClientImpl* client) {
	$set(this, pool, $new($ByteBufferArray, HttpClientImpl$SSLDirectBufferSupplier::POOL_SIZE));
	$set(this, client, $cast($HttpClientImpl, $Objects::requireNonNull(client)));
	$set(this, debug, client->debug);
}

$Object* HttpClientImpl$SSLDirectBufferSupplier::get() {
	$useLocalObjectStack();
	if (!HttpClientImpl$SSLDirectBufferSupplier::$assertionsDisabled && !$nc(this->client)->isSelectorThread()) {
		$throwNew($AssertionError);
	}
	if (!HttpClientImpl$SSLDirectBufferSupplier::$assertionsDisabled && !(this->tail <= HttpClientImpl$SSLDirectBufferSupplier::POOL_SIZE)) {
		$throwNew($AssertionError, $$of($str({"allocate tail is "_s, $$str(this->tail)})));
	}
	$var($ByteBuffer, buf, nullptr);
	if (this->tail == 0) {
		if ($nc(this->debug)->on()) {
			$init($Utils);
			this->debug->log("ByteBuffer.allocateDirect(%d)"_s, $$new($ObjectArray, {$($Integer::valueOf($Utils::BUFSIZE))}));
		}
		if (!HttpClientImpl$SSLDirectBufferSupplier::$assertionsDisabled && !(this->count++ < HttpClientImpl$SSLDirectBufferSupplier::POOL_SIZE)) {
			$throwNew($AssertionError, $$of($str({"trying to allocate more than "_s, $$str(HttpClientImpl$SSLDirectBufferSupplier::POOL_SIZE), " buffers"_s})));
		}
		$init($Utils);
		$assign(buf, $ByteBuffer::allocateDirect($Utils::BUFSIZE));
	} else {
		if (!HttpClientImpl$SSLDirectBufferSupplier::$assertionsDisabled && !(this->tail > 0)) {
			$throwNew($AssertionError, $$of($str({"non positive tail value: "_s, $$str(this->tail)})));
		}
		--this->tail;
		$assign(buf, this->pool->get(this->tail));
		this->pool->set(this->tail, nullptr);
	}
	if (!HttpClientImpl$SSLDirectBufferSupplier::$assertionsDisabled && !$nc(buf)->isDirect()) {
		$throwNew($AssertionError);
	}
	if (!HttpClientImpl$SSLDirectBufferSupplier::$assertionsDisabled && !($nc(buf)->position() == 0)) {
		$throwNew($AssertionError);
	}
	if (!HttpClientImpl$SSLDirectBufferSupplier::$assertionsDisabled && !$nc(buf)->hasRemaining()) {
		$throwNew($AssertionError);
	}
	$init($Utils);
	if (!HttpClientImpl$SSLDirectBufferSupplier::$assertionsDisabled && !($nc(buf)->limit() == $Utils::BUFSIZE)) {
		$throwNew($AssertionError);
	}
	if (!HttpClientImpl$SSLDirectBufferSupplier::$assertionsDisabled && !(this->tail < HttpClientImpl$SSLDirectBufferSupplier::POOL_SIZE)) {
		$throwNew($AssertionError);
	}
	if (!HttpClientImpl$SSLDirectBufferSupplier::$assertionsDisabled && !(this->tail >= 0)) {
		$throwNew($AssertionError);
	}
	return $of(buf);
}

void HttpClientImpl$SSLDirectBufferSupplier::recycle($ByteBuffer* buffer) {
	$useLocalObjectStack();
	if (!HttpClientImpl$SSLDirectBufferSupplier::$assertionsDisabled && !$nc(this->client)->isSelectorThread()) {
		$throwNew($AssertionError);
	}
	if (!HttpClientImpl$SSLDirectBufferSupplier::$assertionsDisabled && !$nc(buffer)->isDirect()) {
		$throwNew($AssertionError);
	}
	if (!HttpClientImpl$SSLDirectBufferSupplier::$assertionsDisabled && ! !$nc(buffer)->hasRemaining()) {
		$throwNew($AssertionError);
	}
	if (!HttpClientImpl$SSLDirectBufferSupplier::$assertionsDisabled && !(this->tail < HttpClientImpl$SSLDirectBufferSupplier::POOL_SIZE)) {
		$throwNew($AssertionError, $$of($str({"recycle tail is "_s, $$str(this->tail)})));
	}
	if (!HttpClientImpl$SSLDirectBufferSupplier::$assertionsDisabled && !(this->tail >= 0)) {
		$throwNew($AssertionError);
	}
	$nc(buffer)->position(0);
	buffer->limit(buffer->capacity());
	if (this->tail < HttpClientImpl$SSLDirectBufferSupplier::POOL_SIZE) {
		this->pool->set(this->tail, buffer);
		++this->tail;
	}
	if (!HttpClientImpl$SSLDirectBufferSupplier::$assertionsDisabled && !(this->tail <= HttpClientImpl$SSLDirectBufferSupplier::POOL_SIZE)) {
		$throwNew($AssertionError);
	}
	if (!HttpClientImpl$SSLDirectBufferSupplier::$assertionsDisabled && !(this->tail > 0)) {
		$throwNew($AssertionError);
	}
}

void HttpClientImpl$SSLDirectBufferSupplier::clinit$($Class* clazz) {
	$load($HttpClientImpl);
	HttpClientImpl$SSLDirectBufferSupplier::$assertionsDisabled = !$HttpClientImpl::class$->desiredAssertionStatus();
}

HttpClientImpl$SSLDirectBufferSupplier::HttpClientImpl$SSLDirectBufferSupplier() {
}

$Class* HttpClientImpl$SSLDirectBufferSupplier::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(HttpClientImpl$SSLDirectBufferSupplier, $assertionsDisabled)},
		{"POOL_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HttpClientImpl$SSLDirectBufferSupplier, POOL_SIZE)},
		{"pool", "[Ljava/nio/ByteBuffer;", nullptr, $PRIVATE | $FINAL, $field(HttpClientImpl$SSLDirectBufferSupplier, pool)},
		{"client", "Ljdk/internal/net/http/HttpClientImpl;", nullptr, $PRIVATE | $FINAL, $field(HttpClientImpl$SSLDirectBufferSupplier, client)},
		{"debug", "Ljdk/internal/net/http/common/Logger;", nullptr, $PRIVATE | $FINAL, $field(HttpClientImpl$SSLDirectBufferSupplier, debug)},
		{"tail", "I", nullptr, $PRIVATE, $field(HttpClientImpl$SSLDirectBufferSupplier, tail)},
		{"count", "I", nullptr, $PRIVATE, $field(HttpClientImpl$SSLDirectBufferSupplier, count)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/HttpClientImpl;)V", nullptr, 0, $method(HttpClientImpl$SSLDirectBufferSupplier, init$, void, $HttpClientImpl*)},
		{"get", "()Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $virtualMethod(HttpClientImpl$SSLDirectBufferSupplier, get, $Object*)},
		{"recycle", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(HttpClientImpl$SSLDirectBufferSupplier, recycle, void, $ByteBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.HttpClientImpl$SSLDirectBufferSupplier", "jdk.internal.net.http.HttpClientImpl", "SSLDirectBufferSupplier", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.HttpClientImpl$SSLDirectBufferSupplier",
		"java.lang.Object",
		"jdk.internal.net.http.common.BufferSupplier",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.HttpClientImpl"
	};
	$loadClass(HttpClientImpl$SSLDirectBufferSupplier, name, initialize, &classInfo$$, HttpClientImpl$SSLDirectBufferSupplier::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(HttpClientImpl$SSLDirectBufferSupplier);
	});
	return class$;
}

$Class* HttpClientImpl$SSLDirectBufferSupplier::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk