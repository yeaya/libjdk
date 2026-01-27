#include <com/sun/org/apache/xalan/internal/xsltc/dom/KeyIndex$KeyIndexIterator$KeyIndexHeapNode.h>

#include <com/sun/org/apache/xalan/internal/xsltc/dom/KeyIndex$KeyIndexIterator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator$HeapNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/util/IntegerArray.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <jcpp.h>

#undef END

using $KeyIndex$KeyIndexIterator = ::com::sun::org::apache::xalan::internal::xsltc::dom::KeyIndex$KeyIndexIterator;
using $MultiValuedNodeHeapIterator = ::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator;
using $MultiValuedNodeHeapIterator$HeapNode = ::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator$HeapNode;
using $IntegerArray = ::com::sun::org::apache::xalan::internal::xsltc::util::IntegerArray;
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

$FieldInfo _KeyIndex$KeyIndexIterator$KeyIndexHeapNode_FieldInfo_[] = {
	{"this$1", "Lcom/sun/org/apache/xalan/internal/xsltc/dom/KeyIndex$KeyIndexIterator;", nullptr, $FINAL | $SYNTHETIC, $field(KeyIndex$KeyIndexIterator$KeyIndexHeapNode, this$1)},
	{"_nodes", "Lcom/sun/org/apache/xalan/internal/xsltc/util/IntegerArray;", nullptr, $PRIVATE, $field(KeyIndex$KeyIndexIterator$KeyIndexHeapNode, _nodes)},
	{"_position", "I", nullptr, $PRIVATE, $field(KeyIndex$KeyIndexIterator$KeyIndexHeapNode, _position)},
	{"_markPosition", "I", nullptr, $PRIVATE, $field(KeyIndex$KeyIndexIterator$KeyIndexHeapNode, _markPosition)},
	{}
};

$MethodInfo _KeyIndex$KeyIndexIterator$KeyIndexHeapNode_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/KeyIndex$KeyIndexIterator;Lcom/sun/org/apache/xalan/internal/xsltc/util/IntegerArray;)V", nullptr, 0, $method(KeyIndex$KeyIndexIterator$KeyIndexHeapNode, init$, void, $KeyIndex$KeyIndexIterator*, $IntegerArray*)},
	{"cloneHeapNode", "()Lcom/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator$HeapNode;", nullptr, $PUBLIC, $virtualMethod(KeyIndex$KeyIndexIterator$KeyIndexHeapNode, cloneHeapNode, $MultiValuedNodeHeapIterator$HeapNode*)},
	{"gotoMark", "()V", nullptr, $PUBLIC, $virtualMethod(KeyIndex$KeyIndexIterator$KeyIndexHeapNode, gotoMark, void)},
	{"isLessThan", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator$HeapNode;)Z", nullptr, $PUBLIC, $virtualMethod(KeyIndex$KeyIndexIterator$KeyIndexHeapNode, isLessThan, bool, $MultiValuedNodeHeapIterator$HeapNode*)},
	{"reset", "()Lcom/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator$HeapNode;", nullptr, $PUBLIC, $virtualMethod(KeyIndex$KeyIndexIterator$KeyIndexHeapNode, reset, $MultiValuedNodeHeapIterator$HeapNode*)},
	{"setMark", "()V", nullptr, $PUBLIC, $virtualMethod(KeyIndex$KeyIndexIterator$KeyIndexHeapNode, setMark, void)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator$HeapNode;", nullptr, $PUBLIC, $virtualMethod(KeyIndex$KeyIndexIterator$KeyIndexHeapNode, setStartNode, $MultiValuedNodeHeapIterator$HeapNode*, int32_t)},
	{"step", "()I", nullptr, $PUBLIC, $virtualMethod(KeyIndex$KeyIndexIterator$KeyIndexHeapNode, step, int32_t)},
	{}
};

$InnerClassInfo _KeyIndex$KeyIndexIterator$KeyIndexHeapNode_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.dom.KeyIndex$KeyIndexIterator", "com.sun.org.apache.xalan.internal.xsltc.dom.KeyIndex", "KeyIndexIterator", $PUBLIC},
	{"com.sun.org.apache.xalan.internal.xsltc.dom.KeyIndex$KeyIndexIterator$KeyIndexHeapNode", "com.sun.org.apache.xalan.internal.xsltc.dom.KeyIndex$KeyIndexIterator", "KeyIndexHeapNode", $PROTECTED},
	{"com.sun.org.apache.xalan.internal.xsltc.dom.MultiValuedNodeHeapIterator$HeapNode", "com.sun.org.apache.xalan.internal.xsltc.dom.MultiValuedNodeHeapIterator", "HeapNode", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _KeyIndex$KeyIndexIterator$KeyIndexHeapNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.KeyIndex$KeyIndexIterator$KeyIndexHeapNode",
	"com.sun.org.apache.xalan.internal.xsltc.dom.MultiValuedNodeHeapIterator$HeapNode",
	nullptr,
	_KeyIndex$KeyIndexIterator$KeyIndexHeapNode_FieldInfo_,
	_KeyIndex$KeyIndexIterator$KeyIndexHeapNode_MethodInfo_,
	nullptr,
	nullptr,
	_KeyIndex$KeyIndexIterator$KeyIndexHeapNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.dom.KeyIndex"
};

$Object* allocate$KeyIndex$KeyIndexIterator$KeyIndexHeapNode($Class* clazz) {
	return $of($alloc(KeyIndex$KeyIndexIterator$KeyIndexHeapNode));
}

void KeyIndex$KeyIndexIterator$KeyIndexHeapNode::init$($KeyIndex$KeyIndexIterator* this$1, $IntegerArray* nodes) {
	$set(this, this$1, this$1);
	$MultiValuedNodeHeapIterator$HeapNode::init$(this$1);
	this->_position = 0;
	this->_markPosition = -1;
	$set(this, _nodes, nodes);
}

int32_t KeyIndex$KeyIndexIterator$KeyIndexHeapNode::step() {
	if (this->_position < $nc(this->_nodes)->cardinality()) {
		this->_node = $nc(this->_nodes)->at(this->_position);
		++this->_position;
	} else {
		this->_node = $DTMAxisIterator::END;
	}
	return this->_node;
}

$MultiValuedNodeHeapIterator$HeapNode* KeyIndex$KeyIndexIterator$KeyIndexHeapNode::cloneHeapNode() {
	$var(KeyIndex$KeyIndexIterator$KeyIndexHeapNode, clone, $cast(KeyIndex$KeyIndexIterator$KeyIndexHeapNode, $MultiValuedNodeHeapIterator$HeapNode::cloneHeapNode()));
	$set($nc(clone), _nodes, this->_nodes);
	clone->_position = this->_position;
	clone->_markPosition = this->_markPosition;
	return clone;
}

void KeyIndex$KeyIndexIterator$KeyIndexHeapNode::setMark() {
	this->_markPosition = this->_position;
}

void KeyIndex$KeyIndexIterator$KeyIndexHeapNode::gotoMark() {
	this->_position = this->_markPosition;
}

bool KeyIndex$KeyIndexIterator$KeyIndexHeapNode::isLessThan($MultiValuedNodeHeapIterator$HeapNode* heapNode) {
	return this->_node < $nc(heapNode)->_node;
}

$MultiValuedNodeHeapIterator$HeapNode* KeyIndex$KeyIndexIterator$KeyIndexHeapNode::setStartNode(int32_t node) {
	return this;
}

$MultiValuedNodeHeapIterator$HeapNode* KeyIndex$KeyIndexIterator$KeyIndexHeapNode::reset() {
	this->_position = 0;
	return this;
}

KeyIndex$KeyIndexIterator$KeyIndexHeapNode::KeyIndex$KeyIndexIterator$KeyIndexHeapNode() {
}

$Class* KeyIndex$KeyIndexIterator$KeyIndexHeapNode::load$($String* name, bool initialize) {
	$loadClass(KeyIndex$KeyIndexIterator$KeyIndexHeapNode, name, initialize, &_KeyIndex$KeyIndexIterator$KeyIndexHeapNode_ClassInfo_, allocate$KeyIndex$KeyIndexIterator$KeyIndexHeapNode);
	return class$;
}

$Class* KeyIndex$KeyIndexIterator$KeyIndexHeapNode::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com