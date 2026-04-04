#include <java/rmi/ConnectIOException.h>
#include <java/rmi/RemoteException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RemoteException = ::java::rmi::RemoteException;

namespace java {
	namespace rmi {

void ConnectIOException::init$($String* s) {
	$RemoteException::init$(s);
}

void ConnectIOException::init$($String* s, $Exception* ex) {
	$RemoteException::init$(s, ex);
}

ConnectIOException::ConnectIOException() {
}

ConnectIOException::ConnectIOException(const ConnectIOException& e) : $RemoteException(e) {
}

void ConnectIOException::throw$() {
	throw *this;
}

$Class* ConnectIOException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConnectIOException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ConnectIOException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(ConnectIOException, init$, void, $String*, $Exception*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.rmi.ConnectIOException",
		"java.rmi.RemoteException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ConnectIOException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConnectIOException);
	});
	return class$;
}

$Class* ConnectIOException::class$ = nullptr;

	} // rmi
} // java