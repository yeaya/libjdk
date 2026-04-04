#include <java/rmi/server/Skeleton.h>
#include <java/rmi/Remote.h>
#include <java/rmi/server/Operation.h>
#include <java/rmi/server/RemoteCall.h>
#include <jcpp.h>

using $OperationArray = $Array<::java::rmi::server::Operation>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $Remote = ::java::rmi::Remote;
using $RemoteCall = ::java::rmi::server::RemoteCall;

namespace java {
	namespace rmi {
		namespace server {

$Class* Skeleton::load$($String* name, bool initialize) {
	$CompoundAttribute dispatchmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute getOperationsmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"dispatch", "(Ljava/rmi/Remote;Ljava/rmi/server/RemoteCall;IJ)V", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(Skeleton, dispatch, void, $Remote*, $RemoteCall*, int32_t, int64_t), "java.lang.Exception", nullptr, dispatchmethodAnnotations$$},
		{"getOperations", "()[Ljava/rmi/server/Operation;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(Skeleton, getOperations, $OperationArray*), nullptr, nullptr, getOperationsmethodAnnotations$$},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.rmi.server.Skeleton",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(Skeleton, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Skeleton);
	});
	return class$;
}

$Class* Skeleton::class$ = nullptr;

		} // server
	} // rmi
} // java