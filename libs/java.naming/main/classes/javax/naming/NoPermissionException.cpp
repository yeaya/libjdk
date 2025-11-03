#include <javax/naming/NoPermissionException.h>

#include <javax/naming/NamingSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingSecurityException = ::javax::naming::NamingSecurityException;

namespace javax {
	namespace naming {

$FieldInfo _NoPermissionException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NoPermissionException, serialVersionUID)},
	{}
};

$MethodInfo _NoPermissionException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NoPermissionException::*)($String*)>(&NoPermissionException::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NoPermissionException::*)()>(&NoPermissionException::init$))},
	{}
};

$ClassInfo _NoPermissionException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.NoPermissionException",
	"javax.naming.NamingSecurityException",
	nullptr,
	_NoPermissionException_FieldInfo_,
	_NoPermissionException_MethodInfo_
};

$Object* allocate$NoPermissionException($Class* clazz) {
	return $of($alloc(NoPermissionException));
}

void NoPermissionException::init$($String* explanation) {
	$NamingSecurityException::init$(explanation);
}

void NoPermissionException::init$() {
	$NamingSecurityException::init$();
}

NoPermissionException::NoPermissionException() {
}

NoPermissionException::NoPermissionException(const NoPermissionException& e) : $NamingSecurityException(e) {
}

void NoPermissionException::throw$() {
	throw *this;
}

$Class* NoPermissionException::load$($String* name, bool initialize) {
	$loadClass(NoPermissionException, name, initialize, &_NoPermissionException_ClassInfo_, allocate$NoPermissionException);
	return class$;
}

$Class* NoPermissionException::class$ = nullptr;

	} // naming
} // javax