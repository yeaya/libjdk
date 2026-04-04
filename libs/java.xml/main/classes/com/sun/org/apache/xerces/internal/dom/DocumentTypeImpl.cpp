#include <com/sun/org/apache/xerces/internal/dom/DocumentTypeImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDOMImplementationImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NamedNodeMapImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ParentNode$UserDataRecord.h>
#include <com/sun/org/apache/xerces/internal/dom/ParentNode.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/util/HashMap.h>
#include <java/util/Hashtable.h>
#include <java/util/Map.h>
#include <org/w3c/dom/DOMImplementation.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/UserDataHandler.h>
#include <jcpp.h>

#undef DOCUMENT_TYPE_NODE
#undef TYPE

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $CoreDOMImplementationImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDOMImplementationImpl;
using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $NamedNodeMapImpl = ::com::sun::org::apache::xerces::internal::dom::NamedNodeMapImpl;
using $NodeImpl = ::com::sun::org::apache::xerces::internal::dom::NodeImpl;
using $ParentNode = ::com::sun::org::apache::xerces::internal::dom::ParentNode;
using $ParentNode$UserDataRecord = ::com::sun::org::apache::xerces::internal::dom::ParentNode$UserDataRecord;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $Hashtable = ::java::util::Hashtable;
using $Map = ::java::util::Map;
using $Document = ::org::w3c::dom::Document;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;
using $UserDataHandler = ::org::w3c::dom::UserDataHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$Document* DocumentTypeImpl::getOwnerDocument() {
	 return this->$ParentNode::getOwnerDocument();
}

bool DocumentTypeImpl::hasChildNodes() {
	 return this->$ParentNode::hasChildNodes();
}

$NodeList* DocumentTypeImpl::getChildNodes() {
	 return this->$ParentNode::getChildNodes();
}

$Node* DocumentTypeImpl::getFirstChild() {
	 return this->$ParentNode::getFirstChild();
}

$Node* DocumentTypeImpl::getLastChild() {
	 return this->$ParentNode::getLastChild();
}

$Node* DocumentTypeImpl::insertBefore($Node* newChild, $Node* refChild) {
	 return this->$ParentNode::insertBefore(newChild, refChild);
}

$Node* DocumentTypeImpl::removeChild($Node* oldChild) {
	 return this->$ParentNode::removeChild(oldChild);
}

$Node* DocumentTypeImpl::replaceChild($Node* newChild, $Node* oldChild) {
	 return this->$ParentNode::replaceChild(newChild, oldChild);
}

void DocumentTypeImpl::normalize() {
	this->$ParentNode::normalize();
}

$Node* DocumentTypeImpl::getParentNode() {
	 return this->$ParentNode::getParentNode();
}

$Node* DocumentTypeImpl::getNextSibling() {
	 return this->$ParentNode::getNextSibling();
}

$Node* DocumentTypeImpl::getPreviousSibling() {
	 return this->$ParentNode::getPreviousSibling();
}

$String* DocumentTypeImpl::getNodeValue() {
	 return this->$ParentNode::getNodeValue();
}

void DocumentTypeImpl::setNodeValue($String* x) {
	this->$ParentNode::setNodeValue(x);
}

$Node* DocumentTypeImpl::appendChild($Node* newChild) {
	 return this->$ParentNode::appendChild(newChild);
}

$NamedNodeMap* DocumentTypeImpl::getAttributes() {
	 return this->$ParentNode::getAttributes();
}

bool DocumentTypeImpl::hasAttributes() {
	 return this->$ParentNode::hasAttributes();
}

bool DocumentTypeImpl::isSupported($String* feature, $String* version) {
	 return this->$ParentNode::isSupported(feature, version);
}

$String* DocumentTypeImpl::getNamespaceURI() {
	 return this->$ParentNode::getNamespaceURI();
}

$String* DocumentTypeImpl::getPrefix() {
	 return this->$ParentNode::getPrefix();
}

void DocumentTypeImpl::setPrefix($String* prefix) {
	this->$ParentNode::setPrefix(prefix);
}

$String* DocumentTypeImpl::getLocalName() {
	 return this->$ParentNode::getLocalName();
}

$String* DocumentTypeImpl::getBaseURI() {
	 return this->$ParentNode::getBaseURI();
}

int16_t DocumentTypeImpl::compareDocumentPosition($Node* other) {
	 return this->$ParentNode::compareDocumentPosition(other);
}

bool DocumentTypeImpl::isSameNode($Node* other) {
	 return this->$ParentNode::isSameNode(other);
}

bool DocumentTypeImpl::isDefaultNamespace($String* namespaceURI) {
	 return this->$ParentNode::isDefaultNamespace(namespaceURI);
}

$String* DocumentTypeImpl::lookupPrefix($String* namespaceURI) {
	 return this->$ParentNode::lookupPrefix(namespaceURI);
}

$String* DocumentTypeImpl::lookupNamespaceURI($String* specifiedPrefix) {
	 return this->$ParentNode::lookupNamespaceURI(specifiedPrefix);
}

$Object* DocumentTypeImpl::getFeature($String* feature, $String* version) {
	 return this->$ParentNode::getFeature(feature, version);
}

$String* DocumentTypeImpl::toString() {
	 return this->$ParentNode::toString();
}

int32_t DocumentTypeImpl::hashCode() {
	 return this->$ParentNode::hashCode();
}

bool DocumentTypeImpl::equals(Object$* arg0) {
	 return this->$ParentNode::equals(arg0);
}

$Object* DocumentTypeImpl::clone() {
	 return this->$ParentNode::clone();
}

void DocumentTypeImpl::finalize() {
	this->$ParentNode::finalize();
}

$ObjectStreamFieldArray* DocumentTypeImpl::serialPersistentFields = nullptr;

void DocumentTypeImpl::init$($CoreDocumentImpl* ownerDocument, $String* name) {
	$ParentNode::init$(ownerDocument);
	this->doctypeNumber = 0;
	$set(this, userData, nullptr);
	$set(this, name, name);
	$set(this, entities, $new($NamedNodeMapImpl, this));
	$set(this, notations, $new($NamedNodeMapImpl, this));
	$set(this, elements, $new($NamedNodeMapImpl, this));
}

void DocumentTypeImpl::init$($CoreDocumentImpl* ownerDocument, $String* qualifiedName, $String* publicID, $String* systemID) {
	DocumentTypeImpl::init$(ownerDocument, qualifiedName);
	$set(this, publicID, publicID);
	$set(this, systemID, systemID);
}

$String* DocumentTypeImpl::getPublicId() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return this->publicID;
}

$String* DocumentTypeImpl::getSystemId() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return this->systemID;
}

void DocumentTypeImpl::setInternalSubset($String* internalSubset) {
	if (needsSyncData()) {
		synchronizeData();
	}
	$set(this, internalSubset, internalSubset);
}

$String* DocumentTypeImpl::getInternalSubset() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return this->internalSubset;
}

int16_t DocumentTypeImpl::getNodeType() {
	return $Node::DOCUMENT_TYPE_NODE;
}

$String* DocumentTypeImpl::getNodeName() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return this->name;
}

$Node* DocumentTypeImpl::cloneNode(bool deep) {
	$var(DocumentTypeImpl, newnode, $cast(DocumentTypeImpl, $ParentNode::cloneNode(deep)));
	$set($nc(newnode), entities, $nc(this->entities)->cloneMap(newnode));
	$set(newnode, notations, $nc(this->notations)->cloneMap(newnode));
	$set(newnode, elements, $nc(this->elements)->cloneMap(newnode));
	return $cast($ParentNode, newnode);
}

$String* DocumentTypeImpl::getTextContent() {
	return nullptr;
}

void DocumentTypeImpl::setTextContent($String* textContent) {
}

bool DocumentTypeImpl::isEqualNode($Node* arg) {
	$useLocalObjectStack();
	if (!$ParentNode::isEqualNode(arg)) {
		return false;
	}
	if (needsSyncData()) {
		synchronizeData();
	}
	$var(DocumentTypeImpl, argDocType, $cast(DocumentTypeImpl, arg));
	bool var$5 = getPublicId() == nullptr;
	bool var$4 = var$5 && $nc(argDocType)->getPublicId() != nullptr;
	if (!var$4) {
		bool var$6 = getPublicId() != nullptr;
		var$4 = var$6 && $nc(argDocType)->getPublicId() == nullptr;
	}
	bool var$3 = var$4;
	if (!var$3) {
		bool var$7 = getSystemId() == nullptr;
		var$3 = var$7 && $nc(argDocType)->getSystemId() != nullptr;
	}
	bool var$2 = var$3;
	if (!var$2) {
		bool var$8 = getSystemId() != nullptr;
		var$2 = var$8 && $nc(argDocType)->getSystemId() == nullptr;
	}
	bool var$1 = var$2;
	if (!var$1) {
		bool var$9 = getInternalSubset() == nullptr;
		var$1 = var$9 && $nc(argDocType)->getInternalSubset() != nullptr;
	}
	bool var$0 = var$1;
	if (!var$0) {
		bool var$10 = getInternalSubset() != nullptr;
		var$0 = var$10 && $nc(argDocType)->getInternalSubset() == nullptr;
	}
	if (var$0) {
		return false;
	}
	if (getPublicId() != nullptr) {
		if (!$$nc(getPublicId())->equals($($nc(argDocType)->getPublicId()))) {
			return false;
		}
	}
	if (getSystemId() != nullptr) {
		if (!$$nc(getSystemId())->equals($($nc(argDocType)->getSystemId()))) {
			return false;
		}
	}
	if (getInternalSubset() != nullptr) {
		if (!$$nc(getInternalSubset())->equals($($nc(argDocType)->getInternalSubset()))) {
			return false;
		}
	}
	$var($NamedNodeMapImpl, argEntities, $nc(argDocType)->entities);
	if ((this->entities == nullptr && argEntities != nullptr) || (this->entities != nullptr && argEntities == nullptr)) {
		return false;
	}
	if (this->entities != nullptr && argEntities != nullptr) {
		int32_t var$11 = this->entities->getLength();
		if (var$11 != argEntities->getLength()) {
			return false;
		}
		for (int32_t index = 0; $nc(this->entities)->item(index) != nullptr; ++index) {
			$var($Node, entNode1, this->entities->item(index));
			$var($Node, entNode2, argEntities->getNamedItem($($nc(entNode1)->getNodeName())));
			if (!$cast($NodeImpl, entNode1)->isEqualNode(entNode2)) {
				return false;
			}
		}
	}
	$var($NamedNodeMapImpl, argNotations, argDocType->notations);
	if ((this->notations == nullptr && argNotations != nullptr) || (this->notations != nullptr && argNotations == nullptr)) {
		return false;
	}
	if (this->notations != nullptr && argNotations != nullptr) {
		int32_t var$12 = this->notations->getLength();
		if (var$12 != argNotations->getLength()) {
			return false;
		}
		for (int32_t index = 0; $nc(this->notations)->item(index) != nullptr; ++index) {
			$var($Node, noteNode1, this->notations->item(index));
			$var($Node, noteNode2, argNotations->getNamedItem($($nc(noteNode1)->getNodeName())));
			if (!$cast($NodeImpl, noteNode1)->isEqualNode(noteNode2)) {
				return false;
			}
		}
	}
	return true;
}

void DocumentTypeImpl::setOwnerDocument($CoreDocumentImpl* doc) {
	$ParentNode::setOwnerDocument(doc);
	$nc(this->entities)->setOwnerDocument(doc);
	$nc(this->notations)->setOwnerDocument(doc);
	$nc(this->elements)->setOwnerDocument(doc);
}

int32_t DocumentTypeImpl::getNodeNumber() {
	if (getOwnerDocument() != nullptr) {
		return $ParentNode::getNodeNumber();
	}
	if (this->doctypeNumber == 0) {
		$var($CoreDOMImplementationImpl, cd, $cast($CoreDOMImplementationImpl, $CoreDOMImplementationImpl::getDOMImplementation()));
		this->doctypeNumber = $nc(cd)->assignDocTypeNumber();
	}
	return this->doctypeNumber;
}

$String* DocumentTypeImpl::getName() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return this->name;
}

$NamedNodeMap* DocumentTypeImpl::getEntities() {
	if (needsSyncChildren()) {
		synchronizeChildren();
	}
	return this->entities;
}

$NamedNodeMap* DocumentTypeImpl::getNotations() {
	if (needsSyncChildren()) {
		synchronizeChildren();
	}
	return this->notations;
}

void DocumentTypeImpl::setReadOnly(bool readOnly, bool deep) {
	if (needsSyncChildren()) {
		synchronizeChildren();
	}
	$ParentNode::setReadOnly(readOnly, deep);
	$nc(this->elements)->setReadOnly(readOnly, true);
	$nc(this->entities)->setReadOnly(readOnly, true);
	$nc(this->notations)->setReadOnly(readOnly, true);
}

$NamedNodeMap* DocumentTypeImpl::getElements() {
	if (needsSyncChildren()) {
		synchronizeChildren();
	}
	return this->elements;
}

$Object* DocumentTypeImpl::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	$useLocalObjectStack();
	if (this->userData == nullptr) {
		$set(this, userData, $new($HashMap));
	}
	if (data == nullptr) {
		if (this->userData != nullptr) {
			$var($ParentNode$UserDataRecord, udr, $cast($ParentNode$UserDataRecord, this->userData->remove(key)));
			if (udr != nullptr) {
				return udr->fData;
			}
		}
		return nullptr;
	} else {
		$var($ParentNode$UserDataRecord, udr, $cast($ParentNode$UserDataRecord, $nc(this->userData)->put(key, $$new($ParentNode$UserDataRecord, this, data, handler))));
		if (udr != nullptr) {
			return udr->fData;
		}
	}
	return nullptr;
}

$Object* DocumentTypeImpl::getUserData($String* key) {
	if (this->userData == nullptr) {
		return nullptr;
	}
	$var($ParentNode$UserDataRecord, udr, $cast($ParentNode$UserDataRecord, $nc(this->userData)->get(key)));
	if (udr != nullptr) {
		return udr->fData;
	}
	return nullptr;
}

$Map* DocumentTypeImpl::getUserDataRecord() {
	return this->userData;
}

void DocumentTypeImpl::writeObject($ObjectOutputStream* out) {
	$useLocalObjectStack();
	$var($Hashtable, ud, (this->userData == nullptr) ? ($Hashtable*)nullptr : $new($Hashtable, this->userData));
	$var($ObjectOutputStream$PutField, pf, $nc(out)->putFields());
	$nc(pf)->put("name"_s, this->name);
	pf->put("entities"_s, this->entities);
	pf->put("notations"_s, this->notations);
	pf->put("elements"_s, this->elements);
	pf->put("publicID"_s, this->publicID);
	pf->put("systemID"_s, this->systemID);
	pf->put("internalSubset"_s, this->internalSubset);
	pf->put("doctypeNumber"_s, this->doctypeNumber);
	pf->put("userData"_s, ud);
	out->writeFields();
}

void DocumentTypeImpl::readObject($ObjectInputStream* in) {
	$useLocalObjectStack();
	$var($ObjectInputStream$GetField, gf, $nc(in)->readFields());
	$set(this, name, $cast($String, $nc(gf)->get("name"_s, nullptr)));
	$set(this, entities, $cast($NamedNodeMapImpl, gf->get("entities"_s, nullptr)));
	$set(this, notations, $cast($NamedNodeMapImpl, gf->get("notations"_s, nullptr)));
	$set(this, elements, $cast($NamedNodeMapImpl, gf->get("elements"_s, nullptr)));
	$set(this, publicID, $cast($String, gf->get("publicID"_s, nullptr)));
	$set(this, systemID, $cast($String, gf->get("systemID"_s, nullptr)));
	$set(this, internalSubset, $cast($String, gf->get("internalSubset"_s, nullptr)));
	this->doctypeNumber = gf->get("doctypeNumber"_s, 0);
	$var($Hashtable, ud, $cast($Hashtable, gf->get("userData"_s, nullptr)));
	if (ud != nullptr) {
		$set(this, userData, $new($HashMap, ud));
	}
}

void DocumentTypeImpl::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$load($NamedNodeMapImpl);
	$load($Hashtable);
	$assignStatic(DocumentTypeImpl::serialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "name"_s, $String::class$),
		$$new($ObjectStreamField, "entities"_s, $NamedNodeMapImpl::class$),
		$$new($ObjectStreamField, "notations"_s, $NamedNodeMapImpl::class$),
		$$new($ObjectStreamField, "elements"_s, $NamedNodeMapImpl::class$),
		$$new($ObjectStreamField, "publicID"_s, $String::class$),
		$$new($ObjectStreamField, "systemID"_s, $String::class$),
		$$new($ObjectStreamField, "internalSubset"_s, $String::class$),
		$$new($ObjectStreamField, "doctypeNumber"_s, $Integer::TYPE),
		$$new($ObjectStreamField, "userData"_s, $Hashtable::class$)
	}));
}

DocumentTypeImpl::DocumentTypeImpl() {
}

$Class* DocumentTypeImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DocumentTypeImpl, serialVersionUID)},
		{"name", "Ljava/lang/String;", nullptr, $PROTECTED, $field(DocumentTypeImpl, name)},
		{"entities", "Lcom/sun/org/apache/xerces/internal/dom/NamedNodeMapImpl;", nullptr, $PROTECTED, $field(DocumentTypeImpl, entities)},
		{"notations", "Lcom/sun/org/apache/xerces/internal/dom/NamedNodeMapImpl;", nullptr, $PROTECTED, $field(DocumentTypeImpl, notations)},
		{"elements", "Lcom/sun/org/apache/xerces/internal/dom/NamedNodeMapImpl;", nullptr, $PROTECTED, $field(DocumentTypeImpl, elements)},
		{"publicID", "Ljava/lang/String;", nullptr, $PROTECTED, $field(DocumentTypeImpl, publicID)},
		{"systemID", "Ljava/lang/String;", nullptr, $PROTECTED, $field(DocumentTypeImpl, systemID)},
		{"internalSubset", "Ljava/lang/String;", nullptr, $PROTECTED, $field(DocumentTypeImpl, internalSubset)},
		{"doctypeNumber", "I", nullptr, $PRIVATE, $field(DocumentTypeImpl, doctypeNumber)},
		{"userData", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/dom/ParentNode$UserDataRecord;>;", $PRIVATE, $field(DocumentTypeImpl, userData)},
		{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DocumentTypeImpl, serialPersistentFields)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*appendChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
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
		{"*getNodeValue", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"*getOwnerDocument", "()Lorg/w3c/dom/Document;", nullptr, $PUBLIC},
		{"*getParentNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
		{"*getPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"*getPreviousSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
		{"*hasAttributes", "()Z", nullptr, $PUBLIC},
		{"*hasChildNodes", "()Z", nullptr, $PUBLIC},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DocumentTypeImpl, init$, void, $CoreDocumentImpl*, $String*)},
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DocumentTypeImpl, init$, void, $CoreDocumentImpl*, $String*, $String*, $String*)},
		{"cloneNode", "(Z)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DocumentTypeImpl, cloneNode, $Node*, bool)},
		{"getElements", "()Lorg/w3c/dom/NamedNodeMap;", nullptr, $PUBLIC, $virtualMethod(DocumentTypeImpl, getElements, $NamedNodeMap*)},
		{"getEntities", "()Lorg/w3c/dom/NamedNodeMap;", nullptr, $PUBLIC, $virtualMethod(DocumentTypeImpl, getEntities, $NamedNodeMap*)},
		{"getInternalSubset", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DocumentTypeImpl, getInternalSubset, $String*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DocumentTypeImpl, getName, $String*)},
		{"getNodeName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DocumentTypeImpl, getNodeName, $String*)},
		{"getNodeNumber", "()I", nullptr, $PROTECTED, $virtualMethod(DocumentTypeImpl, getNodeNumber, int32_t)},
		{"getNodeType", "()S", nullptr, $PUBLIC, $virtualMethod(DocumentTypeImpl, getNodeType, int16_t)},
		{"getNotations", "()Lorg/w3c/dom/NamedNodeMap;", nullptr, $PUBLIC, $virtualMethod(DocumentTypeImpl, getNotations, $NamedNodeMap*)},
		{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DocumentTypeImpl, getPublicId, $String*)},
		{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DocumentTypeImpl, getSystemId, $String*)},
		{"getTextContent", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DocumentTypeImpl, getTextContent, $String*), "org.w3c.dom.DOMException"},
		{"getUserData", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DocumentTypeImpl, getUserData, $Object*, $String*)},
		{"getUserDataRecord", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/dom/ParentNode$UserDataRecord;>;", $PROTECTED, $virtualMethod(DocumentTypeImpl, getUserDataRecord, $Map*)},
		{"*insertBefore", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
		{"*isDefaultNamespace", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
		{"isEqualNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC, $virtualMethod(DocumentTypeImpl, isEqualNode, bool, $Node*)},
		{"*isSameNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC},
		{"*isSupported", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC},
		{"*lookupNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
		{"*lookupPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
		{"*normalize", "()V", nullptr, $PUBLIC},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(DocumentTypeImpl, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"*removeChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
		{"*replaceChild", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
		{"setInternalSubset", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DocumentTypeImpl, setInternalSubset, void, $String*)},
		{"*setNodeValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
		{"setOwnerDocument", "(Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;)V", nullptr, $PROTECTED, $virtualMethod(DocumentTypeImpl, setOwnerDocument, void, $CoreDocumentImpl*)},
		{"*setPrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
		{"setReadOnly", "(ZZ)V", nullptr, $PUBLIC, $virtualMethod(DocumentTypeImpl, setReadOnly, void, bool, bool)},
		{"setTextContent", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DocumentTypeImpl, setTextContent, void, $String*), "org.w3c.dom.DOMException"},
		{"setUserData", "(Ljava/lang/String;Ljava/lang/Object;Lorg/w3c/dom/UserDataHandler;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DocumentTypeImpl, setUserData, $Object*, $String*, Object$*, $UserDataHandler*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(DocumentTypeImpl, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.dom.DocumentTypeImpl",
		"com.sun.org.apache.xerces.internal.dom.ParentNode",
		"org.w3c.dom.DocumentType",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DocumentTypeImpl, name, initialize, &classInfo$$, DocumentTypeImpl::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(DocumentTypeImpl));
	});
	return class$;
}

$Class* DocumentTypeImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com