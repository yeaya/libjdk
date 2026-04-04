#include <java/rmi/StubNotFoundException.h>
#include <java/rmi/RemoteException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RemoteException = ::java::rmi::RemoteException;

namespace java {
	namespace rmi {

void StubNotFoundException::init$($String* s) {
	$RemoteException::init$(s);
}

void StubNotFoundException::init$($String* s, $Exception* ex) {
	$RemoteException::init$(s, ex);
}

StubNotFoundException::StubNotFoundException() {
}

StubNotFoundException::StubNotFoundException(const StubNotFoundException& e) : $RemoteException(e) {
}

void StubNotFoundException::throw$() {
	throw *this;
}

$Class* StubNotFoundException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StubNotFoundException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(StubNotFoundException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(StubNotFoundException, init$, void, $String*, $Exception*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.rmi.StubNotFoundException",
		"java.rmi.RemoteException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(StubNotFoundException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StubNotFoundException);
	});
	return class$;
}

$Class* StubNotFoundException::class$ = nullptr;

	} // rmi
} // java