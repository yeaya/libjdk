#include <javax/management/remote/rmi/RMIConnector$Util.h>
#include <javax/management/remote/rmi/RMIConnector.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace management {
		namespace remote {
			namespace rmi {

void RMIConnector$Util::init$() {
}

$Object* RMIConnector$Util::cast(Object$* x) {
	return $of(x);
}

RMIConnector$Util::RMIConnector$Util() {
}

$Class* RMIConnector$Util::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(RMIConnector$Util, init$, void)},
		{"cast", "(Ljava/lang/Object;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Object;)TT;", $PUBLIC | $STATIC, $staticMethod(RMIConnector$Util, cast, $Object*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.remote.rmi.RMIConnector$Util", "javax.management.remote.rmi.RMIConnector", "Util", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.management.remote.rmi.RMIConnector$Util",
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
		"javax.management.remote.rmi.RMIConnector"
	};
	$loadClass(RMIConnector$Util, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RMIConnector$Util);
	});
	return class$;
}

$Class* RMIConnector$Util::class$ = nullptr;

			} // rmi
		} // remote
	} // management
} // javax