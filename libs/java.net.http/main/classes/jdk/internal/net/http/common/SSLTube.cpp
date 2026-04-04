#include <jdk/internal/net/http/common/SSLTube.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/Executor.h>
#include <java/util/concurrent/Flow$Subscriber.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Supplier.h>
#include <javax/net/ssl/SSLEngine.h>
#include <javax/net/ssl/SSLEngineResult$HandshakeStatus.h>
#include <javax/net/ssl/SSLException.h>
#include <javax/net/ssl/SSLHandshakeException.h>
#include <javax/net/ssl/SSLSession.h>
#include <jdk/internal/net/http/common/Demand.h>
#include <jdk/internal/net/http/common/FlowTube$TubePublisher.h>
#include <jdk/internal/net/http/common/FlowTube$TubeSubscriber.h>
#include <jdk/internal/net/http/common/FlowTube.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jdk/internal/net/http/common/SSLFlowDelegate.h>
#include <jdk/internal/net/http/common/SSLTube$SSLSubscriberWrapper.h>
#include <jdk/internal/net/http/common/SSLTube$SSLSubscriptionWrapper.h>
#include <jdk/internal/net/http/common/SSLTube$SSLTubeFlowDelegate.h>
#include <jdk/internal/net/http/common/Utils.h>
#include <jcpp.h>

#undef DEBUG
#undef FINISHED
#undef NOT_HANDSHAKING

using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $Executor = ::java::util::concurrent::Executor;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;
using $Consumer = ::java::util::function::Consumer;
using $Supplier = ::java::util::function::Supplier;
using $SSLEngine = ::javax::net::ssl::SSLEngine;
using $SSLEngineResult$HandshakeStatus = ::javax::net::ssl::SSLEngineResult$HandshakeStatus;
using $SSLException = ::javax::net::ssl::SSLException;
using $SSLHandshakeException = ::javax::net::ssl::SSLHandshakeException;
using $Demand = ::jdk::internal::net::http::common::Demand;
using $FlowTube = ::jdk::internal::net::http::common::FlowTube;
using $FlowTube$TubePublisher = ::jdk::internal::net::http::common::FlowTube$TubePublisher;
using $FlowTube$TubeSubscriber = ::jdk::internal::net::http::common::FlowTube$TubeSubscriber;
using $SSLTube$SSLSubscriberWrapper = ::jdk::internal::net::http::common::SSLTube$SSLSubscriberWrapper;
using $SSLTube$SSLSubscriptionWrapper = ::jdk::internal::net::http::common::SSLTube$SSLSubscriptionWrapper;
using $SSLTube$SSLTubeFlowDelegate = ::jdk::internal::net::http::common::SSLTube$SSLTubeFlowDelegate;
using $Utils = ::jdk::internal::net::http::common::Utils;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace common {

class SSLTube$$Lambda$dbgString : public $Supplier {
	$class(SSLTube$$Lambda$dbgString, $NO_CLASS_INIT, $Supplier)
public:
	void init$(SSLTube* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->dbgString());
	}
	SSLTube* inst$ = nullptr;
};
$Class* SSLTube$$Lambda$dbgString::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SSLTube$$Lambda$dbgString, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/common/SSLTube;)V", nullptr, $PUBLIC, $method(SSLTube$$Lambda$dbgString, init$, void, SSLTube*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SSLTube$$Lambda$dbgString, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.common.SSLTube$$Lambda$dbgString",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SSLTube$$Lambda$dbgString, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLTube$$Lambda$dbgString);
	});
	return class$;
}
$Class* SSLTube$$Lambda$dbgString::class$ = nullptr;

bool SSLTube::$assertionsDisabled = false;

void SSLTube::init$($SSLEngine* engine, $Executor* executor, $FlowTube* tube) {
	SSLTube::init$(engine, executor, nullptr, tube);
}

void SSLTube::init$($SSLEngine* engine, $Executor* executor, $Consumer* recycler, $FlowTube* tube) {
	$init($Utils);
	$set(this, debug, $Utils::getDebugLogger($$new(SSLTube$$Lambda$dbgString, this), $Utils::DEBUG));
	$set(this, writeDemand, $new($Demand));
	$Objects::requireNonNull(engine);
	$Objects::requireNonNull(executor);
	$set(this, tube, $cast($FlowTube, $Objects::requireNonNull(tube)));
	$set(this, writeSubscription, $new($SSLTube$SSLSubscriptionWrapper, this));
	$set(this, readSubscriber, $new($SSLTube$SSLSubscriberWrapper, this));
	$set(this, engine, engine);
	$set(this, sslDelegate, $new($SSLTube$SSLTubeFlowDelegate, this, engine, executor, recycler, this->readSubscriber, tube));
}

$CompletableFuture* SSLTube::getALPN() {
	return $nc(this->sslDelegate)->alpn();
}

void SSLTube::subscribe($Flow$Subscriber* s) {
	$nc(this->readSubscriber)->dropSubscription();
	this->readSubscriber->setDelegate(s);
	$nc(s)->onSubscribe(this->readSubscription);
}

bool SSLTube::isFinished() {
	return this->finished;
}

bool SSLTube::handshaking() {
	$SSLEngineResult$HandshakeStatus* hs = $nc(this->engine)->getHandshakeStatus();
	$init($SSLEngineResult$HandshakeStatus);
	return !(hs == $SSLEngineResult$HandshakeStatus::NOT_HANDSHAKING || hs == $SSLEngineResult$HandshakeStatus::FINISHED);
}

$String* SSLTube::handshakeFailed() {
	$useLocalObjectStack();
	bool var$0 = handshaking();
	if (var$0 && (this->sslDelegate == nullptr || !this->sslDelegate->closeNotifyReceived())) {
		return "Remote host terminated the handshake"_s;
	}
	if ("SSL_NULL_WITH_NULL_NULL"_s->equals($($$nc($nc(this->engine)->getSession())->getCipherSuite()))) {
		return "Remote host closed the channel"_s;
	}
	return nullptr;
}

$Throwable* SSLTube::checkForHandshake($Throwable* t) {
	$useLocalObjectStack();
	if ($instanceOf($SSLException, t)) {
		return t;
	}
	$var($String, handshakeFailed, this->handshakeFailed());
	if (handshakeFailed == nullptr) {
		return t;
	}
	if ($nc(this->debug)->on()) {
		this->debug->log("handshake: %s, inbound done: %s, outbound done: %s: %s"_s, $$new($ObjectArray, {
			$($nc(this->engine)->getHandshakeStatus()),
			$($Boolean::valueOf($nc(this->engine)->isInboundDone())),
			$($Boolean::valueOf($nc(this->engine)->isOutboundDone())),
			handshakeFailed
		}));
	}
	$var($SSLHandshakeException, e, $new($SSLHandshakeException, handshakeFailed));
	if (t != nullptr) {
		e->initCause(t);
	}
	return e;
}

void SSLTube::connectFlows($FlowTube$TubePublisher* writePub, $FlowTube$TubeSubscriber* readSub) {
	if ($nc(this->debug)->on()) {
		this->debug->log("connecting flows"_s);
	}
	$nc(this->readSubscriber)->setDelegate(readSub);
	$nc(writePub)->subscribe(this);
}

void SSLTube::onSubscribe($Flow$Subscription* subscription) {
	$Objects::requireNonNull(subscription);
	$var($Flow$Subscription, x, $nc(this->writeSubscription)->delegate);
	if (x != nullptr) {
		x->cancel();
	}
	this->writeSubscription->setSubscription(subscription);
}

void SSLTube::onNext($List* item) {
	$useLocalObjectStack();
	$Objects::requireNonNull(item);
	bool decremented = $nc(this->writeDemand)->tryDecrement();
	if (!SSLTube::$assertionsDisabled && !decremented) {
		$throwNew($AssertionError, $of("Unexpected writeDemand: "_s));
	}
	if ($nc(this->debug)->on()) {
		this->debug->log("sending %d  buffers to SSL flow delegate"_s, $$new($ObjectArray, {$($Integer::valueOf(item->size()))}));
	}
	$$nc($nc(this->sslDelegate)->upstreamWriter())->onNext(item);
}

void SSLTube::onError($Throwable* throwable) {
	$Objects::requireNonNull(throwable);
	$$nc($nc(this->sslDelegate)->upstreamWriter())->onError(throwable);
}

void SSLTube::onComplete() {
	$$nc($nc(this->sslDelegate)->upstreamWriter())->onComplete();
}

$String* SSLTube::toString() {
	return dbgString();
}

$String* SSLTube::dbgString() {
	return $str({"SSLTube("_s, this->tube, ")"_s});
}

void SSLTube::onNext(Object$* item) {
	this->onNext($cast($List, item));
}

void SSLTube::clinit$($Class* clazz) {
	SSLTube::$assertionsDisabled = !SSLTube::class$->desiredAssertionStatus();
}

SSLTube::SSLTube() {
}

$Class* SSLTube::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.common.SSLTube$$Lambda$dbgString")) {
			return SSLTube$$Lambda$dbgString::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SSLTube, $assertionsDisabled)},
		{"debug", "Ljdk/internal/net/http/common/Logger;", nullptr, $FINAL, $field(SSLTube, debug)},
		{"tube", "Ljdk/internal/net/http/common/FlowTube;", nullptr, $PRIVATE | $FINAL, $field(SSLTube, tube)},
		{"readSubscriber", "Ljdk/internal/net/http/common/SSLTube$SSLSubscriberWrapper;", nullptr, $PRIVATE | $FINAL, $field(SSLTube, readSubscriber)},
		{"writeSubscription", "Ljdk/internal/net/http/common/SSLTube$SSLSubscriptionWrapper;", nullptr, $PRIVATE | $FINAL, $field(SSLTube, writeSubscription)},
		{"sslDelegate", "Ljdk/internal/net/http/common/SSLFlowDelegate;", nullptr, $PRIVATE | $FINAL, $field(SSLTube, sslDelegate)},
		{"engine", "Ljavax/net/ssl/SSLEngine;", nullptr, $PRIVATE | $FINAL, $field(SSLTube, engine)},
		{"finished", "Z", nullptr, $PRIVATE | $VOLATILE, $field(SSLTube, finished)},
		{"readSubscription", "Ljava/util/concurrent/Flow$Subscription;", nullptr, $PRIVATE | $VOLATILE, $field(SSLTube, readSubscription)},
		{"writeDemand", "Ljdk/internal/net/http/common/Demand;", nullptr, $PRIVATE | $FINAL, $field(SSLTube, writeDemand)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/net/ssl/SSLEngine;Ljava/util/concurrent/Executor;Ljdk/internal/net/http/common/FlowTube;)V", nullptr, $PUBLIC, $method(SSLTube, init$, void, $SSLEngine*, $Executor*, $FlowTube*)},
		{"<init>", "(Ljavax/net/ssl/SSLEngine;Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;Ljdk/internal/net/http/common/FlowTube;)V", "(Ljavax/net/ssl/SSLEngine;Ljava/util/concurrent/Executor;Ljava/util/function/Consumer<Ljava/nio/ByteBuffer;>;Ljdk/internal/net/http/common/FlowTube;)V", $PUBLIC, $method(SSLTube, init$, void, $SSLEngine*, $Executor*, $Consumer*, $FlowTube*)},
		{"checkForHandshake", "(Ljava/lang/Throwable;)Ljava/lang/Throwable;", nullptr, 0, $virtualMethod(SSLTube, checkForHandshake, $Throwable*, $Throwable*)},
		{"connectFlows", "(Ljdk/internal/net/http/common/FlowTube$TubePublisher;Ljdk/internal/net/http/common/FlowTube$TubeSubscriber;)V", nullptr, $PUBLIC, $virtualMethod(SSLTube, connectFlows, void, $FlowTube$TubePublisher*, $FlowTube$TubeSubscriber*)},
		{"dbgString", "()Ljava/lang/String;", nullptr, $FINAL, $method(SSLTube, dbgString, $String*)},
		{"getALPN", "()Ljava/util/concurrent/CompletableFuture;", "()Ljava/util/concurrent/CompletableFuture<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(SSLTube, getALPN, $CompletableFuture*)},
		{"handshakeFailed", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(SSLTube, handshakeFailed, $String*)},
		{"handshaking", "()Z", nullptr, $PRIVATE, $method(SSLTube, handshaking, bool)},
		{"isFinished", "()Z", nullptr, $PUBLIC, $virtualMethod(SSLTube, isFinished, bool)},
		{"onComplete", "()V", nullptr, $PUBLIC, $virtualMethod(SSLTube, onComplete, void)},
		{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(SSLTube, onError, void, $Throwable*)},
		{"onNext", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/nio/ByteBuffer;>;)V", $PUBLIC, $virtualMethod(SSLTube, onNext, void, $List*)},
		{"onNext", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(SSLTube, onNext, void, Object$*)},
		{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC, $virtualMethod(SSLTube, onSubscribe, void, $Flow$Subscription*)},
		{"subscribe", "(Ljava/util/concurrent/Flow$Subscriber;)V", "(Ljava/util/concurrent/Flow$Subscriber<-Ljava/util/List<Ljava/nio/ByteBuffer;>;>;)V", $PUBLIC, $virtualMethod(SSLTube, subscribe, void, $Flow$Subscriber*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SSLTube, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.common.SSLTube$SSLSubscriptionWrapper", "jdk.internal.net.http.common.SSLTube", "SSLSubscriptionWrapper", $FINAL},
		{"jdk.internal.net.http.common.SSLTube$SSLSubscriberWrapper", "jdk.internal.net.http.common.SSLTube", "SSLSubscriberWrapper", $FINAL},
		{"jdk.internal.net.http.common.SSLTube$DelegateWrapper", "jdk.internal.net.http.common.SSLTube", "DelegateWrapper", $STATIC | $FINAL},
		{"jdk.internal.net.http.common.SSLTube$SSLTubeFlowDelegate", "jdk.internal.net.http.common.SSLTube", "SSLTubeFlowDelegate", $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.net.http.common.SSLTube",
		"java.lang.Object",
		"jdk.internal.net.http.common.FlowTube",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.internal.net.http.common.SSLTube$SSLSubscriptionWrapper,jdk.internal.net.http.common.SSLTube$SSLSubscriberWrapper,jdk.internal.net.http.common.SSLTube$DelegateWrapper,jdk.internal.net.http.common.SSLTube$SSLTubeFlowDelegate"
	};
	$loadClass(SSLTube, name, initialize, &classInfo$$, SSLTube::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(SSLTube));
	});
	return class$;
}

$Class* SSLTube::class$ = nullptr;

				} // common
			} // http
		} // net
	} // internal
} // jdk