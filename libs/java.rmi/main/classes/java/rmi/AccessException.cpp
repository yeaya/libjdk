#include <java/rmi/AccessException.h>
#include <java/rmi/RemoteException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RemoteException = ::java::rmi::RemoteException;

namespace java {
	namespace rmi {

void AccessException::init$($String* s) {
	$RemoteException::init$(s);
}

void AccessException::init$($String* s, $Exception* ex) {
	$RemoteException::init$(s, ex);
}

AccessException::AccessException() {
}

AccessException::AccessException(const AccessException& e) : $RemoteException(e) {
}

void AccessException::throw$() {
	throw *this;
}

$Class* AccessException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AccessException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AccessException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(AccessException, init$, void, $String*, $Exception*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.rmi.AccessException",
		"java.rmi.RemoteException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AccessException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AccessException);
	});
	return class$;
}

$Class* AccessException::class$ = nullptr;

	} // rmi
} // java