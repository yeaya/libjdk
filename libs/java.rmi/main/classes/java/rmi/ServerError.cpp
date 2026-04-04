#include <java/rmi/ServerError.h>
#include <java/lang/Error.h>
#include <java/rmi/RemoteException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RemoteException = ::java::rmi::RemoteException;

namespace java {
	namespace rmi {

void ServerError::init$($String* s, $Error* err) {
	$RemoteException::init$(s, err);
}

ServerError::ServerError() {
}

ServerError::ServerError(const ServerError& e) : $RemoteException(e) {
}

void ServerError::throw$() {
	throw *this;
}

$Class* ServerError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ServerError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/Error;)V", nullptr, $PUBLIC, $method(ServerError, init$, void, $String*, $Error*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.rmi.ServerError",
		"java.rmi.RemoteException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ServerError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServerError);
	});
	return class$;
}

$Class* ServerError::class$ = nullptr;

	} // rmi
} // java