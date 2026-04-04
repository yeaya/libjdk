#include <jdk/internal/net/http/WindowController.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/InternalError.h>
#include <java/lang/Iterable.h>
#include <java/lang/Math.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Supplier.h>
#include <jdk/internal/net/http/Stream.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jdk/internal/net/http/common/Utils.h>
#include <jcpp.h>

#undef DEBUG
#undef DEFAULT_INITIAL_WINDOW_SIZE

using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $Consumer = ::java::util::function::Consumer;
using $Supplier = ::java::util::function::Supplier;
using $Stream = ::jdk::internal::net::http::Stream;
using $Logger = ::jdk::internal::net::http::common::Logger;
using $Utils = ::jdk::internal::net::http::common::Utils;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

class WindowController$$Lambda$toString : public $Supplier {
	$class(WindowController$$Lambda$toString, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->toString());
	}
	$String* inst$ = nullptr;
};
$Class* WindowController$$Lambda$toString::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(WindowController$$Lambda$toString, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(WindowController$$Lambda$toString, init$, void, $String*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WindowController$$Lambda$toString, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.WindowController$$Lambda$toString",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WindowController$$Lambda$toString, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowController$$Lambda$toString);
	});
	return class$;
}
$Class* WindowController$$Lambda$toString::class$ = nullptr;

class WindowController$$Lambda$signalWindowUpdate$1 : public $Consumer {
	$class(WindowController$$Lambda$signalWindowUpdate$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$) override {
		$sure($Stream, inst$)->signalWindowUpdate();
	}
};
$Class* WindowController$$Lambda$signalWindowUpdate$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowController$$Lambda$signalWindowUpdate$1, init$, void)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(WindowController$$Lambda$signalWindowUpdate$1, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.WindowController$$Lambda$signalWindowUpdate$1",
		"java.lang.Object",
		"java.util.function.Consumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowController$$Lambda$signalWindowUpdate$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowController$$Lambda$signalWindowUpdate$1);
	});
	return class$;
}
$Class* WindowController$$Lambda$signalWindowUpdate$1::class$ = nullptr;

bool WindowController::$assertionsDisabled = false;
$Logger* WindowController::debug = nullptr;

void WindowController::init$() {
	$set(this, streams, $new($HashMap));
	$set(this, pending, $new($LinkedHashMap));
	$set(this, controllerLock, $new($ReentrantLock));
	this->connectionWindowSize$ = WindowController::DEFAULT_INITIAL_WINDOW_SIZE;
}

void WindowController::registerStream(int32_t streamid, int32_t initialStreamWindowSize) {
	$useLocalObjectStack();
	this->controllerLock->lock();
	$var($Throwable, var$0, nullptr);
	try {
		$var($Object, var$1, $Integer::valueOf(streamid));
		$var($Integer, old, $cast($Integer, this->streams->put(var$1, $($Integer::valueOf(initialStreamWindowSize)))));
		if (old != nullptr) {
			$throwNew($InternalError, $$str({"Unexpected entry ["_s, old, "] for streamid: "_s, $$str(streamid)}));
		}
	} catch ($Throwable& var$2) {
		$assign(var$0, var$2);
	} /*finally*/ {
		this->controllerLock->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void WindowController::removeStream(int32_t streamid) {
	$useLocalObjectStack();
	this->controllerLock->lock();
	$var($Throwable, var$0, nullptr);
	try {
		$var($Integer, old, $cast($Integer, this->streams->remove($($Integer::valueOf(streamid)))));
		bool isClientStream = (streamid & 1) == 1;
		if (old == nullptr && isClientStream) {
			$throwNew($InternalError, $$str({"Expected entry for streamid: "_s, $$str(streamid)}));
		} else if (old != nullptr && !isClientStream) {
			$throwNew($InternalError, $$str({"Unexpected entry for streamid: "_s, $$str(streamid)}));
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		this->controllerLock->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

int32_t WindowController::tryAcquire(int32_t requestAmount, int32_t streamid, $Stream* stream) {
	$useLocalObjectStack();
	this->controllerLock->lock();
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		$var($Integer, streamSize, $cast($Integer, this->streams->get($($Integer::valueOf(streamid)))));
		if (streamSize == nullptr) {
			$throwNew($InternalError, $$str({"Expected entry for streamid: "_s, $$str(streamid)}));
		}
		int32_t x = $Math::min(requestAmount, $Math::min($nc(streamSize)->intValue(), this->connectionWindowSize$));
		if (x <= 0) {
			if ($nc(WindowController::debug)->on()) {
				WindowController::debug->log("Stream %d requesting %d but only %d available (stream: %d, connection: %d)"_s, $$new($ObjectArray, {
					$($Integer::valueOf(streamid)),
					$($Integer::valueOf(requestAmount)),
					$($Integer::valueOf($Math::min(streamSize->intValue(), this->connectionWindowSize$))),
					streamSize,
					$($Integer::valueOf(this->connectionWindowSize$))
				}));
			}
			$var($Object, var$3, $Integer::valueOf(streamid));
			this->pending->put(var$3, $($Map::entry(stream, $($Integer::valueOf(requestAmount)))));
			var$2 = x;
			return$1 = true;
			goto $finally;
		}
		this->pending->remove($($Integer::valueOf(streamid)));
		$assign(streamSize, $Integer::valueOf((streamSize->intValue() - x)));
		this->streams->put($($Integer::valueOf(streamid)), streamSize);
		this->connectionWindowSize$ -= x;
		if ($nc(WindowController::debug)->on()) {
			WindowController::debug->log("Stream %d amount allocated %d, now %d available (stream: %d, connection: %d)"_s, $$new($ObjectArray, {
				$($Integer::valueOf(streamid)),
				$($Integer::valueOf(x)),
				$($Integer::valueOf($Math::min(streamSize->intValue(), this->connectionWindowSize$))),
				streamSize,
				$($Integer::valueOf(this->connectionWindowSize$))
			}));
		}
		var$2 = x;
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$4) {
		$assign(var$0, var$4);
	} $finally: {
		this->controllerLock->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

bool WindowController::increaseConnectionWindow(int32_t amount) {
	$useLocalObjectStack();
	$var($List, candidates, nullptr);
	this->controllerLock->lock();
	$var($Throwable, var$0, nullptr);
	bool var$2 = false;
	bool return$1 = false;
	try {
		int32_t size = this->connectionWindowSize$;
		size += amount;
		if (size < 0) {
			var$2 = false;
			return$1 = true;
			goto $finally;
		}
		this->connectionWindowSize$ = size;
		if ($nc(WindowController::debug)->on()) {
			WindowController::debug->log("Connection window size is now %d (amount added %d)"_s, $$new($ObjectArray, {
				$($Integer::valueOf(size)),
				$($Integer::valueOf(amount))
			}));
		}
		$var($Iterator, iter, $$nc(this->pending->entrySet())->iterator());
		while ($nc(iter)->hasNext() && size > 0) {
			$var($Map$Entry, item, $cast($Map$Entry, iter->next()));
			$var($Integer, streamSize, $cast($Integer, this->streams->get($($nc(item)->getKey()))));
			if (streamSize == nullptr) {
				iter->remove();
			} else {
				$var($Map$Entry, e, $cast($Map$Entry, item->getValue()));
				int32_t requestedAmount = $$sure($Integer, $nc(e)->getValue())->intValue();
				int32_t minAmount = 1;
				if (size >= minAmount && streamSize->intValue() >= minAmount) {
					size -= $Math::min(streamSize->intValue(), requestedAmount);
					iter->remove();
					if (candidates == nullptr) {
						$assign(candidates, $new($ArrayList));
					}
					$nc(candidates)->add($$cast($Stream, e->getKey()));
				}
			}
		}
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		this->controllerLock->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	if (candidates != nullptr) {
		candidates->forEach($$new(WindowController$$Lambda$signalWindowUpdate$1));
	}
	return true;
}

bool WindowController::increaseStreamWindow(int32_t amount, int32_t streamid) {
	$useLocalObjectStack();
	$var($Stream, s, nullptr);
	this->controllerLock->lock();
	$var($Throwable, var$0, nullptr);
	bool var$2 = false;
	bool return$1 = false;
	try {
		$var($Integer, size, $cast($Integer, this->streams->get($($Integer::valueOf(streamid)))));
		if (size == nullptr) {
			if ($nc(WindowController::debug)->on()) {
				WindowController::debug->log("WARNING: No entry found for streamid: %s. May be cancelled?"_s, $$new($ObjectArray, {$($Integer::valueOf(streamid))}));
			}
		} else {
			int32_t prev = size->intValue();
			$assign(size, $Integer::valueOf(prev + amount));
			if (size->intValue() < prev) {
				var$2 = false;
				return$1 = true;
				goto $finally;
			}
			this->streams->put($($Integer::valueOf(streamid)), size);
			if ($nc(WindowController::debug)->on()) {
				WindowController::debug->log("Stream %s window size is now %s (amount added %d)"_s, $$new($ObjectArray, {
					$($Integer::valueOf(streamid)),
					size,
					$($Integer::valueOf(amount))
				}));
			}
			$var($Map$Entry, p, $cast($Map$Entry, this->pending->get($($Integer::valueOf(streamid)))));
			if (p != nullptr) {
				int32_t minAmount = 1;
				if (size->intValue() >= minAmount && this->connectionWindowSize$ >= minAmount) {
					this->pending->remove($($Integer::valueOf(streamid)));
					$assign(s, $cast($Stream, p->getKey()));
				}
			}
		}
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		this->controllerLock->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	if (s != nullptr) {
		s->signalWindowUpdate();
	}
	return true;
}

void WindowController::adjustActiveStreams(int32_t adjustAmount) {
	$useLocalObjectStack();
	if (!WindowController::$assertionsDisabled && !(adjustAmount != 0)) {
		$throwNew($AssertionError);
	}
	this->controllerLock->lock();
	$var($Throwable, var$0, nullptr);
	try {
		$var($Iterator, i$, $$nc(this->streams->entrySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				int32_t streamid = $$sure($Integer, $nc(entry)->getKey())->intValue();
				if (streamid != 0 && (streamid % 2) != 0) {
					$var($Integer, size, $cast($Integer, entry->getValue()));
					$assign(size, $Integer::valueOf(($nc(size)->intValue() + adjustAmount)));
					this->streams->put($($Integer::valueOf(streamid)), size);
					if ($nc(WindowController::debug)->on()) {
						WindowController::debug->log("Stream %s window size is now %s (adjusting amount %d)"_s, $$new($ObjectArray, {
							$($Integer::valueOf(streamid)),
							size,
							$($Integer::valueOf(adjustAmount))
						}));
					}
				}
			}
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		this->controllerLock->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

int32_t WindowController::connectionWindowSize() {
	this->controllerLock->lock();
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		var$2 = this->connectionWindowSize$;
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		this->controllerLock->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int32_t WindowController::streamWindowSize(int32_t streamid) {
	$useLocalObjectStack();
	this->controllerLock->lock();
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		$var($Integer, size, $cast($Integer, this->streams->get($($Integer::valueOf(streamid)))));
		if (size == nullptr) {
			$throwNew($InternalError, $$str({"Expected entry for streamid: "_s, $$str(streamid)}));
		}
		var$2 = $nc(size)->intValue();
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		this->controllerLock->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void WindowController::clinit$($Class* clazz) {
	WindowController::$assertionsDisabled = !WindowController::class$->desiredAssertionStatus();
	$init($Utils);
	$assignStatic(WindowController::debug, $Utils::getDebugLogger($$new(WindowController$$Lambda$toString, "WindowController"_s), $Utils::DEBUG));
}

WindowController::WindowController() {
}

$Class* WindowController::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.WindowController$$Lambda$toString")) {
			return WindowController$$Lambda$toString::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.WindowController$$Lambda$signalWindowUpdate$1")) {
			return WindowController$$Lambda$signalWindowUpdate$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WindowController, $assertionsDisabled)},
		{"debug", "Ljdk/internal/net/http/common/Logger;", nullptr, $STATIC | $FINAL, $staticField(WindowController, debug)},
		{"DEFAULT_INITIAL_WINDOW_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowController, DEFAULT_INITIAL_WINDOW_SIZE)},
		{"connectionWindowSize", "I", nullptr, $PRIVATE, $field(WindowController, connectionWindowSize$)},
		{"streams", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Ljava/lang/Integer;>;", $PRIVATE | $FINAL, $field(WindowController, streams)},
		{"pending", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Ljava/util/Map$Entry<Ljdk/internal/net/http/Stream<*>;Ljava/lang/Integer;>;>;", $PRIVATE | $FINAL, $field(WindowController, pending)},
		{"controllerLock", "Ljava/util/concurrent/locks/ReentrantLock;", nullptr, $PRIVATE | $FINAL, $field(WindowController, controllerLock)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(WindowController, init$, void)},
		{"adjustActiveStreams", "(I)V", nullptr, 0, $method(WindowController, adjustActiveStreams, void, int32_t)},
		{"connectionWindowSize", "()I", nullptr, 0, $method(WindowController, connectionWindowSize, int32_t)},
		{"increaseConnectionWindow", "(I)Z", nullptr, 0, $method(WindowController, increaseConnectionWindow, bool, int32_t)},
		{"increaseStreamWindow", "(II)Z", nullptr, 0, $method(WindowController, increaseStreamWindow, bool, int32_t, int32_t)},
		{"registerStream", "(II)V", nullptr, 0, $method(WindowController, registerStream, void, int32_t, int32_t)},
		{"removeStream", "(I)V", nullptr, 0, $method(WindowController, removeStream, void, int32_t)},
		{"streamWindowSize", "(I)I", nullptr, 0, $method(WindowController, streamWindowSize, int32_t, int32_t)},
		{"tryAcquire", "(IILjdk/internal/net/http/Stream;)I", "(IILjdk/internal/net/http/Stream<*>;)I", 0, $method(WindowController, tryAcquire, int32_t, int32_t, int32_t, $Stream*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.WindowController",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WindowController, name, initialize, &classInfo$$, WindowController::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(WindowController);
	});
	return class$;
}

$Class* WindowController::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk