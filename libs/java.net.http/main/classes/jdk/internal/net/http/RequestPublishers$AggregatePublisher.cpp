#include <jdk/internal/net/http/RequestPublishers$AggregatePublisher.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/http/HttpRequest$BodyPublisher.h>
#include <java/util/List.h>
#include <java/util/OptionalLong.h>
#include <java/util/concurrent/Flow$Subscriber.h>
#include <java/util/function/LongBinaryOperator.h>
#include <java/util/function/ToLongFunction.h>
#include <java/util/stream/LongStream.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/net/http/RequestPublishers$AggregateSubscription.h>
#include <jdk/internal/net/http/RequestPublishers.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $HttpRequest$BodyPublisher = ::java::net::http::HttpRequest$BodyPublisher;
using $List = ::java::util::List;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;
using $LongBinaryOperator = ::java::util::function::LongBinaryOperator;
using $ToLongFunction = ::java::util::function::ToLongFunction;
using $RequestPublishers$AggregateSubscription = ::jdk::internal::net::http::RequestPublishers$AggregateSubscription;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

class RequestPublishers$AggregatePublisher$$Lambda$contentLength : public $ToLongFunction {
	$class(RequestPublishers$AggregatePublisher$$Lambda$contentLength, $NO_CLASS_INIT, $ToLongFunction)
public:
	void init$() {
	}
	virtual int64_t applyAsLong(Object$* inst$) override {
		return $sure($HttpRequest$BodyPublisher, inst$)->contentLength();
	}
};
$Class* RequestPublishers$AggregatePublisher$$Lambda$contentLength::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RequestPublishers$AggregatePublisher$$Lambda$contentLength, init$, void)},
		{"applyAsLong", "(Ljava/lang/Object;)J", nullptr, $PUBLIC, $virtualMethod(RequestPublishers$AggregatePublisher$$Lambda$contentLength, applyAsLong, int64_t, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.RequestPublishers$AggregatePublisher$$Lambda$contentLength",
		"java.lang.Object",
		"java.util.function.ToLongFunction",
		nullptr,
		methodInfos$$
	};
	$loadClass(RequestPublishers$AggregatePublisher$$Lambda$contentLength, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RequestPublishers$AggregatePublisher$$Lambda$contentLength);
	});
	return class$;
}
$Class* RequestPublishers$AggregatePublisher$$Lambda$contentLength::class$ = nullptr;

class RequestPublishers$AggregatePublisher$$Lambda$lambda$contentLength$0$1 : public $LongBinaryOperator {
	$class(RequestPublishers$AggregatePublisher$$Lambda$lambda$contentLength$0$1, $NO_CLASS_INIT, $LongBinaryOperator)
public:
	void init$() {
	}
	virtual int64_t applyAsLong(int64_t a, int64_t b) override {
		return RequestPublishers$AggregatePublisher::lambda$contentLength$0(a, b);
	}
};
$Class* RequestPublishers$AggregatePublisher$$Lambda$lambda$contentLength$0$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RequestPublishers$AggregatePublisher$$Lambda$lambda$contentLength$0$1, init$, void)},
		{"applyAsLong", "(JJ)J", nullptr, $PUBLIC, $virtualMethod(RequestPublishers$AggregatePublisher$$Lambda$lambda$contentLength$0$1, applyAsLong, int64_t, int64_t, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.RequestPublishers$AggregatePublisher$$Lambda$lambda$contentLength$0$1",
		"java.lang.Object",
		"java.util.function.LongBinaryOperator",
		nullptr,
		methodInfos$$
	};
	$loadClass(RequestPublishers$AggregatePublisher$$Lambda$lambda$contentLength$0$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RequestPublishers$AggregatePublisher$$Lambda$lambda$contentLength$0$1);
	});
	return class$;
}
$Class* RequestPublishers$AggregatePublisher$$Lambda$lambda$contentLength$0$1::class$ = nullptr;

void RequestPublishers$AggregatePublisher::init$($List* bodies) {
	$set(this, bodies, bodies);
}

int64_t RequestPublishers$AggregatePublisher::contentLength() {
	$useLocalObjectStack();
	int64_t length = $$nc($$nc($$nc($nc(this->bodies)->stream())->mapToLong($$new(RequestPublishers$AggregatePublisher$$Lambda$contentLength)))->reduce($$new(RequestPublishers$AggregatePublisher$$Lambda$lambda$contentLength$0$1)))->orElse(0);
	if (length < 0) {
		return -1;
	}
	return length;
}

void RequestPublishers$AggregatePublisher::subscribe($Flow$Subscriber* subscriber) {
	$nc(subscriber)->onSubscribe($$new($RequestPublishers$AggregateSubscription, this->bodies, subscriber));
}

int64_t RequestPublishers$AggregatePublisher::lambda$contentLength$0(int64_t a, int64_t b) {
	$init(RequestPublishers$AggregatePublisher);
	return a < 0 || b < 0 ? -1 : a + b;
}

RequestPublishers$AggregatePublisher::RequestPublishers$AggregatePublisher() {
}

$Class* RequestPublishers$AggregatePublisher::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.RequestPublishers$AggregatePublisher$$Lambda$contentLength")) {
			return RequestPublishers$AggregatePublisher$$Lambda$contentLength::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.RequestPublishers$AggregatePublisher$$Lambda$lambda$contentLength$0$1")) {
			return RequestPublishers$AggregatePublisher$$Lambda$lambda$contentLength$0$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"bodies", "Ljava/util/List;", "Ljava/util/List<Ljava/net/http/HttpRequest$BodyPublisher;>;", $FINAL, $field(RequestPublishers$AggregatePublisher, bodies)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/net/http/HttpRequest$BodyPublisher;>;)V", 0, $method(RequestPublishers$AggregatePublisher, init$, void, $List*)},
		{"contentLength", "()J", nullptr, $PUBLIC, $virtualMethod(RequestPublishers$AggregatePublisher, contentLength, int64_t)},
		{"lambda$contentLength$0", "(JJ)J", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(RequestPublishers$AggregatePublisher, lambda$contentLength$0, int64_t, int64_t, int64_t)},
		{"subscribe", "(Ljava/util/concurrent/Flow$Subscriber;)V", "(Ljava/util/concurrent/Flow$Subscriber<-Ljava/nio/ByteBuffer;>;)V", $PUBLIC, $virtualMethod(RequestPublishers$AggregatePublisher, subscribe, void, $Flow$Subscriber*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.RequestPublishers$AggregatePublisher", "jdk.internal.net.http.RequestPublishers", "AggregatePublisher", $PRIVATE | $STATIC | $FINAL},
		{"java.net.http.HttpRequest$BodyPublisher", "java.net.http.HttpRequest", "BodyPublisher", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.RequestPublishers$AggregatePublisher",
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
	$loadClass(RequestPublishers$AggregatePublisher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RequestPublishers$AggregatePublisher);
	});
	return class$;
}

$Class* RequestPublishers$AggregatePublisher::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk