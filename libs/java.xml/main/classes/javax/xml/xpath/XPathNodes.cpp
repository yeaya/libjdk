#include <javax/xml/xpath/XPathNodes.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;

namespace javax {
	namespace xml {
		namespace xpath {

$Class* XPathNodes::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"get", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPathNodes, get, $Node*, int32_t), "javax.xml.xpath.XPathException"},
		{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC | $ABSTRACT},
		{"size", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPathNodes, size, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.xpath.XPathNodes",
		nullptr,
		"java.lang.Iterable",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/lang/Iterable<Lorg/w3c/dom/Node;>;"
	};
	$loadClass(XPathNodes, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPathNodes);
	});
	return class$;
}

$Class* XPathNodes::class$ = nullptr;

		} // xpath
	} // xml
} // javax