#include <java/rmi/NoSuchObjectException.h>
#include <java/rmi/RemoteException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RemoteException = ::java::rmi::RemoteException;

namespace java {
	namespace rmi {

void NoSuchObjectException::init$($String* s) {
	$RemoteException::init$(s);
}

NoSuchObjectException::NoSuchObjectException() {
}

NoSuchObjectException::NoSuchObjectException(const NoSuchObjectException& e) : $RemoteException(e) {
}

void NoSuchObjectException::throw$() {
	throw *this;
}

$Class* NoSuchObjectException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NoSuchObjectException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NoSuchObjectException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.rmi.NoSuchObjectException",
		"java.rmi.RemoteException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NoSuchObjectException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NoSuchObjectException);
	});
	return class$;
}

$Class* NoSuchObjectException::class$ = nullptr;

	} // rmi
} // java