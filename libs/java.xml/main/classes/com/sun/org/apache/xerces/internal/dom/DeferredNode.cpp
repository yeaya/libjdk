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

$FieldInfo _DeferredNode_FieldInfo_[] = {
	{"TYPE_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DeferredNode, TYPE_NODE)},
	{}
};

$MethodInfo _DeferredNode_MethodInfo_[] = {
	{"getNodeIndex", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DeferredNode, getNodeIndex, int32_t)},
	{}
};

$ClassInfo _DeferredNode_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.dom.DeferredNode",
	nullptr,
	"org.w3c.dom.Node",
	_DeferredNode_FieldInfo_,
	_DeferredNode_MethodInfo_
};

$Object* allocate$DeferredNode($Class* clazz) {
	return $of($alloc(DeferredNode));
}

$Class* DeferredNode::load$($String* name, bool initialize) {
	$loadClass(DeferredNode, name, initialize, &_DeferredNode_ClassInfo_, allocate$DeferredNode);
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