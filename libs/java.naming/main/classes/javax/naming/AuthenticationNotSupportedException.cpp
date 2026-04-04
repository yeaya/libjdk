#include <javax/naming/AuthenticationNotSupportedException.h>
#include <javax/naming/NamingSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingSecurityException = ::javax::naming::NamingSecurityException;

namespace javax {
	namespace naming {

void AuthenticationNotSupportedException::init$($String* explanation) {
	$NamingSecurityException::init$(explanation);
}

void AuthenticationNotSupportedException::init$() {
	$NamingSecurityException::init$();
}

AuthenticationNotSupportedException::AuthenticationNotSupportedException() {
}

AuthenticationNotSupportedException::AuthenticationNotSupportedException(const AuthenticationNotSupportedException& e) : $NamingSecurityException(e) {
}

void AuthenticationNotSupportedException::throw$() {
	throw *this;
}

$Class* AuthenticationNotSupportedException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AuthenticationNotSupportedException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AuthenticationNotSupportedException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(AuthenticationNotSupportedException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.AuthenticationNotSupportedException",
		"javax.naming.NamingSecurityException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AuthenticationNotSupportedException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AuthenticationNotSupportedException);
	});
	return class$;
}

$Class* AuthenticationNotSupportedException::class$ = nullptr;

	} // naming
} // javax