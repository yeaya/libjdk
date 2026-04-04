#include <java/rmi/server/RMIFailureHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace rmi {
		namespace server {

$Class* RMIFailureHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"failure", "(Ljava/lang/Exception;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RMIFailureHandler, failure, bool, $Exception*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.rmi.server.RMIFailureHandler",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(RMIFailureHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RMIFailureHandler);
	});
	return class$;
}

$Class* RMIFailureHandler::class$ = nullptr;

		} // server
	} // rmi
} // java