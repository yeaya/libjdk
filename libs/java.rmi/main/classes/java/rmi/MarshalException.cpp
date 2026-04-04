#include <java/rmi/MarshalException.h>
#include <java/rmi/RemoteException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RemoteException = ::java::rmi::RemoteException;

namespace java {
	namespace rmi {

void MarshalException::init$($String* s) {
	$RemoteException::init$(s);
}

void MarshalException::init$($String* s, $Exception* ex) {
	$RemoteException::init$(s, ex);
}

MarshalException::MarshalException() {
}

MarshalException::MarshalException(const MarshalException& e) : $RemoteException(e) {
}

void MarshalException::throw$() {
	throw *this;
}

$Class* MarshalException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MarshalException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(MarshalException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(MarshalException, init$, void, $String*, $Exception*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.rmi.MarshalException",
		"java.rmi.RemoteException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MarshalException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MarshalException);
	});
	return class$;
}

$Class* MarshalException::class$ = nullptr;

	} // rmi
} // java