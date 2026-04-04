#include <com/sun/tools/javac/util/ClientCodeException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

void ClientCodeException::init$($Throwable* cause) {
	$RuntimeException::init$(cause);
}

ClientCodeException::ClientCodeException() {
}

ClientCodeException::ClientCodeException(const ClientCodeException& e) : $RuntimeException(e) {
}

void ClientCodeException::throw$() {
	throw *this;
}

$Class* ClientCodeException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ClientCodeException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(ClientCodeException, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.util.ClientCodeException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ClientCodeException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClientCodeException);
	});
	return class$;
}

$Class* ClientCodeException::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com