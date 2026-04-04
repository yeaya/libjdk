#include <java/rmi/UnexpectedException.h>
#include <java/rmi/RemoteException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RemoteException = ::java::rmi::RemoteException;

namespace java {
	namespace rmi {

void UnexpectedException::init$($String* s) {
	$RemoteException::init$(s);
}

void UnexpectedException::init$($String* s, $Exception* ex) {
	$RemoteException::init$(s, ex);
}

UnexpectedException::UnexpectedException() {
}

UnexpectedException::UnexpectedException(const UnexpectedException& e) : $RemoteException(e) {
}

void UnexpectedException::throw$() {
	throw *this;
}

$Class* UnexpectedException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnexpectedException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UnexpectedException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(UnexpectedException, init$, void, $String*, $Exception*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.rmi.UnexpectedException",
		"java.rmi.RemoteException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnexpectedException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnexpectedException);
	});
	return class$;
}

$Class* UnexpectedException::class$ = nullptr;

	} // rmi
} // java