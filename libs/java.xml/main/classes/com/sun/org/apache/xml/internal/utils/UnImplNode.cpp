#include <com/sun/org/apache/xml/internal/utils/UnImplNode.h>

#include <com/sun/org/apache/xml/internal/res/XMLErrorResources.h>
#include <com/sun/org/apache/xml/internal/res/XMLMessages.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/CDATASection.h>
#include <org/w3c/dom/Comment.h>
#include <org/w3c/dom/DOMConfiguration.h>
#include <org/w3c/dom/DOMImplementation.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/DocumentFragment.h>
#include <org/w3c/dom/DocumentType.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/EntityReference.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/ProcessingInstruction.h>
#include <org/w3c/dom/Text.h>
#include <org/w3c/dom/TypeInfo.h>
#include <org/w3c/dom/UserDataHandler.h>
#include <jcpp.h>

#undef ATTRIBUTE_NODE
#undef DOCUMENT_FRAGMENT_NODE
#undef DOCUMENT_TYPE_NODE
#undef ELEMENT_NODE
#undef ENTITY_NODE
#undef ER_FUNCTION_NOT_SUPPORTED
#undef NOTATION_NODE

using $XMLErrorResources = ::com::sun::org::apache::xml::internal::res::XMLErrorResources;
using $XMLMessages = ::com::sun::org::apache::xml::internal::res::XMLMessages;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Attr = ::org::w3c::dom::Attr;
using $CDATASection = ::org::w3c::dom::CDATASection;
using $Comment = ::org::w3c::dom::Comment;
using $DOMConfiguration = ::org::w3c::dom::DOMConfiguration;
using $DOMImplementation = ::org::w3c::dom::DOMImplementation;
using $Document = ::org::w3c::dom::Document;
using $DocumentFragment = ::org::w3c::dom::DocumentFragment;
using $DocumentType = ::org::w3c::dom::DocumentType;
using $Element = ::org::w3c::dom::Element;
using $EntityReference = ::org::w3c::dom::EntityReference;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;
using $ProcessingInstruction = ::org::w3c::dom::ProcessingInstruction;
using $Text = ::org::w3c::dom::Text;
using $TypeInfo = ::org::w3c::dom::TypeInfo;
using $UserDataHandler = ::org::w3c::dom::UserDataHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$FieldInfo _UnImplNode_FieldInfo_[] = {
	{"fDocumentURI", "Ljava/lang/String;", nullptr, $PROTECTED, $field(UnImplNode, fDocumentURI)},
	{"actualEncoding", "Ljava/lang/String;", nullptr, $PROTECTED, $field(UnImplNode, actualEncoding)},
	{"xmlEncoding", "Ljava/lang/String;", nullptr, $PRIVATE, $field(UnImplNode, xmlEncoding)},
	{"xmlStandalone", "Z", nullptr, $PRIVATE, $field(UnImplNode, xmlStandalone)},
	{"xmlVersion", "Ljava/lang/String;", nullptr, $PRIVATE, $field(UnImplNode, xmlVersion)},
	{}
};

$MethodInfo _UnImplNode_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(UnImplNode, init$, void)},
	{"adoptNode", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, adoptNode, $Node*, $Node*), "org.w3c.dom.DOMException"},
	{"appendChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, appendChild, $Node*, $Node*), "org.w3c.dom.DOMException"},
	{"appendData", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(UnImplNode, appendData, void, $String*), "org.w3c.dom.DOMException"},
	{"cloneNode", "(Z)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, cloneNode, $Node*, bool)},
	{"compareDocumentPosition", "(Lorg/w3c/dom/Node;)S", nullptr, $PUBLIC, $virtualMethod(UnImplNode, compareDocumentPosition, int16_t, $Node*), "org.w3c.dom.DOMException"},
	{"createAttribute", "(Ljava/lang/String;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, createAttribute, $Attr*, $String*), "org.w3c.dom.DOMException"},
	{"createAttributeNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, createAttributeNS, $Attr*, $String*, $String*), "org.w3c.dom.DOMException"},
	{"createCDATASection", "(Ljava/lang/String;)Lorg/w3c/dom/CDATASection;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, createCDATASection, $CDATASection*, $String*), "org.w3c.dom.DOMException"},
	{"createComment", "(Ljava/lang/String;)Lorg/w3c/dom/Comment;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, createComment, $Comment*, $String*)},
	{"createDocumentFragment", "()Lorg/w3c/dom/DocumentFragment;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, createDocumentFragment, $DocumentFragment*)},
	{"createElement", "(Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, createElement, $Element*, $String*), "org.w3c.dom.DOMException"},
	{"createElementNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, createElementNS, $Element*, $String*, $String*), "org.w3c.dom.DOMException"},
	{"createEntityReference", "(Ljava/lang/String;)Lorg/w3c/dom/EntityReference;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, createEntityReference, $EntityReference*, $String*), "org.w3c.dom.DOMException"},
	{"createProcessingInstruction", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/ProcessingInstruction;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, createProcessingInstruction, $ProcessingInstruction*, $String*, $String*), "org.w3c.dom.DOMException"},
	{"createTextNode", "(Ljava/lang/String;)Lorg/w3c/dom/Text;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, createTextNode, $Text*, $String*)},
	{"deleteData", "(II)V", nullptr, $PUBLIC, $virtualMethod(UnImplNode, deleteData, void, int32_t, int32_t), "org.w3c.dom.DOMException"},
	{"error", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(UnImplNode, error, void, $String*)},
	{"error", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(UnImplNode, error, void, $String*, $ObjectArray*)},
	{"getActualEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getActualEncoding, $String*)},
	{"getAttribute", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getAttribute, $String*, $String*)},
	{"getAttributeNS", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getAttributeNS, $String*, $String*, $String*)},
	{"getAttributeNode", "(Ljava/lang/String;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getAttributeNode, $Attr*, $String*)},
	{"getAttributeNodeNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getAttributeNodeNS, $Attr*, $String*, $String*)},
	{"getAttributes", "()Lorg/w3c/dom/NamedNodeMap;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getAttributes, $NamedNodeMap*)},
	{"getBaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getBaseURI, $String*)},
	{"getChildNodes", "()Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getChildNodes, $NodeList*)},
	{"getDoctype", "()Lorg/w3c/dom/DocumentType;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getDoctype, $DocumentType*)},
	{"getDocumentElement", "()Lorg/w3c/dom/Element;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getDocumentElement, $Element*)},
	{"getDocumentURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getDocumentURI, $String*)},
	{"getDomConfig", "()Lorg/w3c/dom/DOMConfiguration;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getDomConfig, $DOMConfiguration*)},
	{"getElementById", "(Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getElementById, $Element*, $String*)},
	{"getElementsByTagName", "(Ljava/lang/String;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getElementsByTagName, $NodeList*, $String*)},
	{"getElementsByTagNameNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getElementsByTagNameNS, $NodeList*, $String*, $String*)},
	{"getFeature", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getFeature, $Object*, $String*, $String*)},
	{"getFirstChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getFirstChild, $Node*)},
	{"getImplementation", "()Lorg/w3c/dom/DOMImplementation;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getImplementation, $DOMImplementation*)},
	{"getInputEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getInputEncoding, $String*)},
	{"getLastChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getLastChild, $Node*)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getLength, int32_t)},
	{"getLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getLocalName, $String*)},
	{"getNamespaceURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getNamespaceURI, $String*)},
	{"getNextSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getNextSibling, $Node*)},
	{"getNodeName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getNodeName, $String*)},
	{"getNodeType", "()S", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getNodeType, int16_t)},
	{"getNodeValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getNodeValue, $String*), "org.w3c.dom.DOMException"},
	{"getOwnerDocument", "()Lorg/w3c/dom/Document;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getOwnerDocument, $Document*)},
	{"getOwnerElement", "()Lorg/w3c/dom/Element;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getOwnerElement, $Element*)},
	{"getParentNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getParentNode, $Node*)},
	{"getPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getPrefix, $String*)},
	{"getPreviousSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getPreviousSibling, $Node*)},
	{"getSchemaTypeInfo", "()Lorg/w3c/dom/TypeInfo;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getSchemaTypeInfo, $TypeInfo*)},
	{"getSpecified", "()Z", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getSpecified, bool)},
	{"getStandalone", "()Z", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getStandalone, bool)},
	{"getStrictErrorChecking", "()Z", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getStrictErrorChecking, bool)},
	{"getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getTagName, $String*)},
	{"getTextContent", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getTextContent, $String*), "org.w3c.dom.DOMException"},
	{"getUserData", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getUserData, $Object*, $String*)},
	{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getVersion, $String*)},
	{"getWholeText", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getWholeText, $String*)},
	{"getXmlEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getXmlEncoding, $String*)},
	{"getXmlStandalone", "()Z", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getXmlStandalone, bool)},
	{"getXmlVersion", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, getXmlVersion, $String*)},
	{"hasAttribute", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(UnImplNode, hasAttribute, bool, $String*)},
	{"hasAttributeNS", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(UnImplNode, hasAttributeNS, bool, $String*, $String*)},
	{"hasAttributes", "()Z", nullptr, $PUBLIC, $virtualMethod(UnImplNode, hasAttributes, bool)},
	{"hasChildNodes", "()Z", nullptr, $PUBLIC, $virtualMethod(UnImplNode, hasChildNodes, bool)},
	{"importNode", "(Lorg/w3c/dom/Node;Z)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, importNode, $Node*, $Node*, bool), "org.w3c.dom.DOMException"},
	{"insertBefore", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, insertBefore, $Node*, $Node*, $Node*), "org.w3c.dom.DOMException"},
	{"insertData", "(ILjava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(UnImplNode, insertData, void, int32_t, $String*), "org.w3c.dom.DOMException"},
	{"isDefaultNamespace", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(UnImplNode, isDefaultNamespace, bool, $String*)},
	{"isEqualNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC, $virtualMethod(UnImplNode, isEqualNode, bool, $Node*)},
	{"isId", "()Z", nullptr, $PUBLIC, $virtualMethod(UnImplNode, isId, bool)},
	{"isSameNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC, $virtualMethod(UnImplNode, isSameNode, bool, $Node*)},
	{"isSupported", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(UnImplNode, isSupported, bool, $String*, $String*)},
	{"isWhitespaceInElementContent", "()Z", nullptr, $PUBLIC, $virtualMethod(UnImplNode, isWhitespaceInElementContent, bool)},
	{"item", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, item, $Node*, int32_t)},
	{"lookupNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, lookupNamespaceURI, $String*, $String*)},
	{"lookupPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, lookupPrefix, $String*, $String*)},
	{"normalize", "()V", nullptr, $PUBLIC, $virtualMethod(UnImplNode, normalize, void)},
	{"normalizeDocument", "()V", nullptr, $PUBLIC, $virtualMethod(UnImplNode, normalizeDocument, void)},
	{"removeAttribute", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(UnImplNode, removeAttribute, void, $String*), "org.w3c.dom.DOMException"},
	{"removeAttributeNS", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(UnImplNode, removeAttributeNS, void, $String*, $String*), "org.w3c.dom.DOMException"},
	{"removeAttributeNode", "(Lorg/w3c/dom/Attr;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, removeAttributeNode, $Attr*, $Attr*), "org.w3c.dom.DOMException"},
	{"removeChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, removeChild, $Node*, $Node*), "org.w3c.dom.DOMException"},
	{"renameNode", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, renameNode, $Node*, $Node*, $String*, $String*), "org.w3c.dom.DOMException"},
	{"replaceChild", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, replaceChild, $Node*, $Node*, $Node*), "org.w3c.dom.DOMException"},
	{"replaceData", "(IILjava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(UnImplNode, replaceData, void, int32_t, int32_t, $String*), "org.w3c.dom.DOMException"},
	{"replaceWholeText", "(Ljava/lang/String;)Lorg/w3c/dom/Text;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, replaceWholeText, $Text*, $String*), "org.w3c.dom.DOMException"},
	{"setActualEncoding", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(UnImplNode, setActualEncoding, void, $String*)},
	{"setAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(UnImplNode, setAttribute, void, $String*, $String*), "org.w3c.dom.DOMException"},
	{"setAttributeNS", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(UnImplNode, setAttributeNS, void, $String*, $String*, $String*), "org.w3c.dom.DOMException"},
	{"setAttributeNode", "(Lorg/w3c/dom/Attr;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, setAttributeNode, $Attr*, $Attr*), "org.w3c.dom.DOMException"},
	{"setAttributeNodeNS", "(Lorg/w3c/dom/Attr;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, setAttributeNodeNS, $Attr*, $Attr*), "org.w3c.dom.DOMException"},
	{"setData", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(UnImplNode, setData, void, $String*), "org.w3c.dom.DOMException"},
	{"setDocumentURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(UnImplNode, setDocumentURI, void, $String*)},
	{"setIdAttribute", "(Z)V", nullptr, $PUBLIC, $virtualMethod(UnImplNode, setIdAttribute, void, bool)},
	{"setIdAttribute", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(UnImplNode, setIdAttribute, void, $String*, bool)},
	{"setIdAttributeNS", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(UnImplNode, setIdAttributeNS, void, $String*, $String*, bool)},
	{"setIdAttributeNode", "(Lorg/w3c/dom/Attr;Z)V", nullptr, $PUBLIC, $virtualMethod(UnImplNode, setIdAttributeNode, void, $Attr*, bool)},
	{"setInputEncoding", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(UnImplNode, setInputEncoding, void, $String*)},
	{"setNodeValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(UnImplNode, setNodeValue, void, $String*), "org.w3c.dom.DOMException"},
	{"setPrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(UnImplNode, setPrefix, void, $String*), "org.w3c.dom.DOMException"},
	{"setStandalone", "(Z)V", nullptr, $PUBLIC, $virtualMethod(UnImplNode, setStandalone, void, bool)},
	{"setStrictErrorChecking", "(Z)V", nullptr, $PUBLIC, $virtualMethod(UnImplNode, setStrictErrorChecking, void, bool)},
	{"setTextContent", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(UnImplNode, setTextContent, void, $String*), "org.w3c.dom.DOMException"},
	{"setUserData", "(Ljava/lang/String;Ljava/lang/Object;Lorg/w3c/dom/UserDataHandler;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, setUserData, $Object*, $String*, Object$*, $UserDataHandler*)},
	{"setValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(UnImplNode, setValue, void, $String*), "org.w3c.dom.DOMException"},
	{"setVersion", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(UnImplNode, setVersion, void, $String*)},
	{"setXmlEncoding", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(UnImplNode, setXmlEncoding, void, $String*)},
	{"setXmlStandalone", "(Z)V", nullptr, $PUBLIC, $virtualMethod(UnImplNode, setXmlStandalone, void, bool), "org.w3c.dom.DOMException"},
	{"setXmlVersion", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(UnImplNode, setXmlVersion, void, $String*), "org.w3c.dom.DOMException"},
	{"splitText", "(I)Lorg/w3c/dom/Text;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, splitText, $Text*, int32_t), "org.w3c.dom.DOMException"},
	{"substringData", "(II)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnImplNode, substringData, $String*, int32_t, int32_t), "org.w3c.dom.DOMException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _UnImplNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.UnImplNode",
	"java.lang.Object",
	"org.w3c.dom.Element,org.w3c.dom.NodeList,org.w3c.dom.Document",
	_UnImplNode_FieldInfo_,
	_UnImplNode_MethodInfo_
};

$Object* allocate$UnImplNode($Class* clazz) {
	return $of($alloc(UnImplNode));
}

int32_t UnImplNode::hashCode() {
	 return this->$Element::hashCode();
}

bool UnImplNode::equals(Object$* arg0) {
	 return this->$Element::equals(arg0);
}

$Object* UnImplNode::clone() {
	 return this->$Element::clone();
}

$String* UnImplNode::toString() {
	 return this->$Element::toString();
}

void UnImplNode::finalize() {
	this->$Element::finalize();
}

void UnImplNode::init$() {
}

void UnImplNode::error($String* msg) {
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println($$str({"DOM ERROR! class: "_s, $($of(this)->getClass()->getName())}));
	$throwNew($RuntimeException, $($XMLMessages::createXMLMessage(msg, nullptr)));
}

void UnImplNode::error($String* msg, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println($$str({"DOM ERROR! class: "_s, $($of(this)->getClass()->getName())}));
	$throwNew($RuntimeException, $($XMLMessages::createXMLMessage(msg, args)));
}

$Node* UnImplNode::appendChild($Node* newChild) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

bool UnImplNode::hasChildNodes() {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return false;
}

int16_t UnImplNode::getNodeType() {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return (int16_t)0;
}

$Node* UnImplNode::getParentNode() {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

$NodeList* UnImplNode::getChildNodes() {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

$Node* UnImplNode::getFirstChild() {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

$Node* UnImplNode::getLastChild() {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

$Node* UnImplNode::getNextSibling() {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

int32_t UnImplNode::getLength() {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return 0;
}

$Node* UnImplNode::item(int32_t index) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

$Document* UnImplNode::getOwnerDocument() {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

$String* UnImplNode::getTagName() {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

$String* UnImplNode::getNodeName() {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

void UnImplNode::normalize() {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
}

$NodeList* UnImplNode::getElementsByTagName($String* name) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

$Attr* UnImplNode::removeAttributeNode($Attr* oldAttr) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

$Attr* UnImplNode::setAttributeNode($Attr* newAttr) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

bool UnImplNode::hasAttribute($String* name) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return false;
}

bool UnImplNode::hasAttributeNS($String* name, $String* x) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return false;
}

$Attr* UnImplNode::getAttributeNode($String* name) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

void UnImplNode::removeAttribute($String* name) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
}

void UnImplNode::setAttribute($String* name, $String* value) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
}

$String* UnImplNode::getAttribute($String* name) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

bool UnImplNode::hasAttributes() {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return false;
}

$NodeList* UnImplNode::getElementsByTagNameNS($String* namespaceURI, $String* localName) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

$Attr* UnImplNode::setAttributeNodeNS($Attr* newAttr) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

$Attr* UnImplNode::getAttributeNodeNS($String* namespaceURI, $String* localName) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

void UnImplNode::removeAttributeNS($String* namespaceURI, $String* localName) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
}

void UnImplNode::setAttributeNS($String* namespaceURI, $String* qualifiedName, $String* value) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
}

$String* UnImplNode::getAttributeNS($String* namespaceURI, $String* localName) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

$Node* UnImplNode::getPreviousSibling() {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

$Node* UnImplNode::cloneNode(bool deep) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

$String* UnImplNode::getNodeValue() {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

void UnImplNode::setNodeValue($String* nodeValue) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
}

void UnImplNode::setValue($String* value) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
}

$Element* UnImplNode::getOwnerElement() {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

bool UnImplNode::getSpecified() {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return false;
}

$NamedNodeMap* UnImplNode::getAttributes() {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

$Node* UnImplNode::insertBefore($Node* newChild, $Node* refChild) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

$Node* UnImplNode::replaceChild($Node* newChild, $Node* oldChild) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

$Node* UnImplNode::removeChild($Node* oldChild) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

bool UnImplNode::isSupported($String* feature, $String* version) {
	return false;
}

$String* UnImplNode::getNamespaceURI() {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

$String* UnImplNode::getPrefix() {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

void UnImplNode::setPrefix($String* prefix) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
}

$String* UnImplNode::getLocalName() {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

$DocumentType* UnImplNode::getDoctype() {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

$DOMImplementation* UnImplNode::getImplementation() {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

$Element* UnImplNode::getDocumentElement() {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

$Element* UnImplNode::createElement($String* tagName) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

$DocumentFragment* UnImplNode::createDocumentFragment() {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

$Text* UnImplNode::createTextNode($String* data) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

$Comment* UnImplNode::createComment($String* data) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

$CDATASection* UnImplNode::createCDATASection($String* data) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

$ProcessingInstruction* UnImplNode::createProcessingInstruction($String* target, $String* data) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

$Attr* UnImplNode::createAttribute($String* name) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

$EntityReference* UnImplNode::createEntityReference($String* name) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

$Node* UnImplNode::importNode($Node* importedNode, bool deep) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

$Element* UnImplNode::createElementNS($String* namespaceURI, $String* qualifiedName) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

$Attr* UnImplNode::createAttributeNS($String* namespaceURI, $String* qualifiedName) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

$Element* UnImplNode::getElementById($String* elementId) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

void UnImplNode::setData($String* data) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
}

$String* UnImplNode::substringData(int32_t offset, int32_t count) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

void UnImplNode::appendData($String* arg) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
}

void UnImplNode::insertData(int32_t offset, $String* arg) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
}

void UnImplNode::deleteData(int32_t offset, int32_t count) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
}

void UnImplNode::replaceData(int32_t offset, int32_t count, $String* arg) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
}

$Text* UnImplNode::splitText(int32_t offset) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

$Node* UnImplNode::adoptNode($Node* source) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

$String* UnImplNode::getInputEncoding() {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

void UnImplNode::setInputEncoding($String* encoding) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
}

bool UnImplNode::getStandalone() {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return false;
}

void UnImplNode::setStandalone(bool standalone) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
}

bool UnImplNode::getStrictErrorChecking() {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return false;
}

void UnImplNode::setStrictErrorChecking(bool strictErrorChecking) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
}

$String* UnImplNode::getVersion() {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
	return nullptr;
}

void UnImplNode::setVersion($String* version) {
	$init($XMLErrorResources);
	error($XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED);
}

$Object* UnImplNode::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	return $of($nc($(getOwnerDocument()))->setUserData(key, data, handler));
}

$Object* UnImplNode::getUserData($String* key) {
	return $of($nc($(getOwnerDocument()))->getUserData(key));
}

$Object* UnImplNode::getFeature($String* feature, $String* version) {
	return $of(isSupported(feature, version) ? $of(this) : ($Object*)nullptr);
}

bool UnImplNode::isEqualNode($Node* arg) {
	$useLocalCurrentObjectStackCache();
	if ($equals(arg, this)) {
		return true;
	}
	int16_t var$0 = $nc(arg)->getNodeType();
	if (var$0 != getNodeType()) {
		return false;
	}
	if (getNodeName() == nullptr) {
		if ($nc(arg)->getNodeName() != nullptr) {
			return false;
		}
	} else if (!$nc($(getNodeName()))->equals($($nc(arg)->getNodeName()))) {
		return false;
	}
	if (getLocalName() == nullptr) {
		if ($nc(arg)->getLocalName() != nullptr) {
			return false;
		}
	} else if (!$nc($(getLocalName()))->equals($($nc(arg)->getLocalName()))) {
		return false;
	}
	if (getNamespaceURI() == nullptr) {
		if ($nc(arg)->getNamespaceURI() != nullptr) {
			return false;
		}
	} else if (!$nc($(getNamespaceURI()))->equals($($nc(arg)->getNamespaceURI()))) {
		return false;
	}
	if (getPrefix() == nullptr) {
		if ($nc(arg)->getPrefix() != nullptr) {
			return false;
		}
	} else if (!$nc($(getPrefix()))->equals($($nc(arg)->getPrefix()))) {
		return false;
	}
	if (getNodeValue() == nullptr) {
		if ($nc(arg)->getNodeValue() != nullptr) {
			return false;
		}
	} else if (!$nc($(getNodeValue()))->equals($($nc(arg)->getNodeValue()))) {
		return false;
	}
	return true;
}

$String* UnImplNode::lookupNamespaceURI($String* specifiedPrefix) {
	$useLocalCurrentObjectStackCache();
	int16_t type = this->getNodeType();
	switch (type) {
	case $Node::ELEMENT_NODE:
		{
			{
				$var($String, namespace$, this->getNamespaceURI());
				$var($String, prefix, this->getPrefix());
				if (namespace$ != nullptr) {
					if (specifiedPrefix == nullptr && prefix == specifiedPrefix) {
						return namespace$;
					} else if (prefix != nullptr && prefix->equals(specifiedPrefix)) {
						return namespace$;
					}
				}
				if (this->hasAttributes()) {
					$var($NamedNodeMap, map, this->getAttributes());
					int32_t length = $nc(map)->getLength();
					for (int32_t i = 0; i < length; ++i) {
						$var($Node, attr, map->item(i));
						$var($String, attrPrefix, $nc(attr)->getPrefix());
						$var($String, value, attr->getNodeValue());
						$assign(namespace$, attr->getNamespaceURI());
						if (namespace$ != nullptr && namespace$->equals("http://www.w3.org/2000/xmlns/"_s)) {
							if (specifiedPrefix == nullptr && $nc($(attr->getNodeName()))->equals("xmlns"_s)) {
								return value;
							} else {
								bool var$1 = attrPrefix != nullptr && attrPrefix->equals("xmlns"_s);
								if (var$1 && $nc($(attr->getLocalName()))->equals(specifiedPrefix)) {
									return value;
								}
							}
						}
					}
				}
				return nullptr;
			}
		}
	case $Node::ENTITY_NODE:
		{}
	case $Node::NOTATION_NODE:
		{}
	case $Node::DOCUMENT_FRAGMENT_NODE:
		{}
	case $Node::DOCUMENT_TYPE_NODE:
		{
			return nullptr;
		}
	case $Node::ATTRIBUTE_NODE:
		{
			{
				if ($nc($(this->getOwnerElement()))->getNodeType() == $Node::ELEMENT_NODE) {
					return $nc($(getOwnerElement()))->lookupNamespaceURI(specifiedPrefix);
				}
				return nullptr;
			}
		}
	default:
		{
			{
				return nullptr;
			}
		}
	}
}

bool UnImplNode::isDefaultNamespace($String* namespaceURI) {
	return false;
}

$String* UnImplNode::lookupPrefix($String* namespaceURI) {
	$useLocalCurrentObjectStackCache();
	if (namespaceURI == nullptr) {
		return nullptr;
	}
	int16_t type = this->getNodeType();
	switch (type) {
	case $Node::ENTITY_NODE:
		{}
	case $Node::NOTATION_NODE:
		{}
	case $Node::DOCUMENT_FRAGMENT_NODE:
		{}
	case $Node::DOCUMENT_TYPE_NODE:
		{
			return nullptr;
		}
	case $Node::ATTRIBUTE_NODE:
		{
			{
				if ($nc($(this->getOwnerElement()))->getNodeType() == $Node::ELEMENT_NODE) {
					return $nc($(getOwnerElement()))->lookupPrefix(namespaceURI);
				}
				return nullptr;
			}
		}
	default:
		{
			{
				return nullptr;
			}
		}
	}
}

bool UnImplNode::isSameNode($Node* other) {
	return $equals(this, other);
}

void UnImplNode::setTextContent($String* textContent) {
	setNodeValue(textContent);
}

$String* UnImplNode::getTextContent() {
	return getNodeValue();
}

int16_t UnImplNode::compareDocumentPosition($Node* other) {
	return (int16_t)0;
}

$String* UnImplNode::getBaseURI() {
	return nullptr;
}

$Node* UnImplNode::renameNode($Node* n, $String* namespaceURI, $String* name) {
	return n;
}

void UnImplNode::normalizeDocument() {
}

$DOMConfiguration* UnImplNode::getDomConfig() {
	return nullptr;
}

void UnImplNode::setDocumentURI($String* documentURI) {
	$set(this, fDocumentURI, documentURI);
}

$String* UnImplNode::getDocumentURI() {
	return this->fDocumentURI;
}

$String* UnImplNode::getActualEncoding() {
	return this->actualEncoding;
}

void UnImplNode::setActualEncoding($String* value) {
	$set(this, actualEncoding, value);
}

$Text* UnImplNode::replaceWholeText($String* content) {
	return nullptr;
}

$String* UnImplNode::getWholeText() {
	return nullptr;
}

bool UnImplNode::isWhitespaceInElementContent() {
	return false;
}

void UnImplNode::setIdAttribute(bool id) {
}

void UnImplNode::setIdAttribute($String* name, bool makeId) {
}

void UnImplNode::setIdAttributeNode($Attr* at, bool makeId) {
}

void UnImplNode::setIdAttributeNS($String* namespaceURI, $String* localName, bool makeId) {
}

$TypeInfo* UnImplNode::getSchemaTypeInfo() {
	return nullptr;
}

bool UnImplNode::isId() {
	return false;
}

$String* UnImplNode::getXmlEncoding() {
	return this->xmlEncoding;
}

void UnImplNode::setXmlEncoding($String* xmlEncoding) {
	$set(this, xmlEncoding, xmlEncoding);
}

bool UnImplNode::getXmlStandalone() {
	return this->xmlStandalone;
}

void UnImplNode::setXmlStandalone(bool xmlStandalone) {
	this->xmlStandalone = xmlStandalone;
}

$String* UnImplNode::getXmlVersion() {
	return this->xmlVersion;
}

void UnImplNode::setXmlVersion($String* xmlVersion) {
	$set(this, xmlVersion, xmlVersion);
}

UnImplNode::UnImplNode() {
}

$Class* UnImplNode::load$($String* name, bool initialize) {
	$loadClass(UnImplNode, name, initialize, &_UnImplNode_ClassInfo_, allocate$UnImplNode);
	return class$;
}

$Class* UnImplNode::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com