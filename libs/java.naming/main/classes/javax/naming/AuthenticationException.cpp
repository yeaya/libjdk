#include <javax/naming/AuthenticationException.h>

#include <javax/naming/NamingSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingSecurityException = ::javax::naming::NamingSecurityException;

namespace javax {
	namespace naming {

$FieldInfo _AuthenticationException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AuthenticationException, serialVersionUID)},
	{}
};

$MethodInfo _AuthenticationException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AuthenticationException, init$, void, $String*)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(AuthenticationException, init$, void)},
	{}
};

$ClassInfo _AuthenticationException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.AuthenticationException",
	"javax.naming.NamingSecurityException",
	nullptr,
	_AuthenticationException_FieldInfo_,
	_AuthenticationException_MethodInfo_
};

$Object* allocate$AuthenticationException($Class* clazz) {
	return $of($alloc(AuthenticationException));
}

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
	$loadClass(AuthenticationException, name, initialize, &_AuthenticationException_ClassInfo_, allocate$AuthenticationException);
	return class$;
}

$Class* AuthenticationException::class$ = nullptr;

	} // naming
} // javax