#include <javax/lang/model/element/VariableElement.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$Class* VariableElement::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"asType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $ABSTRACT},
		{"getConstantValue", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VariableElement, getConstantValue, $Object*)},
		{"getSimpleName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT},
		{"getEnclosingElement", "()Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.lang.model.element.VariableElement",
		nullptr,
		"javax.lang.model.element.Element",
		nullptr,
		methodInfos$$
	};
	$loadClass(VariableElement, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VariableElement);
	});
	return class$;
}

$Class* VariableElement::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax