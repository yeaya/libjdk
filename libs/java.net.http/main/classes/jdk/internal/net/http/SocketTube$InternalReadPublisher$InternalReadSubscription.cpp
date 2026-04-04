#include <jdk/internal/net/http/SocketTube$InternalReadPublisher$InternalReadSubscription.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/util/List.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <java/util/function/Consumer.h>
#include <jdk/internal/net/http/AsyncEvent.h>
#include <jdk/internal/net/http/AsyncTriggerEvent.h>
#include <jdk/internal/net/http/HttpClientImpl.h>
#include <jdk/internal/net/http/SocketTube$BufferSource.h>
#include <jdk/internal/net/http/SocketTube$InternalReadPublisher$ReadEvent.h>
#include <jdk/internal/net/http/SocketTube$InternalReadPublisher$ReadSubscription.h>
#include <jdk/internal/net/http/SocketTube$InternalReadPublisher.h>
#include <jdk/internal/net/http/SocketTube$SocketFlowTask.h>
#include <jdk/internal/net/http/SocketTube.h>
#include <jdk/internal/net/http/common/Demand.h>
#include <jdk/internal/net/http/common/FlowTube$TubeSubscriber.h>
#include <jdk/internal/net/http/common/Log.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jdk/internal/net/http/common/SequentialScheduler.h>
#include <jdk/internal/net/http/common/Utils.h>
#include <jcpp.h>

#undef EOF

using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $List = ::java::util::List;
using $Consumer = ::java::util::function::Consumer;
using $AsyncTriggerEvent = ::jdk::internal::net::http::AsyncTriggerEvent;
using $SocketTube = ::jdk::internal::net::http::SocketTube;
using $SocketTube$InternalReadPublisher = ::jdk::internal::net::http::SocketTube$InternalReadPublisher;
using $SocketTube$InternalReadPublisher$ReadEvent = ::jdk::internal::net::http::SocketTube$InternalReadPublisher$ReadEvent;
using $SocketTube$InternalReadPublisher$ReadSubscription = ::jdk::internal::net::http::SocketTube$InternalReadPublisher$ReadSubscription;
using $SocketTube$SocketFlowTask = ::jdk::internal::net::http::SocketTube$SocketFlowTask;
using $Demand = ::jdk::internal::net::http::common::Demand;
using $FlowTube$TubeSubscriber = ::jdk::internal::net::http::common::FlowTube$TubeSubscriber;
using $Log = ::jdk::internal::net::http::common::Log;
using $SequentialScheduler = ::jdk::internal::net::http::common::SequentialScheduler;
using $Utils = ::jdk::internal::net::http::common::Utils;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

class SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$read : public $Runnable {
	$class(SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$read, $NO_CLASS_INIT, $Runnable)
public:
	void init$(SocketTube$InternalReadPublisher$InternalReadSubscription* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->read();
	}
	SocketTube$InternalReadPublisher$InternalReadSubscription* inst$ = nullptr;
};
$Class* SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$read::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$read, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/SocketTube$InternalReadPublisher$InternalReadSubscription;)V", nullptr, $PUBLIC, $method(SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$read, init$, void, SocketTube$InternalReadPublisher$InternalReadSubscription*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$read, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$read",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$read, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$read);
	});
	return class$;
}
$Class* SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$read::class$ = nullptr;

class SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$signalError$1 : public $Consumer {
	$class(SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$signalError$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$(SocketTube$InternalReadPublisher$InternalReadSubscription* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* error) override {
		$nc(inst$)->signalError($cast($Throwable, error));
	}
	SocketTube$InternalReadPublisher$InternalReadSubscription* inst$ = nullptr;
};
$Class* SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$signalError$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$signalError$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/SocketTube$InternalReadPublisher$InternalReadSubscription;)V", nullptr, $PUBLIC, $method(SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$signalError$1, init$, void, SocketTube$InternalReadPublisher$InternalReadSubscription*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$signalError$1, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$signalError$1",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$signalError$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$signalError$1);
	});
	return class$;
}
$Class* SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$signalError$1::class$ = nullptr;

class SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$handleSubscribeEvent$2 : public $Runnable {
	$class(SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$handleSubscribeEvent$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$(SocketTube$InternalReadPublisher$InternalReadSubscription* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->handleSubscribeEvent();
	}
	SocketTube$InternalReadPublisher$InternalReadSubscription* inst$ = nullptr;
};
$Class* SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$handleSubscribeEvent$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$handleSubscribeEvent$2, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/SocketTube$InternalReadPublisher$InternalReadSubscription;)V", nullptr, $PUBLIC, $method(SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$handleSubscribeEvent$2, init$, void, SocketTube$InternalReadPublisher$InternalReadSubscription*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$handleSubscribeEvent$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$handleSubscribeEvent$2",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$handleSubscribeEvent$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$handleSubscribeEvent$2);
	});
	return class$;
}
$Class* SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$handleSubscribeEvent$2::class$ = nullptr;

bool SocketTube$InternalReadPublisher$InternalReadSubscription::$assertionsDisabled = false;

void SocketTube$InternalReadPublisher$InternalReadSubscription::init$($SocketTube$InternalReadPublisher* this$1) {
	$useLocalObjectStack();
	$set(this, this$1, this$1);
	$set(this, demand, $new($Demand));
	$set(this, readScheduler, $new($SequentialScheduler, $$new($SocketTube$SocketFlowTask, $$new(SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$read, this))));
	$var($Consumer, var$0, $new(SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$signalError$1, this));
	$set(this, subscribeEvent, $new($AsyncTriggerEvent, var$0, $$new(SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$handleSubscribeEvent$2, this)));
	$set(this, readEvent, $new($SocketTube$InternalReadPublisher$ReadEvent, this$1, $nc(this$1->this$0)->channel, this));
}

void SocketTube$InternalReadPublisher$InternalReadSubscription::signalSubscribe() {
	if (this->readScheduler->isStopped() || this->completed) {
		if ($nc($nc(this->this$1->this$0)->debug)->on()) {
			this->this$1->this$0->debug->log("handling pending subscription while completed"_s);
		}
		handlePending();
	} else {
		try {
			if ($nc($nc(this->this$1->this$0)->debug)->on()) {
				this->this$1->this$0->debug->log("registering subscribe event"_s);
			}
			$nc(this->this$1->this$0->client)->registerEvent(this->subscribeEvent);
		} catch ($Throwable& t) {
			signalError(t);
			handlePending();
		}
	}
}

void SocketTube$InternalReadPublisher$InternalReadSubscription::handleSubscribeEvent() {
	$useLocalObjectStack();
	if (!SocketTube$InternalReadPublisher$InternalReadSubscription::$assertionsDisabled && !$nc($nc(this->this$1->this$0)->client)->isSelectorThread()) {
		$throwNew($AssertionError);
	}
	$nc($nc(this->this$1->this$0)->debug)->log("subscribe event raised"_s);
	if ($Log::channel()) {
		$Log::logChannel("Start reading from {0}"_s, $$new($ObjectArray, {$(this->this$1->this$0->channelDescr())}));
	}
	this->readScheduler->runOrSchedule();
	if (this->readScheduler->isStopped() || this->completed) {
		if (this->this$1->this$0->debug->on()) {
			this->this$1->this$0->debug->log("handling pending subscription when completed"_s);
		}
		handlePending();
	}
}

void SocketTube$InternalReadPublisher$InternalReadSubscription::request(int64_t n) {
	$useLocalObjectStack();
	if (n > 0) {
		bool wasFulfilled = this->demand->increase(n);
		if (wasFulfilled) {
			if ($nc($nc(this->this$1->this$0)->debug)->on()) {
				this->this$1->this$0->debug->log("got some demand for reading"_s);
			}
			resumeReadEvent();
		}
	} else {
		signalError($$new($IllegalArgumentException, "non-positive request"_s));
	}
	$nc(this->this$1->this$0)->debugState($$str({"leaving request("_s, $$str(n), "): "_s}));
}

void SocketTube$InternalReadPublisher$InternalReadSubscription::cancel() {
	$useLocalObjectStack();
	pauseReadEvent();
	if ($nc($nc(this->this$1->this$0)->debug)->on()) {
		this->this$1->this$0->debug->log("Read subscription cancelled"_s);
	}
	if ($Log::channel()) {
		$Log::logChannel("Read subscription cancelled for channel {0}"_s, $$new($ObjectArray, {$(this->this$1->this$0->channelDescr())}));
	}
	if (this->this$1->this$0->debug->on()) {
		this->this$1->this$0->debug->log("Stopping read scheduler"_s);
	}
	this->readScheduler->stop();
}

void SocketTube$InternalReadPublisher$InternalReadSubscription::resumeReadEvent() {
	if ($nc($nc(this->this$1->this$0)->debug)->on()) {
		this->this$1->this$0->debug->log("resuming read event"_s);
	}
	this->this$1->this$0->resumeEvent(this->readEvent, $$new(SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$signalError$1, this));
}

void SocketTube$InternalReadPublisher$InternalReadSubscription::pauseReadEvent() {
	if ($nc($nc(this->this$1->this$0)->debug)->on()) {
		this->this$1->this$0->debug->log("pausing read event"_s);
	}
	this->this$1->this$0->pauseEvent(this->readEvent, $$new(SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$signalError$1, this));
}

void SocketTube$InternalReadPublisher$InternalReadSubscription::handleError() {
	if (!SocketTube$InternalReadPublisher$InternalReadSubscription::$assertionsDisabled && !($nc($nc(this->this$1->this$0)->errorRef)->get() != nullptr)) {
		$throwNew($AssertionError);
	}
	this->readScheduler->runOrSchedule();
}

void SocketTube$InternalReadPublisher$InternalReadSubscription::signalError($Throwable* error) {
	$useLocalObjectStack();
	if ($nc($nc(this->this$1->this$0)->debug)->on()) {
		this->this$1->this$0->debug->log($$str({"signal read error: "_s, error}));
	}
	if (!$nc(this->this$1->this$0->errorRef)->compareAndSet(nullptr, error)) {
		return;
	}
	if (this->this$1->this$0->debug->on()) {
		this->this$1->this$0->debug->log($$str({"got read error: "_s, error}));
	}
	if ($Log::channel()) {
		$Log::logChannel("Read error signalled on channel {0}: {1}"_s, $$new($ObjectArray, {
			$(this->this$1->this$0->channelDescr()),
			error
		}));
	}
	this->readScheduler->runOrSchedule();
}

void SocketTube$InternalReadPublisher$InternalReadSubscription::signalReadable() {
	this->readScheduler->runOrSchedule();
}

void SocketTube$InternalReadPublisher$InternalReadSubscription::read() {
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	bool return$1 = false;
	try {
		try {
			while (!this->readScheduler->isStopped()) {
				if (this->completed) {
					return$1 = true;
					goto $finally;
				}
				if (handlePending()) {
					if ($nc($nc(this->this$1->this$0)->debug)->on()) {
						this->this$1->this$0->debug->log("pending subscriber subscribed"_s);
					}
					return$1 = true;
					goto $finally;
				}
				$var($SocketTube$InternalReadPublisher$ReadSubscription, current, this->this$1->subscription);
				$var($Throwable, error, $cast($Throwable, $nc($nc(this->this$1->this$0)->errorRef)->get()));
				if (current == nullptr) {
					if (!SocketTube$InternalReadPublisher$InternalReadSubscription::$assertionsDisabled && !(error != nullptr)) {
						$throwNew($AssertionError);
					}
					if ($nc(this->this$1->this$0->debug)->on()) {
						this->this$1->this$0->debug->log("error raised before subscriber subscribed: %s"_s, $$new($ObjectArray, {$of(error)}));
					}
					return$1 = true;
					goto $finally;
				}
				$var($FlowTube$TubeSubscriber, subscriber, $nc(current)->subscriber);
				if (error != nullptr) {
					this->completed = true;
					pauseReadEvent();
					if ($nc(this->this$1->this$0->debug)->on()) {
						this->this$1->this$0->debug->log($$str({"Sending error "_s, error, " to subscriber "_s, subscriber}));
					}
					if ($Log::channel()) {
						$Log::logChannel("Raising error with subscriber for {0}: {1}"_s, $$new($ObjectArray, {
							$(this->this$1->this$0->channelDescr()),
							error
						}));
					}
					$nc(current->errorRef)->compareAndSet(nullptr, error);
					current->signalCompletion();
					if (this->this$1->this$0->debug->on()) {
						this->this$1->this$0->debug->log("Stopping read scheduler"_s);
					}
					this->readScheduler->stop();
					this->this$1->this$0->debugState("leaving read() loop with error: "_s);
					return$1 = true;
					goto $finally;
				}
				if (!SocketTube$InternalReadPublisher$InternalReadSubscription::$assertionsDisabled && !$nc(this->this$1->this$0->client)->isSelectorThread()) {
					$throwNew($AssertionError);
				}
				if (this->demand->tryDecrement()) {
					try {
						$var($List, bytes, this->this$1->this$0->readAvailable(current->bufferSource));
						if (bytes == $SocketTube::EOF) {
							if (!this->completed) {
								if ($nc(this->this$1->this$0->debug)->on()) {
									this->this$1->this$0->debug->log("got read EOF"_s);
								}
								if ($Log::channel()) {
									$Log::logChannel("EOF read from channel: {0}"_s, $$new($ObjectArray, {$(this->this$1->this$0->channelDescr())}));
								}
								this->completed = true;
								pauseReadEvent();
								current->signalCompletion();
								if (this->this$1->this$0->debug->on()) {
									this->this$1->this$0->debug->log("Stopping read scheduler"_s);
								}
								this->readScheduler->stop();
							}
							this->this$1->this$0->debugState("leaving read() loop after EOF: "_s);
							return$1 = true;
							goto $finally;
						} else if ($Utils::remaining(bytes) > 0) {
							if ($nc(this->this$1->this$0->debug)->on()) {
								this->this$1->this$0->debug->log($$str({"read bytes: "_s, $$str($Utils::remaining(bytes))}));
							}
							if (!SocketTube$InternalReadPublisher$InternalReadSubscription::$assertionsDisabled && ! !current->completed) {
								$throwNew($AssertionError);
							}
							$nc(subscriber)->onNext(bytes);
							resumeReadEvent();
							if (this->this$1->this$0->errorRef->get() != nullptr) {
								continue;
							}
							this->this$1->this$0->debugState("leaving read() loop after onNext: "_s);
							return$1 = true;
							goto $finally;
						} else {
							if ($nc(this->this$1->this$0->debug)->on()) {
								this->this$1->this$0->debug->log("no more bytes available"_s);
							}
							this->demand->increase(1);
							resumeReadEvent();
							if (this->this$1->this$0->errorRef->get() != nullptr) {
								continue;
							}
							this->this$1->this$0->debugState("leaving read() loop with no bytes"_s);
							return$1 = true;
							goto $finally;
						}
					} catch ($Throwable& x) {
						signalError(x);
						continue;
					}
				} else {
					if ($nc(this->this$1->this$0->debug)->on()) {
						this->this$1->this$0->debug->log("no more demand for reading"_s);
					}
					if (this->this$1->this$0->errorRef->get() != nullptr) {
						continue;
					}
					this->this$1->this$0->debugState("leaving read() loop with no demand"_s);
					break;
				}
			}
		} catch ($Throwable& t) {
			if ($nc($nc(this->this$1->this$0)->debug)->on()) {
				this->this$1->this$0->debug->log("Unexpected exception in read loop"_s, t);
			}
			signalError(t);
		}
	} catch ($Throwable& var$2) {
		$assign(var$0, var$2);
	} $finally: {
		if (this->readScheduler->isStopped()) {
			if ($nc($nc(this->this$1->this$0)->debug)->on()) {
				this->this$1->this$0->debug->log("Read scheduler stopped"_s);
			}
			if ($Log::channel()) {
				$Log::logChannel("Stopped reading from channel {0}"_s, $$new($ObjectArray, {$(this->this$1->this$0->channelDescr())}));
			}
		}
		handlePending();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return;
	}
}

bool SocketTube$InternalReadPublisher$InternalReadSubscription::handlePending() {
	$useLocalObjectStack();
	$var($SocketTube$InternalReadPublisher$ReadSubscription, pending, $cast($SocketTube$InternalReadPublisher$ReadSubscription, $nc(this->this$1->pendingSubscription)->getAndSet(nullptr)));
	if (pending == nullptr) {
		return false;
	}
	if ($nc($nc(this->this$1->this$0)->debug)->on()) {
		this->this$1->this$0->debug->log("handling pending subscription for %s"_s, $$new($ObjectArray, {$nc(pending)->subscriber}));
	}
	$var($SocketTube$InternalReadPublisher$ReadSubscription, current, this->this$1->subscription);
	if (current != nullptr && current != pending && !this->completed) {
		$nc(current->subscriber)->dropSubscription();
	}
	if (this->this$1->this$0->debug->on()) {
		this->this$1->this$0->debug->log("read demand reset to 0"_s);
	}
	$nc($nc(this->this$1->subscriptionImpl)->demand)->reset();
	$nc($nc(pending)->errorRef)->compareAndSet(nullptr, $$cast($Throwable, $nc(this->this$1->this$0->errorRef)->get()));
	if (!this->readScheduler->isStopped()) {
		$set(this->this$1, subscription, pending);
	} else if (this->this$1->this$0->debug->on()) {
		this->this$1->this$0->debug->log("socket tube is already stopped"_s);
	}
	if (this->this$1->this$0->debug->on()) {
		this->this$1->this$0->debug->log("calling onSubscribe"_s);
	}
	pending->signalOnSubscribe();
	if (this->completed) {
		pending->errorRef->compareAndSet(nullptr, $$cast($Throwable, this->this$1->this$0->errorRef->get()));
		pending->signalCompletion();
	}
	return true;
}

void SocketTube$InternalReadPublisher$InternalReadSubscription::clinit$($Class* clazz) {
	$load($SocketTube);
	SocketTube$InternalReadPublisher$InternalReadSubscription::$assertionsDisabled = !$SocketTube::class$->desiredAssertionStatus();
}

SocketTube$InternalReadPublisher$InternalReadSubscription::SocketTube$InternalReadPublisher$InternalReadSubscription() {
}

$Class* SocketTube$InternalReadPublisher$InternalReadSubscription::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$read")) {
			return SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$read::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$signalError$1")) {
			return SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$signalError$1::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$handleSubscribeEvent$2")) {
			return SocketTube$InternalReadPublisher$InternalReadSubscription$$Lambda$handleSubscribeEvent$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljdk/internal/net/http/SocketTube$InternalReadPublisher;", nullptr, $FINAL | $SYNTHETIC, $field(SocketTube$InternalReadPublisher$InternalReadSubscription, this$1)},
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SocketTube$InternalReadPublisher$InternalReadSubscription, $assertionsDisabled)},
		{"demand", "Ljdk/internal/net/http/common/Demand;", nullptr, $PRIVATE | $FINAL, $field(SocketTube$InternalReadPublisher$InternalReadSubscription, demand)},
		{"readScheduler", "Ljdk/internal/net/http/common/SequentialScheduler;", nullptr, $FINAL, $field(SocketTube$InternalReadPublisher$InternalReadSubscription, readScheduler)},
		{"completed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(SocketTube$InternalReadPublisher$InternalReadSubscription, completed)},
		{"readEvent", "Ljdk/internal/net/http/SocketTube$InternalReadPublisher$ReadEvent;", nullptr, $PRIVATE | $FINAL, $field(SocketTube$InternalReadPublisher$InternalReadSubscription, readEvent)},
		{"subscribeEvent", "Ljdk/internal/net/http/AsyncEvent;", nullptr, $PRIVATE | $FINAL, $field(SocketTube$InternalReadPublisher$InternalReadSubscription, subscribeEvent)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/SocketTube$InternalReadPublisher;)V", nullptr, 0, $method(SocketTube$InternalReadPublisher$InternalReadSubscription, init$, void, $SocketTube$InternalReadPublisher*)},
		{"cancel", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(SocketTube$InternalReadPublisher$InternalReadSubscription, cancel, void)},
		{"handleError", "()V", nullptr, $FINAL, $method(SocketTube$InternalReadPublisher$InternalReadSubscription, handleError, void)},
		{"handlePending", "()Z", nullptr, 0, $method(SocketTube$InternalReadPublisher$InternalReadSubscription, handlePending, bool)},
		{"handleSubscribeEvent", "()V", nullptr, $FINAL, $method(SocketTube$InternalReadPublisher$InternalReadSubscription, handleSubscribeEvent, void)},
		{"pauseReadEvent", "()V", nullptr, $PRIVATE, $method(SocketTube$InternalReadPublisher$InternalReadSubscription, pauseReadEvent, void)},
		{"read", "()V", nullptr, $FINAL, $method(SocketTube$InternalReadPublisher$InternalReadSubscription, read, void)},
		{"request", "(J)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(SocketTube$InternalReadPublisher$InternalReadSubscription, request, void, int64_t)},
		{"resumeReadEvent", "()V", nullptr, $PRIVATE, $method(SocketTube$InternalReadPublisher$InternalReadSubscription, resumeReadEvent, void)},
		{"signalError", "(Ljava/lang/Throwable;)V", nullptr, $FINAL, $method(SocketTube$InternalReadPublisher$InternalReadSubscription, signalError, void, $Throwable*)},
		{"signalReadable", "()V", nullptr, $FINAL, $method(SocketTube$InternalReadPublisher$InternalReadSubscription, signalReadable, void)},
		{"signalSubscribe", "()V", nullptr, $FINAL, $method(SocketTube$InternalReadPublisher$InternalReadSubscription, signalSubscribe, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.SocketTube$InternalReadPublisher", "jdk.internal.net.http.SocketTube", "InternalReadPublisher", $PRIVATE | $FINAL},
		{"jdk.internal.net.http.SocketTube$InternalReadPublisher$InternalReadSubscription", "jdk.internal.net.http.SocketTube$InternalReadPublisher", "InternalReadSubscription", $FINAL},
		{"java.util.concurrent.Flow$Subscription", "java.util.concurrent.Flow", "Subscription", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.SocketTube$InternalReadPublisher$InternalReadSubscription",
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
		"jdk.internal.net.http.SocketTube"
	};
	$loadClass(SocketTube$InternalReadPublisher$InternalReadSubscription, name, initialize, &classInfo$$, SocketTube$InternalReadPublisher$InternalReadSubscription::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SocketTube$InternalReadPublisher$InternalReadSubscription);
	});
	return class$;
}

$Class* SocketTube$InternalReadPublisher$InternalReadSubscription::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk