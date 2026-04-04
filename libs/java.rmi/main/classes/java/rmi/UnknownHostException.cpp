#include <java/rmi/UnknownHostException.h>
#include <java/rmi/RemoteException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RemoteException = ::java::rmi::RemoteException;

namespace java {
	namespace rmi {

void UnknownHostException::init$($String* s) {
	$RemoteException::init$(s);
}

void UnknownHostException::init$($String* s, $Exception* ex) {
	$RemoteException::init$(s, ex);
}

UnknownHostException::UnknownHostException() {
}

UnknownHostException::UnknownHostException(const UnknownHostException& e) : $RemoteException(e) {
}

void UnknownHostException::throw$() {
	throw *this;
}

$Class* UnknownHostException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnknownHostException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UnknownHostException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(UnknownHostException, init$, void, $String*, $Exception*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.rmi.UnknownHostException",
		"java.rmi.RemoteException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnknownHostException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnknownHostException);
	});
	return class$;
}

$Class* UnknownHostException::class$ = nullptr;

	} // rmi
} // java