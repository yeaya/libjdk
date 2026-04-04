#include <jdk/internal/net/http/RequestPublishers$ByteArrayPublisher.h>
#include <java/lang/Iterable.h>
#include <java/lang/Math.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/concurrent/Flow$Subscriber.h>
#include <jdk/internal/net/http/PullPublisher.h>
#include <jdk/internal/net/http/RequestPublishers.h>
#include <jdk/internal/net/http/common/Utils.h>
#include <jcpp.h>

#undef BUFSIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;
using $PullPublisher = ::jdk::internal::net::http::PullPublisher;
using $Utils = ::jdk::internal::net::http::common::Utils;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

void RequestPublishers$ByteArrayPublisher::init$($bytes* content) {
	RequestPublishers$ByteArrayPublisher::init$(content, 0, $nc(content)->length);
}

void RequestPublishers$ByteArrayPublisher::init$($bytes* content, int32_t offset, int32_t length) {
	$init($Utils);
	RequestPublishers$ByteArrayPublisher::init$(content, offset, length, $Utils::BUFSIZE);
}

void RequestPublishers$ByteArrayPublisher::init$($bytes* content, int32_t offset, int32_t length, int32_t bufSize) {
	$set(this, content, content);
	this->offset = offset;
	this->length = length;
	this->bufSize = bufSize;
}

$List* RequestPublishers$ByteArrayPublisher::copy($bytes* content, int32_t offset, int32_t length) {
	$useLocalObjectStack();
	$var($List, bufs, $new($ArrayList));
	while (length > 0) {
		$var($ByteBuffer, b, $ByteBuffer::allocate($Math::min(this->bufSize, length)));
		int32_t max = $nc(b)->capacity();
		int32_t tocopy = $Math::min(max, length);
		b->put(content, offset, tocopy);
		offset += tocopy;
		length -= tocopy;
		b->flip();
		bufs->add(b);
	}
	return bufs;
}

void RequestPublishers$ByteArrayPublisher::subscribe($Flow$Subscriber* subscriber) {
	$useLocalObjectStack();
	$var($List, copy, this->copy(this->content, this->offset, this->length));
	$var($PullPublisher, delegate, $new($PullPublisher, copy));
	delegate->subscribe(subscriber);
}

int64_t RequestPublishers$ByteArrayPublisher::contentLength() {
	return this->length;
}

RequestPublishers$ByteArrayPublisher::RequestPublishers$ByteArrayPublisher() {
}

$Class* RequestPublishers$ByteArrayPublisher::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"length", "I", nullptr, $PRIVATE | $FINAL, $field(RequestPublishers$ByteArrayPublisher, length)},
		{"content", "[B", nullptr, $PRIVATE | $FINAL, $field(RequestPublishers$ByteArrayPublisher, content)},
		{"offset", "I", nullptr, $PRIVATE | $FINAL, $field(RequestPublishers$ByteArrayPublisher, offset)},
		{"bufSize", "I", nullptr, $PRIVATE | $FINAL, $field(RequestPublishers$ByteArrayPublisher, bufSize)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([B)V", nullptr, $PUBLIC, $method(RequestPublishers$ByteArrayPublisher, init$, void, $bytes*)},
		{"<init>", "([BII)V", nullptr, $PUBLIC, $method(RequestPublishers$ByteArrayPublisher, init$, void, $bytes*, int32_t, int32_t)},
		{"<init>", "([BIII)V", nullptr, 0, $method(RequestPublishers$ByteArrayPublisher, init$, void, $bytes*, int32_t, int32_t, int32_t)},
		{"contentLength", "()J", nullptr, $PUBLIC, $virtualMethod(RequestPublishers$ByteArrayPublisher, contentLength, int64_t)},
		{"copy", "([BII)Ljava/util/List;", "([BII)Ljava/util/List<Ljava/nio/ByteBuffer;>;", 0, $virtualMethod(RequestPublishers$ByteArrayPublisher, copy, $List*, $bytes*, int32_t, int32_t)},
		{"subscribe", "(Ljava/util/concurrent/Flow$Subscriber;)V", "(Ljava/util/concurrent/Flow$Subscriber<-Ljava/nio/ByteBuffer;>;)V", $PUBLIC, $virtualMethod(RequestPublishers$ByteArrayPublisher, subscribe, void, $Flow$Subscriber*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.RequestPublishers$ByteArrayPublisher", "jdk.internal.net.http.RequestPublishers", "ByteArrayPublisher", $PUBLIC | $STATIC},
		{"java.net.http.HttpRequest$BodyPublisher", "java.net.http.HttpRequest", "BodyPublisher", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.net.http.RequestPublishers$ByteArrayPublisher",
		"java.lang.Object",
		"java.net.http.HttpRequest$BodyPublisher",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.RequestPublishers"
	};
	$loadClass(RequestPublishers$ByteArrayPublisher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RequestPublishers$ByteArrayPublisher);
	});
	return class$;
}

$Class* RequestPublishers$ByteArrayPublisher::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk