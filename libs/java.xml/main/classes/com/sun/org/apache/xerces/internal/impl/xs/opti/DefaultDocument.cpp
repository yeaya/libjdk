#include <com/sun/org/apache/xerces/internal/impl/xs/opti/DefaultDocument.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/opti/NodeImpl.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/CDATASection.h>
#include <org/w3c/dom/Comment.h>
#include <org/w3c/dom/DOMConfiguration.h>
#include <org/w3c/dom/DOMException.h>
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
#include <org/w3c/dom/UserDataHandler.h>
#include <jcpp.h>

#undef NOT_SUPPORTED_ERR

using $NodeImpl = ::com::sun::org::apache::xerces::internal::impl::xs::opti::NodeImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attr = ::org::w3c::dom::Attr;
using $CDATASection = ::org::w3c::dom::CDATASection;
using $Comment = ::org::w3c::dom::Comment;
using $DOMConfiguration = ::org::w3c::dom::DOMConfiguration;
using $DOMException = ::org::w3c::dom::DOMException;
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
using $UserDataHandler = ::org::w3c::dom::UserDataHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace opti {

$FieldInfo _DefaultDocument_FieldInfo_[] = {
	{"fDocumentURI", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DefaultDocument, fDocumentURI)},
	{}
};

$MethodInfo _DefaultDocument_MethodInfo_[] = {
	{"*appendChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*cloneNode", "(Z)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*compareDocumentPosition", "(Lorg/w3c/dom/Node;)S", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAttributes", "()Lorg/w3c/dom/NamedNodeMap;", nullptr, $PUBLIC},
	{"*getBaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getChildNodes", "()Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC},
	{"*getFeature", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*getFirstChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*getLastChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*getLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getNamespaceURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getNextSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*getNodeName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getNodeType", "()S", nullptr, $PUBLIC},
	{"*getNodeValue", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getOwnerDocument", "()Lorg/w3c/dom/Document;", nullptr, $PUBLIC},
	{"*getParentNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*getPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getPreviousSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*getTextContent", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getUserData", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*hasAttributes", "()Z", nullptr, $PUBLIC},
	{"*hasChildNodes", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultDocument, init$, void)},
	{"adoptNode", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DefaultDocument, adoptNode, $Node*, $Node*), "org.w3c.dom.DOMException"},
	{"createAttribute", "(Ljava/lang/String;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC, $virtualMethod(DefaultDocument, createAttribute, $Attr*, $String*), "org.w3c.dom.DOMException"},
	{"createAttributeNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC, $virtualMethod(DefaultDocument, createAttributeNS, $Attr*, $String*, $String*), "org.w3c.dom.DOMException"},
	{"createCDATASection", "(Ljava/lang/String;)Lorg/w3c/dom/CDATASection;", nullptr, $PUBLIC, $virtualMethod(DefaultDocument, createCDATASection, $CDATASection*, $String*), "org.w3c.dom.DOMException"},
	{"createComment", "(Ljava/lang/String;)Lorg/w3c/dom/Comment;", nullptr, $PUBLIC, $virtualMethod(DefaultDocument, createComment, $Comment*, $String*)},
	{"createDocumentFragment", "()Lorg/w3c/dom/DocumentFragment;", nullptr, $PUBLIC, $virtualMethod(DefaultDocument, createDocumentFragment, $DocumentFragment*)},
	{"createElement", "(Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC, $virtualMethod(DefaultDocument, createElement, $Element*, $String*), "org.w3c.dom.DOMException"},
	{"createElementNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC, $virtualMethod(DefaultDocument, createElementNS, $Element*, $String*, $String*), "org.w3c.dom.DOMException"},
	{"createEntityReference", "(Ljava/lang/String;)Lorg/w3c/dom/EntityReference;", nullptr, $PUBLIC, $virtualMethod(DefaultDocument, createEntityReference, $EntityReference*, $String*), "org.w3c.dom.DOMException"},
	{"createProcessingInstruction", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/ProcessingInstruction;", nullptr, $PUBLIC, $virtualMethod(DefaultDocument, createProcessingInstruction, $ProcessingInstruction*, $String*, $String*), "org.w3c.dom.DOMException"},
	{"createTextNode", "(Ljava/lang/String;)Lorg/w3c/dom/Text;", nullptr, $PUBLIC, $virtualMethod(DefaultDocument, createTextNode, $Text*, $String*)},
	{"getDoctype", "()Lorg/w3c/dom/DocumentType;", nullptr, $PUBLIC, $virtualMethod(DefaultDocument, getDoctype, $DocumentType*)},
	{"getDocumentElement", "()Lorg/w3c/dom/Element;", nullptr, $PUBLIC, $virtualMethod(DefaultDocument, getDocumentElement, $Element*)},
	{"getDocumentURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DefaultDocument, getDocumentURI, $String*)},
	{"getDomConfig", "()Lorg/w3c/dom/DOMConfiguration;", nullptr, $PUBLIC, $virtualMethod(DefaultDocument, getDomConfig, $DOMConfiguration*)},
	{"getElementById", "(Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC, $virtualMethod(DefaultDocument, getElementById, $Element*, $String*)},
	{"getElementsByTagName", "(Ljava/lang/String;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC, $virtualMethod(DefaultDocument, getElementsByTagName, $NodeList*, $String*)},
	{"getElementsByTagNameNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC, $virtualMethod(DefaultDocument, getElementsByTagNameNS, $NodeList*, $String*, $String*)},
	{"getImplementation", "()Lorg/w3c/dom/DOMImplementation;", nullptr, $PUBLIC, $virtualMethod(DefaultDocument, getImplementation, $DOMImplementation*)},
	{"getInputEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DefaultDocument, getInputEncoding, $String*)},
	{"getStrictErrorChecking", "()Z", nullptr, $PUBLIC, $virtualMethod(DefaultDocument, getStrictErrorChecking, bool)},
	{"getXmlEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DefaultDocument, getXmlEncoding, $String*)},
	{"getXmlStandalone", "()Z", nullptr, $PUBLIC, $virtualMethod(DefaultDocument, getXmlStandalone, bool)},
	{"getXmlVersion", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DefaultDocument, getXmlVersion, $String*)},
	{"importNode", "(Lorg/w3c/dom/Node;Z)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DefaultDocument, importNode, $Node*, $Node*, bool), "org.w3c.dom.DOMException"},
	{"*insertBefore", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*isDefaultNamespace", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"*isEqualNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC},
	{"*isSameNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC},
	{"*isSupported", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"*lookupNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*lookupPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*normalize", "()V", nullptr, $PUBLIC},
	{"normalizeDocument", "()V", nullptr, $PUBLIC, $virtualMethod(DefaultDocument, normalizeDocument, void)},
	{"*removeChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"renameNode", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DefaultDocument, renameNode, $Node*, $Node*, $String*, $String*), "org.w3c.dom.DOMException"},
	{"*replaceChild", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"setDocumentURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DefaultDocument, setDocumentURI, void, $String*)},
	{"*setNodeValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setPrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setStrictErrorChecking", "(Z)V", nullptr, $PUBLIC, $virtualMethod(DefaultDocument, setStrictErrorChecking, void, bool)},
	{"*setTextContent", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setUserData", "(Ljava/lang/String;Ljava/lang/Object;Lorg/w3c/dom/UserDataHandler;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"setXmlStandalone", "(Z)V", nullptr, $PUBLIC, $virtualMethod(DefaultDocument, setXmlStandalone, void, bool)},
	{"setXmlVersion", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DefaultDocument, setXmlVersion, void, $String*), "org.w3c.dom.DOMException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DefaultDocument_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.opti.DefaultDocument",
	"com.sun.org.apache.xerces.internal.impl.xs.opti.NodeImpl",
	"org.w3c.dom.Document",
	_DefaultDocument_FieldInfo_,
	_DefaultDocument_MethodInfo_
};

$Object* allocate$DefaultDocument($Class* clazz) {
	return $of($alloc(DefaultDocument));
}

$String* DefaultDocument::getNodeName() {
	 return this->$NodeImpl::getNodeName();
}

$String* DefaultDocument::getNamespaceURI() {
	 return this->$NodeImpl::getNamespaceURI();
}

$String* DefaultDocument::getPrefix() {
	 return this->$NodeImpl::getPrefix();
}

$String* DefaultDocument::getLocalName() {
	 return this->$NodeImpl::getLocalName();
}

int16_t DefaultDocument::getNodeType() {
	 return this->$NodeImpl::getNodeType();
}

$String* DefaultDocument::getNodeValue() {
	 return this->$NodeImpl::getNodeValue();
}

$Node* DefaultDocument::getParentNode() {
	 return this->$NodeImpl::getParentNode();
}

$NodeList* DefaultDocument::getChildNodes() {
	 return this->$NodeImpl::getChildNodes();
}

$Node* DefaultDocument::getFirstChild() {
	 return this->$NodeImpl::getFirstChild();
}

$Node* DefaultDocument::getLastChild() {
	 return this->$NodeImpl::getLastChild();
}

$Node* DefaultDocument::getPreviousSibling() {
	 return this->$NodeImpl::getPreviousSibling();
}

$Node* DefaultDocument::getNextSibling() {
	 return this->$NodeImpl::getNextSibling();
}

$NamedNodeMap* DefaultDocument::getAttributes() {
	 return this->$NodeImpl::getAttributes();
}

$Document* DefaultDocument::getOwnerDocument() {
	 return this->$NodeImpl::getOwnerDocument();
}

bool DefaultDocument::hasChildNodes() {
	 return this->$NodeImpl::hasChildNodes();
}

$Node* DefaultDocument::cloneNode(bool deep) {
	 return this->$NodeImpl::cloneNode(deep);
}

void DefaultDocument::normalize() {
	this->$NodeImpl::normalize();
}

bool DefaultDocument::isSupported($String* feature, $String* version) {
	 return this->$NodeImpl::isSupported(feature, version);
}

$String* DefaultDocument::getBaseURI() {
	 return this->$NodeImpl::getBaseURI();
}

bool DefaultDocument::hasAttributes() {
	 return this->$NodeImpl::hasAttributes();
}

void DefaultDocument::setNodeValue($String* nodeValue) {
	this->$NodeImpl::setNodeValue(nodeValue);
}

$Node* DefaultDocument::insertBefore($Node* newChild, $Node* refChild) {
	 return this->$NodeImpl::insertBefore(newChild, refChild);
}

$Node* DefaultDocument::replaceChild($Node* newChild, $Node* oldChild) {
	 return this->$NodeImpl::replaceChild(newChild, oldChild);
}

$Node* DefaultDocument::removeChild($Node* oldChild) {
	 return this->$NodeImpl::removeChild(oldChild);
}

$Node* DefaultDocument::appendChild($Node* newChild) {
	 return this->$NodeImpl::appendChild(newChild);
}

void DefaultDocument::setPrefix($String* prefix) {
	this->$NodeImpl::setPrefix(prefix);
}

int16_t DefaultDocument::compareDocumentPosition($Node* other) {
	 return this->$NodeImpl::compareDocumentPosition(other);
}

$String* DefaultDocument::getTextContent() {
	 return this->$NodeImpl::getTextContent();
}

void DefaultDocument::setTextContent($String* textContent) {
	this->$NodeImpl::setTextContent(textContent);
}

bool DefaultDocument::isSameNode($Node* other) {
	 return this->$NodeImpl::isSameNode(other);
}

$String* DefaultDocument::lookupPrefix($String* namespaceURI) {
	 return this->$NodeImpl::lookupPrefix(namespaceURI);
}

bool DefaultDocument::isDefaultNamespace($String* namespaceURI) {
	 return this->$NodeImpl::isDefaultNamespace(namespaceURI);
}

$String* DefaultDocument::lookupNamespaceURI($String* prefix) {
	 return this->$NodeImpl::lookupNamespaceURI(prefix);
}

bool DefaultDocument::isEqualNode($Node* arg) {
	 return this->$NodeImpl::isEqualNode(arg);
}

$Object* DefaultDocument::getFeature($String* feature, $String* version) {
	 return this->$NodeImpl::getFeature(feature, version);
}

$Object* DefaultDocument::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	 return this->$NodeImpl::setUserData(key, data, handler);
}

$Object* DefaultDocument::getUserData($String* key) {
	 return this->$NodeImpl::getUserData(key);
}

int32_t DefaultDocument::hashCode() {
	 return this->$NodeImpl::hashCode();
}

bool DefaultDocument::equals(Object$* arg0) {
	 return this->$NodeImpl::equals(arg0);
}

$Object* DefaultDocument::clone() {
	 return this->$NodeImpl::clone();
}

$String* DefaultDocument::toString() {
	 return this->$NodeImpl::toString();
}

void DefaultDocument::finalize() {
	this->$NodeImpl::finalize();
}

void DefaultDocument::init$() {
	$NodeImpl::init$();
	$set(this, fDocumentURI, nullptr);
}

$DocumentType* DefaultDocument::getDoctype() {
	return nullptr;
}

$DOMImplementation* DefaultDocument::getImplementation() {
	return nullptr;
}

$Element* DefaultDocument::getDocumentElement() {
	return nullptr;
}

$NodeList* DefaultDocument::getElementsByTagName($String* tagname) {
	return nullptr;
}

$NodeList* DefaultDocument::getElementsByTagNameNS($String* namespaceURI, $String* localName) {
	return nullptr;
}

$Element* DefaultDocument::getElementById($String* elementId) {
	return nullptr;
}

$Node* DefaultDocument::importNode($Node* importedNode, bool deep) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

$Element* DefaultDocument::createElement($String* tagName) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

$DocumentFragment* DefaultDocument::createDocumentFragment() {
	return nullptr;
}

$Text* DefaultDocument::createTextNode($String* data) {
	return nullptr;
}

$Comment* DefaultDocument::createComment($String* data) {
	return nullptr;
}

$CDATASection* DefaultDocument::createCDATASection($String* data) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

$ProcessingInstruction* DefaultDocument::createProcessingInstruction($String* target, $String* data) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

$Attr* DefaultDocument::createAttribute($String* name) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

$EntityReference* DefaultDocument::createEntityReference($String* name) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

$Element* DefaultDocument::createElementNS($String* namespaceURI, $String* qualifiedName) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

$Attr* DefaultDocument::createAttributeNS($String* namespaceURI, $String* qualifiedName) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

$String* DefaultDocument::getInputEncoding() {
	return nullptr;
}

$String* DefaultDocument::getXmlEncoding() {
	return nullptr;
}

bool DefaultDocument::getXmlStandalone() {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

void DefaultDocument::setXmlStandalone(bool standalone) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
}

$String* DefaultDocument::getXmlVersion() {
	return nullptr;
}

void DefaultDocument::setXmlVersion($String* version) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
}

bool DefaultDocument::getStrictErrorChecking() {
	return false;
}

void DefaultDocument::setStrictErrorChecking(bool strictErrorChecking) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
}

$String* DefaultDocument::getDocumentURI() {
	return this->fDocumentURI;
}

void DefaultDocument::setDocumentURI($String* documentURI) {
	$set(this, fDocumentURI, documentURI);
}

$Node* DefaultDocument::adoptNode($Node* source) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

void DefaultDocument::normalizeDocument() {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
}

$DOMConfiguration* DefaultDocument::getDomConfig() {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

$Node* DefaultDocument::renameNode($Node* n, $String* namespaceURI, $String* name) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

DefaultDocument::DefaultDocument() {
}

$Class* DefaultDocument::load$($String* name, bool initialize) {
	$loadClass(DefaultDocument, name, initialize, &_DefaultDocument_ClassInfo_, allocate$DefaultDocument);
	return class$;
}

$Class* DefaultDocument::class$ = nullptr;

								} // opti
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com