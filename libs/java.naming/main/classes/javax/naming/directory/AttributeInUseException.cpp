#include <javax/naming/directory/AttributeInUseException.h>

#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {
		namespace directory {

$FieldInfo _AttributeInUseException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AttributeInUseException, serialVersionUID)},
	{}
};

$MethodInfo _AttributeInUseException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeInUseException::*)($String*)>(&AttributeInUseException::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AttributeInUseException::*)()>(&AttributeInUseException::init$))},
	{}
};

$ClassInfo _AttributeInUseException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.directory.AttributeInUseException",
	"javax.naming.NamingException",
	nullptr,
	_AttributeInUseException_FieldInfo_,
	_AttributeInUseException_MethodInfo_
};

$Object* allocate$AttributeInUseException($Class* clazz) {
	return $of($alloc(AttributeInUseException));
}

void AttributeInUseException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void AttributeInUseException::init$() {
	$NamingException::init$();
}

AttributeInUseException::AttributeInUseException() {
}

AttributeInUseException::AttributeInUseException(const AttributeInUseException& e) : $NamingException(e) {
}

void AttributeInUseException::throw$() {
	throw *this;
}

$Class* AttributeInUseException::load$($String* name, bool initialize) {
	$loadClass(AttributeInUseException, name, initialize, &_AttributeInUseException_ClassInfo_, allocate$AttributeInUseException);
	return class$;
}

$Class* AttributeInUseException::class$ = nullptr;

		} // directory
	} // naming
} // javax