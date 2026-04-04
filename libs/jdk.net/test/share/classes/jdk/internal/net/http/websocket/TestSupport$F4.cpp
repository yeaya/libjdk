#include <jdk/internal/net/http/websocket/TestSupport$F4.h>
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

$Class* TestSupport$F4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TA;TB;TC;TD;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TestSupport$F4, apply, $Object*, Object$*, Object$*, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.websocket.TestSupport$F4", "jdk.internal.net.http.websocket.TestSupport", "F4", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.net.http.websocket.TestSupport$F4",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<A:Ljava/lang/Object;B:Ljava/lang/Object;C:Ljava/lang/Object;D:Ljava/lang/Object;R:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"jdk.internal.net.http.websocket.TestSupport"
	};
	$loadClass(TestSupport$F4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestSupport$F4);
	});
	return class$;
}

$Class* TestSupport$F4::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk