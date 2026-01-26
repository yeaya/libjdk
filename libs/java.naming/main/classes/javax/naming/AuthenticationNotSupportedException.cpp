#include <javax/naming/AuthenticationNotSupportedException.h>

#include <javax/naming/NamingSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingSecurityException = ::javax::naming::NamingSecurityException;

namespace javax {
	namespace naming {

$FieldInfo _AuthenticationNotSupportedException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AuthenticationNotSupportedException, serialVersionUID)},
	{}
};

$MethodInfo _AuthenticationNotSupportedException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AuthenticationNotSupportedException, init$, void, $String*)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(AuthenticationNotSupportedException, init$, void)},
	{}
};

$ClassInfo _AuthenticationNotSupportedException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.AuthenticationNotSupportedException",
	"javax.naming.NamingSecurityException",
	nullptr,
	_AuthenticationNotSupportedException_FieldInfo_,
	_AuthenticationNotSupportedException_MethodInfo_
};

$Object* allocate$AuthenticationNotSupportedException($Class* clazz) {
	return $of($alloc(AuthenticationNotSupportedException));
}

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
	$loadClass(AuthenticationNotSupportedException, name, initialize, &_AuthenticationNotSupportedException_ClassInfo_, allocate$AuthenticationNotSupportedException);
	return class$;
}

$Class* AuthenticationNotSupportedException::class$ = nullptr;

	} // naming
} // javax