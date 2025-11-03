#include <javax/naming/ServiceUnavailableException.h>

#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {

$FieldInfo _ServiceUnavailableException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ServiceUnavailableException, serialVersionUID)},
	{}
};

$MethodInfo _ServiceUnavailableException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ServiceUnavailableException::*)($String*)>(&ServiceUnavailableException::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ServiceUnavailableException::*)()>(&ServiceUnavailableException::init$))},
	{}
};

$ClassInfo _ServiceUnavailableException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.ServiceUnavailableException",
	"javax.naming.NamingException",
	nullptr,
	_ServiceUnavailableException_FieldInfo_,
	_ServiceUnavailableException_MethodInfo_
};

$Object* allocate$ServiceUnavailableException($Class* clazz) {
	return $of($alloc(ServiceUnavailableException));
}

void ServiceUnavailableException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void ServiceUnavailableException::init$() {
	$NamingException::init$();
}

ServiceUnavailableException::ServiceUnavailableException() {
}

ServiceUnavailableException::ServiceUnavailableException(const ServiceUnavailableException& e) : $NamingException(e) {
}

void ServiceUnavailableException::throw$() {
	throw *this;
}

$Class* ServiceUnavailableException::load$($String* name, bool initialize) {
	$loadClass(ServiceUnavailableException, name, initialize, &_ServiceUnavailableException_ClassInfo_, allocate$ServiceUnavailableException);
	return class$;
}

$Class* ServiceUnavailableException::class$ = nullptr;

	} // naming
} // javax