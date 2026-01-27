#include <com/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator$HeapNode.h>

#include <com/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <jcpp.h>

#undef ITERATOR_CLONE_ERR

using $MultiValuedNodeHeapIterator = ::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator;
using $BasisLibrary = ::com::sun::org::apache::xalan::internal::xsltc::runtime::BasisLibrary;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

$FieldInfo _MultiValuedNodeHeapIterator$HeapNode_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator;", nullptr, $FINAL | $SYNTHETIC, $field(MultiValuedNodeHeapIterator$HeapNode, this$0)},
	{"_node", "I", nullptr, $PROTECTED, $field(MultiValuedNodeHeapIterator$HeapNode, _node)},
	{"_markedNode", "I", nullptr, $PROTECTED, $field(MultiValuedNodeHeapIterator$HeapNode, _markedNode)},
	{"_isStartSet", "Z", nullptr, $PROTECTED, $field(MultiValuedNodeHeapIterator$HeapNode, _isStartSet)},
	{}
};

$MethodInfo _MultiValuedNodeHeapIterator$HeapNode_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator;)V", nullptr, $PUBLIC, $method(MultiValuedNodeHeapIterator$HeapNode, init$, void, $MultiValuedNodeHeapIterator*)},
	{"cloneHeapNode", "()Lcom/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator$HeapNode;", nullptr, $PUBLIC, $virtualMethod(MultiValuedNodeHeapIterator$HeapNode, cloneHeapNode, MultiValuedNodeHeapIterator$HeapNode*)},
	{"gotoMark", "()V", nullptr, $PUBLIC, $virtualMethod(MultiValuedNodeHeapIterator$HeapNode, gotoMark, void)},
	{"isLessThan", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator$HeapNode;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MultiValuedNodeHeapIterator$HeapNode, isLessThan, bool, MultiValuedNodeHeapIterator$HeapNode*)},
	{"reset", "()Lcom/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator$HeapNode;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MultiValuedNodeHeapIterator$HeapNode, reset, MultiValuedNodeHeapIterator$HeapNode*)},
	{"setMark", "()V", nullptr, $PUBLIC, $virtualMethod(MultiValuedNodeHeapIterator$HeapNode, setMark, void)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator$HeapNode;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MultiValuedNodeHeapIterator$HeapNode, setStartNode, MultiValuedNodeHeapIterator$HeapNode*, int32_t)},
	{"step", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MultiValuedNodeHeapIterator$HeapNode, step, int32_t)},
	{}
};

$InnerClassInfo _MultiValuedNodeHeapIterator$HeapNode_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.dom.MultiValuedNodeHeapIterator$HeapNode", "com.sun.org.apache.xalan.internal.xsltc.dom.MultiValuedNodeHeapIterator", "HeapNode", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MultiValuedNodeHeapIterator$HeapNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.dom.MultiValuedNodeHeapIterator$HeapNode",
	"java.lang.Object",
	"java.lang.Cloneable",
	_MultiValuedNodeHeapIterator$HeapNode_FieldInfo_,
	_MultiValuedNodeHeapIterator$HeapNode_MethodInfo_,
	nullptr,
	nullptr,
	_MultiValuedNodeHeapIterator$HeapNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.dom.MultiValuedNodeHeapIterator"
};

$Object* allocate$MultiValuedNodeHeapIterator$HeapNode($Class* clazz) {
	return $of($alloc(MultiValuedNodeHeapIterator$HeapNode));
}

void MultiValuedNodeHeapIterator$HeapNode::init$($MultiValuedNodeHeapIterator* this$0) {
	$set(this, this$0, this$0);
	this->_isStartSet = false;
}

MultiValuedNodeHeapIterator$HeapNode* MultiValuedNodeHeapIterator$HeapNode::cloneHeapNode() {
	$useLocalCurrentObjectStackCache();
	$var(MultiValuedNodeHeapIterator$HeapNode, clone, nullptr);
	try {
		$assign(clone, $cast(MultiValuedNodeHeapIterator$HeapNode, $Cloneable::clone()));
	} catch ($CloneNotSupportedException& e) {
		$init($BasisLibrary);
		$BasisLibrary::runTimeError($BasisLibrary::ITERATOR_CLONE_ERR, $($of(e->toString())));
		return nullptr;
	}
	$nc(clone)->_node = this->_node;
	clone->_markedNode = this->_node;
	return clone;
}

void MultiValuedNodeHeapIterator$HeapNode::setMark() {
	this->_markedNode = this->_node;
}

void MultiValuedNodeHeapIterator$HeapNode::gotoMark() {
	this->_node = this->_markedNode;
}

MultiValuedNodeHeapIterator$HeapNode::MultiValuedNodeHeapIterator$HeapNode() {
}

$Class* MultiValuedNodeHeapIterator$HeapNode::load$($String* name, bool initialize) {
	$loadClass(MultiValuedNodeHeapIterator$HeapNode, name, initialize, &_MultiValuedNodeHeapIterator$HeapNode_ClassInfo_, allocate$MultiValuedNodeHeapIterator$HeapNode);
	return class$;
}

$Class* MultiValuedNodeHeapIterator$HeapNode::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com