#include <java/rmi/ServerException.h>
#include <java/rmi/RemoteException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RemoteException = ::java::rmi::RemoteException;

namespace java {
	namespace rmi {

void ServerException::init$($String* s) {
	$RemoteException::init$(s);
}

void ServerException::init$($String* s, $Exception* ex) {
	$RemoteException::init$(s, ex);
}

ServerException::ServerException() {
}

ServerException::ServerException(const ServerException& e) : $RemoteException(e) {
}

void ServerException::throw$() {
	throw *this;
}

$Class* ServerException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ServerException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ServerException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(ServerException, init$, void, $String*, $Exception*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.rmi.ServerException",
		"java.rmi.RemoteException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ServerException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServerException);
	});
	return class$;
}

$Class* ServerException::class$ = nullptr;

	} // rmi
} // java