#include <jdk/internal/net/http/websocket/TestSupport$F1.h>
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

$Class* TestSupport$F1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TA;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TestSupport$F1, apply, $Object*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.websocket.TestSupport$F1", "jdk.internal.net.http.websocket.TestSupport", "F1", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.net.http.websocket.TestSupport$F1",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<A:Ljava/lang/Object;R:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"jdk.internal.net.http.websocket.TestSupport"
	};
	$loadClass(TestSupport$F1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestSupport$F1);
	});
	return class$;
}

$Class* TestSupport$F1::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk