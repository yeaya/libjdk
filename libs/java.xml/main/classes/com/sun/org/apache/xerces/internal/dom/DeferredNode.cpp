#include <com/sun/org/apache/xerces/internal/dom/DeferredNode.h>
#include <jcpp.h>

#undef TYPE_NODE

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

$Class* DeferredNode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"TYPE_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DeferredNode, TYPE_NODE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getNodeIndex", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DeferredNode, getNodeIndex, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.dom.DeferredNode",
		nullptr,
		"org.w3c.dom.Node",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DeferredNode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeferredNode);
	});
	return class$;
}

$Class* DeferredNode::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com