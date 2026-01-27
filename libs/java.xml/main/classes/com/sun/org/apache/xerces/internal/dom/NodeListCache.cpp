#include <com/sun/org/apache/xerces/internal/dom/NodeListCache.h>

#include <com/sun/org/apache/xerces/internal/dom/ParentNode.h>
#include <jcpp.h>

using $ParentNode = ::com::sun::org::apache::xerces::internal::dom::ParentNode;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$FieldInfo _NodeListCache_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NodeListCache, serialVersionUID)},
	{"fLength", "I", nullptr, 0, $field(NodeListCache, fLength)},
	{"fChildIndex", "I", nullptr, 0, $field(NodeListCache, fChildIndex)},
	{"fChild", "Lcom/sun/org/apache/xerces/internal/dom/ChildNode;", nullptr, 0, $field(NodeListCache, fChild)},
	{"fOwner", "Lcom/sun/org/apache/xerces/internal/dom/ParentNode;", nullptr, 0, $field(NodeListCache, fOwner)},
	{"next", "Lcom/sun/org/apache/xerces/internal/dom/NodeListCache;", nullptr, 0, $field(NodeListCache, next)},
	{}
};

$MethodInfo _NodeListCache_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/ParentNode;)V", nullptr, 0, $method(NodeListCache, init$, void, $ParentNode*)},
	{}
};

$ClassInfo _NodeListCache_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.NodeListCache",
	"java.lang.Object",
	"java.io.Serializable",
	_NodeListCache_FieldInfo_,
	_NodeListCache_MethodInfo_
};

$Object* allocate$NodeListCache($Class* clazz) {
	return $of($alloc(NodeListCache));
}

void NodeListCache::init$($ParentNode* owner) {
	this->fLength = -1;
	this->fChildIndex = -1;
	$set(this, fOwner, owner);
}

NodeListCache::NodeListCache() {
}

$Class* NodeListCache::load$($String* name, bool initialize) {
	$loadClass(NodeListCache, name, initialize, &_NodeListCache_ClassInfo_, allocate$NodeListCache);
	return class$;
}

$Class* NodeListCache::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com