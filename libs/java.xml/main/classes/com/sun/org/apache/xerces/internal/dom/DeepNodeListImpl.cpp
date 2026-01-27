#include <com/sun/org/apache/xerces/internal/dom/DeepNodeListImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/ElementImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ELEMENT_NODE
#undef MAX_VALUE

using $ElementImpl = ::com::sun::org::apache::xerces::internal::dom::ElementImpl;
using $NodeImpl = ::com::sun::org::apache::xerces::internal::dom::NodeImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$FieldInfo _DeepNodeListImpl_FieldInfo_[] = {
	{"rootNode", "Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;", nullptr, $PROTECTED, $field(DeepNodeListImpl, rootNode)},
	{"tagName", "Ljava/lang/String;", nullptr, $PROTECTED, $field(DeepNodeListImpl, tagName)},
	{"changes", "I", nullptr, $PROTECTED, $field(DeepNodeListImpl, changes)},
	{"nodes", "Ljava/util/List;", "Ljava/util/List<Lorg/w3c/dom/Node;>;", $PROTECTED, $field(DeepNodeListImpl, nodes)},
	{"nsName", "Ljava/lang/String;", nullptr, $PROTECTED, $field(DeepNodeListImpl, nsName)},
	{"enableNS", "Z", nullptr, $PROTECTED, $field(DeepNodeListImpl, enableNS)},
	{}
};

$MethodInfo _DeepNodeListImpl_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DeepNodeListImpl, init$, void, $NodeImpl*, $String*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DeepNodeListImpl, init$, void, $NodeImpl*, $String*, $String*)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(DeepNodeListImpl, getLength, int32_t)},
	{"item", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DeepNodeListImpl, item, $Node*, int32_t)},
	{"nextMatchingElementAfter", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PROTECTED, $virtualMethod(DeepNodeListImpl, nextMatchingElementAfter, $Node*, $Node*)},
	{}
};

$ClassInfo _DeepNodeListImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.DeepNodeListImpl",
	"java.lang.Object",
	"org.w3c.dom.NodeList",
	_DeepNodeListImpl_FieldInfo_,
	_DeepNodeListImpl_MethodInfo_
};

$Object* allocate$DeepNodeListImpl($Class* clazz) {
	return $of($alloc(DeepNodeListImpl));
}

void DeepNodeListImpl::init$($NodeImpl* rootNode, $String* tagName) {
	this->changes = 0;
	this->enableNS = false;
	$set(this, rootNode, rootNode);
	$set(this, tagName, tagName);
	$set(this, nodes, $new($ArrayList));
}

void DeepNodeListImpl::init$($NodeImpl* rootNode, $String* nsName, $String* tagName) {
	DeepNodeListImpl::init$(rootNode, tagName);
	$set(this, nsName, (nsName != nullptr && nsName->length() != 0) ? nsName : ($String*)nullptr);
	this->enableNS = true;
}

int32_t DeepNodeListImpl::getLength() {
	item($Integer::MAX_VALUE);
	return $nc(this->nodes)->size();
}

$Node* DeepNodeListImpl::item(int32_t index) {
	$var($Node, thisNode, nullptr);
	if ($nc(this->rootNode)->changes() != this->changes) {
		$set(this, nodes, $new($ArrayList));
		this->changes = $nc(this->rootNode)->changes();
	}
	int32_t currentSize = $nc(this->nodes)->size();
	if (index < currentSize) {
		return $cast($Node, $nc(this->nodes)->get(index));
	} else {
		if (currentSize == 0) {
			$assign(thisNode, this->rootNode);
		} else {
			$assign(thisNode, ($cast($NodeImpl, $nc(this->nodes)->get(currentSize - 1))));
		}
		while (thisNode != nullptr && index >= $nc(this->nodes)->size()) {
			$assign(thisNode, nextMatchingElementAfter(thisNode));
			if (thisNode != nullptr) {
				$nc(this->nodes)->add(thisNode);
			}
		}
		return thisNode;
	}
}

$Node* DeepNodeListImpl::nextMatchingElementAfter($Node* current$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Node, current, current$renamed);
	$var($Node, next, nullptr);
	while (current != nullptr) {
		if (current->hasChildNodes()) {
			$assign(current, current->getFirstChild());
		} else if (!$equals(current, this->rootNode) && nullptr != ($assign(next, current->getNextSibling()))) {
			$assign(current, next);
		} else {
			$assign(next, nullptr);
			for (; !$equals(current, this->rootNode); $assign(current, $nc(current)->getParentNode())) {
				$assign(next, current->getNextSibling());
				if (next != nullptr) {
					break;
				}
			}
			$assign(current, next);
		}
		if (!$equals(current, this->rootNode) && current != nullptr && current->getNodeType() == $Node::ELEMENT_NODE) {
			if (!this->enableNS) {
				bool var$0 = $nc(this->tagName)->equals("*"_s);
				if (var$0 || $nc($($nc(($cast($ElementImpl, current)))->getTagName()))->equals(this->tagName)) {
					return current;
				}
			} else if ($nc(this->tagName)->equals("*"_s)) {
				if (this->nsName != nullptr && $nc(this->nsName)->equals("*"_s)) {
					return current;
				} else {
					$var($ElementImpl, el, $cast($ElementImpl, current));
					bool var$1 = (this->nsName == nullptr && el->getNamespaceURI() == nullptr);
					if (var$1 || (this->nsName != nullptr && $nc(this->nsName)->equals($(el->getNamespaceURI())))) {
						return current;
					}
				}
			} else {
				$var($ElementImpl, el, $cast($ElementImpl, current));
				bool var$2 = el->getLocalName() != nullptr;
				if (var$2 && $nc($(el->getLocalName()))->equals(this->tagName)) {
					if (this->nsName != nullptr && $nc(this->nsName)->equals("*"_s)) {
						return current;
					} else {
						bool var$4 = (this->nsName == nullptr && el->getNamespaceURI() == nullptr);
						if (var$4 || (this->nsName != nullptr && $nc(this->nsName)->equals($(el->getNamespaceURI())))) {
							return current;
						}
					}
				}
			}
		}
	}
	return nullptr;
}

DeepNodeListImpl::DeepNodeListImpl() {
}

$Class* DeepNodeListImpl::load$($String* name, bool initialize) {
	$loadClass(DeepNodeListImpl, name, initialize, &_DeepNodeListImpl_ClassInfo_, allocate$DeepNodeListImpl);
	return class$;
}

$Class* DeepNodeListImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com