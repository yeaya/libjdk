#include <com/sun/org/apache/xalan/internal/xsltc/dom/NodeIteratorBase.h>

#include <com/sun/org/apache/xalan/internal/xsltc/NodeIterator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary.h>
#include <java/lang/CloneNotSupportedException.h>
#include <jcpp.h>

#undef END
#undef ITERATOR_CLONE_ERR

using $NodeIterator = ::com::sun::org::apache::xalan::internal::xsltc::NodeIterator;
using $BasisLibrary = ::com::sun::org::apache::xalan::internal::xsltc::runtime::BasisLibrary;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

$FieldInfo _NodeIteratorBase_FieldInfo_[] = {
	{"_last", "I", nullptr, $PROTECTED, $field(NodeIteratorBase, _last)},
	{"_position", "I", nullptr, $PROTECTED, $field(NodeIteratorBase, _position)},
	{"_markedNode", "I", nullptr, $PROTECTED, $field(NodeIteratorBase, _markedNode)},
	{"_startNode", "I", nullptr, $PROTECTED, $field(NodeIteratorBase, _startNode)},
	{"_includeSelf", "Z", nullptr, $PROTECTED, $field(NodeIteratorBase, _includeSelf)},
	{"_isRestartable", "Z", nullptr, $PROTECTED, $field(NodeIteratorBase, _isRestartable)},
	{}
};

$MethodInfo _NodeIteratorBase_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(NodeIteratorBase, init$, void)},
	{"cloneIterator", "()Lcom/sun/org/apache/xalan/internal/xsltc/NodeIterator;", nullptr, $PUBLIC, $virtualMethod(NodeIteratorBase, cloneIterator, $NodeIterator*)},
	{"getLast", "()I", nullptr, $PUBLIC, $virtualMethod(NodeIteratorBase, getLast, int32_t)},
	{"getPosition", "()I", nullptr, $PUBLIC, $virtualMethod(NodeIteratorBase, getPosition, int32_t)},
	{"includeSelf", "()Lcom/sun/org/apache/xalan/internal/xsltc/NodeIterator;", nullptr, $PUBLIC, $virtualMethod(NodeIteratorBase, includeSelf, $NodeIterator*)},
	{"isReverse", "()Z", nullptr, $PUBLIC, $virtualMethod(NodeIteratorBase, isReverse, bool)},
	{"reset", "()Lcom/sun/org/apache/xalan/internal/xsltc/NodeIterator;", nullptr, $PUBLIC, $virtualMethod(NodeIteratorBase, reset, $NodeIterator*)},
	{"resetPosition", "()Lcom/sun/org/apache/xalan/internal/xsltc/NodeIterator;", nullptr, $PROTECTED | $FINAL, $method(NodeIteratorBase, resetPosition, $NodeIterator*)},
	{"returnNode", "(I)I", nullptr, $PROTECTED | $FINAL, $method(NodeIteratorBase, returnNode, int32_t, int32_t)},
	{"setRestartable", "(Z)V", nullptr, $PUBLIC, $virtualMethod(NodeIteratorBase, setRestartable, void, bool)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xalan/internal/xsltc/NodeIterator;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _NodeIteratorBase_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.dom.NodeIteratorBase",
	"java.lang.Object",
	"com.sun.org.apache.xalan.internal.xsltc.NodeIterator",
	_NodeIteratorBase_FieldInfo_,
	_NodeIteratorBase_MethodInfo_
};

$Object* allocate$NodeIteratorBase($Class* clazz) {
	return $of($alloc(NodeIteratorBase));
}

void NodeIteratorBase::init$() {
	this->_last = -1;
	this->_position = 0;
	this->_startNode = $NodeIterator::END;
	this->_includeSelf = false;
	this->_isRestartable = true;
}

void NodeIteratorBase::setRestartable(bool isRestartable) {
	this->_isRestartable = isRestartable;
}

$NodeIterator* NodeIteratorBase::reset() {
	bool temp = this->_isRestartable;
	this->_isRestartable = true;
	setStartNode(this->_includeSelf ? this->_startNode + 1 : this->_startNode);
	this->_isRestartable = temp;
	return this;
}

$NodeIterator* NodeIteratorBase::includeSelf() {
	this->_includeSelf = true;
	return this;
}

int32_t NodeIteratorBase::getLast() {
	if (this->_last == -1) {
		int32_t temp = this->_position;
		setMark();
		reset();
		do {
			++this->_last;
		} while (next() != $NodeIterator::END);
		gotoMark();
		this->_position = temp;
	}
	return this->_last;
}

int32_t NodeIteratorBase::getPosition() {
	return this->_position == 0 ? 1 : this->_position;
}

bool NodeIteratorBase::isReverse() {
	return false;
}

$NodeIterator* NodeIteratorBase::cloneIterator() {
	$useLocalCurrentObjectStackCache();
	try {
		$var(NodeIteratorBase, clone, $cast(NodeIteratorBase, $NodeIterator::clone()));
		$nc(clone)->_isRestartable = false;
		return clone->reset();
	} catch ($CloneNotSupportedException& e) {
		$init($BasisLibrary);
		$BasisLibrary::runTimeError($BasisLibrary::ITERATOR_CLONE_ERR, $($of(e->toString())));
		return nullptr;
	}
	$shouldNotReachHere();
}

int32_t NodeIteratorBase::returnNode(int32_t node) {
	++this->_position;
	return node;
}

$NodeIterator* NodeIteratorBase::resetPosition() {
	this->_position = 0;
	return this;
}

NodeIteratorBase::NodeIteratorBase() {
}

$Class* NodeIteratorBase::load$($String* name, bool initialize) {
	$loadClass(NodeIteratorBase, name, initialize, &_NodeIteratorBase_ClassInfo_, allocate$NodeIteratorBase);
	return class$;
}

$Class* NodeIteratorBase::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com