#include <org/w3c/dom/NamedNodeMap.h>

#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace w3c {
		namespace dom {

$MethodInfo _NamedNodeMap_MethodInfo_[] = {
	{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NamedNodeMap, getLength, int32_t)},
	{"getNamedItem", "(Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NamedNodeMap, getNamedItem, $Node*, $String*)},
	{"getNamedItemNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NamedNodeMap, getNamedItemNS, $Node*, $String*, $String*), "org.w3c.dom.DOMException"},
	{"item", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NamedNodeMap, item, $Node*, int32_t)},
	{"removeNamedItem", "(Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NamedNodeMap, removeNamedItem, $Node*, $String*), "org.w3c.dom.DOMException"},
	{"removeNamedItemNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NamedNodeMap, removeNamedItemNS, $Node*, $String*, $String*), "org.w3c.dom.DOMException"},
	{"setNamedItem", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NamedNodeMap, setNamedItem, $Node*, $Node*), "org.w3c.dom.DOMException"},
	{"setNamedItemNS", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NamedNodeMap, setNamedItemNS, $Node*, $Node*), "org.w3c.dom.DOMException"},
	{}
};

$ClassInfo _NamedNodeMap_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.NamedNodeMap",
	nullptr,
	nullptr,
	nullptr,
	_NamedNodeMap_MethodInfo_
};

$Object* allocate$NamedNodeMap($Class* clazz) {
	return $of($alloc(NamedNodeMap));
}

$Class* NamedNodeMap::load$($String* name, bool initialize) {
	$loadClass(NamedNodeMap, name, initialize, &_NamedNodeMap_ClassInfo_, allocate$NamedNodeMap);
	return class$;
}

$Class* NamedNodeMap::class$ = nullptr;

		} // dom
	} // w3c
} // org