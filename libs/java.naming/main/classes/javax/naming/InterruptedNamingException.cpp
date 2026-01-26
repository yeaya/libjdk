#include <javax/naming/InterruptedNamingException.h>

#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {

$FieldInfo _InterruptedNamingException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InterruptedNamingException, serialVersionUID)},
	{}
};

$MethodInfo _InterruptedNamingException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InterruptedNamingException, init$, void, $String*)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(InterruptedNamingException, init$, void)},
	{}
};

$ClassInfo _InterruptedNamingException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.InterruptedNamingException",
	"javax.naming.NamingException",
	nullptr,
	_InterruptedNamingException_FieldInfo_,
	_InterruptedNamingException_MethodInfo_
};

$Object* allocate$InterruptedNamingException($Class* clazz) {
	return $of($alloc(InterruptedNamingException));
}

void InterruptedNamingException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void InterruptedNamingException::init$() {
	$NamingException::init$();
}

InterruptedNamingException::InterruptedNamingException() {
}

InterruptedNamingException::InterruptedNamingException(const InterruptedNamingException& e) : $NamingException(e) {
}

void InterruptedNamingException::throw$() {
	throw *this;
}

$Class* InterruptedNamingException::load$($String* name, bool initialize) {
	$loadClass(InterruptedNamingException, name, initialize, &_InterruptedNamingException_ClassInfo_, allocate$InterruptedNamingException);
	return class$;
}

$Class* InterruptedNamingException::class$ = nullptr;

	} // naming
} // javax