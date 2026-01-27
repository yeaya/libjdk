#include <com/sun/org/apache/xerces/internal/impl/xs/opti/AttrImpl.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/opti/NodeImpl.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/TypeInfo.h>
#include <org/w3c/dom/UserDataHandler.h>
#include <jcpp.h>

#undef ATTRIBUTE_NODE

using $NodeImpl = ::com::sun::org::apache::xerces::internal::impl::xs::opti::NodeImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;
using $TypeInfo = ::org::w3c::dom::TypeInfo;
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

$FieldInfo _AttrImpl_FieldInfo_[] = {
	{"element", "Lorg/w3c/dom/Element;", nullptr, 0, $field(AttrImpl, element)},
	{"value", "Ljava/lang/String;", nullptr, 0, $field(AttrImpl, value)},
	{}
};

$MethodInfo _AttrImpl_MethodInfo_[] = {
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
	{"*getParentNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*getPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getPreviousSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*getTextContent", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getUserData", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*hasAttributes", "()Z", nullptr, $PUBLIC},
	{"*hasChildNodes", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(AttrImpl, init$, void)},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AttrImpl, init$, void, $Element*, $String*, $String*, $String*, $String*, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttrImpl, getName, $String*)},
	{"getNodeValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttrImpl, getNodeValue, $String*)},
	{"getOwnerDocument", "()Lorg/w3c/dom/Document;", nullptr, $PUBLIC, $virtualMethod(AttrImpl, getOwnerDocument, $Document*)},
	{"getOwnerElement", "()Lorg/w3c/dom/Element;", nullptr, $PUBLIC, $virtualMethod(AttrImpl, getOwnerElement, $Element*)},
	{"getSchemaTypeInfo", "()Lorg/w3c/dom/TypeInfo;", nullptr, $PUBLIC, $virtualMethod(AttrImpl, getSchemaTypeInfo, $TypeInfo*)},
	{"getSpecified", "()Z", nullptr, $PUBLIC, $virtualMethod(AttrImpl, getSpecified, bool)},
	{"getValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttrImpl, getValue, $String*)},
	{"*insertBefore", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*isDefaultNamespace", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"*isEqualNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC},
	{"isId", "()Z", nullptr, $PUBLIC, $virtualMethod(AttrImpl, isId, bool)},
	{"*isSameNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC},
	{"*isSupported", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"*lookupNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*lookupPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*normalize", "()V", nullptr, $PUBLIC},
	{"*removeChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*replaceChild", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*setNodeValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setPrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setTextContent", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setUserData", "(Ljava/lang/String;Ljava/lang/Object;Lorg/w3c/dom/UserDataHandler;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"setValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(AttrImpl, setValue, void, $String*), "org.w3c.dom.DOMException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttrImpl, toString, $String*)},
	{}
};

$ClassInfo _AttrImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.opti.AttrImpl",
	"com.sun.org.apache.xerces.internal.impl.xs.opti.NodeImpl",
	"org.w3c.dom.Attr",
	_AttrImpl_FieldInfo_,
	_AttrImpl_MethodInfo_
};

$Object* allocate$AttrImpl($Class* clazz) {
	return $of($alloc(AttrImpl));
}

$String* AttrImpl::getNodeName() {
	 return this->$NodeImpl::getNodeName();
}

$String* AttrImpl::getNamespaceURI() {
	 return this->$NodeImpl::getNamespaceURI();
}

$String* AttrImpl::getPrefix() {
	 return this->$NodeImpl::getPrefix();
}

$String* AttrImpl::getLocalName() {
	 return this->$NodeImpl::getLocalName();
}

int16_t AttrImpl::getNodeType() {
	 return this->$NodeImpl::getNodeType();
}

$Node* AttrImpl::getParentNode() {
	 return this->$NodeImpl::getParentNode();
}

$NodeList* AttrImpl::getChildNodes() {
	 return this->$NodeImpl::getChildNodes();
}

$Node* AttrImpl::getFirstChild() {
	 return this->$NodeImpl::getFirstChild();
}

$Node* AttrImpl::getLastChild() {
	 return this->$NodeImpl::getLastChild();
}

$Node* AttrImpl::getPreviousSibling() {
	 return this->$NodeImpl::getPreviousSibling();
}

$Node* AttrImpl::getNextSibling() {
	 return this->$NodeImpl::getNextSibling();
}

$NamedNodeMap* AttrImpl::getAttributes() {
	 return this->$NodeImpl::getAttributes();
}

bool AttrImpl::hasChildNodes() {
	 return this->$NodeImpl::hasChildNodes();
}

$Node* AttrImpl::cloneNode(bool deep) {
	 return this->$NodeImpl::cloneNode(deep);
}

void AttrImpl::normalize() {
	this->$NodeImpl::normalize();
}

bool AttrImpl::isSupported($String* feature, $String* version) {
	 return this->$NodeImpl::isSupported(feature, version);
}

$String* AttrImpl::getBaseURI() {
	 return this->$NodeImpl::getBaseURI();
}

bool AttrImpl::hasAttributes() {
	 return this->$NodeImpl::hasAttributes();
}

void AttrImpl::setNodeValue($String* nodeValue) {
	this->$NodeImpl::setNodeValue(nodeValue);
}

$Node* AttrImpl::insertBefore($Node* newChild, $Node* refChild) {
	 return this->$NodeImpl::insertBefore(newChild, refChild);
}

$Node* AttrImpl::replaceChild($Node* newChild, $Node* oldChild) {
	 return this->$NodeImpl::replaceChild(newChild, oldChild);
}

$Node* AttrImpl::removeChild($Node* oldChild) {
	 return this->$NodeImpl::removeChild(oldChild);
}

$Node* AttrImpl::appendChild($Node* newChild) {
	 return this->$NodeImpl::appendChild(newChild);
}

void AttrImpl::setPrefix($String* prefix) {
	this->$NodeImpl::setPrefix(prefix);
}

int16_t AttrImpl::compareDocumentPosition($Node* other) {
	 return this->$NodeImpl::compareDocumentPosition(other);
}

$String* AttrImpl::getTextContent() {
	 return this->$NodeImpl::getTextContent();
}

void AttrImpl::setTextContent($String* textContent) {
	this->$NodeImpl::setTextContent(textContent);
}

bool AttrImpl::isSameNode($Node* other) {
	 return this->$NodeImpl::isSameNode(other);
}

$String* AttrImpl::lookupPrefix($String* namespaceURI) {
	 return this->$NodeImpl::lookupPrefix(namespaceURI);
}

bool AttrImpl::isDefaultNamespace($String* namespaceURI) {
	 return this->$NodeImpl::isDefaultNamespace(namespaceURI);
}

$String* AttrImpl::lookupNamespaceURI($String* prefix) {
	 return this->$NodeImpl::lookupNamespaceURI(prefix);
}

bool AttrImpl::isEqualNode($Node* arg) {
	 return this->$NodeImpl::isEqualNode(arg);
}

$Object* AttrImpl::getFeature($String* feature, $String* version) {
	 return this->$NodeImpl::getFeature(feature, version);
}

$Object* AttrImpl::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	 return this->$NodeImpl::setUserData(key, data, handler);
}

$Object* AttrImpl::getUserData($String* key) {
	 return this->$NodeImpl::getUserData(key);
}

int32_t AttrImpl::hashCode() {
	 return this->$NodeImpl::hashCode();
}

bool AttrImpl::equals(Object$* arg0) {
	 return this->$NodeImpl::equals(arg0);
}

$Object* AttrImpl::clone() {
	 return this->$NodeImpl::clone();
}

void AttrImpl::finalize() {
	this->$NodeImpl::finalize();
}

void AttrImpl::init$() {
	$NodeImpl::init$();
	this->nodeType = $Node::ATTRIBUTE_NODE;
}

void AttrImpl::init$($Element* element, $String* prefix, $String* localpart, $String* rawname, $String* uri, $String* value) {
	$NodeImpl::init$(prefix, localpart, rawname, uri, $Node::ATTRIBUTE_NODE);
	$set(this, element, element);
	$set(this, value, value);
}

$String* AttrImpl::getName() {
	return this->rawname;
}

bool AttrImpl::getSpecified() {
	return true;
}

$String* AttrImpl::getValue() {
	return this->value;
}

$String* AttrImpl::getNodeValue() {
	return getValue();
}

$Element* AttrImpl::getOwnerElement() {
	return this->element;
}

$Document* AttrImpl::getOwnerDocument() {
	return $nc(this->element)->getOwnerDocument();
}

void AttrImpl::setValue($String* value) {
	$set(this, value, value);
}

bool AttrImpl::isId() {
	return false;
}

$TypeInfo* AttrImpl::getSchemaTypeInfo() {
	return nullptr;
}

$String* AttrImpl::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({$(getName()), "=\""_s}));
	$var($String, var$0, $$concat(var$1, $(getValue())));
	return $concat(var$0, "\""_s);
}

AttrImpl::AttrImpl() {
}

$Class* AttrImpl::load$($String* name, bool initialize) {
	$loadClass(AttrImpl, name, initialize, &_AttrImpl_ClassInfo_, allocate$AttrImpl);
	return class$;
}

$Class* AttrImpl::class$ = nullptr;

								} // opti
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com