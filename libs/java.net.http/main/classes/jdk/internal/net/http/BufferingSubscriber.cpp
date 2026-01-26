#include <jdk/internal/net/http/BufferingSubscriber.h>

#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/InternalError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/http/HttpResponse$BodySubscriber.h>
#include <java/nio/Buffer.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <java/util/ListIterator.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/CompletionStage.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/ToLongFunction.h>
#include <java/util/stream/LongStream.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/net/http/BufferingSubscriber$DownstreamSubscription.h>
#include <jdk/internal/net/http/ResponseSubscribers$TrustedSubscriber.h>
#include <jcpp.h>

#undef ACTIVE
#undef CANCELLED
#undef COMPLETE
#undef ERROR
#undef UNSUBSCRIBED

using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $HttpResponse$BodySubscriber = ::java::net::http::HttpResponse$BodySubscriber;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $ListIterator = ::java::util::ListIterator;
using $Objects = ::java::util::Objects;
using $CompletionStage = ::java::util::concurrent::CompletionStage;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;
using $Predicate = ::java::util::function::Predicate;
using $ToLongFunction = ::java::util::function::ToLongFunction;
using $LongStream = ::java::util::stream::LongStream;
using $Stream = ::java::util::stream::Stream;
using $BufferingSubscriber$DownstreamSubscription = ::jdk::internal::net::http::BufferingSubscriber$DownstreamSubscription;
using $ResponseSubscribers$TrustedSubscriber = ::jdk::internal::net::http::ResponseSubscribers$TrustedSubscriber;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

class BufferingSubscriber$$Lambda$remaining : public $ToLongFunction {
	$class(BufferingSubscriber$$Lambda$remaining, $NO_CLASS_INIT, $ToLongFunction)
public:
	void init$() {
	}
	virtual int64_t applyAsLong(Object$* inst$) override {
		 return $sure($Buffer, inst$)->remaining();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BufferingSubscriber$$Lambda$remaining>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo BufferingSubscriber$$Lambda$remaining::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(BufferingSubscriber$$Lambda$remaining, init$, void)},
	{"applyAsLong", "(Ljava/lang/Object;)J", nullptr, $PUBLIC, $virtualMethod(BufferingSubscriber$$Lambda$remaining, applyAsLong, int64_t, Object$*)},
	{}
};
$ClassInfo BufferingSubscriber$$Lambda$remaining::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.net.http.BufferingSubscriber$$Lambda$remaining",
	"java.lang.Object",
	"java.util.function.ToLongFunction",
	nullptr,
	methodInfos
};
$Class* BufferingSubscriber$$Lambda$remaining::load$($String* name, bool initialize) {
	$loadClass(BufferingSubscriber$$Lambda$remaining, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BufferingSubscriber$$Lambda$remaining::class$ = nullptr;

class BufferingSubscriber$$Lambda$lambda$fromInternalBuffers$0$1 : public $Predicate {
	$class(BufferingSubscriber$$Lambda$lambda$fromInternalBuffers$0$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* b) override {
		 return BufferingSubscriber::lambda$fromInternalBuffers$0($cast($ByteBuffer, b));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BufferingSubscriber$$Lambda$lambda$fromInternalBuffers$0$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo BufferingSubscriber$$Lambda$lambda$fromInternalBuffers$0$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(BufferingSubscriber$$Lambda$lambda$fromInternalBuffers$0$1, init$, void)},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(BufferingSubscriber$$Lambda$lambda$fromInternalBuffers$0$1, test, bool, Object$*)},
	{}
};
$ClassInfo BufferingSubscriber$$Lambda$lambda$fromInternalBuffers$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.net.http.BufferingSubscriber$$Lambda$lambda$fromInternalBuffers$0$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* BufferingSubscriber$$Lambda$lambda$fromInternalBuffers$0$1::load$($String* name, bool initialize) {
	$loadClass(BufferingSubscriber$$Lambda$lambda$fromInternalBuffers$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BufferingSubscriber$$Lambda$lambda$fromInternalBuffers$0$1::class$ = nullptr;

$FieldInfo _BufferingSubscriber_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(BufferingSubscriber, $assertionsDisabled)},
	{"downstreamSubscriber", "Ljava/net/http/HttpResponse$BodySubscriber;", "Ljava/net/http/HttpResponse$BodySubscriber<TT;>;", $PRIVATE | $FINAL, $field(BufferingSubscriber, downstreamSubscriber)},
	{"bufferSize", "I", nullptr, $PRIVATE | $FINAL, $field(BufferingSubscriber, bufferSize)},
	{"subscription", "Ljava/util/concurrent/Flow$Subscription;", nullptr, $PRIVATE | $VOLATILE, $field(BufferingSubscriber, subscription)},
	{"downstreamSubscription", "Ljdk/internal/net/http/BufferingSubscriber$DownstreamSubscription;", "Ljdk/internal/net/http/BufferingSubscriber<TT;>.DownstreamSubscription;", $PRIVATE | $VOLATILE, $field(BufferingSubscriber, downstreamSubscription)},
	{"buffersLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(BufferingSubscriber, buffersLock)},
	{"internalBuffers", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/nio/ByteBuffer;>;", $PRIVATE, $field(BufferingSubscriber, internalBuffers)},
	{"accumulatedBytes", "I", nullptr, $PRIVATE, $field(BufferingSubscriber, accumulatedBytes)},
	{"throwable", "Ljava/lang/Throwable;", nullptr, $PRIVATE | $VOLATILE, $field(BufferingSubscriber, throwable)},
	{"UNSUBSCRIBED", "I", nullptr, $STATIC | $FINAL, $constField(BufferingSubscriber, UNSUBSCRIBED)},
	{"ACTIVE", "I", nullptr, $STATIC | $FINAL, $constField(BufferingSubscriber, ACTIVE)},
	{"ERROR", "I", nullptr, $STATIC | $FINAL, $constField(BufferingSubscriber, ERROR)},
	{"CANCELLED", "I", nullptr, $STATIC | $FINAL, $constField(BufferingSubscriber, CANCELLED)},
	{"COMPLETE", "I", nullptr, $STATIC | $FINAL, $constField(BufferingSubscriber, COMPLETE)},
	{"state", "I", nullptr, $PRIVATE | $VOLATILE, $field(BufferingSubscriber, state)},
	{}
};

$MethodInfo _BufferingSubscriber_MethodInfo_[] = {
	{"<init>", "(Ljava/net/http/HttpResponse$BodySubscriber;I)V", "(Ljava/net/http/HttpResponse$BodySubscriber<TT;>;I)V", $PUBLIC, $method(BufferingSubscriber, init$, void, $HttpResponse$BodySubscriber*, int32_t)},
	{"fromInternalBuffers", "()Ljava/util/List;", "()Ljava/util/List<Ljava/nio/ByteBuffer;>;", $PRIVATE, $method(BufferingSubscriber, fromInternalBuffers, $List*)},
	{"getBody", "()Ljava/util/concurrent/CompletionStage;", "()Ljava/util/concurrent/CompletionStage<TT;>;", $PUBLIC, $virtualMethod(BufferingSubscriber, getBody, $CompletionStage*)},
	{"hasEnoughAccumulatedBytes", "()Z", nullptr, $PRIVATE | $FINAL, $method(BufferingSubscriber, hasEnoughAccumulatedBytes, bool)},
	{"lambda$fromInternalBuffers$0", "(Ljava/nio/ByteBuffer;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BufferingSubscriber, lambda$fromInternalBuffers$0, bool, $ByteBuffer*)},
	{"needsExecutor", "()Z", nullptr, $PUBLIC, $virtualMethod(BufferingSubscriber, needsExecutor, bool)},
	{"onComplete", "()V", nullptr, $PUBLIC, $virtualMethod(BufferingSubscriber, onComplete, void)},
	{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(BufferingSubscriber, onError, void, $Throwable*)},
	{"onNext", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/nio/ByteBuffer;>;)V", $PUBLIC, $virtualMethod(BufferingSubscriber, onNext, void, $List*)},
	{"onNext", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(BufferingSubscriber, onNext, void, Object$*)},
	{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC, $virtualMethod(BufferingSubscriber, onSubscribe, void, $Flow$Subscription*)},
	{"remaining", "(Ljava/util/List;)J", "(Ljava/util/List<Ljava/nio/ByteBuffer;>;)J", $PRIVATE | $STATIC | $FINAL, $staticMethod(BufferingSubscriber, remaining, int64_t, $List*)},
	{}
};

$InnerClassInfo _BufferingSubscriber_InnerClassesInfo_[] = {
	{"jdk.internal.net.http.ResponseSubscribers$TrustedSubscriber", "jdk.internal.net.http.ResponseSubscribers", "TrustedSubscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.net.http.BufferingSubscriber$DownstreamSubscription", "jdk.internal.net.http.BufferingSubscriber", "DownstreamSubscription", $PRIVATE},
	{}
};

$ClassInfo _BufferingSubscriber_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.net.http.BufferingSubscriber",
	"java.lang.Object",
	"jdk.internal.net.http.ResponseSubscribers$TrustedSubscriber",
	_BufferingSubscriber_FieldInfo_,
	_BufferingSubscriber_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljdk/internal/net/http/ResponseSubscribers$TrustedSubscriber<TT;>;",
	nullptr,
	_BufferingSubscriber_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.net.http.BufferingSubscriber$DownstreamSubscription,jdk.internal.net.http.BufferingSubscriber$DownstreamSubscription$PushDemandedTask"
};

$Object* allocate$BufferingSubscriber($Class* clazz) {
	return $of($alloc(BufferingSubscriber));
}

bool BufferingSubscriber::$assertionsDisabled = false;

void BufferingSubscriber::init$($HttpResponse$BodySubscriber* downstreamSubscriber, int32_t bufferSize) {
	$set(this, buffersLock, $new($Object));
	$set(this, downstreamSubscriber, $cast($HttpResponse$BodySubscriber, $Objects::requireNonNull(downstreamSubscriber)));
	this->bufferSize = bufferSize;
	$synchronized(this->buffersLock) {
		$set(this, internalBuffers, $new($ArrayList));
	}
	this->state = BufferingSubscriber::UNSUBSCRIBED;
}

int64_t BufferingSubscriber::remaining($List* buffers) {
	$init(BufferingSubscriber);
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($($nc(buffers)->stream()))->mapToLong(static_cast<$ToLongFunction*>($$new(BufferingSubscriber$$Lambda$remaining)))))->sum();
}

bool BufferingSubscriber::needsExecutor() {
	return $ResponseSubscribers$TrustedSubscriber::needsExecutor(this->downstreamSubscriber);
}

bool BufferingSubscriber::hasEnoughAccumulatedBytes() {
	if (!BufferingSubscriber::$assertionsDisabled && !$Thread::holdsLock(this->buffersLock)) {
		$throwNew($AssertionError);
	}
	return this->accumulatedBytes >= this->bufferSize || (this->state == BufferingSubscriber::COMPLETE && this->accumulatedBytes > 0);
}

$List* BufferingSubscriber::fromInternalBuffers() {
	$useLocalCurrentObjectStackCache();
	if (!BufferingSubscriber::$assertionsDisabled && !$Thread::holdsLock(this->buffersLock)) {
		$throwNew($AssertionError);
	}
	int32_t leftToFill = this->bufferSize;
	int32_t state = this->state;
	if (!BufferingSubscriber::$assertionsDisabled && !((state == BufferingSubscriber::ACTIVE || state == BufferingSubscriber::CANCELLED) ? this->accumulatedBytes >= leftToFill : true)) {
		$throwNew($AssertionError);
	}
	$var($List, dsts, $new($ArrayList));
	$var($ListIterator, itr, $nc(this->internalBuffers)->listIterator());
	while ($nc(itr)->hasNext()) {
		$var($ByteBuffer, b, $cast($ByteBuffer, itr->next()));
		if ($nc(b)->remaining() <= leftToFill) {
			itr->remove();
			if (b->position() != 0) {
				$assign(b, b->slice());
			}
			dsts->add(b);
			leftToFill -= b->remaining();
			this->accumulatedBytes -= b->remaining();
			if (leftToFill == 0) {
				break;
			}
		} else {
			int32_t prevLimit = b->limit();
			b->limit(b->position() + leftToFill);
			$var($ByteBuffer, slice, b->slice());
			dsts->add(slice);
			b->limit(prevLimit);
			b->position(b->position() + leftToFill);
			this->accumulatedBytes -= leftToFill;
			leftToFill = 0;
			break;
		}
	}
	if (!BufferingSubscriber::$assertionsDisabled && !((state == BufferingSubscriber::ACTIVE || state == BufferingSubscriber::CANCELLED) ? leftToFill == 0 : state == BufferingSubscriber::COMPLETE)) {
		$throwNew($AssertionError);
	}
	if (!BufferingSubscriber::$assertionsDisabled && !((state == BufferingSubscriber::ACTIVE || state == BufferingSubscriber::CANCELLED) ? remaining(dsts) == this->bufferSize : state == BufferingSubscriber::COMPLETE)) {
		$throwNew($AssertionError);
	}
	if (!BufferingSubscriber::$assertionsDisabled && !(this->accumulatedBytes >= 0)) {
		$throwNew($AssertionError);
	}
	if (!BufferingSubscriber::$assertionsDisabled && !$nc($(dsts->stream()))->noneMatch(static_cast<$Predicate*>($$new(BufferingSubscriber$$Lambda$lambda$fromInternalBuffers$0$1)))) {
		$throwNew($AssertionError);
	}
	return $Collections::unmodifiableList(dsts);
}

void BufferingSubscriber::onSubscribe($Flow$Subscription* subscription) {
	$Objects::requireNonNull(subscription);
	if (this->subscription != nullptr) {
		subscription->cancel();
		return;
	}
	int32_t s = this->state;
	if (!BufferingSubscriber::$assertionsDisabled && !(s == BufferingSubscriber::UNSUBSCRIBED)) {
		$throwNew($AssertionError);
	}
	this->state = BufferingSubscriber::ACTIVE;
	$set(this, subscription, subscription);
	$set(this, downstreamSubscription, $new($BufferingSubscriber$DownstreamSubscription, this));
	$nc(this->downstreamSubscriber)->onSubscribe(this->downstreamSubscription);
}

void BufferingSubscriber::onNext($List* item) {
	$Objects::requireNonNull(item);
	int32_t s = this->state;
	if (s == BufferingSubscriber::CANCELLED) {
		return;
	}
	if (s != BufferingSubscriber::ACTIVE) {
		$throwNew($InternalError, "onNext on inactive subscriber"_s);
	}
	$synchronized(this->buffersLock) {
		$nc(this->internalBuffers)->addAll(item);
		this->accumulatedBytes += remaining(item);
	}
	$nc(this->downstreamSubscription)->pushDemanded();
}

void BufferingSubscriber::onError($Throwable* incomingThrowable) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(incomingThrowable);
	int32_t s = this->state;
	if (!BufferingSubscriber::$assertionsDisabled && !(s == BufferingSubscriber::ACTIVE)) {
		$throwNew($AssertionError, $of($$str({"Expected ACTIVE, got:"_s, $$str(s)})));
	}
	this->state = BufferingSubscriber::ERROR;
	$var($Throwable, t, this->throwable);
	if (!BufferingSubscriber::$assertionsDisabled && !(t == nullptr)) {
		$throwNew($AssertionError, $of($$str({"Expected null, got:"_s, t})));
	}
	$set(this, throwable, incomingThrowable);
	$nc(this->downstreamSubscription)->pushDemanded();
}

void BufferingSubscriber::onComplete() {
	$useLocalCurrentObjectStackCache();
	int32_t s = this->state;
	if (!BufferingSubscriber::$assertionsDisabled && !(s == BufferingSubscriber::ACTIVE)) {
		$throwNew($AssertionError, $of($$str({"Expected ACTIVE, got:"_s, $$str(s)})));
	}
	this->state = BufferingSubscriber::COMPLETE;
	$nc(this->downstreamSubscription)->pushDemanded();
}

$CompletionStage* BufferingSubscriber::getBody() {
	return $nc(this->downstreamSubscriber)->getBody();
}

void BufferingSubscriber::onNext(Object$* item) {
	this->onNext($cast($List, item));
}

bool BufferingSubscriber::lambda$fromInternalBuffers$0($ByteBuffer* b) {
	$init(BufferingSubscriber);
	return $nc(b)->position() != 0;
}

void clinit$BufferingSubscriber($Class* class$) {
	BufferingSubscriber::$assertionsDisabled = !BufferingSubscriber::class$->desiredAssertionStatus();
}

BufferingSubscriber::BufferingSubscriber() {
}

$Class* BufferingSubscriber::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(BufferingSubscriber$$Lambda$remaining::classInfo$.name)) {
			return BufferingSubscriber$$Lambda$remaining::load$(name, initialize);
		}
		if (name->equals(BufferingSubscriber$$Lambda$lambda$fromInternalBuffers$0$1::classInfo$.name)) {
			return BufferingSubscriber$$Lambda$lambda$fromInternalBuffers$0$1::load$(name, initialize);
		}
	}
	$loadClass(BufferingSubscriber, name, initialize, &_BufferingSubscriber_ClassInfo_, clinit$BufferingSubscriber, allocate$BufferingSubscriber);
	return class$;
}

$Class* BufferingSubscriber::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk