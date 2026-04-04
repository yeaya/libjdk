#include <jdk/internal/net/http/websocket/TestSupport$F.h>
#include <jdk/internal/net/http/websocket/TestSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {

$Class* TestSupport$F::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"apply", "([Ljava/lang/Object;)Ljava/lang/Object;", "([Ljava/lang/Object;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TestSupport$F, apply, $Object*, $ObjectArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.websocket.TestSupport$F", "jdk.internal.net.http.websocket.TestSupport", "F", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.net.http.websocket.TestSupport$F",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"jdk.internal.net.http.websocket.TestSupport"
	};
	$loadClass(TestSupport$F, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestSupport$F);
	});
	return class$;
}

$Class* TestSupport$F::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk