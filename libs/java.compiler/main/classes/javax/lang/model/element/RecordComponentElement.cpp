#include <javax/lang/model/element/RecordComponentElement.h>

#include <javax/lang/model/element/ExecutableElement.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::lang::model::element::Element;
using $ExecutableElement = ::javax::lang::model::element::ExecutableElement;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$MethodInfo _RecordComponentElement_MethodInfo_[] = {
	{"getAccessor", "()Ljavax/lang/model/element/ExecutableElement;", nullptr, $PUBLIC | $ABSTRACT},
	{"getEnclosingElement", "()Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSimpleName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _RecordComponentElement_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.element.RecordComponentElement",
	nullptr,
	"javax.lang.model.element.Element",
	nullptr,
	_RecordComponentElement_MethodInfo_
};

$Object* allocate$RecordComponentElement($Class* clazz) {
	return $of($alloc(RecordComponentElement));
}

$Class* RecordComponentElement::load$($String* name, bool initialize) {
	$loadClass(RecordComponentElement, name, initialize, &_RecordComponentElement_ClassInfo_, allocate$RecordComponentElement);
	return class$;
}

$Class* RecordComponentElement::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax