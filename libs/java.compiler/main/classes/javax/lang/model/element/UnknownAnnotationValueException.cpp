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

void UnknownAnnotationValueException::init$($AnnotationValue* av, Object$* p) {
	$UnknownEntityException::init$($$str({"Unknown annotation value: \""_s, av, "\""_s}));
	$set(this, av, av);
	$set(this, parameter, p);
}

$AnnotationValue* UnknownAnnotationValueException::getUnknownAnnotationValue() {
	return this->av;
}

$Object* UnknownAnnotationValueException::getArgument() {
	return this->parameter;
}

UnknownAnnotationValueException::UnknownAnnotationValueException() {
}

UnknownAnnotationValueException::UnknownAnnotationValueException(const UnknownAnnotationValueException& e) : $UnknownEntityException(e) {
}

void UnknownAnnotationValueException::throw$() {
	throw *this;
}

$Class* UnknownAnnotationValueException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnknownAnnotationValueException, serialVersionUID)},
		{"av", "Ljavax/lang/model/element/AnnotationValue;", nullptr, $PRIVATE | $TRANSIENT, $field(UnknownAnnotationValueException, av)},
		{"parameter", "Ljava/lang/Object;", nullptr, $PRIVATE | $TRANSIENT, $field(UnknownAnnotationValueException, parameter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/lang/model/element/AnnotationValue;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(UnknownAnnotationValueException, init$, void, $AnnotationValue*, Object$*)},
		{"getArgument", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(UnknownAnnotationValueException, getArgument, $Object*)},
		{"getUnknownAnnotationValue", "()Ljavax/lang/model/element/AnnotationValue;", nullptr, $PUBLIC, $virtualMethod(UnknownAnnotationValueException, getUnknownAnnotationValue, $AnnotationValue*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.lang.model.element.UnknownAnnotationValueException",
		"javax.lang.model.UnknownEntityException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnknownAnnotationValueException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnknownAnnotationValueException);
	});
	return class$;
}

$Class* UnknownAnnotationValueException::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax