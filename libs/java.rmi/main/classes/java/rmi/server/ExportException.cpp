#include <java/rmi/server/ExportException.h>
#include <java/rmi/RemoteException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RemoteException = ::java::rmi::RemoteException;

namespace java {
	namespace rmi {
		namespace server {

void ExportException::init$($String* s) {
	$RemoteException::init$(s);
}

void ExportException::init$($String* s, $Exception* ex) {
	$RemoteException::init$(s, ex);
}

ExportException::ExportException() {
}

ExportException::ExportException(const ExportException& e) : $RemoteException(e) {
}

void ExportException::throw$() {
	throw *this;
}

$Class* ExportException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ExportException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ExportException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(ExportException, init$, void, $String*, $Exception*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.rmi.server.ExportException",
		"java.rmi.RemoteException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ExportException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExportException);
	});
	return class$;
}

$Class* ExportException::class$ = nullptr;

		} // server
	} // rmi
} // java