#include <javax/lang/model/element/TypeParameterElement.h>

#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$MethodInfo _TypeParameterElement_MethodInfo_[] = {
	{"asType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $ABSTRACT},
	{"getBounds", "()Ljava/util/List;", "()Ljava/util/List<+Ljavax/lang/model/type/TypeMirror;>;", $PUBLIC | $ABSTRACT},
	{"getEnclosingElement", "()Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $ABSTRACT},
	{"getGenericElement", "()Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TypeParameterElement_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.element.TypeParameterElement",
	nullptr,
	"javax.lang.model.element.Element",
	nullptr,
	_TypeParameterElement_MethodInfo_
};

$Object* allocate$TypeParameterElement($Class* clazz) {
	return $of($alloc(TypeParameterElement));
}

$Class* TypeParameterElement::load$($String* name, bool initialize) {
	$loadClass(TypeParameterElement, name, initialize, &_TypeParameterElement_ClassInfo_, allocate$TypeParameterElement);
	return class$;
}

$Class* TypeParameterElement::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax