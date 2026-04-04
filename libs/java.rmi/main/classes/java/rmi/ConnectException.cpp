#include <java/rmi/ConnectException.h>
#include <java/rmi/RemoteException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RemoteException = ::java::rmi::RemoteException;

namespace java {
	namespace rmi {

void ConnectException::init$($String* s) {
	$RemoteException::init$(s);
}

void ConnectException::init$($String* s, $Exception* ex) {
	$RemoteException::init$(s, ex);
}

ConnectException::ConnectException() {
}

ConnectException::ConnectException(const ConnectException& e) : $RemoteException(e) {
}

void ConnectException::throw$() {
	throw *this;
}

$Class* ConnectException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConnectException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ConnectException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(ConnectException, init$, void, $String*, $Exception*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.rmi.ConnectException",
		"java.rmi.RemoteException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ConnectException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConnectException);
	});
	return class$;
}

$Class* ConnectException::class$ = nullptr;

	} // rmi
} // java