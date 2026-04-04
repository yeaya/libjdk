#include <javax/xml/transform/dom/DOMLocator.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;

namespace javax {
	namespace xml {
		namespace transform {
			namespace dom {

$Class* DOMLocator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getOriginatingNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMLocator, getOriginatingNode, $Node*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.transform.dom.DOMLocator",
		nullptr,
		"javax.xml.transform.SourceLocator",
		nullptr,
		methodInfos$$
	};
	$loadClass(DOMLocator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DOMLocator);
	});
	return class$;
}

$Class* DOMLocator::class$ = nullptr;

			} // dom
		} // transform
	} // xml
} // javax