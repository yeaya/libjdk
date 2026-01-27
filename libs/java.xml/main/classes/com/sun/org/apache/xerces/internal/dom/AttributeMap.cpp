#include <com/sun/org/apache/xerces/internal/dom/AttributeMap.h>

#include <com/sun/org/apache/xerces/internal/dom/AttrImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/AttrNSImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ChildNode.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/dom/ElementImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NamedNodeMapImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ParentNode.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ATTRIBUTE_NODE
#undef DOM_DOMAIN
#undef HIERARCHY_REQUEST_ERR
#undef INUSE_ATTRIBUTE_ERR
#undef NOT_FOUND_ERR
#undef NO_MODIFICATION_ALLOWED_ERR
#undef WRONG_DOCUMENT_ERR

using $AttrImpl = ::com::sun::org::apache::xerces::internal::dom::AttrImpl;
using $AttrNSImpl = ::com::sun::org::apache::xerces::internal::dom::AttrNSImpl;
using $ChildNode = ::com::sun::org::apache::xerces::internal::dom::ChildNode;
using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $DOMMessageFormatter = ::com::sun::org::apache::xerces::internal::dom::DOMMessageFormatter;
using $ElementImpl = ::com::sun::org::apache::xerces::internal::dom::ElementImpl;
using $NamedNodeMapImpl = ::com::sun::org::apache::xerces::internal::dom::NamedNodeMapImpl;
using $NodeImpl = ::com::sun::org::apache::xerces::internal::dom::NodeImpl;
using $ParentNode = ::com::sun::org::apache::xerces::internal::dom::ParentNode;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $DOMException = ::org::w3c::dom::DOMException;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$FieldInfo _AttributeMap_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(AttributeMap, serialVersionUID)},
	{}
};

$MethodInfo _AttributeMap_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/ElementImpl;Lcom/sun/org/apache/xerces/internal/dom/NamedNodeMapImpl;)V", nullptr, $PROTECTED, $method(AttributeMap, init$, void, $ElementImpl*, $NamedNodeMapImpl*)},
	{"addItem", "(Lorg/w3c/dom/Node;)I", nullptr, $PROTECTED | $FINAL, $virtualMethod(AttributeMap, addItem, int32_t, $Node*)},
	{"cloneContent", "(Lcom/sun/org/apache/xerces/internal/dom/NamedNodeMapImpl;)V", nullptr, $PROTECTED, $virtualMethod(AttributeMap, cloneContent, void, $NamedNodeMapImpl*)},
	{"cloneMap", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;)Lcom/sun/org/apache/xerces/internal/dom/NamedNodeMapImpl;", nullptr, $PUBLIC, $virtualMethod(AttributeMap, cloneMap, $NamedNodeMapImpl*, $NodeImpl*)},
	{"internalRemoveNamedItem", "(Ljava/lang/String;Z)Lorg/w3c/dom/Node;", nullptr, $PROTECTED | $FINAL, $method(AttributeMap, internalRemoveNamedItem, $Node*, $String*, bool)},
	{"internalRemoveNamedItemNS", "(Ljava/lang/String;Ljava/lang/String;Z)Lorg/w3c/dom/Node;", nullptr, $PROTECTED | $FINAL, $method(AttributeMap, internalRemoveNamedItemNS, $Node*, $String*, $String*, bool)},
	{"moveSpecifiedAttributes", "(Lcom/sun/org/apache/xerces/internal/dom/AttributeMap;)V", nullptr, 0, $virtualMethod(AttributeMap, moveSpecifiedAttributes, void, AttributeMap*)},
	{"reconcileDefaults", "(Lcom/sun/org/apache/xerces/internal/dom/NamedNodeMapImpl;)V", nullptr, $PROTECTED, $virtualMethod(AttributeMap, reconcileDefaults, void, $NamedNodeMapImpl*)},
	{"remove", "(Lcom/sun/org/apache/xerces/internal/dom/AttrImpl;IZ)Lorg/w3c/dom/Node;", nullptr, $PRIVATE | $FINAL, $method(AttributeMap, remove, $Node*, $AttrImpl*, int32_t, bool)},
	{"removeItem", "(Lorg/w3c/dom/Node;Z)Lorg/w3c/dom/Node;", nullptr, $PROTECTED, $virtualMethod(AttributeMap, removeItem, $Node*, $Node*, bool), "org.w3c.dom.DOMException"},
	{"removeNamedItem", "(Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(AttributeMap, removeNamedItem, $Node*, $String*), "org.w3c.dom.DOMException"},
	{"removeNamedItemNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(AttributeMap, removeNamedItemNS, $Node*, $String*, $String*), "org.w3c.dom.DOMException"},
	{"safeRemoveNamedItem", "(Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, 0, $virtualMethod(AttributeMap, safeRemoveNamedItem, $Node*, $String*)},
	{"safeRemoveNamedItemNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, 0, $virtualMethod(AttributeMap, safeRemoveNamedItemNS, $Node*, $String*, $String*)},
	{"setNamedItem", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(AttributeMap, setNamedItem, $Node*, $Node*), "org.w3c.dom.DOMException"},
	{"setNamedItemNS", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(AttributeMap, setNamedItemNS, $Node*, $Node*), "org.w3c.dom.DOMException"},
	{}
};

$ClassInfo _AttributeMap_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.AttributeMap",
	"com.sun.org.apache.xerces.internal.dom.NamedNodeMapImpl",
	nullptr,
	_AttributeMap_FieldInfo_,
	_AttributeMap_MethodInfo_
};

$Object* allocate$AttributeMap($Class* clazz) {
	return $of($alloc(AttributeMap));
}

void AttributeMap::init$($ElementImpl* ownerNode, $NamedNodeMapImpl* defaults) {
	$NamedNodeMapImpl::init$(ownerNode);
	if (defaults != nullptr) {
		cloneContent(defaults);
		if (this->nodes != nullptr) {
			hasDefaults(true);
		}
	}
}

$Node* AttributeMap::setNamedItem($Node* arg) {
	$useLocalCurrentObjectStackCache();
	bool errCheck = $nc($($nc(this->ownerNode)->ownerDocument()))->errorChecking;
	if (errCheck) {
		if (isReadOnly()) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, msg);
		}
		if (!$equals($nc(arg)->getOwnerDocument(), $nc(this->ownerNode)->ownerDocument())) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "WRONG_DOCUMENT_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::WRONG_DOCUMENT_ERR, msg);
		}
		if ($nc(arg)->getNodeType() != $Node::ATTRIBUTE_NODE) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "HIERARCHY_REQUEST_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::HIERARCHY_REQUEST_ERR, msg);
		}
	}
	$var($AttrImpl, argn, $cast($AttrImpl, arg));
	if ($nc(argn)->isOwned()) {
		if (errCheck && !$equals(argn->getOwnerElement(), this->ownerNode)) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INUSE_ATTRIBUTE_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::INUSE_ATTRIBUTE_ERR, msg);
		}
		return arg;
	}
	$set($nc(argn), ownerNode, this->ownerNode);
	argn->isOwned(true);
	int32_t i = findNamePoint($(argn->getNodeName()), 0);
	$var($AttrImpl, previous, nullptr);
	if (i >= 0) {
		$assign(previous, $cast($AttrImpl, $nc(this->nodes)->get(i)));
		$nc(this->nodes)->set(i, arg);
		$set($nc(previous), ownerNode, $nc(this->ownerNode)->ownerDocument());
		previous->isOwned(false);
		previous->isSpecified(true);
	} else {
		i = -1 - i;
		if (nullptr == this->nodes) {
			$set(this, nodes, $new($ArrayList, 5));
		}
		$nc(this->nodes)->add(i, arg);
	}
	$nc($($nc(this->ownerNode)->ownerDocument()))->setAttrNode(argn, previous);
	if (!argn->isNormalized()) {
		$nc(this->ownerNode)->isNormalized(false);
	}
	return static_cast<$Node*>(static_cast<$NodeImpl*>(previous));
}

$Node* AttributeMap::setNamedItemNS($Node* arg) {
	$useLocalCurrentObjectStackCache();
	bool errCheck = $nc($($nc(this->ownerNode)->ownerDocument()))->errorChecking;
	if (errCheck) {
		if (isReadOnly()) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, msg);
		}
		if (!$equals($nc(arg)->getOwnerDocument(), $nc(this->ownerNode)->ownerDocument())) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "WRONG_DOCUMENT_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::WRONG_DOCUMENT_ERR, msg);
		}
		if ($nc(arg)->getNodeType() != $Node::ATTRIBUTE_NODE) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "HIERARCHY_REQUEST_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::HIERARCHY_REQUEST_ERR, msg);
		}
	}
	$var($AttrImpl, argn, $cast($AttrImpl, arg));
	if ($nc(argn)->isOwned()) {
		if (errCheck && !$equals(argn->getOwnerElement(), this->ownerNode)) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INUSE_ATTRIBUTE_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::INUSE_ATTRIBUTE_ERR, msg);
		}
		return arg;
	}
	$set($nc(argn), ownerNode, this->ownerNode);
	argn->isOwned(true);
	$var($String, var$0, argn->getNamespaceURI());
	int32_t i = findNamePoint(var$0, $(argn->getLocalName()));
	$var($AttrImpl, previous, nullptr);
	if (i >= 0) {
		$assign(previous, $cast($AttrImpl, $nc(this->nodes)->get(i)));
		$nc(this->nodes)->set(i, arg);
		$set($nc(previous), ownerNode, $nc(this->ownerNode)->ownerDocument());
		previous->isOwned(false);
		previous->isSpecified(true);
	} else {
		i = findNamePoint($($nc(arg)->getNodeName()), 0);
		if (i >= 0) {
			$assign(previous, $cast($AttrImpl, $nc(this->nodes)->get(i)));
			$nc(this->nodes)->add(i, arg);
		} else {
			i = -1 - i;
			if (nullptr == this->nodes) {
				$set(this, nodes, $new($ArrayList, 5));
			}
			$nc(this->nodes)->add(i, arg);
		}
	}
	$nc($($nc(this->ownerNode)->ownerDocument()))->setAttrNode(argn, previous);
	if (!argn->isNormalized()) {
		$nc(this->ownerNode)->isNormalized(false);
	}
	return static_cast<$Node*>(static_cast<$NodeImpl*>(previous));
}

$Node* AttributeMap::removeNamedItem($String* name) {
	return internalRemoveNamedItem(name, true);
}

$Node* AttributeMap::safeRemoveNamedItem($String* name) {
	return internalRemoveNamedItem(name, false);
}

$Node* AttributeMap::removeItem($Node* item, bool addDefault) {
	int32_t index = -1;
	if (this->nodes != nullptr) {
		int32_t size = $nc(this->nodes)->size();
		for (int32_t i = 0; i < size; ++i) {
			if ($equals($nc(this->nodes)->get(i), item)) {
				index = i;
				break;
			}
		}
	}
	if (index < 0) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NOT_FOUND_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::NOT_FOUND_ERR, msg);
	}
	return remove($cast($AttrImpl, item), index, addDefault);
}

$Node* AttributeMap::internalRemoveNamedItem($String* name, bool raiseEx) {
	$useLocalCurrentObjectStackCache();
	if (isReadOnly()) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, msg);
	}
	int32_t i = findNamePoint(name, 0);
	if (i < 0) {
		if (raiseEx) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NOT_FOUND_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::NOT_FOUND_ERR, msg);
		} else {
			return nullptr;
		}
	}
	return remove($cast($AttrImpl, $($nc(this->nodes)->get(i))), i, true);
}

$Node* AttributeMap::remove($AttrImpl* attr, int32_t index, bool addDefault) {
	$useLocalCurrentObjectStackCache();
	$var($CoreDocumentImpl, ownerDocument, $nc(this->ownerNode)->ownerDocument());
	$var($String, name, $nc(attr)->getNodeName());
	if (attr->isIdAttribute()) {
		$nc(ownerDocument)->removeIdentifier($(attr->getValue()));
	}
	if (hasDefaults() && addDefault) {
		$var($NamedNodeMapImpl, defaults, $nc(($cast($ElementImpl, this->ownerNode)))->getDefaultAttributes());
		$var($Node, d, nullptr);
		bool var$0 = defaults != nullptr && ($assign(d, defaults->getNamedItem(name))) != nullptr;
		if (var$0 && findNamePoint(name, index + 1) < 0) {
			$var($NodeImpl, clone, $cast($NodeImpl, $nc(d)->cloneNode(true)));
			if (d->getLocalName() != nullptr) {
				$set($nc($cast($AttrNSImpl, clone)), namespaceURI, attr->getNamespaceURI());
			}
			$set($nc(clone), ownerNode, this->ownerNode);
			clone->isOwned(true);
			clone->isSpecified(false);
			$nc(this->nodes)->set(index, clone);
			if (attr->isIdAttribute()) {
				$nc(ownerDocument)->putIdentifier($(clone->getNodeValue()), $cast($ElementImpl, this->ownerNode));
			}
		} else {
			$nc(this->nodes)->remove(index);
		}
	} else {
		$nc(this->nodes)->remove(index);
	}
	$set(attr, ownerNode, ownerDocument);
	attr->isOwned(false);
	attr->isSpecified(true);
	attr->isIdAttribute(false);
	$nc(ownerDocument)->removedAttrNode(attr, this->ownerNode, name);
	return static_cast<$Node*>(static_cast<$NodeImpl*>(attr));
}

$Node* AttributeMap::removeNamedItemNS($String* namespaceURI, $String* name) {
	return internalRemoveNamedItemNS(namespaceURI, name, true);
}

$Node* AttributeMap::safeRemoveNamedItemNS($String* namespaceURI, $String* name) {
	return internalRemoveNamedItemNS(namespaceURI, name, false);
}

$Node* AttributeMap::internalRemoveNamedItemNS($String* namespaceURI, $String* name, bool raiseEx) {
	$useLocalCurrentObjectStackCache();
	$var($CoreDocumentImpl, ownerDocument, $nc(this->ownerNode)->ownerDocument());
	if ($nc(ownerDocument)->errorChecking && isReadOnly()) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, msg);
	}
	int32_t i = findNamePoint(namespaceURI, name);
	if (i < 0) {
		if (raiseEx) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NOT_FOUND_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::NOT_FOUND_ERR, msg);
		} else {
			return nullptr;
		}
	}
	$var($AttrImpl, n, $cast($AttrImpl, $nc(this->nodes)->get(i)));
	if ($nc(n)->isIdAttribute()) {
		$nc(ownerDocument)->removeIdentifier($(n->getValue()));
	}
	$var($String, nodeName, $nc(n)->getNodeName());
	if (hasDefaults()) {
		$var($NamedNodeMapImpl, defaults, $nc(($cast($ElementImpl, this->ownerNode)))->getDefaultAttributes());
		$var($Node, d, nullptr);
		if (defaults != nullptr && ($assign(d, defaults->getNamedItem(nodeName))) != nullptr) {
			int32_t j = findNamePoint(nodeName, 0);
			if (j >= 0 && findNamePoint(nodeName, j + 1) < 0) {
				$var($NodeImpl, clone, $cast($NodeImpl, $nc(d)->cloneNode(true)));
				$set($nc(clone), ownerNode, this->ownerNode);
				if (d->getLocalName() != nullptr) {
					$set($nc($cast($AttrNSImpl, clone)), namespaceURI, namespaceURI);
				}
				clone->isOwned(true);
				clone->isSpecified(false);
				$nc(this->nodes)->set(i, clone);
				if (clone->isIdAttribute()) {
					$nc(ownerDocument)->putIdentifier($(clone->getNodeValue()), $cast($ElementImpl, this->ownerNode));
				}
			} else {
				$nc(this->nodes)->remove(i);
			}
		} else {
			$nc(this->nodes)->remove(i);
		}
	} else {
		$nc(this->nodes)->remove(i);
	}
	$set(n, ownerNode, ownerDocument);
	n->isOwned(false);
	n->isSpecified(true);
	n->isIdAttribute(false);
	$nc(ownerDocument)->removedAttrNode(n, this->ownerNode, name);
	return static_cast<$Node*>(static_cast<$NodeImpl*>(n));
}

$NamedNodeMapImpl* AttributeMap::cloneMap($NodeImpl* ownerNode) {
	$var(AttributeMap, newmap, $new(AttributeMap, $cast($ElementImpl, ownerNode), nullptr));
	newmap->hasDefaults(hasDefaults());
	newmap->cloneContent(this);
	return newmap;
}

void AttributeMap::cloneContent($NamedNodeMapImpl* srcmap) {
	$useLocalCurrentObjectStackCache();
	$var($List, srcnodes, $nc(srcmap)->nodes);
	if (srcnodes != nullptr) {
		int32_t size = srcnodes->size();
		if (size != 0) {
			if (this->nodes == nullptr) {
				$set(this, nodes, $new($ArrayList, size));
			} else {
				$nc(this->nodes)->clear();
			}
			for (int32_t i = 0; i < size; ++i) {
				$var($NodeImpl, n, $cast($NodeImpl, srcnodes->get(i)));
				$var($NodeImpl, clone, $cast($NodeImpl, $nc(n)->cloneNode(true)));
				$nc(clone)->isSpecified(n->isSpecified());
				$nc(this->nodes)->add(clone);
				$set(clone, ownerNode, this->ownerNode);
				clone->isOwned(true);
			}
		}
	}
}

void AttributeMap::moveSpecifiedAttributes(AttributeMap* srcmap) {
	$useLocalCurrentObjectStackCache();
	int32_t nsize = ($nc(srcmap)->nodes != nullptr) ? $nc($nc(srcmap)->nodes)->size() : 0;
	for (int32_t i = nsize - 1; i >= 0; --i) {
		$var($AttrImpl, attr, $cast($AttrImpl, $nc(srcmap->nodes)->get(i)));
		if ($nc(attr)->isSpecified()) {
			srcmap->remove(attr, i, false);
			if (attr->getLocalName() != nullptr) {
				setNamedItem(static_cast<$Node*>(static_cast<$NodeImpl*>(attr)));
			} else {
				setNamedItemNS(static_cast<$Node*>(static_cast<$NodeImpl*>(attr)));
			}
		}
	}
}

void AttributeMap::reconcileDefaults($NamedNodeMapImpl* defaults) {
	$useLocalCurrentObjectStackCache();
	int32_t nsize = (this->nodes != nullptr) ? $nc(this->nodes)->size() : 0;
	for (int32_t i = nsize - 1; i >= 0; --i) {
		$var($AttrImpl, attr, $cast($AttrImpl, $nc(this->nodes)->get(i)));
		if (!$nc(attr)->isSpecified()) {
			remove(attr, i, false);
		}
	}
	if (defaults == nullptr) {
		return;
	}
	if (this->nodes == nullptr || $nc(this->nodes)->size() == 0) {
		cloneContent(defaults);
	} else {
		int32_t dsize = $nc($nc(defaults)->nodes)->size();
		for (int32_t n = 0; n < dsize; ++n) {
			$var($AttrImpl, d, $cast($AttrImpl, $nc(defaults->nodes)->get(n)));
			int32_t i = findNamePoint($($nc(d)->getNodeName()), 0);
			if (i < 0) {
				i = -1 - i;
				$var($NodeImpl, clone, $cast($NodeImpl, $nc(d)->cloneNode(true)));
				$set($nc(clone), ownerNode, this->ownerNode);
				clone->isOwned(true);
				clone->isSpecified(false);
				$nc(this->nodes)->add(i, clone);
			}
		}
	}
}

int32_t AttributeMap::addItem($Node* arg) {
	$useLocalCurrentObjectStackCache();
	$var($AttrImpl, argn, $cast($AttrImpl, arg));
	$set($nc(argn), ownerNode, this->ownerNode);
	argn->isOwned(true);
	$var($String, var$0, argn->getNamespaceURI());
	int32_t i = findNamePoint(var$0, $(argn->getLocalName()));
	if (i >= 0) {
		$nc(this->nodes)->set(i, arg);
	} else {
		i = findNamePoint($(argn->getNodeName()), 0);
		if (i >= 0) {
			$nc(this->nodes)->add(i, arg);
		} else {
			i = -1 - i;
			if (nullptr == this->nodes) {
				$set(this, nodes, $new($ArrayList, 5));
			}
			$nc(this->nodes)->add(i, arg);
		}
	}
	$nc($($nc(this->ownerNode)->ownerDocument()))->setAttrNode(argn, nullptr);
	return i;
}

AttributeMap::AttributeMap() {
}

$Class* AttributeMap::load$($String* name, bool initialize) {
	$loadClass(AttributeMap, name, initialize, &_AttributeMap_ClassInfo_, allocate$AttributeMap);
	return class$;
}

$Class* AttributeMap::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com