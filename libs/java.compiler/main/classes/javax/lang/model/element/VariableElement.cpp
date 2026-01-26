#include <javax/lang/model/element/VariableElement.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$MethodInfo _VariableElement_MethodInfo_[] = {
	{"asType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $ABSTRACT},
	{"getConstantValue", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VariableElement, getConstantValue, $Object*)},
	{"getSimpleName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT},
	{"getEnclosingElement", "()Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _VariableElement_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.element.VariableElement",
	nullptr,
	"javax.lang.model.element.Element",
	nullptr,
	_VariableElement_MethodInfo_
};

$Object* allocate$VariableElement($Class* clazz) {
	return $of($alloc(VariableElement));
}

$Class* VariableElement::load$($String* name, bool initialize) {
	$loadClass(VariableElement, name, initialize, &_VariableElement_ClassInfo_, allocate$VariableElement);
	return class$;
}

$Class* VariableElement::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax