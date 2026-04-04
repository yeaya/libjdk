#include <jdk/internal/net/http/RequestPublishers$IterablePublisher$ByteBufferIterator.h>
#include <java/lang/Iterable.h>
#include <java/lang/Math.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Iterator.h>
#include <java/util/concurrent/ConcurrentLinkedQueue.h>
#include <jdk/internal/net/http/RequestPublishers$IterablePublisher.h>
#include <jdk/internal/net/http/common/Utils.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ConcurrentLinkedQueue = ::java::util::concurrent::ConcurrentLinkedQueue;
using $RequestPublishers$IterablePublisher = ::jdk::internal::net::http::RequestPublishers$IterablePublisher;
using $Utils = ::jdk::internal::net::http::common::Utils;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

void RequestPublishers$IterablePublisher$ByteBufferIterator::init$($RequestPublishers$IterablePublisher* this$0) {
	$set(this, this$0, this$0);
	$set(this, buffers, $new($ConcurrentLinkedQueue));
	$set(this, iterator, $nc(this->this$0->content)->iterator());
}

bool RequestPublishers$IterablePublisher$ByteBufferIterator::hasNext() {
	bool var$0 = !this->buffers->isEmpty();
	return var$0 || $nc(this->iterator)->hasNext();
}

$Object* RequestPublishers$IterablePublisher$ByteBufferIterator::next() {
	$var($ByteBuffer, buffer, $cast($ByteBuffer, this->buffers->poll()));
	while (buffer == nullptr) {
		copy();
		$assign(buffer, $cast($ByteBuffer, this->buffers->poll()));
	}
	return $of(buffer);
}

$ByteBuffer* RequestPublishers$IterablePublisher$ByteBufferIterator::getBuffer() {
	return $Utils::getBuffer();
}

void RequestPublishers$IterablePublisher$ByteBufferIterator::copy() {
	$useLocalObjectStack();
	$var($bytes, bytes, $cast($bytes, $nc(this->iterator)->next()));
	int32_t length = $nc(bytes)->length;
	if (length == 0 && this->iterator->hasNext()) {
		return;
	}
	int32_t offset = 0;
	do {
		$var($ByteBuffer, b, getBuffer());
		int32_t max = $nc(b)->capacity();
		int32_t tocopy = $Math::min(max, length);
		b->put(bytes, offset, tocopy);
		offset += tocopy;
		length -= tocopy;
		b->flip();
		this->buffers->add(b);
	} while (length > 0);
}

RequestPublishers$IterablePublisher$ByteBufferIterator::RequestPublishers$IterablePublisher$ByteBufferIterator() {
}

$Class* RequestPublishers$IterablePublisher$ByteBufferIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/net/http/RequestPublishers$IterablePublisher;", nullptr, $FINAL | $SYNTHETIC, $field(RequestPublishers$IterablePublisher$ByteBufferIterator, this$0)},
		{"buffers", "Ljava/util/concurrent/ConcurrentLinkedQueue;", "Ljava/util/concurrent/ConcurrentLinkedQueue<Ljava/nio/ByteBuffer;>;", $FINAL, $field(RequestPublishers$IterablePublisher$ByteBufferIterator, buffers)},
		{"iterator", "Ljava/util/Iterator;", "Ljava/util/Iterator<[B>;", $FINAL, $field(RequestPublishers$IterablePublisher$ByteBufferIterator, iterator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/RequestPublishers$IterablePublisher;)V", nullptr, 0, $method(RequestPublishers$IterablePublisher$ByteBufferIterator, init$, void, $RequestPublishers$IterablePublisher*)},
		{"copy", "()V", nullptr, 0, $virtualMethod(RequestPublishers$IterablePublisher$ByteBufferIterator, copy, void)},
		{"getBuffer", "()Ljava/nio/ByteBuffer;", nullptr, 0, $virtualMethod(RequestPublishers$IterablePublisher$ByteBufferIterator, getBuffer, $ByteBuffer*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(RequestPublishers$IterablePublisher$ByteBufferIterator, hasNext, bool)},
		{"next", "()Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $virtualMethod(RequestPublishers$IterablePublisher$ByteBufferIterator, next, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.RequestPublishers$IterablePublisher", "jdk.internal.net.http.RequestPublishers", "IterablePublisher", $PUBLIC | $STATIC},
		{"jdk.internal.net.http.RequestPublishers$IterablePublisher$ByteBufferIterator", "jdk.internal.net.http.RequestPublishers$IterablePublisher", "ByteBufferIterator", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.RequestPublishers$IterablePublisher$ByteBufferIterator",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Ljava/nio/ByteBuffer;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.RequestPublishers"
	};
	$loadClass(RequestPublishers$IterablePublisher$ByteBufferIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RequestPublishers$IterablePublisher$ByteBufferIterator);
	});
	return class$;
}

$Class* RequestPublishers$IterablePublisher$ByteBufferIterator::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk