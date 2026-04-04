#include <javax/lang/model/element/RecordComponentElement.h>
#include <javax/lang/model/element/ExecutableElement.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExecutableElement = ::javax::lang::model::element::ExecutableElement;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$Class* RecordComponentElement::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAccessor", "()Ljavax/lang/model/element/ExecutableElement;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RecordComponentElement, getAccessor, $ExecutableElement*)},
		{"getEnclosingElement", "()Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $ABSTRACT},
		{"getSimpleName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.lang.model.element.RecordComponentElement",
		nullptr,
		"javax.lang.model.element.Element",
		nullptr,
		methodInfos$$
	};
	$loadClass(RecordComponentElement, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RecordComponentElement);
	});
	return class$;
}

$Class* RecordComponentElement::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax