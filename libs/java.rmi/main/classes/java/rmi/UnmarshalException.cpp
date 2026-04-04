#include <java/rmi/UnmarshalException.h>
#include <java/rmi/RemoteException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RemoteException = ::java::rmi::RemoteException;

namespace java {
	namespace rmi {

void UnmarshalException::init$($String* s) {
	$RemoteException::init$(s);
}

void UnmarshalException::init$($String* s, $Exception* ex) {
	$RemoteException::init$(s, ex);
}

UnmarshalException::UnmarshalException() {
}

UnmarshalException::UnmarshalException(const UnmarshalException& e) : $RemoteException(e) {
}

void UnmarshalException::throw$() {
	throw *this;
}

$Class* UnmarshalException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnmarshalException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UnmarshalException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(UnmarshalException, init$, void, $String*, $Exception*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.rmi.UnmarshalException",
		"java.rmi.RemoteException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnmarshalException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnmarshalException);
	});
	return class$;
}

$Class* UnmarshalException::class$ = nullptr;

	} // rmi
} // java