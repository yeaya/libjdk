#include <javax/lang/model/type/TypeVariable.h>

#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::lang::model::element::Element;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

$MethodInfo _TypeVariable_MethodInfo_[] = {
	{"asElement", "()Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeVariable, asElement, $Element*)},
	{"getLowerBound", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeVariable, getLowerBound, $TypeMirror*)},
	{"getUpperBound", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeVariable, getUpperBound, $TypeMirror*)},
	{}
};

$ClassInfo _TypeVariable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.type.TypeVariable",
	nullptr,
	"javax.lang.model.type.ReferenceType",
	nullptr,
	_TypeVariable_MethodInfo_
};

$Object* allocate$TypeVariable($Class* clazz) {
	return $of($alloc(TypeVariable));
}

$Class* TypeVariable::load$($String* name, bool initialize) {
	$loadClass(TypeVariable, name, initialize, &_TypeVariable_ClassInfo_, allocate$TypeVariable);
	return class$;
}

$Class* TypeVariable::class$ = nullptr;

			} // type
		} // model
	} // lang
} // javax