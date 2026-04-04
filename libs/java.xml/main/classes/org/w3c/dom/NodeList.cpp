#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace w3c {
		namespace dom {

$Class* NodeList::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NodeList, getLength, int32_t)},
		{"item", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NodeList, item, $Node*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.w3c.dom.NodeList",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NodeList, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NodeList);
	});
	return class$;
}

$Class* NodeList::class$ = nullptr;

		} // dom
	} // w3c
} // org