#include <jdk/internal/net/http/RequestPublishers$InputStreamPublisher.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
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
#include <java/util/function/Supplier.h>
#include <jdk/internal/net/http/PullPublisher.h>
#include <jdk/internal/net/http/RequestPublishers$StreamIterator.h>
#include <jdk/internal/net/http/RequestPublishers.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
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
using $Supplier = ::java::util::function::Supplier;
using $PullPublisher = ::jdk::internal::net::http::PullPublisher;
using $RequestPublishers$StreamIterator = ::jdk::internal::net::http::RequestPublishers$StreamIterator;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

class RequestPublishers$InputStreamPublisher$$Lambda$lambda$iterableOf$0 : public $Iterable {
	$class(RequestPublishers$InputStreamPublisher$$Lambda$lambda$iterableOf$0, $NO_CLASS_INIT, $Iterable)
public:
	void init$($InputStream* is) {
		$set(this, is, is);
	}
	virtual $Iterator* iterator() override {
		return RequestPublishers$InputStreamPublisher::lambda$iterableOf$0(is);
	}
	$InputStream* is = nullptr;
};
$Class* RequestPublishers$InputStreamPublisher$$Lambda$lambda$iterableOf$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"is", "Ljava/io/InputStream;", nullptr, $PUBLIC, $field(RequestPublishers$InputStreamPublisher$$Lambda$lambda$iterableOf$0, is)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(RequestPublishers$InputStreamPublisher$$Lambda$lambda$iterableOf$0, init$, void, $InputStream*)},
		{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC, $virtualMethod(RequestPublishers$InputStreamPublisher$$Lambda$lambda$iterableOf$0, iterator, $Iterator*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.RequestPublishers$InputStreamPublisher$$Lambda$lambda$iterableOf$0",
		"java.lang.Object",
		"java.lang.Iterable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RequestPublishers$InputStreamPublisher$$Lambda$lambda$iterableOf$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RequestPublishers$InputStreamPublisher$$Lambda$lambda$iterableOf$0);
	});
	return class$;
}
$Class* RequestPublishers$InputStreamPublisher$$Lambda$lambda$iterableOf$0::class$ = nullptr;

void RequestPublishers$InputStreamPublisher::init$($Supplier* streamSupplier) {
	$set(this, streamSupplier, $cast($Supplier, $Objects::requireNonNull(streamSupplier)));
}

void RequestPublishers$InputStreamPublisher::subscribe($Flow$Subscriber* subscriber) {
	$useLocalObjectStack();
	$var($PullPublisher, publisher, nullptr);
	$var($InputStream, is, $cast($InputStream, $nc(this->streamSupplier)->get()));
	if (is == nullptr) {
		$var($Throwable, t, $new($IOException, "streamSupplier returned null"_s));
		$assign(publisher, $new($PullPublisher, nullptr, t));
	} else {
		$assign(publisher, $new($PullPublisher, $(iterableOf(is)), nullptr));
	}
	$nc(publisher)->subscribe(subscriber);
}

$Iterable* RequestPublishers$InputStreamPublisher::iterableOf($InputStream* is) {
	return $new(RequestPublishers$InputStreamPublisher$$Lambda$lambda$iterableOf$0, is);
}

int64_t RequestPublishers$InputStreamPublisher::contentLength() {
	return -1;
}

$Iterator* RequestPublishers$InputStreamPublisher::lambda$iterableOf$0($InputStream* is) {
	$init(RequestPublishers$InputStreamPublisher);
	return $new($RequestPublishers$StreamIterator, is);
}

RequestPublishers$InputStreamPublisher::RequestPublishers$InputStreamPublisher() {
}

$Class* RequestPublishers$InputStreamPublisher::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.RequestPublishers$InputStreamPublisher$$Lambda$lambda$iterableOf$0")) {
			return RequestPublishers$InputStreamPublisher$$Lambda$lambda$iterableOf$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"streamSupplier", "Ljava/util/function/Supplier;", "Ljava/util/function/Supplier<+Ljava/io/InputStream;>;", $PRIVATE | $FINAL, $field(RequestPublishers$InputStreamPublisher, streamSupplier)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/Supplier;)V", "(Ljava/util/function/Supplier<+Ljava/io/InputStream;>;)V", $PUBLIC, $method(RequestPublishers$InputStreamPublisher, init$, void, $Supplier*)},
		{"contentLength", "()J", nullptr, $PUBLIC, $virtualMethod(RequestPublishers$InputStreamPublisher, contentLength, int64_t)},
		{"iterableOf", "(Ljava/io/InputStream;)Ljava/lang/Iterable;", "(Ljava/io/InputStream;)Ljava/lang/Iterable<Ljava/nio/ByteBuffer;>;", $PROTECTED, $virtualMethod(RequestPublishers$InputStreamPublisher, iterableOf, $Iterable*, $InputStream*)},
		{"lambda$iterableOf$0", "(Ljava/io/InputStream;)Ljava/util/Iterator;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(RequestPublishers$InputStreamPublisher, lambda$iterableOf$0, $Iterator*, $InputStream*)},
		{"subscribe", "(Ljava/util/concurrent/Flow$Subscriber;)V", "(Ljava/util/concurrent/Flow$Subscriber<-Ljava/nio/ByteBuffer;>;)V", $PUBLIC, $virtualMethod(RequestPublishers$InputStreamPublisher, subscribe, void, $Flow$Subscriber*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.RequestPublishers$InputStreamPublisher", "jdk.internal.net.http.RequestPublishers", "InputStreamPublisher", $PUBLIC | $STATIC},
		{"java.net.http.HttpRequest$BodyPublisher", "java.net.http.HttpRequest", "BodyPublisher", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.net.http.RequestPublishers$InputStreamPublisher",
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
	$loadClass(RequestPublishers$InputStreamPublisher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RequestPublishers$InputStreamPublisher);
	});
	return class$;
}

$Class* RequestPublishers$InputStreamPublisher::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk