#include <com/sun/org/apache/xerces/internal/dom/ChildNode.h>

#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $NodeImpl = ::com::sun::org::apache::xerces::internal::dom::NodeImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$FieldInfo _ChildNode_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ChildNode, serialVersionUID)},
	{"previousSibling", "Lcom/sun/org/apache/xerces/internal/dom/ChildNode;", nullptr, $PROTECTED, $field(ChildNode, previousSibling$)},
	{"nextSibling", "Lcom/sun/org/apache/xerces/internal/dom/ChildNode;", nullptr, $PROTECTED, $field(ChildNode, nextSibling)},
	{}
};

$MethodInfo _ChildNode_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;)V", nullptr, $PROTECTED, $method(ChildNode, init$, void, $CoreDocumentImpl*)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(ChildNode, init$, void)},
	{"cloneNode", "(Z)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(ChildNode, cloneNode, $Node*, bool)},
	{"getNextSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(ChildNode, getNextSibling, $Node*)},
	{"getParentNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(ChildNode, getParentNode, $Node*)},
	{"getPreviousSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(ChildNode, getPreviousSibling, $Node*)},
	{"parentNode", "()Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;", nullptr, $FINAL, $virtualMethod(ChildNode, parentNode, $NodeImpl*)},
	{"previousSibling", "()Lcom/sun/org/apache/xerces/internal/dom/ChildNode;", nullptr, $FINAL, $virtualMethod(ChildNode, previousSibling, ChildNode*)},
	{}
};

$ClassInfo _ChildNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.dom.ChildNode",
	"com.sun.org.apache.xerces.internal.dom.NodeImpl",
	nullptr,
	_ChildNode_FieldInfo_,
	_ChildNode_MethodInfo_
};

$Object* allocate$ChildNode($Class* clazz) {
	return $of($alloc(ChildNode));
}

void ChildNode::init$($CoreDocumentImpl* ownerDocument) {
	$NodeImpl::init$(ownerDocument);
}

void ChildNode::init$() {
	$NodeImpl::init$();
}

$Node* ChildNode::cloneNode(bool deep) {
	$var(ChildNode, newnode, $cast(ChildNode, $NodeImpl::cloneNode(deep)));
	$set($nc(newnode), previousSibling$, nullptr);
	$set(newnode, nextSibling, nullptr);
	newnode->isFirstChild(false);
	return newnode;
}

$Node* ChildNode::getParentNode() {
	return isOwned() ? static_cast<$Node*>(this->ownerNode) : ($Node*)nullptr;
}

$NodeImpl* ChildNode::parentNode() {
	return isOwned() ? this->ownerNode : ($NodeImpl*)nullptr;
}

$Node* ChildNode::getNextSibling() {
	return this->nextSibling;
}

$Node* ChildNode::getPreviousSibling() {
	return isFirstChild() ? ($Node*)nullptr : static_cast<$Node*>(this->previousSibling$);
}

ChildNode* ChildNode::previousSibling() {
	return isFirstChild() ? (ChildNode*)nullptr : this->previousSibling$;
}

ChildNode::ChildNode() {
}

$Class* ChildNode::load$($String* name, bool initialize) {
	$loadClass(ChildNode, name, initialize, &_ChildNode_ClassInfo_, allocate$ChildNode);
	return class$;
}

$Class* ChildNode::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com