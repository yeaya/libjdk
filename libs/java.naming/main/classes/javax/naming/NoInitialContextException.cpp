#include <javax/naming/NoInitialContextException.h>

#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {

$FieldInfo _NoInitialContextException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NoInitialContextException, serialVersionUID)},
	{}
};

$MethodInfo _NoInitialContextException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(NoInitialContextException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NoInitialContextException, init$, void, $String*)},
	{}
};

$ClassInfo _NoInitialContextException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.NoInitialContextException",
	"javax.naming.NamingException",
	nullptr,
	_NoInitialContextException_FieldInfo_,
	_NoInitialContextException_MethodInfo_
};

$Object* allocate$NoInitialContextException($Class* clazz) {
	return $of($alloc(NoInitialContextException));
}

void NoInitialContextException::init$() {
	$NamingException::init$();
}

void NoInitialContextException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

NoInitialContextException::NoInitialContextException() {
}

NoInitialContextException::NoInitialContextException(const NoInitialContextException& e) : $NamingException(e) {
}

void NoInitialContextException::throw$() {
	throw *this;
}

$Class* NoInitialContextException::load$($String* name, bool initialize) {
	$loadClass(NoInitialContextException, name, initialize, &_NoInitialContextException_ClassInfo_, allocate$NoInitialContextException);
	return class$;
}

$Class* NoInitialContextException::class$ = nullptr;

	} // naming
} // javax