#include <org/w3c/dom/ElementTraversal.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::org::w3c::dom::Element;

namespace org {
	namespace w3c {
		namespace dom {

$Class* ElementTraversal::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getChildElementCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ElementTraversal, getChildElementCount, int32_t)},
		{"getFirstElementChild", "()Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ElementTraversal, getFirstElementChild, $Element*)},
		{"getLastElementChild", "()Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ElementTraversal, getLastElementChild, $Element*)},
		{"getNextElementSibling", "()Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ElementTraversal, getNextElementSibling, $Element*)},
		{"getPreviousElementSibling", "()Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ElementTraversal, getPreviousElementSibling, $Element*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.w3c.dom.ElementTraversal",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ElementTraversal, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ElementTraversal);
	});
	return class$;
}

$Class* ElementTraversal::class$ = nullptr;

		} // dom
	} // w3c
} // org