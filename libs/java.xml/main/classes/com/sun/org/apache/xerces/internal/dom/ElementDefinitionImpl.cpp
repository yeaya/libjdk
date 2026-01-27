#include <com/sun/org/apache/xerces/internal/dom/ElementDefinitionImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/ChildNode.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NamedNodeMapImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ParentNode.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ELEMENT_DEFINITION_NODE

using $ChildNode = ::com::sun::org::apache::xerces::internal::dom::ChildNode;
using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $NamedNodeMapImpl = ::com::sun::org::apache::xerces::internal::dom::NamedNodeMapImpl;
using $NodeImpl = ::com::sun::org::apache::xerces::internal::dom::NodeImpl;
using $ParentNode = ::com::sun::org::apache::xerces::internal::dom::ParentNode;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$FieldInfo _ElementDefinitionImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ElementDefinitionImpl, serialVersionUID)},
	{"name", "Ljava/lang/String;", nullptr, $PROTECTED, $field(ElementDefinitionImpl, name)},
	{"attributes", "Lcom/sun/org/apache/xerces/internal/dom/NamedNodeMapImpl;", nullptr, $PROTECTED, $field(ElementDefinitionImpl, attributes)},
	{}
};

$MethodInfo _ElementDefinitionImpl_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ElementDefinitionImpl, init$, void, $CoreDocumentImpl*, $String*)},
	{"cloneNode", "(Z)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(ElementDefinitionImpl, cloneNode, $Node*, bool)},
	{"getAttributes", "()Lorg/w3c/dom/NamedNodeMap;", nullptr, $PUBLIC, $virtualMethod(ElementDefinitionImpl, getAttributes, $NamedNodeMap*)},
	{"getNodeName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ElementDefinitionImpl, getNodeName, $String*)},
	{"getNodeType", "()S", nullptr, $PUBLIC, $virtualMethod(ElementDefinitionImpl, getNodeType, int16_t)},
	{}
};

$ClassInfo _ElementDefinitionImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.ElementDefinitionImpl",
	"com.sun.org.apache.xerces.internal.dom.ParentNode",
	nullptr,
	_ElementDefinitionImpl_FieldInfo_,
	_ElementDefinitionImpl_MethodInfo_
};

$Object* allocate$ElementDefinitionImpl($Class* clazz) {
	return $of($alloc(ElementDefinitionImpl));
}

void ElementDefinitionImpl::init$($CoreDocumentImpl* ownerDocument, $String* name) {
	$ParentNode::init$(ownerDocument);
	$set(this, name, name);
	$set(this, attributes, $new($NamedNodeMapImpl, ownerDocument));
}

int16_t ElementDefinitionImpl::getNodeType() {
	return $NodeImpl::ELEMENT_DEFINITION_NODE;
}

$String* ElementDefinitionImpl::getNodeName() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return this->name;
}

$Node* ElementDefinitionImpl::cloneNode(bool deep) {
	$var(ElementDefinitionImpl, newnode, $cast(ElementDefinitionImpl, $ParentNode::cloneNode(deep)));
	$set($nc(newnode), attributes, $nc(this->attributes)->cloneMap(static_cast<$NodeImpl*>(newnode)));
	return newnode;
}

$NamedNodeMap* ElementDefinitionImpl::getAttributes() {
	if (needsSyncChildren()) {
		synchronizeChildren();
	}
	return this->attributes;
}

ElementDefinitionImpl::ElementDefinitionImpl() {
}

$Class* ElementDefinitionImpl::load$($String* name, bool initialize) {
	$loadClass(ElementDefinitionImpl, name, initialize, &_ElementDefinitionImpl_ClassInfo_, allocate$ElementDefinitionImpl);
	return class$;
}

$Class* ElementDefinitionImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com