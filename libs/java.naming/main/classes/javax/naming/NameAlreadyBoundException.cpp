#include <javax/naming/NameAlreadyBoundException.h>

#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {

$FieldInfo _NameAlreadyBoundException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NameAlreadyBoundException, serialVersionUID)},
	{}
};

$MethodInfo _NameAlreadyBoundException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NameAlreadyBoundException, init$, void, $String*)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(NameAlreadyBoundException, init$, void)},
	{}
};

$ClassInfo _NameAlreadyBoundException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.NameAlreadyBoundException",
	"javax.naming.NamingException",
	nullptr,
	_NameAlreadyBoundException_FieldInfo_,
	_NameAlreadyBoundException_MethodInfo_
};

$Object* allocate$NameAlreadyBoundException($Class* clazz) {
	return $of($alloc(NameAlreadyBoundException));
}

void NameAlreadyBoundException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void NameAlreadyBoundException::init$() {
	$NamingException::init$();
}

NameAlreadyBoundException::NameAlreadyBoundException() {
}

NameAlreadyBoundException::NameAlreadyBoundException(const NameAlreadyBoundException& e) : $NamingException(e) {
}

void NameAlreadyBoundException::throw$() {
	throw *this;
}

$Class* NameAlreadyBoundException::load$($String* name, bool initialize) {
	$loadClass(NameAlreadyBoundException, name, initialize, &_NameAlreadyBoundException_ClassInfo_, allocate$NameAlreadyBoundException);
	return class$;
}

$Class* NameAlreadyBoundException::class$ = nullptr;

	} // naming
} // javax