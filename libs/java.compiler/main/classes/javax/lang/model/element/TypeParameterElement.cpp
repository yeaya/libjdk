#include <javax/lang/model/element/TypeParameterElement.h>
#include <java/util/List.h>
#include <javax/lang/model/element/Element.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Element = ::javax::lang::model::element::Element;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$Class* TypeParameterElement::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"asType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $ABSTRACT},
		{"getBounds", "()Ljava/util/List;", "()Ljava/util/List<+Ljavax/lang/model/type/TypeMirror;>;", $PUBLIC | $ABSTRACT, $virtualMethod(TypeParameterElement, getBounds, $List*)},
		{"getEnclosingElement", "()Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $ABSTRACT},
		{"getGenericElement", "()Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeParameterElement, getGenericElement, $Element*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.lang.model.element.TypeParameterElement",
		nullptr,
		"javax.lang.model.element.Element",
		nullptr,
		methodInfos$$
	};
	$loadClass(TypeParameterElement, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TypeParameterElement);
	});
	return class$;
}

$Class* TypeParameterElement::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax