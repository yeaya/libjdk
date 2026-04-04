#include <jdk/internal/net/http/RequestPublishers$IterablePublisher.h>
#include <java/io/Serializable.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Iterator.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/Flow$Subscriber.h>
#include <jdk/internal/net/http/PullPublisher.h>
#include <jdk/internal/net/http/RequestPublishers$IterablePublisher$ByteBufferIterator.h>
#include <jdk/internal/net/http/RequestPublishers.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;
using $PullPublisher = ::jdk::internal::net::http::PullPublisher;
using $RequestPublishers$IterablePublisher$ByteBufferIterator = ::jdk::internal::net::http::RequestPublishers$IterablePublisher$ByteBufferIterator;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

class RequestPublishers$IterablePublisher$$Lambda$iterator : public $Iterable {
	$class(RequestPublishers$IterablePublisher$$Lambda$iterator, $NO_CLASS_INIT, $Iterable)
public:
	void init$(RequestPublishers$IterablePublisher* inst) {
		$set(this, inst$, inst);
	}
	virtual $Iterator* iterator() override {
		 return $nc(inst$)->iterator();
	}
	RequestPublishers$IterablePublisher* inst$ = nullptr;
};
$Class* RequestPublishers$IterablePublisher$$Lambda$iterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(RequestPublishers$IterablePublisher$$Lambda$iterator, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/RequestPublishers$IterablePublisher;)V", nullptr, $PUBLIC, $method(RequestPublishers$IterablePublisher$$Lambda$iterator, init$, void, RequestPublishers$IterablePublisher*)},
		{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC, $virtualMethod(RequestPublishers$IterablePublisher$$Lambda$iterator, iterator, $Iterator*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.RequestPublishers$IterablePublisher$$Lambda$iterator",
		"java.lang.Object",
		"java.lang.Iterable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RequestPublishers$IterablePublisher$$Lambda$iterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RequestPublishers$IterablePublisher$$Lambda$iterator);
	});
	return class$;
}
$Class* RequestPublishers$IterablePublisher$$Lambda$iterator::class$ = nullptr;

void RequestPublishers$IterablePublisher::init$($Iterable* content) {
	$set(this, content, $cast($Iterable, $Objects::requireNonNull(content)));
}

$Iterator* RequestPublishers$IterablePublisher::iterator() {
	return $new($RequestPublishers$IterablePublisher$ByteBufferIterator, this);
}

void RequestPublishers$IterablePublisher::subscribe($Flow$Subscriber* subscriber) {
	$useLocalObjectStack();
	$var($Iterable, iterable, $new(RequestPublishers$IterablePublisher$$Lambda$iterator, this));
	$var($PullPublisher, delegate, $new($PullPublisher, iterable));
	delegate->subscribe(subscriber);
}

int64_t RequestPublishers$IterablePublisher::computeLength($Iterable* bytes) {
	$init(RequestPublishers$IterablePublisher);
	return -1;
}

int64_t RequestPublishers$IterablePublisher::contentLength() {
	if (this->contentLength$ == 0) {
		$synchronized(this) {
			if (this->contentLength$ == 0) {
				this->contentLength$ = computeLength(this->content);
			}
		}
	}
	return this->contentLength$;
}

RequestPublishers$IterablePublisher::RequestPublishers$IterablePublisher() {
}

$Class* RequestPublishers$IterablePublisher::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.RequestPublishers$IterablePublisher$$Lambda$iterator")) {
			return RequestPublishers$IterablePublisher$$Lambda$iterator::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"content", "Ljava/lang/Iterable;", "Ljava/lang/Iterable<[B>;", $PRIVATE | $FINAL, $field(RequestPublishers$IterablePublisher, content)},
		{"contentLength", "J", nullptr, $PRIVATE | $VOLATILE, $field(RequestPublishers$IterablePublisher, contentLength$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Iterable;)V", "(Ljava/lang/Iterable<[B>;)V", $PUBLIC, $method(RequestPublishers$IterablePublisher, init$, void, $Iterable*)},
		{"computeLength", "(Ljava/lang/Iterable;)J", "(Ljava/lang/Iterable<[B>;)J", $STATIC, $staticMethod(RequestPublishers$IterablePublisher, computeLength, int64_t, $Iterable*)},
		{"contentLength", "()J", nullptr, $PUBLIC, $virtualMethod(RequestPublishers$IterablePublisher, contentLength, int64_t)},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/nio/ByteBuffer;>;", $PUBLIC, $virtualMethod(RequestPublishers$IterablePublisher, iterator, $Iterator*)},
		{"subscribe", "(Ljava/util/concurrent/Flow$Subscriber;)V", "(Ljava/util/concurrent/Flow$Subscriber<-Ljava/nio/ByteBuffer;>;)V", $PUBLIC, $virtualMethod(RequestPublishers$IterablePublisher, subscribe, void, $Flow$Subscriber*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.RequestPublishers$IterablePublisher", "jdk.internal.net.http.RequestPublishers", "IterablePublisher", $PUBLIC | $STATIC},
		{"java.net.http.HttpRequest$BodyPublisher", "java.net.http.HttpRequest", "BodyPublisher", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"jdk.internal.net.http.RequestPublishers$IterablePublisher$ByteBufferIterator", "jdk.internal.net.http.RequestPublishers$IterablePublisher", "ByteBufferIterator", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.net.http.RequestPublishers$IterablePublisher",
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
	$loadClass(RequestPublishers$IterablePublisher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RequestPublishers$IterablePublisher);
	});
	return class$;
}

$Class* RequestPublishers$IterablePublisher::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk