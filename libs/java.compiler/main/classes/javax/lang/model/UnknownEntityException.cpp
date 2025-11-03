#include <javax/lang/model/UnknownEntityException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace javax {
	namespace lang {
		namespace model {

$FieldInfo _UnknownEntityException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnknownEntityException, serialVersionUID)},
	{}
};

$MethodInfo _UnknownEntityException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(UnknownEntityException::*)($String*)>(&UnknownEntityException::init$))},
	{}
};

$ClassInfo _UnknownEntityException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.lang.model.UnknownEntityException",
	"java.lang.RuntimeException",
	nullptr,
	_UnknownEntityException_FieldInfo_,
	_UnknownEntityException_MethodInfo_
};

$Object* allocate$UnknownEntityException($Class* clazz) {
	return $of($alloc(UnknownEntityException));
}

void UnknownEntityException::init$($String* message) {
	$RuntimeException::init$(message);
}

UnknownEntityException::UnknownEntityException() {
}

UnknownEntityException::UnknownEntityException(const UnknownEntityException& e) : $RuntimeException(e) {
}

void UnknownEntityException::throw$() {
	throw *this;
}

$Class* UnknownEntityException::load$($String* name, bool initialize) {
	$loadClass(UnknownEntityException, name, initialize, &_UnknownEntityException_ClassInfo_, allocate$UnknownEntityException);
	return class$;
}

$Class* UnknownEntityException::class$ = nullptr;

		} // model
	} // lang
} // javax