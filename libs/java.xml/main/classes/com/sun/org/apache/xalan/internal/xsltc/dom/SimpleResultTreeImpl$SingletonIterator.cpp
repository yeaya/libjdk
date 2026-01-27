#include <com/sun/org/apache/xalan/internal/xsltc/dom/SimpleResultTreeImpl$SingletonIterator.h>

#include <com/sun/org/apache/xalan/internal/xsltc/dom/SimpleResultTreeImpl.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <jcpp.h>

#undef END
#undef NO_TYPE
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

$FieldInfo _SimpleResultTreeImpl$SingletonIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xalan/internal/xsltc/dom/SimpleResultTreeImpl;", nullptr, $FINAL | $SYNTHETIC, $field(SimpleResultTreeImpl$SingletonIterator, this$0)},
	{"NO_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(SimpleResultTreeImpl$SingletonIterator, NO_TYPE)},
	{"_type", "I", nullptr, 0, $field(SimpleResultTreeImpl$SingletonIterator, _type)},
	{"_currentNode", "I", nullptr, 0, $field(SimpleResultTreeImpl$SingletonIterator, _currentNode)},
	{}
};

$MethodInfo _SimpleResultTreeImpl$SingletonIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/SimpleResultTreeImpl;)V", nullptr, $PUBLIC, $method(SimpleResultTreeImpl$SingletonIterator, init$, void, $SimpleResultTreeImpl*)},
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/SimpleResultTreeImpl;I)V", nullptr, $PUBLIC, $method(SimpleResultTreeImpl$SingletonIterator, init$, void, $SimpleResultTreeImpl*, int32_t)},
	{"gotoMark", "()V", nullptr, $PUBLIC, $virtualMethod(SimpleResultTreeImpl$SingletonIterator, gotoMark, void)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(SimpleResultTreeImpl$SingletonIterator, next, int32_t)},
	{"setMark", "()V", nullptr, $PUBLIC, $virtualMethod(SimpleResultTreeImpl$SingletonIterator, setMark, void)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SimpleResultTreeImpl$SingletonIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$InnerClassInfo _SimpleResultTreeImpl$SingletonIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.dom.SimpleResultTreeImpl$SingletonIterator", "com.sun.org.apache.xalan.internal.xsltc.dom.SimpleResultTreeImpl", "SingletonIterator", $PUBLIC | $FINAL},
	{}
};

$ClassInfo _SimpleResultTreeImpl$SingletonIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.SimpleResultTreeImpl$SingletonIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIteratorBase",
	nullptr,
	_SimpleResultTreeImpl$SingletonIterator_FieldInfo_,
	_SimpleResultTreeImpl$SingletonIterator_MethodInfo_,
	nullptr,
	nullptr,
	_SimpleResultTreeImpl$SingletonIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.dom.SimpleResultTreeImpl"
};

$Object* allocate$SimpleResultTreeImpl$SingletonIterator($Class* clazz) {
	return $of($alloc(SimpleResultTreeImpl$SingletonIterator));
}

void SimpleResultTreeImpl$SingletonIterator::init$($SimpleResultTreeImpl* this$0) {
	$set(this, this$0, this$0);
	$DTMAxisIteratorBase::init$();
	this->_type = SimpleResultTreeImpl$SingletonIterator::NO_TYPE;
}

void SimpleResultTreeImpl$SingletonIterator::init$($SimpleResultTreeImpl* this$0, int32_t type) {
	$set(this, this$0, this$0);
	$DTMAxisIteratorBase::init$();
	this->_type = SimpleResultTreeImpl$SingletonIterator::NO_TYPE;
	this->_type = type;
}

void SimpleResultTreeImpl$SingletonIterator::setMark() {
	this->_markedNode = this->_currentNode;
}

void SimpleResultTreeImpl$SingletonIterator::gotoMark() {
	this->_currentNode = this->_markedNode;
}

$DTMAxisIterator* SimpleResultTreeImpl$SingletonIterator::setStartNode(int32_t nodeHandle) {
	this->_currentNode = (this->_startNode = this->this$0->getNodeIdent(nodeHandle));
	return this;
}

int32_t SimpleResultTreeImpl$SingletonIterator::next() {
	if (this->_currentNode == $DTMAxisIterator::END) {
		return $DTMAxisIterator::END;
	}
	this->_currentNode = $DTMAxisIterator::END;
	if (this->_type != SimpleResultTreeImpl$SingletonIterator::NO_TYPE) {
		if ((this->_currentNode == 0 && this->_type == $DTM::ROOT_NODE) || (this->_currentNode == 1 && this->_type == $DTM::TEXT_NODE)) {
			return this->this$0->getNodeHandle(this->_currentNode);
		}
	} else {
		return this->this$0->getNodeHandle(this->_currentNode);
	}
	return $DTMAxisIterator::END;
}

SimpleResultTreeImpl$SingletonIterator::SimpleResultTreeImpl$SingletonIterator() {
}

$Class* SimpleResultTreeImpl$SingletonIterator::load$($String* name, bool initialize) {
	$loadClass(SimpleResultTreeImpl$SingletonIterator, name, initialize, &_SimpleResultTreeImpl$SingletonIterator_ClassInfo_, allocate$SimpleResultTreeImpl$SingletonIterator);
	return class$;
}

$Class* SimpleResultTreeImpl$SingletonIterator::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com