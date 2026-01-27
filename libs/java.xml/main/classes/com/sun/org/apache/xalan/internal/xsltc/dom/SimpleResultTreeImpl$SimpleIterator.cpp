#include <com/sun/org/apache/xalan/internal/xsltc/dom/SimpleResultTreeImpl$SimpleIterator.h>

#include <com/sun/org/apache/xalan/internal/xsltc/dom/SimpleResultTreeImpl.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <jcpp.h>

#undef DIRECTION_DOWN
#undef DIRECTION_UP
#undef END
#undef NO_TYPE
#undef NULL
#undef ROOT_NODE
#undef TEXT_NODE

using $SimpleResultTreeImpl = ::com::sun::org::apache::xalan::internal::xsltc::dom::SimpleResultTreeImpl;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
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

$FieldInfo _SimpleResultTreeImpl$SimpleIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xalan/internal/xsltc/dom/SimpleResultTreeImpl;", nullptr, $FINAL | $SYNTHETIC, $field(SimpleResultTreeImpl$SimpleIterator, this$0)},
	{"DIRECTION_UP", "I", nullptr, $STATIC | $FINAL, $constField(SimpleResultTreeImpl$SimpleIterator, DIRECTION_UP)},
	{"DIRECTION_DOWN", "I", nullptr, $STATIC | $FINAL, $constField(SimpleResultTreeImpl$SimpleIterator, DIRECTION_DOWN)},
	{"NO_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(SimpleResultTreeImpl$SimpleIterator, NO_TYPE)},
	{"_direction", "I", nullptr, 0, $field(SimpleResultTreeImpl$SimpleIterator, _direction)},
	{"_type", "I", nullptr, 0, $field(SimpleResultTreeImpl$SimpleIterator, _type)},
	{"_currentNode", "I", nullptr, 0, $field(SimpleResultTreeImpl$SimpleIterator, _currentNode)},
	{}
};

$MethodInfo _SimpleResultTreeImpl$SimpleIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/SimpleResultTreeImpl;)V", nullptr, $PUBLIC, $method(SimpleResultTreeImpl$SimpleIterator, init$, void, $SimpleResultTreeImpl*)},
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/SimpleResultTreeImpl;I)V", nullptr, $PUBLIC, $method(SimpleResultTreeImpl$SimpleIterator, init$, void, $SimpleResultTreeImpl*, int32_t)},
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/SimpleResultTreeImpl;II)V", nullptr, $PUBLIC, $method(SimpleResultTreeImpl$SimpleIterator, init$, void, $SimpleResultTreeImpl*, int32_t, int32_t)},
	{"gotoMark", "()V", nullptr, $PUBLIC, $virtualMethod(SimpleResultTreeImpl$SimpleIterator, gotoMark, void)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(SimpleResultTreeImpl$SimpleIterator, next, int32_t)},
	{"setMark", "()V", nullptr, $PUBLIC, $virtualMethod(SimpleResultTreeImpl$SimpleIterator, setMark, void)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SimpleResultTreeImpl$SimpleIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$InnerClassInfo _SimpleResultTreeImpl$SimpleIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.dom.SimpleResultTreeImpl$SimpleIterator", "com.sun.org.apache.xalan.internal.xsltc.dom.SimpleResultTreeImpl", "SimpleIterator", $PUBLIC | $FINAL},
	{}
};

$ClassInfo _SimpleResultTreeImpl$SimpleIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.SimpleResultTreeImpl$SimpleIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIteratorBase",
	nullptr,
	_SimpleResultTreeImpl$SimpleIterator_FieldInfo_,
	_SimpleResultTreeImpl$SimpleIterator_MethodInfo_,
	nullptr,
	nullptr,
	_SimpleResultTreeImpl$SimpleIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.dom.SimpleResultTreeImpl"
};

$Object* allocate$SimpleResultTreeImpl$SimpleIterator($Class* clazz) {
	return $of($alloc(SimpleResultTreeImpl$SimpleIterator));
}

void SimpleResultTreeImpl$SimpleIterator::init$($SimpleResultTreeImpl* this$0) {
	$set(this, this$0, this$0);
	$DTMAxisIteratorBase::init$();
	this->_direction = SimpleResultTreeImpl$SimpleIterator::DIRECTION_DOWN;
	this->_type = SimpleResultTreeImpl$SimpleIterator::NO_TYPE;
}

void SimpleResultTreeImpl$SimpleIterator::init$($SimpleResultTreeImpl* this$0, int32_t direction) {
	$set(this, this$0, this$0);
	$DTMAxisIteratorBase::init$();
	this->_direction = SimpleResultTreeImpl$SimpleIterator::DIRECTION_DOWN;
	this->_type = SimpleResultTreeImpl$SimpleIterator::NO_TYPE;
	this->_direction = direction;
}

void SimpleResultTreeImpl$SimpleIterator::init$($SimpleResultTreeImpl* this$0, int32_t direction, int32_t type) {
	$set(this, this$0, this$0);
	$DTMAxisIteratorBase::init$();
	this->_direction = SimpleResultTreeImpl$SimpleIterator::DIRECTION_DOWN;
	this->_type = SimpleResultTreeImpl$SimpleIterator::NO_TYPE;
	this->_direction = direction;
	this->_type = type;
}

int32_t SimpleResultTreeImpl$SimpleIterator::next() {
	if (this->_direction == SimpleResultTreeImpl$SimpleIterator::DIRECTION_DOWN) {
		while (this->_currentNode < 2) {
			if (this->_type != SimpleResultTreeImpl$SimpleIterator::NO_TYPE) {
				if ((this->_currentNode == 0 && this->_type == $DTM::ROOT_NODE) || (this->_currentNode == 1 && this->_type == $DTM::TEXT_NODE)) {
					return returnNode(this->this$0->getNodeHandle(this->_currentNode++));
				} else {
					++this->_currentNode;
				}
			} else {
				return returnNode(this->this$0->getNodeHandle(this->_currentNode++));
			}
		}
		return $DTMAxisIterator::END;
	} else {
		while (this->_currentNode >= 0) {
			if (this->_type != SimpleResultTreeImpl$SimpleIterator::NO_TYPE) {
				if ((this->_currentNode == 0 && this->_type == $DTM::ROOT_NODE) || (this->_currentNode == 1 && this->_type == $DTM::TEXT_NODE)) {
					return returnNode(this->this$0->getNodeHandle(this->_currentNode--));
				} else {
					--this->_currentNode;
				}
			} else {
				return returnNode(this->this$0->getNodeHandle(this->_currentNode--));
			}
		}
		return $DTMAxisIterator::END;
	}
}

$DTMAxisIterator* SimpleResultTreeImpl$SimpleIterator::setStartNode(int32_t nodeHandle) {
	int32_t nodeID = this->this$0->getNodeIdent(nodeHandle);
	this->_startNode = nodeID;
	if (!this->_includeSelf && nodeID != $DTM::NULL) {
		if (this->_direction == SimpleResultTreeImpl$SimpleIterator::DIRECTION_DOWN) {
			++nodeID;
		} else if (this->_direction == SimpleResultTreeImpl$SimpleIterator::DIRECTION_UP) {
			--nodeID;
		}
	}
	this->_currentNode = nodeID;
	return this;
}

void SimpleResultTreeImpl$SimpleIterator::setMark() {
	this->_markedNode = this->_currentNode;
}

void SimpleResultTreeImpl$SimpleIterator::gotoMark() {
	this->_currentNode = this->_markedNode;
}

SimpleResultTreeImpl$SimpleIterator::SimpleResultTreeImpl$SimpleIterator() {
}

$Class* SimpleResultTreeImpl$SimpleIterator::load$($String* name, bool initialize) {
	$loadClass(SimpleResultTreeImpl$SimpleIterator, name, initialize, &_SimpleResultTreeImpl$SimpleIterator_ClassInfo_, allocate$SimpleResultTreeImpl$SimpleIterator);
	return class$;
}

$Class* SimpleResultTreeImpl$SimpleIterator::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com