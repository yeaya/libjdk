#include <jdk/internal/net/http/common/SSLFlowDelegate$Monitorable.h>
#include <jdk/internal/net/http/common/SSLFlowDelegate.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace common {

$Class* SSLFlowDelegate$Monitorable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getInfo", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLFlowDelegate$Monitorable, getInfo, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.common.SSLFlowDelegate$Monitorable", "jdk.internal.net.http.common.SSLFlowDelegate", "Monitorable", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.net.http.common.SSLFlowDelegate$Monitorable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.common.SSLFlowDelegate"
	};
	$loadClass(SSLFlowDelegate$Monitorable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLFlowDelegate$Monitorable);
	});
	return class$;
}

$Class* SSLFlowDelegate$Monitorable::class$ = nullptr;

				} // common
			} // http
		} // net
	} // internal
} // jdk