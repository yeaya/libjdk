#include <javax/naming/ContextNotEmptyException.h>

#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {

$FieldInfo _ContextNotEmptyException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ContextNotEmptyException, serialVersionUID)},
	{}
};

$MethodInfo _ContextNotEmptyException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ContextNotEmptyException, init$, void, $String*)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(ContextNotEmptyException, init$, void)},
	{}
};

$ClassInfo _ContextNotEmptyException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.ContextNotEmptyException",
	"javax.naming.NamingException",
	nullptr,
	_ContextNotEmptyException_FieldInfo_,
	_ContextNotEmptyException_MethodInfo_
};

$Object* allocate$ContextNotEmptyException($Class* clazz) {
	return $of($alloc(ContextNotEmptyException));
}

void ContextNotEmptyException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void ContextNotEmptyException::init$() {
	$NamingException::init$();
}

ContextNotEmptyException::ContextNotEmptyException() {
}

ContextNotEmptyException::ContextNotEmptyException(const ContextNotEmptyException& e) : $NamingException(e) {
}

void ContextNotEmptyException::throw$() {
	throw *this;
}

$Class* ContextNotEmptyException::load$($String* name, bool initialize) {
	$loadClass(ContextNotEmptyException, name, initialize, &_ContextNotEmptyException_ClassInfo_, allocate$ContextNotEmptyException);
	return class$;
}

$Class* ContextNotEmptyException::class$ = nullptr;

	} // naming
} // javax