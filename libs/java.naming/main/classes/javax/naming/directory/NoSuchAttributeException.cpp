#include <javax/naming/directory/NoSuchAttributeException.h>

#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {
		namespace directory {

$FieldInfo _NoSuchAttributeException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NoSuchAttributeException, serialVersionUID)},
	{}
};

$MethodInfo _NoSuchAttributeException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NoSuchAttributeException::*)($String*)>(&NoSuchAttributeException::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NoSuchAttributeException::*)()>(&NoSuchAttributeException::init$))},
	{}
};

$ClassInfo _NoSuchAttributeException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.directory.NoSuchAttributeException",
	"javax.naming.NamingException",
	nullptr,
	_NoSuchAttributeException_FieldInfo_,
	_NoSuchAttributeException_MethodInfo_
};

$Object* allocate$NoSuchAttributeException($Class* clazz) {
	return $of($alloc(NoSuchAttributeException));
}

void NoSuchAttributeException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void NoSuchAttributeException::init$() {
	$NamingException::init$();
}

NoSuchAttributeException::NoSuchAttributeException() {
}

NoSuchAttributeException::NoSuchAttributeException(const NoSuchAttributeException& e) : $NamingException(e) {
}

void NoSuchAttributeException::throw$() {
	throw *this;
}

$Class* NoSuchAttributeException::load$($String* name, bool initialize) {
	$loadClass(NoSuchAttributeException, name, initialize, &_NoSuchAttributeException_ClassInfo_, allocate$NoSuchAttributeException);
	return class$;
}

$Class* NoSuchAttributeException::class$ = nullptr;

		} // directory
	} // naming
} // javax