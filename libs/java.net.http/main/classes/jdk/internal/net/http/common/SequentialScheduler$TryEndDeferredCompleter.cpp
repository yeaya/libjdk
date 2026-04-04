#include <jdk/internal/net/http/common/SequentialScheduler$TryEndDeferredCompleter.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InternalError.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jdk/internal/net/http/common/SequentialScheduler$DeferredCompleter.h>
#include <jdk/internal/net/http/common/SequentialScheduler$RestartableTask.h>
#include <jdk/internal/net/http/common/SequentialScheduler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $SequentialScheduler = ::jdk::internal::net::http::common::SequentialScheduler;
using $SequentialScheduler$DeferredCompleter = ::jdk::internal::net::http::common::SequentialScheduler$DeferredCompleter;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace common {

void SequentialScheduler$TryEndDeferredCompleter::init$($SequentialScheduler* this$0) {
	$set(this, this$0, this$0);
	$SequentialScheduler$DeferredCompleter::init$();
}

void SequentialScheduler$TryEndDeferredCompleter::complete() {
	$useLocalObjectStack();
	while (true) {
		int32_t s = 0;
		while (((s = $nc(this->this$0->state)->get()) & 1) != 0) {
			if (this->this$0->state->compareAndSet(s, s & ~1)) {
				return;
			}
		}
		while (true) {
			if ((s & 1) != 0) {
				$throwNew($InternalError, $($String::valueOf(s)));
			}
			if (s == 4) {
				if (this->this$0->state->compareAndSet(4, 16)) {
					return;
				}
			} else if (s == 2) {
				if (this->this$0->state->compareAndSet(2, 4 | 1)) {
					break;
				}
			} else if (s == 8) {
				return;
			} else if (s == 16) {
				$throwNew($IllegalStateException, "Duplicate completion"_s);
			} else {
				$throwNew($InternalError, $($String::valueOf(s)));
			}
			s = this->this$0->state->get();
		}
		$nc(this->this$0->restartableTask)->run(this->this$0->completer);
	}
}

SequentialScheduler$TryEndDeferredCompleter::SequentialScheduler$TryEndDeferredCompleter() {
}

$Class* SequentialScheduler$TryEndDeferredCompleter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/net/http/common/SequentialScheduler;", nullptr, $FINAL | $SYNTHETIC, $field(SequentialScheduler$TryEndDeferredCompleter, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/common/SequentialScheduler;)V", nullptr, $PRIVATE, $method(SequentialScheduler$TryEndDeferredCompleter, init$, void, $SequentialScheduler*)},
		{"complete", "()V", nullptr, $PUBLIC, $virtualMethod(SequentialScheduler$TryEndDeferredCompleter, complete, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.common.SequentialScheduler$TryEndDeferredCompleter", "jdk.internal.net.http.common.SequentialScheduler", "TryEndDeferredCompleter", $PRIVATE},
		{"jdk.internal.net.http.common.SequentialScheduler$DeferredCompleter", "jdk.internal.net.http.common.SequentialScheduler", "DeferredCompleter", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.common.SequentialScheduler$TryEndDeferredCompleter",
		"jdk.internal.net.http.common.SequentialScheduler$DeferredCompleter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.common.SequentialScheduler"
	};
	$loadClass(SequentialScheduler$TryEndDeferredCompleter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SequentialScheduler$TryEndDeferredCompleter);
	});
	return class$;
}

$Class* SequentialScheduler$TryEndDeferredCompleter::class$ = nullptr;

				} // common
			} // http
		} // net
	} // internal
} // jdk