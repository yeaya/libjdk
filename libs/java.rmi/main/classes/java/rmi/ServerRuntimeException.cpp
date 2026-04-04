#include <java/rmi/ServerRuntimeException.h>
#include <java/rmi/RemoteException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RemoteException = ::java::rmi::RemoteException;

namespace java {
	namespace rmi {

void ServerRuntimeException::init$($String* s, $Exception* ex) {
	$RemoteException::init$(s, ex);
}

ServerRuntimeException::ServerRuntimeException() {
}

ServerRuntimeException::ServerRuntimeException(const ServerRuntimeException& e) : $RemoteException(e) {
}

void ServerRuntimeException::throw$() {
	throw *this;
}

$Class* ServerRuntimeException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ServerRuntimeException, serialVersionUID)},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(ServerRuntimeException, init$, void, $String*, $Exception*), nullptr, nullptr, init$methodAnnotations$$},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.rmi.ServerRuntimeException",
		"java.rmi.RemoteException",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(ServerRuntimeException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServerRuntimeException);
	});
	return class$;
}

$Class* ServerRuntimeException::class$ = nullptr;

	} // rmi
} // java