#include <javax/security/sasl/AuthenticationException.h>
#include <javax/security/sasl/SaslException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SaslException = ::javax::security::sasl::SaslException;

namespace javax {
	namespace security {
		namespace sasl {

void AuthenticationException::init$() {
	$SaslException::init$();
}

void AuthenticationException::init$($String* detail) {
	$SaslException::init$(detail);
}

void AuthenticationException::init$($String* detail, $Throwable* ex) {
	$SaslException::init$(detail, ex);
}

AuthenticationException::AuthenticationException() {
}

AuthenticationException::AuthenticationException(const AuthenticationException& e) : $SaslException(e) {
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
		{"<init>", "()V", nullptr, $PUBLIC, $method(AuthenticationException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AuthenticationException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(AuthenticationException, init$, void, $String*, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.security.sasl.AuthenticationException",
		"javax.security.sasl.SaslException",
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

		} // sasl
	} // security
} // javax