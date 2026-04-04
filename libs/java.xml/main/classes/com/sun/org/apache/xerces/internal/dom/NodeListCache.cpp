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

void NodeListCache::init$($ParentNode* owner) {
	this->fLength = -1;
	this->fChildIndex = -1;
	$set(this, fOwner, owner);
}

NodeListCache::NodeListCache() {
}

$Class* NodeListCache::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NodeListCache, serialVersionUID)},
		{"fLength", "I", nullptr, 0, $field(NodeListCache, fLength)},
		{"fChildIndex", "I", nullptr, 0, $field(NodeListCache, fChildIndex)},
		{"fChild", "Lcom/sun/org/apache/xerces/internal/dom/ChildNode;", nullptr, 0, $field(NodeListCache, fChild)},
		{"fOwner", "Lcom/sun/org/apache/xerces/internal/dom/ParentNode;", nullptr, 0, $field(NodeListCache, fOwner)},
		{"next", "Lcom/sun/org/apache/xerces/internal/dom/NodeListCache;", nullptr, 0, $field(NodeListCache, next)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/ParentNode;)V", nullptr, 0, $method(NodeListCache, init$, void, $ParentNode*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.dom.NodeListCache",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NodeListCache, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NodeListCache);
	});
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