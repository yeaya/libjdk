#include <org/w3c/dom/DOMImplementationList.h>
#include <org/w3c/dom/DOMImplementation.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMImplementation = ::org::w3c::dom::DOMImplementation;

namespace org {
	namespace w3c {
		namespace dom {

$Class* DOMImplementationList::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMImplementationList, getLength, int32_t)},
		{"item", "(I)Lorg/w3c/dom/DOMImplementation;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMImplementationList, item, $DOMImplementation*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.w3c.dom.DOMImplementationList",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DOMImplementationList, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DOMImplementationList);
	});
	return class$;
}

$Class* DOMImplementationList::class$ = nullptr;

		} // dom
	} // w3c
} // org