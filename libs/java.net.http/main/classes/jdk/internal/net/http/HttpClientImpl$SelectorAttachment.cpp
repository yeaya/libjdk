#include <jdk/internal/net/http/HttpClientImpl$SelectorAttachment.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/channels/CancelledKeyException.h>
#include <java/nio/channels/ClosedChannelException.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/Selector.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/net/http/AsyncEvent.h>
#include <jdk/internal/net/http/HttpClientImpl.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jdk/internal/net/http/common/Utils.h>
#include <jcpp.h>

#undef DEBUG

using $AsyncEventArray = $Array<::jdk::internal::net::http::AsyncEvent>;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $CancelledKeyException = ::java::nio::channels::CancelledKeyException;
using $ClosedChannelException = ::java::nio::channels::ClosedChannelException;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $Stream = ::java::util::stream::Stream;
using $AsyncEvent = ::jdk::internal::net::http::AsyncEvent;
using $HttpClientImpl = ::jdk::internal::net::http::HttpClientImpl;
using $Logger = ::jdk::internal::net::http::common::Logger;
using $Utils = ::jdk::internal::net::http::common::Utils;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

class HttpClientImpl$SelectorAttachment$$Lambda$toString : public $Supplier {
	$class(HttpClientImpl$SelectorAttachment$$Lambda$toString, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		return $of($nc(inst$)->toString());
	}
	$String* inst$ = nullptr;
};
$Class* HttpClientImpl$SelectorAttachment$$Lambda$toString::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(HttpClientImpl$SelectorAttachment$$Lambda$toString, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(HttpClientImpl$SelectorAttachment$$Lambda$toString, init$, void, $String*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HttpClientImpl$SelectorAttachment$$Lambda$toString, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.HttpClientImpl$SelectorAttachment$$Lambda$toString",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HttpClientImpl$SelectorAttachment$$Lambda$toString, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpClientImpl$SelectorAttachment$$Lambda$toString);
	});
	return class$;
}
$Class* HttpClientImpl$SelectorAttachment$$Lambda$toString::class$ = nullptr;

class HttpClientImpl$SelectorAttachment$$Lambda$lambda$events$0$1 : public $Predicate {
	$class(HttpClientImpl$SelectorAttachment$$Lambda$lambda$events$0$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$(int32_t interestOps) {
		this->interestOps = interestOps;
	}
	virtual bool test(Object$* ev) override {
		return HttpClientImpl$SelectorAttachment::lambda$events$0(interestOps, $cast($AsyncEvent, ev));
	}
	int32_t interestOps = 0;
};
$Class* HttpClientImpl$SelectorAttachment$$Lambda$lambda$events$0$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"interestOps", "I", nullptr, $PUBLIC, $field(HttpClientImpl$SelectorAttachment$$Lambda$lambda$events$0$1, interestOps)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(HttpClientImpl$SelectorAttachment$$Lambda$lambda$events$0$1, init$, void, int32_t)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(HttpClientImpl$SelectorAttachment$$Lambda$lambda$events$0$1, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.HttpClientImpl$SelectorAttachment$$Lambda$lambda$events$0$1",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HttpClientImpl$SelectorAttachment$$Lambda$lambda$events$0$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpClientImpl$SelectorAttachment$$Lambda$lambda$events$0$1);
	});
	return class$;
}
$Class* HttpClientImpl$SelectorAttachment$$Lambda$lambda$events$0$1::class$ = nullptr;

bool HttpClientImpl$SelectorAttachment::$assertionsDisabled = false;
$Logger* HttpClientImpl$SelectorAttachment::debug = nullptr;

void HttpClientImpl$SelectorAttachment::init$($SelectableChannel* chan, $Selector* selector) {
	$set(this, pending, $new($HashSet));
	$set(this, chan, chan);
	$set(this, selector, selector);
}

void HttpClientImpl$SelectorAttachment::register$($AsyncEvent* e) {
	$useLocalObjectStack();
	int32_t newOps = $nc(e)->interestOps();
	bool reRegister = (this->interestOps & newOps) != newOps;
	this->interestOps |= newOps;
	$nc(this->pending)->add(e);
	if ($nc(HttpClientImpl$SelectorAttachment::debug)->on()) {
		HttpClientImpl$SelectorAttachment::debug->log("Registering %s for %d (%s)"_s, $$new($ObjectArray, {
			e,
			$($Integer::valueOf(newOps)),
			$($Boolean::valueOf(reRegister))
		}));
	}
	if (reRegister) {
		try {
			$nc(this->chan)->register$(this->selector, this->interestOps, this);
		} catch ($Throwable& x) {
			abortPending(x);
		}
	} else if (!$nc(this->chan)->isOpen()) {
		abortPending($$new($ClosedChannelException));
	}
}

$Stream* HttpClientImpl$SelectorAttachment::events(int32_t interestOps) {
	$useLocalObjectStack();
	return $$nc($nc(this->pending)->stream())->filter($$new(HttpClientImpl$SelectorAttachment$$Lambda$lambda$events$0$1, interestOps));
}

void HttpClientImpl$SelectorAttachment::resetInterestOps(int32_t interestOps) {
	$useLocalObjectStack();
	int32_t newOps = 0;
	$var($Iterator, itr, $nc(this->pending)->iterator());
	while ($nc(itr)->hasNext()) {
		$var($AsyncEvent, event, $cast($AsyncEvent, itr->next()));
		int32_t evops = $nc(event)->interestOps();
		if (event->repeating()) {
			newOps |= evops;
			continue;
		}
		if ((evops & interestOps) != 0) {
			itr->remove();
		} else {
			newOps |= evops;
		}
	}
	this->interestOps = newOps;
	$var($SelectionKey, key, $nc(this->chan)->keyFor(this->selector));
	if (newOps == 0 && key != nullptr && this->pending->isEmpty()) {
		key->cancel();
	} else {
		try {
			if (key == nullptr || !key->isValid()) {
				$throwNew($CancelledKeyException);
			}
			$nc(key)->interestOps(newOps);
			if (!this->chan->isOpen()) {
				abortPending($$new($ClosedChannelException));
				return;
			}
			if (!HttpClientImpl$SelectorAttachment::$assertionsDisabled && !(key->interestOps() == newOps)) {
				$throwNew($AssertionError);
			}
		} catch ($CancelledKeyException& x) {
			if ($nc(HttpClientImpl$SelectorAttachment::debug)->on()) {
				HttpClientImpl$SelectorAttachment::debug->log($$str({"key cancelled for "_s, this->chan}));
			}
			abortPending(x);
		}
	}
}

void HttpClientImpl$SelectorAttachment::abortPending($Throwable* x) {
	$useLocalObjectStack();
	if (!$nc(this->pending)->isEmpty()) {
		$var($AsyncEventArray, evts, $cast($AsyncEventArray, this->pending->toArray($$new($AsyncEventArray, 0))));
		this->pending->clear();
		$var($IOException, io, $Utils::getIOException(x));
		{
			$var($AsyncEventArray, arr$, evts);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				$var($AsyncEvent, event, arr$->get(i$));
				{
					$nc(event)->abort(io);
				}
			}
		}
	}
}

bool HttpClientImpl$SelectorAttachment::lambda$events$0(int32_t interestOps, $AsyncEvent* ev) {
	$init(HttpClientImpl$SelectorAttachment);
	return ($nc(ev)->interestOps() & interestOps) != 0;
}

void HttpClientImpl$SelectorAttachment::clinit$($Class* clazz) {
	$load($HttpClientImpl);
	HttpClientImpl$SelectorAttachment::$assertionsDisabled = !$HttpClientImpl::class$->desiredAssertionStatus();
	$init($Utils);
	$assignStatic(HttpClientImpl$SelectorAttachment::debug, $Utils::getDebugLogger($$new(HttpClientImpl$SelectorAttachment$$Lambda$toString, "SelectorAttachment"_s), $Utils::DEBUG));
}

HttpClientImpl$SelectorAttachment::HttpClientImpl$SelectorAttachment() {
}

$Class* HttpClientImpl$SelectorAttachment::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.HttpClientImpl$SelectorAttachment$$Lambda$toString")) {
			return HttpClientImpl$SelectorAttachment$$Lambda$toString::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.HttpClientImpl$SelectorAttachment$$Lambda$lambda$events$0$1")) {
			return HttpClientImpl$SelectorAttachment$$Lambda$lambda$events$0$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(HttpClientImpl$SelectorAttachment, $assertionsDisabled)},
		{"chan", "Ljava/nio/channels/SelectableChannel;", nullptr, $PRIVATE | $FINAL, $field(HttpClientImpl$SelectorAttachment, chan)},
		{"selector", "Ljava/nio/channels/Selector;", nullptr, $PRIVATE | $FINAL, $field(HttpClientImpl$SelectorAttachment, selector)},
		{"pending", "Ljava/util/Set;", "Ljava/util/Set<Ljdk/internal/net/http/AsyncEvent;>;", $PRIVATE | $FINAL, $field(HttpClientImpl$SelectorAttachment, pending)},
		{"debug", "Ljdk/internal/net/http/common/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HttpClientImpl$SelectorAttachment, debug)},
		{"interestOps", "I", nullptr, $PRIVATE, $field(HttpClientImpl$SelectorAttachment, interestOps)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/channels/SelectableChannel;Ljava/nio/channels/Selector;)V", nullptr, 0, $method(HttpClientImpl$SelectorAttachment, init$, void, $SelectableChannel*, $Selector*)},
		{"abortPending", "(Ljava/lang/Throwable;)V", nullptr, 0, $virtualMethod(HttpClientImpl$SelectorAttachment, abortPending, void, $Throwable*)},
		{"events", "(I)Ljava/util/stream/Stream;", "(I)Ljava/util/stream/Stream<Ljdk/internal/net/http/AsyncEvent;>;", 0, $virtualMethod(HttpClientImpl$SelectorAttachment, events, $Stream*, int32_t)},
		{"lambda$events$0", "(ILjdk/internal/net/http/AsyncEvent;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpClientImpl$SelectorAttachment, lambda$events$0, bool, int32_t, $AsyncEvent*)},
		{"register", "(Ljdk/internal/net/http/AsyncEvent;)V", nullptr, 0, $virtualMethod(HttpClientImpl$SelectorAttachment, register$, void, $AsyncEvent*), "java.nio.channels.ClosedChannelException"},
		{"resetInterestOps", "(I)V", nullptr, 0, $virtualMethod(HttpClientImpl$SelectorAttachment, resetInterestOps, void, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.HttpClientImpl$SelectorAttachment", "jdk.internal.net.http.HttpClientImpl", "SelectorAttachment", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.HttpClientImpl$SelectorAttachment",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.HttpClientImpl"
	};
	$loadClass(HttpClientImpl$SelectorAttachment, name, initialize, &classInfo$$, HttpClientImpl$SelectorAttachment::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(HttpClientImpl$SelectorAttachment);
	});
	return class$;
}

$Class* HttpClientImpl$SelectorAttachment::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk