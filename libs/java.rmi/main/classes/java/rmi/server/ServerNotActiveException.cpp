#include <java/rmi/server/ServerNotActiveException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace rmi {
		namespace server {

void ServerNotActiveException::init$() {
	$Exception::init$();
}

void ServerNotActiveException::init$($String* s) {
	$Exception::init$(s);
}

ServerNotActiveException::ServerNotActiveException() {
}

ServerNotActiveException::ServerNotActiveException(const ServerNotActiveException& e) : $Exception(e) {
}

void ServerNotActiveException::throw$() {
	throw *this;
}

$Class* ServerNotActiveException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ServerNotActiveException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ServerNotActiveException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ServerNotActiveException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.rmi.server.ServerNotActiveException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ServerNotActiveException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServerNotActiveException);
	});
	return class$;
}

$Class* ServerNotActiveException::class$ = nullptr;

		} // server
	} // rmi
} // java