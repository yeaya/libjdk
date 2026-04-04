#include <jdk/internal/net/http/SocketTube$SSLDirectBufferSource.h>
#include <java/lang/AssertionError.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <jdk/internal/net/http/HttpClientImpl.h>
#include <jdk/internal/net/http/SocketTube.h>
#include <jdk/internal/net/http/common/BufferSupplier.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $HttpClientImpl = ::jdk::internal::net::http::HttpClientImpl;
using $SocketTube = ::jdk::internal::net::http::SocketTube;
using $BufferSupplier = ::jdk::internal::net::http::common::BufferSupplier;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

bool SocketTube$SSLDirectBufferSource::$assertionsDisabled = false;

void SocketTube$SSLDirectBufferSource::init$($HttpClientImpl* client) {
	$set(this, client, $cast($HttpClientImpl, $Objects::requireNonNull(client)));
	$set(this, factory, $cast($BufferSupplier, $Objects::requireNonNull($(client->getSSLBufferSupplier()))));
}

$ByteBuffer* SocketTube$SSLDirectBufferSource::getBuffer() {
	if (!SocketTube$SSLDirectBufferSource::$assertionsDisabled && !$nc(this->client)->isSelectorThread()) {
		$throwNew($AssertionError);
	}
	$var($ByteBuffer, buf, this->current);
	if (buf == nullptr) {
		$assign(buf, $set(this, current, $cast($ByteBuffer, $nc(this->factory)->get())));
	}
	if (!SocketTube$SSLDirectBufferSource::$assertionsDisabled && !$nc(buf)->hasRemaining()) {
		$throwNew($AssertionError);
	}
	if (!SocketTube$SSLDirectBufferSource::$assertionsDisabled && !($nc(buf)->position() == 0)) {
		$throwNew($AssertionError);
	}
	return buf;
}

$List* SocketTube$SSLDirectBufferSource::append($List* list, $ByteBuffer* buf, int32_t start) {
	if (!SocketTube$SSLDirectBufferSource::$assertionsDisabled && !$nc(this->client)->isSelectorThread()) {
		$throwNew($AssertionError);
	}
	if (!SocketTube$SSLDirectBufferSource::$assertionsDisabled && !$nc(buf)->isDirect()) {
		$throwNew($AssertionError);
	}
	if (!SocketTube$SSLDirectBufferSource::$assertionsDisabled && !(start == 0)) {
		$throwNew($AssertionError);
	}
	if (!SocketTube$SSLDirectBufferSource::$assertionsDisabled && !(this->current == buf)) {
		$throwNew($AssertionError);
	}
	$set(this, current, nullptr);
	$nc(buf)->limit($nc(buf)->position());
	buf->position(start);
	return $SocketTube::listOf(list, buf);
}

void SocketTube$SSLDirectBufferSource::returnUnused($ByteBuffer* buffer) {
	if (!SocketTube$SSLDirectBufferSource::$assertionsDisabled && !(buffer == this->current)) {
		$throwNew($AssertionError);
	}
	$var($ByteBuffer, buf, this->current);
	if (buf != nullptr) {
		if (!SocketTube$SSLDirectBufferSource::$assertionsDisabled && !(buf->position() == 0)) {
			$throwNew($AssertionError);
		}
		$set(this, current, nullptr);
		buf->limit(buf->position());
		$nc(this->factory)->recycle(buf);
	}
}

void SocketTube$SSLDirectBufferSource::clinit$($Class* clazz) {
	$load($SocketTube);
	SocketTube$SSLDirectBufferSource::$assertionsDisabled = !$SocketTube::class$->desiredAssertionStatus();
}

SocketTube$SSLDirectBufferSource::SocketTube$SSLDirectBufferSource() {
}

$Class* SocketTube$SSLDirectBufferSource::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SocketTube$SSLDirectBufferSource, $assertionsDisabled)},
		{"factory", "Ljdk/internal/net/http/common/BufferSupplier;", nullptr, $PRIVATE | $FINAL, $field(SocketTube$SSLDirectBufferSource, factory)},
		{"client", "Ljdk/internal/net/http/HttpClientImpl;", nullptr, $PRIVATE | $FINAL, $field(SocketTube$SSLDirectBufferSource, client)},
		{"current", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $field(SocketTube$SSLDirectBufferSource, current)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/HttpClientImpl;)V", nullptr, $PUBLIC, $method(SocketTube$SSLDirectBufferSource, init$, void, $HttpClientImpl*)},
		{"append", "(Ljava/util/List;Ljava/nio/ByteBuffer;I)Ljava/util/List;", "(Ljava/util/List<Ljava/nio/ByteBuffer;>;Ljava/nio/ByteBuffer;I)Ljava/util/List<Ljava/nio/ByteBuffer;>;", $PUBLIC | $FINAL, $virtualMethod(SocketTube$SSLDirectBufferSource, append, $List*, $List*, $ByteBuffer*, int32_t)},
		{"getBuffer", "()Ljava/nio/ByteBuffer;", nullptr, $PUBLIC | $FINAL, $virtualMethod(SocketTube$SSLDirectBufferSource, getBuffer, $ByteBuffer*)},
		{"returnUnused", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(SocketTube$SSLDirectBufferSource, returnUnused, void, $ByteBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.SocketTube$SSLDirectBufferSource", "jdk.internal.net.http.SocketTube", "SSLDirectBufferSource", $PRIVATE | $STATIC | $FINAL},
		{"jdk.internal.net.http.SocketTube$BufferSource", "jdk.internal.net.http.SocketTube", "BufferSource", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.SocketTube$SSLDirectBufferSource",
		"java.lang.Object",
		"jdk.internal.net.http.SocketTube$BufferSource",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.SocketTube"
	};
	$loadClass(SocketTube$SSLDirectBufferSource, name, initialize, &classInfo$$, SocketTube$SSLDirectBufferSource::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SocketTube$SSLDirectBufferSource);
	});
	return class$;
}

$Class* SocketTube$SSLDirectBufferSource::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk