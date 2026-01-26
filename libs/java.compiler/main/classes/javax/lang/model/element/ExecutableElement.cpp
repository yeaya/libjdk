#include <javax/lang/model/element/ExecutableElement.h>

#include <java/util/List.h>
#include <javax/lang/model/element/AnnotationValue.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $AnnotationValue = ::javax::lang::model::element::AnnotationValue;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$MethodInfo _ExecutableElement_MethodInfo_[] = {
	{"asType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDefaultValue", "()Ljavax/lang/model/element/AnnotationValue;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExecutableElement, getDefaultValue, $AnnotationValue*)},
	{"getParameters", "()Ljava/util/List;", "()Ljava/util/List<+Ljavax/lang/model/element/VariableElement;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ExecutableElement, getParameters, $List*)},
	{"getReceiverType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExecutableElement, getReceiverType, $TypeMirror*)},
	{"getReturnType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExecutableElement, getReturnType, $TypeMirror*)},
	{"getSimpleName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT},
	{"getThrownTypes", "()Ljava/util/List;", "()Ljava/util/List<+Ljavax/lang/model/type/TypeMirror;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ExecutableElement, getThrownTypes, $List*)},
	{"getTypeParameters", "()Ljava/util/List;", nullptr, $PUBLIC | $ABSTRACT},
	{"isDefault", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExecutableElement, isDefault, bool)},
	{"isVarArgs", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExecutableElement, isVarArgs, bool)},
	{}
};

$ClassInfo _ExecutableElement_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.element.ExecutableElement",
	nullptr,
	"javax.lang.model.element.Parameterizable",
	nullptr,
	_ExecutableElement_MethodInfo_
};

$Object* allocate$ExecutableElement($Class* clazz) {
	return $of($alloc(ExecutableElement));
}

$Class* ExecutableElement::load$($String* name, bool initialize) {
	$loadClass(ExecutableElement, name, initialize, &_ExecutableElement_ClassInfo_, allocate$ExecutableElement);
	return class$;
}

$Class* ExecutableElement::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax