#include <jdk/internal/net/http/common/SequentialScheduler$DeferredCompleter.h>
#include <jdk/internal/net/http/common/SequentialScheduler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace common {

void SequentialScheduler$DeferredCompleter::init$() {
}

SequentialScheduler$DeferredCompleter::SequentialScheduler$DeferredCompleter() {
}

$Class* SequentialScheduler$DeferredCompleter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SequentialScheduler$DeferredCompleter, init$, void)},
		{"complete", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SequentialScheduler$DeferredCompleter, complete, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.common.SequentialScheduler$DeferredCompleter", "jdk.internal.net.http.common.SequentialScheduler", "DeferredCompleter", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"jdk.internal.net.http.common.SequentialScheduler$DeferredCompleter",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.common.SequentialScheduler"
	};
	$loadClass(SequentialScheduler$DeferredCompleter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SequentialScheduler$DeferredCompleter);
	});
	return class$;
}

$Class* SequentialScheduler$DeferredCompleter::class$ = nullptr;

				} // common
			} // http
		} // net
	} // internal
} // jdk