#include <jdk/internal/net/http/HttpConnection$PlainHttpPublisher$HttpWriteSubscription.h>
#include <java/util/List.h>
#include <java/util/concurrent/ConcurrentLinkedDeque.h>
#include <java/util/concurrent/Flow$Subscriber.h>
#include <jdk/internal/net/http/HttpConnection$PlainHttpPublisher.h>
#include <jdk/internal/net/http/HttpConnection.h>
#include <jdk/internal/net/http/common/Demand.h>
#include <jdk/internal/net/http/common/FlowTube.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jdk/internal/net/http/common/SequentialScheduler.h>
#include <jdk/internal/net/http/common/Utils.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $HttpConnection$PlainHttpPublisher = ::jdk::internal::net::http::HttpConnection$PlainHttpPublisher;
using $Demand = ::jdk::internal::net::http::common::Demand;
using $Utils = ::jdk::internal::net::http::common::Utils;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

void HttpConnection$PlainHttpPublisher$HttpWriteSubscription::init$($HttpConnection$PlainHttpPublisher* this$1) {
	$set(this, this$1, this$1);
	$set(this, demand, $new($Demand));
}

void HttpConnection$PlainHttpPublisher$HttpWriteSubscription::request(int64_t n) {
	$useLocalObjectStack();
	if (n <= 0) {
		$throwNew($IllegalArgumentException, "non-positive request"_s);
	}
	this->demand->increase(n);
	if ($nc($nc(this->this$1->this$0)->debug)->on()) {
		this->this$1->this$0->debug->log($$str({"HttpPublisher: got request of "_s, $$str(n), " from "_s, $(this->this$1->this$0->getConnectionFlow())}));
	}
	$nc(this->this$1->writeScheduler)->runOrSchedule();
}

void HttpConnection$PlainHttpPublisher$HttpWriteSubscription::cancel() {
	$useLocalObjectStack();
	if ($nc($nc(this->this$1->this$0)->debug)->on()) {
		this->this$1->this$0->debug->log($$str({"HttpPublisher: cancelled by "_s, $(this->this$1->this$0->getConnectionFlow())}));
	}
}

bool HttpConnection$PlainHttpPublisher$HttpWriteSubscription::isEmpty() {
	bool var$0 = $nc(this->this$1->queue)->isEmpty();
	return var$0 && $nc(this->this$1->priority)->isEmpty();
}

$List* HttpConnection$PlainHttpPublisher$HttpWriteSubscription::poll() {
	$var($List, elem, $cast($List, $nc(this->this$1->priority)->poll()));
	return elem == nullptr ? $cast($List, $nc(this->this$1->queue)->poll()) : elem;
}

void HttpConnection$PlainHttpPublisher$HttpWriteSubscription::flush() {
	$useLocalObjectStack();
	while (true) {
		bool var$0 = !isEmpty();
		if (!(var$0 && this->demand->tryDecrement())) {
			break;
		}
		{
			$var($List, elem, poll());
			if ($nc($nc(this->this$1->this$0)->debug)->on()) {
				$var($StringBuilder, var$1, $new($StringBuilder));
				var$1->append("HttpPublisher: sending "_s);
				var$1->append($Utils::remaining(elem));
				var$1->append(" bytes ("_s);
				var$1->append($nc(elem)->size());
				var$1->append(" buffers) to "_s);
				var$1->append($(this->this$1->this$0->getConnectionFlow()));
				this->this$1->this$0->debug->log($$str(var$1));
			}
			$nc(this->this$1->subscriber)->onNext(elem);
		}
	}
}

HttpConnection$PlainHttpPublisher$HttpWriteSubscription::HttpConnection$PlainHttpPublisher$HttpWriteSubscription() {
}

$Class* HttpConnection$PlainHttpPublisher$HttpWriteSubscription::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljdk/internal/net/http/HttpConnection$PlainHttpPublisher;", nullptr, $FINAL | $SYNTHETIC, $field(HttpConnection$PlainHttpPublisher$HttpWriteSubscription, this$1)},
		{"demand", "Ljdk/internal/net/http/common/Demand;", nullptr, $FINAL, $field(HttpConnection$PlainHttpPublisher$HttpWriteSubscription, demand)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/HttpConnection$PlainHttpPublisher;)V", nullptr, 0, $method(HttpConnection$PlainHttpPublisher$HttpWriteSubscription, init$, void, $HttpConnection$PlainHttpPublisher*)},
		{"cancel", "()V", nullptr, $PUBLIC, $virtualMethod(HttpConnection$PlainHttpPublisher$HttpWriteSubscription, cancel, void)},
		{"flush", "()V", nullptr, 0, $method(HttpConnection$PlainHttpPublisher$HttpWriteSubscription, flush, void)},
		{"isEmpty", "()Z", nullptr, $PRIVATE, $method(HttpConnection$PlainHttpPublisher$HttpWriteSubscription, isEmpty, bool)},
		{"poll", "()Ljava/util/List;", "()Ljava/util/List<Ljava/nio/ByteBuffer;>;", $PRIVATE, $method(HttpConnection$PlainHttpPublisher$HttpWriteSubscription, poll, $List*)},
		{"request", "(J)V", nullptr, $PUBLIC, $virtualMethod(HttpConnection$PlainHttpPublisher$HttpWriteSubscription, request, void, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.HttpConnection$PlainHttpPublisher", "jdk.internal.net.http.HttpConnection", "PlainHttpPublisher", $FINAL},
		{"jdk.internal.net.http.HttpConnection$PlainHttpPublisher$HttpWriteSubscription", "jdk.internal.net.http.HttpConnection$PlainHttpPublisher", "HttpWriteSubscription", $FINAL},
		{"java.util.concurrent.Flow$Subscription", "java.util.concurrent.Flow", "Subscription", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.HttpConnection$PlainHttpPublisher$HttpWriteSubscription",
		"java.lang.Object",
		"java.util.concurrent.Flow$Subscription",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.HttpConnection"
	};
	$loadClass(HttpConnection$PlainHttpPublisher$HttpWriteSubscription, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpConnection$PlainHttpPublisher$HttpWriteSubscription);
	});
	return class$;
}

$Class* HttpConnection$PlainHttpPublisher$HttpWriteSubscription::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk