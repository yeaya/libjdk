#include <javax/naming/NotContextException.h>

#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {

$FieldInfo _NotContextException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NotContextException, serialVersionUID)},
	{}
};

$MethodInfo _NotContextException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NotContextException::*)($String*)>(&NotContextException::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NotContextException::*)()>(&NotContextException::init$))},
	{}
};

$ClassInfo _NotContextException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.NotContextException",
	"javax.naming.NamingException",
	nullptr,
	_NotContextException_FieldInfo_,
	_NotContextException_MethodInfo_
};

$Object* allocate$NotContextException($Class* clazz) {
	return $of($alloc(NotContextException));
}

void NotContextException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void NotContextException::init$() {
	$NamingException::init$();
}

NotContextException::NotContextException() {
}

NotContextException::NotContextException(const NotContextException& e) : $NamingException(e) {
}

void NotContextException::throw$() {
	throw *this;
}

$Class* NotContextException::load$($String* name, bool initialize) {
	$loadClass(NotContextException, name, initialize, &_NotContextException_ClassInfo_, allocate$NotContextException);
	return class$;
}

$Class* NotContextException::class$ = nullptr;

	} // naming
} // javax