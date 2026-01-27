#include <org/w3c/dom/Node.h>

#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/UserDataHandler.h>
#include <jcpp.h>

#undef ATTRIBUTE_NODE
#undef CDATA_SECTION_NODE
#undef COMMENT_NODE
#undef DOCUMENT_FRAGMENT_NODE
#undef DOCUMENT_NODE
#undef DOCUMENT_POSITION_CONTAINED_BY
#undef DOCUMENT_POSITION_CONTAINS
#undef DOCUMENT_POSITION_DISCONNECTED
#undef DOCUMENT_POSITION_FOLLOWING
#undef DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC
#undef DOCUMENT_POSITION_PRECEDING
#undef DOCUMENT_TYPE_NODE
#undef ELEMENT_NODE
#undef ENTITY_NODE
#undef ENTITY_REFERENCE_NODE
#undef NOTATION_NODE
#undef PROCESSING_INSTRUCTION_NODE
#undef TEXT_NODE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Document = ::org::w3c::dom::Document;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $NodeList = ::org::w3c::dom::NodeList;
using $UserDataHandler = ::org::w3c::dom::UserDataHandler;

namespace org {
	namespace w3c {
		namespace dom {

$FieldInfo _Node_FieldInfo_[] = {
	{"ELEMENT_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Node, ELEMENT_NODE)},
	{"ATTRIBUTE_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Node, ATTRIBUTE_NODE)},
	{"TEXT_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Node, TEXT_NODE)},
	{"CDATA_SECTION_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Node, CDATA_SECTION_NODE)},
	{"ENTITY_REFERENCE_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Node, ENTITY_REFERENCE_NODE)},
	{"ENTITY_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Node, ENTITY_NODE)},
	{"PROCESSING_INSTRUCTION_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Node, PROCESSING_INSTRUCTION_NODE)},
	{"COMMENT_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Node, COMMENT_NODE)},
	{"DOCUMENT_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Node, DOCUMENT_NODE)},
	{"DOCUMENT_TYPE_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Node, DOCUMENT_TYPE_NODE)},
	{"DOCUMENT_FRAGMENT_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Node, DOCUMENT_FRAGMENT_NODE)},
	{"NOTATION_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Node, NOTATION_NODE)},
	{"DOCUMENT_POSITION_DISCONNECTED", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Node, DOCUMENT_POSITION_DISCONNECTED)},
	{"DOCUMENT_POSITION_PRECEDING", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Node, DOCUMENT_POSITION_PRECEDING)},
	{"DOCUMENT_POSITION_FOLLOWING", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Node, DOCUMENT_POSITION_FOLLOWING)},
	{"DOCUMENT_POSITION_CONTAINS", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Node, DOCUMENT_POSITION_CONTAINS)},
	{"DOCUMENT_POSITION_CONTAINED_BY", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Node, DOCUMENT_POSITION_CONTAINED_BY)},
	{"DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Node, DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC)},
	{}
};

$MethodInfo _Node_MethodInfo_[] = {
	{"appendChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, appendChild, Node*, Node*), "org.w3c.dom.DOMException"},
	{"cloneNode", "(Z)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, cloneNode, Node*, bool)},
	{"compareDocumentPosition", "(Lorg/w3c/dom/Node;)S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, compareDocumentPosition, int16_t, Node*), "org.w3c.dom.DOMException"},
	{"getAttributes", "()Lorg/w3c/dom/NamedNodeMap;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, getAttributes, $NamedNodeMap*)},
	{"getBaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, getBaseURI, $String*)},
	{"getChildNodes", "()Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, getChildNodes, $NodeList*)},
	{"getFeature", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, getFeature, $Object*, $String*, $String*)},
	{"getFirstChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, getFirstChild, Node*)},
	{"getLastChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, getLastChild, Node*)},
	{"getLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, getLocalName, $String*)},
	{"getNamespaceURI", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, getNamespaceURI, $String*)},
	{"getNextSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, getNextSibling, Node*)},
	{"getNodeName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, getNodeName, $String*)},
	{"getNodeType", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, getNodeType, int16_t)},
	{"getNodeValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, getNodeValue, $String*), "org.w3c.dom.DOMException"},
	{"getOwnerDocument", "()Lorg/w3c/dom/Document;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, getOwnerDocument, $Document*)},
	{"getParentNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, getParentNode, Node*)},
	{"getPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, getPrefix, $String*)},
	{"getPreviousSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, getPreviousSibling, Node*)},
	{"getTextContent", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, getTextContent, $String*), "org.w3c.dom.DOMException"},
	{"getUserData", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, getUserData, $Object*, $String*)},
	{"hasAttributes", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, hasAttributes, bool)},
	{"hasChildNodes", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, hasChildNodes, bool)},
	{"insertBefore", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, insertBefore, Node*, Node*, Node*), "org.w3c.dom.DOMException"},
	{"isDefaultNamespace", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, isDefaultNamespace, bool, $String*)},
	{"isEqualNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, isEqualNode, bool, Node*)},
	{"isSameNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, isSameNode, bool, Node*)},
	{"isSupported", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, isSupported, bool, $String*, $String*)},
	{"lookupNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, lookupNamespaceURI, $String*, $String*)},
	{"lookupPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, lookupPrefix, $String*, $String*)},
	{"normalize", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, normalize, void)},
	{"removeChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, removeChild, Node*, Node*), "org.w3c.dom.DOMException"},
	{"replaceChild", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, replaceChild, Node*, Node*, Node*), "org.w3c.dom.DOMException"},
	{"setNodeValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, setNodeValue, void, $String*), "org.w3c.dom.DOMException"},
	{"setPrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, setPrefix, void, $String*), "org.w3c.dom.DOMException"},
	{"setTextContent", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, setTextContent, void, $String*), "org.w3c.dom.DOMException"},
	{"setUserData", "(Ljava/lang/String;Ljava/lang/Object;Lorg/w3c/dom/UserDataHandler;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, setUserData, $Object*, $String*, Object$*, $UserDataHandler*)},
	{}
};

$ClassInfo _Node_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.Node",
	nullptr,
	nullptr,
	_Node_FieldInfo_,
	_Node_MethodInfo_
};

$Object* allocate$Node($Class* clazz) {
	return $of($alloc(Node));
}

$Class* Node::load$($String* name, bool initialize) {
	$loadClass(Node, name, initialize, &_Node_ClassInfo_, allocate$Node);
	return class$;
}

$Class* Node::class$ = nullptr;

		} // dom
	} // w3c
} // org