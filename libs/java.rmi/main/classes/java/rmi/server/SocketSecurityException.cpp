#include <java/rmi/server/SocketSecurityException.h>
#include <java/rmi/server/ExportException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExportException = ::java::rmi::server::ExportException;

namespace java {
	namespace rmi {
		namespace server {

void SocketSecurityException::init$($String* s) {
	$ExportException::init$(s);
}

void SocketSecurityException::init$($String* s, $Exception* ex) {
	$ExportException::init$(s, ex);
}

SocketSecurityException::SocketSecurityException() {
}

SocketSecurityException::SocketSecurityException(const SocketSecurityException& e) : $ExportException(e) {
}

void SocketSecurityException::throw$() {
	throw *this;
}

$Class* SocketSecurityException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SocketSecurityException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SocketSecurityException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(SocketSecurityException, init$, void, $String*, $Exception*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.rmi.server.SocketSecurityException",
		"java.rmi.server.ExportException",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SocketSecurityException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SocketSecurityException);
	});
	return class$;
}

$Class* SocketSecurityException::class$ = nullptr;

		} // server
	} // rmi
} // java