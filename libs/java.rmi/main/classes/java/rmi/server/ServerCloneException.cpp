#include <java/rmi/server/ServerCloneException.h>
#include <java/lang/CloneNotSupportedException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace rmi {
		namespace server {

void ServerCloneException::init$($String* s) {
	$CloneNotSupportedException::init$(s);
	initCause(nullptr);
}

void ServerCloneException::init$($String* s, $Exception* cause) {
	$CloneNotSupportedException::init$(s);
	initCause(nullptr);
	$set(this, detail, cause);
}

$String* ServerCloneException::getMessage() {
	$useLocalObjectStack();
	if (this->detail == nullptr) {
		return $CloneNotSupportedException::getMessage();
	} else {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append($($CloneNotSupportedException::getMessage()));
		var$0->append("; nested exception is: \n\t"_s);
		var$0->append($(this->detail->toString()));
		return $str(var$0);
	}
}

$Throwable* ServerCloneException::getCause() {
	return this->detail;
}

ServerCloneException::ServerCloneException() {
}

ServerCloneException::ServerCloneException(const ServerCloneException& e) : $CloneNotSupportedException(e) {
}

void ServerCloneException::throw$() {
	throw *this;
}

$Class* ServerCloneException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"detail", "Ljava/lang/Exception;", nullptr, $PUBLIC, $field(ServerCloneException, detail)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ServerCloneException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ServerCloneException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(ServerCloneException, init$, void, $String*, $Exception*)},
		{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(ServerCloneException, getCause, $Throwable*)},
		{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ServerCloneException, getMessage, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.rmi.server.ServerCloneException",
		"java.lang.CloneNotSupportedException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ServerCloneException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServerCloneException);
	});
	return class$;
}

$Class* ServerCloneException::class$ = nullptr;

		} // server
	} // rmi
} // java