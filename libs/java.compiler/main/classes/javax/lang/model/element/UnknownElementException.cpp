#include <javax/lang/model/element/UnknownElementException.h>

#include <javax/lang/model/UnknownEntityException.h>
#include <javax/lang/model/element/Element.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnknownEntityException = ::javax::lang::model::UnknownEntityException;
using $Element = ::javax::lang::model::element::Element;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$FieldInfo _UnknownElementException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnknownElementException, serialVersionUID)},
	{"element", "Ljavax/lang/model/element/Element;", nullptr, $PRIVATE | $TRANSIENT, $field(UnknownElementException, element)},
	{"parameter", "Ljava/lang/Object;", nullptr, $PRIVATE | $TRANSIENT, $field(UnknownElementException, parameter)},
	{}
};

$MethodInfo _UnknownElementException_MethodInfo_[] = {
	{"<init>", "(Ljavax/lang/model/element/Element;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(UnknownElementException, init$, void, $Element*, Object$*)},
	{"getArgument", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(UnknownElementException, getArgument, $Object*)},
	{"getUnknownElement", "()Ljavax/lang/model/element/Element;", nullptr, $PUBLIC, $virtualMethod(UnknownElementException, getUnknownElement, $Element*)},
	{}
};

$ClassInfo _UnknownElementException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.lang.model.element.UnknownElementException",
	"javax.lang.model.UnknownEntityException",
	nullptr,
	_UnknownElementException_FieldInfo_,
	_UnknownElementException_MethodInfo_
};

$Object* allocate$UnknownElementException($Class* clazz) {
	return $of($alloc(UnknownElementException));
}

void UnknownElementException::init$($Element* e, Object$* p) {
	$UnknownEntityException::init$($$str({"Unknown element: \""_s, e, "\""_s}));
	$set(this, element, e);
	$set(this, parameter, p);
}

$Element* UnknownElementException::getUnknownElement() {
	return this->element;
}

$Object* UnknownElementException::getArgument() {
	return $of(this->parameter);
}

UnknownElementException::UnknownElementException() {
}

UnknownElementException::UnknownElementException(const UnknownElementException& e) : $UnknownEntityException(e) {
}

void UnknownElementException::throw$() {
	throw *this;
}

$Class* UnknownElementException::load$($String* name, bool initialize) {
	$loadClass(UnknownElementException, name, initialize, &_UnknownElementException_ClassInfo_, allocate$UnknownElementException);
	return class$;
}

$Class* UnknownElementException::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax