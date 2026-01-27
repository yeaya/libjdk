#include <org/w3c/dom/ElementTraversal.h>

#include <org/w3c/dom/Element.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::org::w3c::dom::Element;

namespace org {
	namespace w3c {
		namespace dom {

$MethodInfo _ElementTraversal_MethodInfo_[] = {
	{"getChildElementCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ElementTraversal, getChildElementCount, int32_t)},
	{"getFirstElementChild", "()Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ElementTraversal, getFirstElementChild, $Element*)},
	{"getLastElementChild", "()Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ElementTraversal, getLastElementChild, $Element*)},
	{"getNextElementSibling", "()Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ElementTraversal, getNextElementSibling, $Element*)},
	{"getPreviousElementSibling", "()Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ElementTraversal, getPreviousElementSibling, $Element*)},
	{}
};

$ClassInfo _ElementTraversal_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.ElementTraversal",
	nullptr,
	nullptr,
	nullptr,
	_ElementTraversal_MethodInfo_
};

$Object* allocate$ElementTraversal($Class* clazz) {
	return $of($alloc(ElementTraversal));
}

$Class* ElementTraversal::load$($String* name, bool initialize) {
	$loadClass(ElementTraversal, name, initialize, &_ElementTraversal_ClassInfo_, allocate$ElementTraversal);
	return class$;
}

$Class* ElementTraversal::class$ = nullptr;

		} // dom
	} // w3c
} // org