#include <jdk/internal/net/http/Http1Exchange$Http1Publisher.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/Flow$Subscriber.h>
#include <java/util/function/Supplier.h>
#include <jdk/internal/net/http/Exchange.h>
#include <jdk/internal/net/http/Http1Exchange$1.h>
#include <jdk/internal/net/http/Http1Exchange$Http1Publisher$Http1WriteSubscription.h>
#include <jdk/internal/net/http/Http1Exchange$Http1Publisher$WriteTask.h>
#include <jdk/internal/net/http/Http1Exchange$State.h>
#include <jdk/internal/net/http/Http1Exchange.h>
#include <jdk/internal/net/http/HttpConnection.h>
#include <jdk/internal/net/http/MultiExchange.h>
#include <jdk/internal/net/http/common/Demand.h>
#include <jdk/internal/net/http/common/FlowTube.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jdk/internal/net/http/common/SequentialScheduler.h>
#include <jdk/internal/net/http/common/Utils.h>
#include <jcpp.h>

#undef INITIAL

using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Objects = ::java::util::Objects;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;
using $Supplier = ::java::util::function::Supplier;
using $Http1Exchange = ::jdk::internal::net::http::Http1Exchange;
using $Http1Exchange$1 = ::jdk::internal::net::http::Http1Exchange$1;
using $Http1Exchange$Http1Publisher$Http1WriteSubscription = ::jdk::internal::net::http::Http1Exchange$Http1Publisher$Http1WriteSubscription;
using $Http1Exchange$Http1Publisher$WriteTask = ::jdk::internal::net::http::Http1Exchange$Http1Publisher$WriteTask;
using $Http1Exchange$State = ::jdk::internal::net::http::Http1Exchange$State;
using $Demand = ::jdk::internal::net::http::common::Demand;
using $SequentialScheduler = ::jdk::internal::net::http::common::SequentialScheduler;
using $Utils = ::jdk::internal::net::http::common::Utils;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

class Http1Exchange$Http1Publisher$$Lambda$dbgString : public $Supplier {
	$class(Http1Exchange$Http1Publisher$$Lambda$dbgString, $NO_CLASS_INIT, $Supplier)
public:
	void init$(Http1Exchange$Http1Publisher* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->dbgString());
	}
	Http1Exchange$Http1Publisher* inst$ = nullptr;
};
$Class* Http1Exchange$Http1Publisher$$Lambda$dbgString::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Http1Exchange$Http1Publisher$$Lambda$dbgString, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/Http1Exchange$Http1Publisher;)V", nullptr, $PUBLIC, $method(Http1Exchange$Http1Publisher$$Lambda$dbgString, init$, void, Http1Exchange$Http1Publisher*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Http1Exchange$Http1Publisher$$Lambda$dbgString, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.Http1Exchange$Http1Publisher$$Lambda$dbgString",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Http1Exchange$Http1Publisher$$Lambda$dbgString, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Http1Exchange$Http1Publisher$$Lambda$dbgString);
	});
	return class$;
}
$Class* Http1Exchange$Http1Publisher$$Lambda$dbgString::class$ = nullptr;

bool Http1Exchange$Http1Publisher::$assertionsDisabled = false;

void Http1Exchange$Http1Publisher::init$($Http1Exchange* this$0) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$set(this, debug, $Utils::getDebugLogger($$new(Http1Exchange$Http1Publisher$$Lambda$dbgString, this)));
	$set(this, subscription, $new($Http1Exchange$Http1Publisher$Http1WriteSubscription, this));
	$set(this, demand, $new($Demand));
	$set(this, writeScheduler, $SequentialScheduler::lockingScheduler($$new($Http1Exchange$Http1Publisher$WriteTask, this)));
}

void Http1Exchange$Http1Publisher::subscribe($Flow$Subscriber* s) {
	$init($Http1Exchange$State);
	if (!Http1Exchange$Http1Publisher::$assertionsDisabled && !(this->this$0->state == $Http1Exchange$State::INITIAL)) {
		$throwNew($AssertionError);
	}
	$Objects::requireNonNull(s);
	if (!Http1Exchange$Http1Publisher::$assertionsDisabled && !(this->subscriber == nullptr)) {
		$throwNew($AssertionError);
	}
	$set(this, subscriber, s);
	if ($nc(this->debug)->on()) {
		this->debug->log("got subscriber: %s"_s, $$new($ObjectArray, {s}));
	}
	s->onSubscribe(this->subscription);
}

$String* Http1Exchange$Http1Publisher::dbgString() {
	$useLocalObjectStack();
	$var($String, tag, this->dbgTag);
	$var($Object, flow, $nc(this->this$0->connection$)->getConnectionFlow());
	if (tag == nullptr && flow != nullptr) {
		$set(this, dbgTag, $assign(tag, $str({"Http1Publisher("_s, flow, ")"_s})));
	} else if (tag == nullptr) {
		$assign(tag, "Http1Publisher(?)"_s);
	}
	return tag;
}

bool Http1Exchange$Http1Publisher::checkRequestCancelled() {
	if ($nc($nc(this->this$0->exchange)->multi)->requestCancelled()) {
		if ($nc(this->debug)->on()) {
			this->debug->log("request cancelled"_s);
		}
		if (this->subscriber == nullptr) {
			if (this->debug->on()) {
				this->debug->log("no subscriber yet"_s);
			}
			return true;
		}
		{
			$init($Http1Exchange$1);
			$var($Throwable, cause, nullptr);
			switch ($nc($Http1Exchange$1::$SwitchMap$jdk$internal$net$http$Http1Exchange$State)->get($nc(this->this$0->state)->ordinal())) {
			case 2:
				this->this$0->cancelUpstreamSubscription();
			case 1:
				$assign(cause, this->this$0->getCancelCause());
				if (cause == nullptr) {
					$assign(cause, $new($IOException, "Request cancelled"_s));
				}
				$nc(this->subscriber)->onError(cause);
				$nc(this->writeScheduler)->stop();
				return true;
			}
		}
	}
	return false;
}

void Http1Exchange$Http1Publisher::clinit$($Class* clazz) {
	$load($Http1Exchange);
	Http1Exchange$Http1Publisher::$assertionsDisabled = !$Http1Exchange::class$->desiredAssertionStatus();
}

Http1Exchange$Http1Publisher::Http1Exchange$Http1Publisher() {
}

$Class* Http1Exchange$Http1Publisher::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.Http1Exchange$Http1Publisher$$Lambda$dbgString")) {
			return Http1Exchange$Http1Publisher$$Lambda$dbgString::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/net/http/Http1Exchange;", nullptr, $FINAL | $SYNTHETIC, $field(Http1Exchange$Http1Publisher, this$0)},
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Http1Exchange$Http1Publisher, $assertionsDisabled)},
		{"debug", "Ljdk/internal/net/http/common/Logger;", nullptr, $FINAL, $field(Http1Exchange$Http1Publisher, debug)},
		{"subscriber", "Ljava/util/concurrent/Flow$Subscriber;", "Ljava/util/concurrent/Flow$Subscriber<-Ljava/util/List<Ljava/nio/ByteBuffer;>;>;", $VOLATILE, $field(Http1Exchange$Http1Publisher, subscriber)},
		{"cancelled", "Z", nullptr, $VOLATILE, $field(Http1Exchange$Http1Publisher, cancelled)},
		{"subscription", "Ljdk/internal/net/http/Http1Exchange$Http1Publisher$Http1WriteSubscription;", "Ljdk/internal/net/http/Http1Exchange<TT;>.Http1Publisher.Http1WriteSubscription;", $FINAL, $field(Http1Exchange$Http1Publisher, subscription)},
		{"demand", "Ljdk/internal/net/http/common/Demand;", nullptr, $FINAL, $field(Http1Exchange$Http1Publisher, demand)},
		{"writeScheduler", "Ljdk/internal/net/http/common/SequentialScheduler;", nullptr, $FINAL, $field(Http1Exchange$Http1Publisher, writeScheduler)},
		{"dbgTag", "Ljava/lang/String;", nullptr, $VOLATILE, $field(Http1Exchange$Http1Publisher, dbgTag)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/Http1Exchange;)V", nullptr, 0, $method(Http1Exchange$Http1Publisher, init$, void, $Http1Exchange*)},
		{"checkRequestCancelled", "()Z", nullptr, $PRIVATE, $method(Http1Exchange$Http1Publisher, checkRequestCancelled, bool)},
		{"dbgString", "()Ljava/lang/String;", nullptr, 0, $method(Http1Exchange$Http1Publisher, dbgString, $String*)},
		{"subscribe", "(Ljava/util/concurrent/Flow$Subscriber;)V", "(Ljava/util/concurrent/Flow$Subscriber<-Ljava/util/List<Ljava/nio/ByteBuffer;>;>;)V", $PUBLIC, $virtualMethod(Http1Exchange$Http1Publisher, subscribe, void, $Flow$Subscriber*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.Http1Exchange$Http1Publisher", "jdk.internal.net.http.Http1Exchange", "Http1Publisher", $FINAL},
		{"jdk.internal.net.http.common.FlowTube$TubePublisher", "jdk.internal.net.http.common.FlowTube", "TubePublisher", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"jdk.internal.net.http.Http1Exchange$Http1Publisher$Http1WriteSubscription", "jdk.internal.net.http.Http1Exchange$Http1Publisher", "Http1WriteSubscription", $FINAL},
		{"jdk.internal.net.http.Http1Exchange$Http1Publisher$WriteTask", "jdk.internal.net.http.Http1Exchange$Http1Publisher", "WriteTask", $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.Http1Exchange$Http1Publisher",
		"java.lang.Object",
		"jdk.internal.net.http.common.FlowTube$TubePublisher",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.Http1Exchange"
	};
	$loadClass(Http1Exchange$Http1Publisher, name, initialize, &classInfo$$, Http1Exchange$Http1Publisher::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Http1Exchange$Http1Publisher);
	});
	return class$;
}

$Class* Http1Exchange$Http1Publisher::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk