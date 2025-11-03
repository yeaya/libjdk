#include <javax/lang/model/type/UnknownTypeException.h>

#include <javax/lang/model/UnknownEntityException.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnknownEntityException = ::javax::lang::model::UnknownEntityException;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

$FieldInfo _UnknownTypeException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnknownTypeException, serialVersionUID)},
	{"type", "Ljavax/lang/model/type/TypeMirror;", nullptr, $PRIVATE | $TRANSIENT, $field(UnknownTypeException, type)},
	{"parameter", "Ljava/lang/Object;", nullptr, $PRIVATE | $TRANSIENT, $field(UnknownTypeException, parameter)},
	{}
};

$MethodInfo _UnknownTypeException_MethodInfo_[] = {
	{"<init>", "(Ljavax/lang/model/type/TypeMirror;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(UnknownTypeException::*)($TypeMirror*,Object$*)>(&UnknownTypeException::init$))},
	{"getArgument", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getUnknownType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _UnknownTypeException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.lang.model.type.UnknownTypeException",
	"javax.lang.model.UnknownEntityException",
	nullptr,
	_UnknownTypeException_FieldInfo_,
	_UnknownTypeException_MethodInfo_
};

$Object* allocate$UnknownTypeException($Class* clazz) {
	return $of($alloc(UnknownTypeException));
}

void UnknownTypeException::init$($TypeMirror* t, Object$* p) {
	$UnknownEntityException::init$($$str({"Unknown type: \""_s, t, "\""_s}));
	$set(this, type, t);
	$set(this, parameter, p);
}

$TypeMirror* UnknownTypeException::getUnknownType() {
	return this->type;
}

$Object* UnknownTypeException::getArgument() {
	return $of(this->parameter);
}

UnknownTypeException::UnknownTypeException() {
}

UnknownTypeException::UnknownTypeException(const UnknownTypeException& e) : $UnknownEntityException(e) {
}

void UnknownTypeException::throw$() {
	throw *this;
}

$Class* UnknownTypeException::load$($String* name, bool initialize) {
	$loadClass(UnknownTypeException, name, initialize, &_UnknownTypeException_ClassInfo_, allocate$UnknownTypeException);
	return class$;
}

$Class* UnknownTypeException::class$ = nullptr;

			} // type
		} // model
	} // lang
} // javax