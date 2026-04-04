#include <javax/naming/AuthenticationException.h>
#include <javax/naming/NamingSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingSecurityException = ::javax::naming::NamingSecurityException;

namespace javax {
	namespace naming {

void AuthenticationException::init$($String* explanation) {
	$NamingSecurityException::init$(explanation);
}

void AuthenticationException::init$() {
	$NamingSecurityException::init$();
}

AuthenticationException::AuthenticationException() {
}

AuthenticationException::AuthenticationException(const AuthenticationException& e) : $NamingSecurityException(e) {
}

void AuthenticationException::throw$() {
	throw *this;
}

$Class* AuthenticationException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AuthenticationException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AuthenticationException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(AuthenticationException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.AuthenticationException",
		"javax.naming.NamingSecurityException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AuthenticationException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AuthenticationException);
	});
	return class$;
}

$Class* AuthenticationException::class$ = nullptr;

	} // naming
} // javax