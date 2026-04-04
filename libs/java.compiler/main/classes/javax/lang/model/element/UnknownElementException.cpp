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

void UnknownElementException::init$($Element* e, Object$* p) {
	$UnknownEntityException::init$($$str({"Unknown element: \""_s, e, "\""_s}));
	$set(this, element, e);
	$set(this, parameter, p);
}

$Element* UnknownElementException::getUnknownElement() {
	return this->element;
}

$Object* UnknownElementException::getArgument() {
	return this->parameter;
}

UnknownElementException::UnknownElementException() {
}

UnknownElementException::UnknownElementException(const UnknownElementException& e) : $UnknownEntityException(e) {
}

void UnknownElementException::throw$() {
	throw *this;
}

$Class* UnknownElementException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnknownElementException, serialVersionUID)},
		{"element", "Ljavax/lang/model/element/Element;", nullptr, $PRIVATE | $TRANSIENT, $field(UnknownElementException, element)},
		{"parameter", "Ljava/lang/Object;", nullptr, $PRIVATE | $TRANSIENT, $field(UnknownElementException, parameter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/lang/model/element/Element;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(UnknownElementException, init$, void, $Element*, Object$*)},
		{"getArgument", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(UnknownElementException, getArgument, $Object*)},
		{"getUnknownElement", "()Ljavax/lang/model/element/Element;", nullptr, $PUBLIC, $virtualMethod(UnknownElementException, getUnknownElement, $Element*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.lang.model.element.UnknownElementException",
		"javax.lang.model.UnknownEntityException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnknownElementException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnknownElementException);
	});
	return class$;
}

$Class* UnknownElementException::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax