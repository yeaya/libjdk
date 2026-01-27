#include <com/sun/org/apache/xalan/internal/xsltc/dom/SingletonIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <jcpp.h>

#undef END
#undef MIN_VALUE

using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

$FieldInfo _SingletonIterator_FieldInfo_[] = {
	{"_node", "I", nullptr, $PRIVATE, $field(SingletonIterator, _node)},
	{"_isConstant", "Z", nullptr, $PRIVATE | $FINAL, $field(SingletonIterator, _isConstant)},
	{}
};

$MethodInfo _SingletonIterator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SingletonIterator, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(SingletonIterator, init$, void, int32_t)},
	{"<init>", "(IZ)V", nullptr, $PUBLIC, $method(SingletonIterator, init$, void, int32_t, bool)},
	{"gotoMark", "()V", nullptr, $PUBLIC, $virtualMethod(SingletonIterator, gotoMark, void)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(SingletonIterator, next, int32_t)},
	{"reset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SingletonIterator, reset, $DTMAxisIterator*)},
	{"setMark", "()V", nullptr, $PUBLIC, $virtualMethod(SingletonIterator, setMark, void)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SingletonIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$ClassInfo _SingletonIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.SingletonIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIteratorBase",
	nullptr,
	_SingletonIterator_FieldInfo_,
	_SingletonIterator_MethodInfo_
};

$Object* allocate$SingletonIterator($Class* clazz) {
	return $of($alloc(SingletonIterator));
}

void SingletonIterator::init$() {
	SingletonIterator::init$($Integer::MIN_VALUE, false);
}

void SingletonIterator::init$(int32_t node) {
	SingletonIterator::init$(node, false);
}

void SingletonIterator::init$(int32_t node, bool constant) {
	$DTMAxisIteratorBase::init$();
	this->_node = (this->_startNode = node);
	this->_isConstant = constant;
}

$DTMAxisIterator* SingletonIterator::setStartNode(int32_t node) {
	if (this->_isConstant) {
		this->_node = this->_startNode;
		return resetPosition();
	} else if (this->_isRestartable) {
		if (this->_node <= 0) {
			this->_node = (this->_startNode = node);
		}
		return resetPosition();
	}
	return this;
}

$DTMAxisIterator* SingletonIterator::reset() {
	if (this->_isConstant) {
		this->_node = this->_startNode;
		return resetPosition();
	} else {
		bool temp = this->_isRestartable;
		this->_isRestartable = true;
		setStartNode(this->_startNode);
		this->_isRestartable = temp;
	}
	return this;
}

int32_t SingletonIterator::next() {
	int32_t result = this->_node;
	this->_node = $DTMAxisIterator::END;
	return returnNode(result);
}

void SingletonIterator::setMark() {
	this->_markedNode = this->_node;
}

void SingletonIterator::gotoMark() {
	this->_node = this->_markedNode;
}

SingletonIterator::SingletonIterator() {
}

$Class* SingletonIterator::load$($String* name, bool initialize) {
	$loadClass(SingletonIterator, name, initialize, &_SingletonIterator_ClassInfo_, allocate$SingletonIterator);
	return class$;
}

$Class* SingletonIterator::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com