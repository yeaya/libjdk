#include <javax/lang/model/element/UnknownAnnotationValueException.h>

#include <javax/lang/model/UnknownEntityException.h>
#include <javax/lang/model/element/AnnotationValue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnknownEntityException = ::javax::lang::model::UnknownEntityException;
using $AnnotationValue = ::javax::lang::model::element::AnnotationValue;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$FieldInfo _UnknownAnnotationValueException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnknownAnnotationValueException, serialVersionUID)},
	{"av", "Ljavax/lang/model/element/AnnotationValue;", nullptr, $PRIVATE | $TRANSIENT, $field(UnknownAnnotationValueException, av)},
	{"parameter", "Ljava/lang/Object;", nullptr, $PRIVATE | $TRANSIENT, $field(UnknownAnnotationValueException, parameter)},
	{}
};

$MethodInfo _UnknownAnnotationValueException_MethodInfo_[] = {
	{"<init>", "(Ljavax/lang/model/element/AnnotationValue;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(UnknownAnnotationValueException, init$, void, $AnnotationValue*, Object$*)},
	{"getArgument", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(UnknownAnnotationValueException, getArgument, $Object*)},
	{"getUnknownAnnotationValue", "()Ljavax/lang/model/element/AnnotationValue;", nullptr, $PUBLIC, $virtualMethod(UnknownAnnotationValueException, getUnknownAnnotationValue, $AnnotationValue*)},
	{}
};

$ClassInfo _UnknownAnnotationValueException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.lang.model.element.UnknownAnnotationValueException",
	"javax.lang.model.UnknownEntityException",
	nullptr,
	_UnknownAnnotationValueException_FieldInfo_,
	_UnknownAnnotationValueException_MethodInfo_
};

$Object* allocate$UnknownAnnotationValueException($Class* clazz) {
	return $of($alloc(UnknownAnnotationValueException));
}

void UnknownAnnotationValueException::init$($AnnotationValue* av, Object$* p) {
	$UnknownEntityException::init$($$str({"Unknown annotation value: \""_s, av, "\""_s}));
	$set(this, av, av);
	$set(this, parameter, p);
}

$AnnotationValue* UnknownAnnotationValueException::getUnknownAnnotationValue() {
	return this->av;
}

$Object* UnknownAnnotationValueException::getArgument() {
	return $of(this->parameter);
}

UnknownAnnotationValueException::UnknownAnnotationValueException() {
}

UnknownAnnotationValueException::UnknownAnnotationValueException(const UnknownAnnotationValueException& e) : $UnknownEntityException(e) {
}

void UnknownAnnotationValueException::throw$() {
	throw *this;
}

$Class* UnknownAnnotationValueException::load$($String* name, bool initialize) {
	$loadClass(UnknownAnnotationValueException, name, initialize, &_UnknownAnnotationValueException_ClassInfo_, allocate$UnknownAnnotationValueException);
	return class$;
}

$Class* UnknownAnnotationValueException::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax