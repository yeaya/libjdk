#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>

#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/utils/WrappedRuntimeException.h>
#include <java/lang/CloneNotSupportedException.h>
#include <jcpp.h>

#undef END

using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $WrappedRuntimeException = ::com::sun::org::apache::xml::internal::utils::WrappedRuntimeException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

$FieldInfo _DTMAxisIteratorBase_FieldInfo_[] = {
	{"_last", "I", nullptr, $PROTECTED, $field(DTMAxisIteratorBase, _last)},
	{"_position", "I", nullptr, $PROTECTED, $field(DTMAxisIteratorBase, _position)},
	{"_markedNode", "I", nullptr, $PROTECTED, $field(DTMAxisIteratorBase, _markedNode)},
	{"_startNode", "I", nullptr, $PROTECTED, $field(DTMAxisIteratorBase, _startNode)},
	{"_includeSelf", "Z", nullptr, $PROTECTED, $field(DTMAxisIteratorBase, _includeSelf)},
	{"_isRestartable", "Z", nullptr, $PROTECTED, $field(DTMAxisIteratorBase, _isRestartable)},
	{}
};

$MethodInfo _DTMAxisIteratorBase_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DTMAxisIteratorBase, init$, void)},
	{"cloneIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DTMAxisIteratorBase, cloneIterator, $DTMAxisIterator*)},
	{"getAxis", "()I", nullptr, $PUBLIC, $virtualMethod(DTMAxisIteratorBase, getAxis, int32_t)},
	{"getLast", "()I", nullptr, $PUBLIC, $virtualMethod(DTMAxisIteratorBase, getLast, int32_t)},
	{"getNodeByPosition", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTMAxisIteratorBase, getNodeByPosition, int32_t, int32_t)},
	{"getPosition", "()I", nullptr, $PUBLIC, $virtualMethod(DTMAxisIteratorBase, getPosition, int32_t)},
	{"getStartNode", "()I", nullptr, $PUBLIC, $virtualMethod(DTMAxisIteratorBase, getStartNode, int32_t)},
	{"includeSelf", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DTMAxisIteratorBase, includeSelf, $DTMAxisIterator*)},
	{"isDocOrdered", "()Z", nullptr, $PUBLIC, $virtualMethod(DTMAxisIteratorBase, isDocOrdered, bool)},
	{"isReverse", "()Z", nullptr, $PUBLIC, $virtualMethod(DTMAxisIteratorBase, isReverse, bool)},
	{"reset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DTMAxisIteratorBase, reset, $DTMAxisIterator*)},
	{"resetPosition", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PROTECTED | $FINAL, $method(DTMAxisIteratorBase, resetPosition, $DTMAxisIterator*)},
	{"returnNode", "(I)I", nullptr, $PROTECTED | $FINAL, $method(DTMAxisIteratorBase, returnNode, int32_t, int32_t)},
	{"setRestartable", "(Z)V", nullptr, $PUBLIC, $virtualMethod(DTMAxisIteratorBase, setRestartable, void, bool)},
	{}
};

$ClassInfo _DTMAxisIteratorBase_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIteratorBase",
	"java.lang.Object",
	"com.sun.org.apache.xml.internal.dtm.DTMAxisIterator",
	_DTMAxisIteratorBase_FieldInfo_,
	_DTMAxisIteratorBase_MethodInfo_
};

$Object* allocate$DTMAxisIteratorBase($Class* clazz) {
	return $of($alloc(DTMAxisIteratorBase));
}

void DTMAxisIteratorBase::init$() {
	this->_last = -1;
	this->_position = 0;
	this->_startNode = $DTMAxisIterator::END;
	this->_includeSelf = false;
	this->_isRestartable = true;
}

int32_t DTMAxisIteratorBase::getStartNode() {
	return this->_startNode;
}

$DTMAxisIterator* DTMAxisIteratorBase::reset() {
	bool temp = this->_isRestartable;
	this->_isRestartable = true;
	setStartNode(this->_startNode);
	this->_isRestartable = temp;
	return this;
}

$DTMAxisIterator* DTMAxisIteratorBase::includeSelf() {
	this->_includeSelf = true;
	return this;
}

int32_t DTMAxisIteratorBase::getLast() {
	if (this->_last == -1) {
		int32_t temp = this->_position;
		setMark();
		reset();
		do {
			++this->_last;
		} while (next() != $DTMAxisIterator::END);
		gotoMark();
		this->_position = temp;
	}
	return this->_last;
}

int32_t DTMAxisIteratorBase::getPosition() {
	return this->_position == 0 ? 1 : this->_position;
}

bool DTMAxisIteratorBase::isReverse() {
	return false;
}

$DTMAxisIterator* DTMAxisIteratorBase::cloneIterator() {
	try {
		$var(DTMAxisIteratorBase, clone, $cast(DTMAxisIteratorBase, $DTMAxisIterator::clone()));
		$nc(clone)->_isRestartable = false;
		return clone;
	} catch ($CloneNotSupportedException& e) {
		$throwNew($WrappedRuntimeException, e);
	}
	$shouldNotReachHere();
}

int32_t DTMAxisIteratorBase::returnNode(int32_t node) {
	++this->_position;
	return node;
}

$DTMAxisIterator* DTMAxisIteratorBase::resetPosition() {
	this->_position = 0;
	return this;
}

bool DTMAxisIteratorBase::isDocOrdered() {
	return true;
}

int32_t DTMAxisIteratorBase::getAxis() {
	return -1;
}

void DTMAxisIteratorBase::setRestartable(bool isRestartable) {
	this->_isRestartable = isRestartable;
}

int32_t DTMAxisIteratorBase::getNodeByPosition(int32_t position) {
	if (position > 0) {
		int32_t pos = isReverse() ? getLast() - position + 1 : position;
		int32_t node = 0;
		while ((node = next()) != $DTMAxisIterator::END) {
			if (pos == getPosition()) {
				return node;
			}
		}
	}
	return $DTMAxisIterator::END;
}

DTMAxisIteratorBase::DTMAxisIteratorBase() {
}

$Class* DTMAxisIteratorBase::load$($String* name, bool initialize) {
	$loadClass(DTMAxisIteratorBase, name, initialize, &_DTMAxisIteratorBase_ClassInfo_, allocate$DTMAxisIteratorBase);
	return class$;
}

$Class* DTMAxisIteratorBase::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com