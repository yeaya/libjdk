#include <com/sun/org/apache/xalan/internal/xsltc/dom/CurrentNodeListIterator.h>

#include <com/sun/org/apache/xalan/internal/xsltc/dom/CurrentNodeListFilter.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary.h>
#include <com/sun/org/apache/xalan/internal/xsltc/util/IntegerArray.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <java/lang/CloneNotSupportedException.h>
#include <jcpp.h>

#undef END
#undef ITERATOR_CLONE_ERR

using $CurrentNodeListFilter = ::com::sun::org::apache::xalan::internal::xsltc::dom::CurrentNodeListFilter;
using $AbstractTranslet = ::com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet;
using $BasisLibrary = ::com::sun::org::apache::xalan::internal::xsltc::runtime::BasisLibrary;
using $IntegerArray = ::com::sun::org::apache::xalan::internal::xsltc::util::IntegerArray;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
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

$FieldInfo _CurrentNodeListIterator_FieldInfo_[] = {
	{"_docOrder", "Z", nullptr, $PRIVATE, $field(CurrentNodeListIterator, _docOrder)},
	{"_source", "Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PRIVATE, $field(CurrentNodeListIterator, _source)},
	{"_filter", "Lcom/sun/org/apache/xalan/internal/xsltc/dom/CurrentNodeListFilter;", nullptr, $PRIVATE | $FINAL, $field(CurrentNodeListIterator, _filter)},
	{"_nodes", "Lcom/sun/org/apache/xalan/internal/xsltc/util/IntegerArray;", nullptr, $PRIVATE, $field(CurrentNodeListIterator, _nodes)},
	{"_currentIndex", "I", nullptr, $PRIVATE, $field(CurrentNodeListIterator, _currentIndex)},
	{"_currentNode", "I", nullptr, $PRIVATE | $FINAL, $field(CurrentNodeListIterator, _currentNode)},
	{"_translet", "Lcom/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet;", nullptr, $PRIVATE, $field(CurrentNodeListIterator, _translet)},
	{}
};

$MethodInfo _CurrentNodeListIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;Lcom/sun/org/apache/xalan/internal/xsltc/dom/CurrentNodeListFilter;ILcom/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet;)V", nullptr, $PUBLIC, $method(CurrentNodeListIterator, init$, void, $DTMAxisIterator*, $CurrentNodeListFilter*, int32_t, $AbstractTranslet*)},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;ZLcom/sun/org/apache/xalan/internal/xsltc/dom/CurrentNodeListFilter;ILcom/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet;)V", nullptr, $PUBLIC, $method(CurrentNodeListIterator, init$, void, $DTMAxisIterator*, bool, $CurrentNodeListFilter*, int32_t, $AbstractTranslet*)},
	{"cloneIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(CurrentNodeListIterator, cloneIterator, $DTMAxisIterator*)},
	{"computePositionOfLast", "()I", nullptr, $PRIVATE, $method(CurrentNodeListIterator, computePositionOfLast, int32_t)},
	{"forceNaturalOrder", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $method(CurrentNodeListIterator, forceNaturalOrder, $DTMAxisIterator*)},
	{"getLast", "()I", nullptr, $PUBLIC, $virtualMethod(CurrentNodeListIterator, getLast, int32_t)},
	{"gotoMark", "()V", nullptr, $PUBLIC, $virtualMethod(CurrentNodeListIterator, gotoMark, void)},
	{"isReverse", "()Z", nullptr, $PUBLIC, $virtualMethod(CurrentNodeListIterator, isReverse, bool)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(CurrentNodeListIterator, next, int32_t)},
	{"reset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(CurrentNodeListIterator, reset, $DTMAxisIterator*)},
	{"setMark", "()V", nullptr, $PUBLIC, $virtualMethod(CurrentNodeListIterator, setMark, void)},
	{"setRestartable", "(Z)V", nullptr, $PUBLIC, $virtualMethod(CurrentNodeListIterator, setRestartable, void, bool)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(CurrentNodeListIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$ClassInfo _CurrentNodeListIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.CurrentNodeListIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIteratorBase",
	nullptr,
	_CurrentNodeListIterator_FieldInfo_,
	_CurrentNodeListIterator_MethodInfo_
};

$Object* allocate$CurrentNodeListIterator($Class* clazz) {
	return $of($alloc(CurrentNodeListIterator));
}

void CurrentNodeListIterator::init$($DTMAxisIterator* source, $CurrentNodeListFilter* filter, int32_t currentNode, $AbstractTranslet* translet) {
	CurrentNodeListIterator::init$(source, !$nc(source)->isReverse(), filter, currentNode, translet);
}

void CurrentNodeListIterator::init$($DTMAxisIterator* source, bool docOrder, $CurrentNodeListFilter* filter, int32_t currentNode, $AbstractTranslet* translet) {
	$DTMAxisIteratorBase::init$();
	$set(this, _nodes, $new($IntegerArray));
	$set(this, _source, source);
	$set(this, _filter, filter);
	$set(this, _translet, translet);
	this->_docOrder = docOrder;
	this->_currentNode = currentNode;
}

$DTMAxisIterator* CurrentNodeListIterator::forceNaturalOrder() {
	this->_docOrder = true;
	return this;
}

void CurrentNodeListIterator::setRestartable(bool isRestartable) {
	this->_isRestartable = isRestartable;
	$nc(this->_source)->setRestartable(isRestartable);
}

bool CurrentNodeListIterator::isReverse() {
	return !this->_docOrder;
}

$DTMAxisIterator* CurrentNodeListIterator::cloneIterator() {
	$useLocalCurrentObjectStackCache();
	try {
		$var(CurrentNodeListIterator, clone, $cast(CurrentNodeListIterator, $DTMAxisIteratorBase::clone()));
		$set($nc(clone), _nodes, $cast($IntegerArray, $nc(this->_nodes)->clone()));
		$set(clone, _source, $nc(this->_source)->cloneIterator());
		clone->_isRestartable = false;
		return clone->reset();
	} catch ($CloneNotSupportedException& e) {
		$init($BasisLibrary);
		$BasisLibrary::runTimeError($BasisLibrary::ITERATOR_CLONE_ERR, $($of(e->toString())));
		return nullptr;
	}
	$shouldNotReachHere();
}

$DTMAxisIterator* CurrentNodeListIterator::reset() {
	this->_currentIndex = 0;
	return resetPosition();
}

int32_t CurrentNodeListIterator::next() {
	int32_t last = $nc(this->_nodes)->cardinality();
	int32_t currentNode = this->_currentNode;
	$var($AbstractTranslet, translet, this->_translet);
	for (int32_t index = this->_currentIndex; index < last;) {
		int32_t position = this->_docOrder ? index + 1 : last - index;
		int32_t node = $nc(this->_nodes)->at(index++);
		if ($nc(this->_filter)->test(node, position, last, currentNode, translet, this)) {
			this->_currentIndex = index;
			return returnNode(node);
		}
	}
	return $DTMAxisIterator::END;
}

$DTMAxisIterator* CurrentNodeListIterator::setStartNode(int32_t node) {
	if (this->_isRestartable) {
		$nc(this->_source)->setStartNode(this->_startNode = node);
		$nc(this->_nodes)->clear();
		while ((node = $nc(this->_source)->next()) != $DTMAxisIterator::END) {
			$nc(this->_nodes)->add(node);
		}
		this->_currentIndex = 0;
		resetPosition();
	}
	return this;
}

int32_t CurrentNodeListIterator::getLast() {
	if (this->_last == -1) {
		this->_last = computePositionOfLast();
	}
	return this->_last;
}

void CurrentNodeListIterator::setMark() {
	this->_markedNode = this->_currentIndex;
}

void CurrentNodeListIterator::gotoMark() {
	this->_currentIndex = this->_markedNode;
}

int32_t CurrentNodeListIterator::computePositionOfLast() {
	int32_t last = $nc(this->_nodes)->cardinality();
	int32_t currNode = this->_currentNode;
	$var($AbstractTranslet, translet, this->_translet);
	int32_t lastPosition = this->_position;
	for (int32_t index = this->_currentIndex; index < last;) {
		int32_t position = this->_docOrder ? index + 1 : last - index;
		int32_t nodeIndex = $nc(this->_nodes)->at(index++);
		if ($nc(this->_filter)->test(nodeIndex, position, last, currNode, translet, this)) {
			++lastPosition;
		}
	}
	return lastPosition;
}

CurrentNodeListIterator::CurrentNodeListIterator() {
}

$Class* CurrentNodeListIterator::load$($String* name, bool initialize) {
	$loadClass(CurrentNodeListIterator, name, initialize, &_CurrentNodeListIterator_ClassInfo_, allocate$CurrentNodeListIterator);
	return class$;
}

$Class* CurrentNodeListIterator::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com