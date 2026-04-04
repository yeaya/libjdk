#include <com/sun/org/apache/xalan/internal/xsltc/dom/UnionIterator$LookAheadIterator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator$HeapNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/UnionIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <jcpp.h>

using $MultiValuedNodeHeapIterator$HeapNode = ::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator$HeapNode;
using $UnionIterator = ::com::sun::org::apache::xalan::internal::xsltc::dom::UnionIterator;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $ClassInfo = ::java::lang::ClassInfo;
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

void UnionIterator$LookAheadIterator::init$($UnionIterator* this$0, $DTMAxisIterator* iterator) {
	$set(this, this$0, this$0);
	$MultiValuedNodeHeapIterator$HeapNode::init$(this$0);
	$set(this, iterator, iterator);
}

int32_t UnionIterator$LookAheadIterator::step() {
	this->_node = $nc(this->iterator)->next();
	return this->_node;
}

$MultiValuedNodeHeapIterator$HeapNode* UnionIterator$LookAheadIterator::cloneHeapNode() {
	$var(UnionIterator$LookAheadIterator, clone, $cast(UnionIterator$LookAheadIterator, $MultiValuedNodeHeapIterator$HeapNode::cloneHeapNode()));
	$set($nc(clone), iterator, $nc(this->iterator)->cloneIterator());
	return clone;
}

void UnionIterator$LookAheadIterator::setMark() {
	$MultiValuedNodeHeapIterator$HeapNode::setMark();
	$nc(this->iterator)->setMark();
}

void UnionIterator$LookAheadIterator::gotoMark() {
	$MultiValuedNodeHeapIterator$HeapNode::gotoMark();
	$nc(this->iterator)->gotoMark();
}

bool UnionIterator$LookAheadIterator::isLessThan($MultiValuedNodeHeapIterator$HeapNode* heapNode) {
	$var(UnionIterator$LookAheadIterator, comparand, $cast(UnionIterator$LookAheadIterator, heapNode));
	return $nc(this->this$0->_dom)->lessThan(this->_node, $nc(heapNode)->_node);
}

$MultiValuedNodeHeapIterator$HeapNode* UnionIterator$LookAheadIterator::setStartNode(int32_t node) {
	$nc(this->iterator)->setStartNode(node);
	return this;
}

$MultiValuedNodeHeapIterator$HeapNode* UnionIterator$LookAheadIterator::reset() {
	$nc(this->iterator)->reset();
	return this;
}

UnionIterator$LookAheadIterator::UnionIterator$LookAheadIterator() {
}

$Class* UnionIterator$LookAheadIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xalan/internal/xsltc/dom/UnionIterator;", nullptr, $FINAL | $SYNTHETIC, $field(UnionIterator$LookAheadIterator, this$0)},
		{"iterator", "Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $field(UnionIterator$LookAheadIterator, iterator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/UnionIterator;Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;)V", nullptr, $PUBLIC, $method(UnionIterator$LookAheadIterator, init$, void, $UnionIterator*, $DTMAxisIterator*)},
		{"cloneHeapNode", "()Lcom/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator$HeapNode;", nullptr, $PUBLIC, $virtualMethod(UnionIterator$LookAheadIterator, cloneHeapNode, $MultiValuedNodeHeapIterator$HeapNode*)},
		{"gotoMark", "()V", nullptr, $PUBLIC, $virtualMethod(UnionIterator$LookAheadIterator, gotoMark, void)},
		{"isLessThan", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator$HeapNode;)Z", nullptr, $PUBLIC, $virtualMethod(UnionIterator$LookAheadIterator, isLessThan, bool, $MultiValuedNodeHeapIterator$HeapNode*)},
		{"reset", "()Lcom/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator$HeapNode;", nullptr, $PUBLIC, $virtualMethod(UnionIterator$LookAheadIterator, reset, $MultiValuedNodeHeapIterator$HeapNode*)},
		{"setMark", "()V", nullptr, $PUBLIC, $virtualMethod(UnionIterator$LookAheadIterator, setMark, void)},
		{"setStartNode", "(I)Lcom/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator$HeapNode;", nullptr, $PUBLIC, $virtualMethod(UnionIterator$LookAheadIterator, setStartNode, $MultiValuedNodeHeapIterator$HeapNode*, int32_t)},
		{"step", "()I", nullptr, $PUBLIC, $virtualMethod(UnionIterator$LookAheadIterator, step, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xalan.internal.xsltc.dom.UnionIterator$LookAheadIterator", "com.sun.org.apache.xalan.internal.xsltc.dom.UnionIterator", "LookAheadIterator", $PRIVATE | $FINAL},
		{"com.sun.org.apache.xalan.internal.xsltc.dom.MultiValuedNodeHeapIterator$HeapNode", "com.sun.org.apache.xalan.internal.xsltc.dom.MultiValuedNodeHeapIterator", "HeapNode", $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.dom.UnionIterator$LookAheadIterator",
		"com.sun.org.apache.xalan.internal.xsltc.dom.MultiValuedNodeHeapIterator$HeapNode",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xalan.internal.xsltc.dom.UnionIterator"
	};
	$loadClass(UnionIterator$LookAheadIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnionIterator$LookAheadIterator);
	});
	return class$;
}

$Class* UnionIterator$LookAheadIterator::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com