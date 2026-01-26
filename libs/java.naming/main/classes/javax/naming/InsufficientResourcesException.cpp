#include <javax/naming/InsufficientResourcesException.h>

#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {

$FieldInfo _InsufficientResourcesException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InsufficientResourcesException, serialVersionUID)},
	{}
};

$MethodInfo _InsufficientResourcesException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InsufficientResourcesException, init$, void, $String*)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(InsufficientResourcesException, init$, void)},
	{}
};

$ClassInfo _InsufficientResourcesException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.InsufficientResourcesException",
	"javax.naming.NamingException",
	nullptr,
	_InsufficientResourcesException_FieldInfo_,
	_InsufficientResourcesException_MethodInfo_
};

$Object* allocate$InsufficientResourcesException($Class* clazz) {
	return $of($alloc(InsufficientResourcesException));
}

void InsufficientResourcesException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void InsufficientResourcesException::init$() {
	$NamingException::init$();
}

InsufficientResourcesException::InsufficientResourcesException() {
}

InsufficientResourcesException::InsufficientResourcesException(const InsufficientResourcesException& e) : $NamingException(e) {
}

void InsufficientResourcesException::throw$() {
	throw *this;
}

$Class* InsufficientResourcesException::load$($String* name, bool initialize) {
	$loadClass(InsufficientResourcesException, name, initialize, &_InsufficientResourcesException_ClassInfo_, allocate$InsufficientResourcesException);
	return class$;
}

$Class* InsufficientResourcesException::class$ = nullptr;

	} // naming
} // javax