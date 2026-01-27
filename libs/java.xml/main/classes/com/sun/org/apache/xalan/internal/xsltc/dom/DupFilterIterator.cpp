#include <com/sun/org/apache/xalan/internal/xsltc/dom/DupFilterIterator.h>

#include <com/sun/org/apache/xalan/internal/xsltc/dom/KeyIndex.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary.h>
#include <com/sun/org/apache/xalan/internal/xsltc/util/IntegerArray.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <java/lang/CloneNotSupportedException.h>
#include <jcpp.h>

#undef END
#undef ITERATOR_CLONE_ERR
#undef ROOTNODE

using $KeyIndex = ::com::sun::org::apache::xalan::internal::xsltc::dom::KeyIndex;
using $BasisLibrary = ::com::sun::org::apache::xalan::internal::xsltc::runtime::BasisLibrary;
using $IntegerArray = ::com::sun::org::apache::xalan::internal::xsltc::util::IntegerArray;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
using $DTMDefaultBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase;
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

$FieldInfo _DupFilterIterator_FieldInfo_[] = {
	{"_source", "Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PRIVATE, $field(DupFilterIterator, _source)},
	{"_nodes", "Lcom/sun/org/apache/xalan/internal/xsltc/util/IntegerArray;", nullptr, $PRIVATE, $field(DupFilterIterator, _nodes)},
	{"_current", "I", nullptr, $PRIVATE, $field(DupFilterIterator, _current)},
	{"_nodesSize", "I", nullptr, $PRIVATE, $field(DupFilterIterator, _nodesSize)},
	{"_lastNext", "I", nullptr, $PRIVATE, $field(DupFilterIterator, _lastNext)},
	{"_markedLastNext", "I", nullptr, $PRIVATE, $field(DupFilterIterator, _markedLastNext)},
	{}
};

$MethodInfo _DupFilterIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;)V", nullptr, $PUBLIC, $method(DupFilterIterator, init$, void, $DTMAxisIterator*)},
	{"cloneIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DupFilterIterator, cloneIterator, $DTMAxisIterator*)},
	{"gotoMark", "()V", nullptr, $PUBLIC, $virtualMethod(DupFilterIterator, gotoMark, void)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(DupFilterIterator, next, int32_t)},
	{"reset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DupFilterIterator, reset, $DTMAxisIterator*)},
	{"setMark", "()V", nullptr, $PUBLIC, $virtualMethod(DupFilterIterator, setMark, void)},
	{"setRestartable", "(Z)V", nullptr, $PUBLIC, $virtualMethod(DupFilterIterator, setRestartable, void, bool)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DupFilterIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$ClassInfo _DupFilterIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.DupFilterIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIteratorBase",
	nullptr,
	_DupFilterIterator_FieldInfo_,
	_DupFilterIterator_MethodInfo_
};

$Object* allocate$DupFilterIterator($Class* clazz) {
	return $of($alloc(DupFilterIterator));
}

void DupFilterIterator::init$($DTMAxisIterator* source) {
	$DTMAxisIteratorBase::init$();
	$set(this, _nodes, $new($IntegerArray));
	this->_current = 0;
	this->_nodesSize = 0;
	this->_lastNext = $DTMAxisIterator::END;
	this->_markedLastNext = $DTMAxisIterator::END;
	$set(this, _source, source);
	if ($instanceOf($KeyIndex, source)) {
		setStartNode($DTMDefaultBase::ROOTNODE);
	}
}

$DTMAxisIterator* DupFilterIterator::setStartNode(int32_t node) {
	if (this->_isRestartable) {
		bool sourceIsKeyIndex = $instanceOf($KeyIndex, this->_source);
		if (sourceIsKeyIndex && this->_startNode == $DTMDefaultBase::ROOTNODE) {
			return this;
		}
		if (node != this->_startNode) {
			$nc(this->_source)->setStartNode(this->_startNode = node);
			$nc(this->_nodes)->clear();
			while ((node = $nc(this->_source)->next()) != $DTMAxisIterator::END) {
				$nc(this->_nodes)->add(node);
			}
			if (!sourceIsKeyIndex) {
				$nc(this->_nodes)->sort();
			}
			this->_nodesSize = $nc(this->_nodes)->cardinality();
			this->_current = 0;
			this->_lastNext = $DTMAxisIterator::END;
			resetPosition();
		}
	}
	return this;
}

int32_t DupFilterIterator::next() {
	while (this->_current < this->_nodesSize) {
		int32_t next = $nc(this->_nodes)->at(this->_current++);
		if (next != this->_lastNext) {
			return returnNode(this->_lastNext = next);
		}
	}
	return $DTMAxisIterator::END;
}

$DTMAxisIterator* DupFilterIterator::cloneIterator() {
	$useLocalCurrentObjectStackCache();
	try {
		$var(DupFilterIterator, clone, $cast(DupFilterIterator, $DTMAxisIteratorBase::clone()));
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

void DupFilterIterator::setRestartable(bool isRestartable) {
	this->_isRestartable = isRestartable;
	$nc(this->_source)->setRestartable(isRestartable);
}

void DupFilterIterator::setMark() {
	this->_markedNode = this->_current;
	this->_markedLastNext = this->_lastNext;
}

void DupFilterIterator::gotoMark() {
	this->_current = this->_markedNode;
	this->_lastNext = this->_markedLastNext;
}

$DTMAxisIterator* DupFilterIterator::reset() {
	this->_current = 0;
	this->_lastNext = $DTMAxisIterator::END;
	return resetPosition();
}

DupFilterIterator::DupFilterIterator() {
}

$Class* DupFilterIterator::load$($String* name, bool initialize) {
	$loadClass(DupFilterIterator, name, initialize, &_DupFilterIterator_ClassInfo_, allocate$DupFilterIterator);
	return class$;
}

$Class* DupFilterIterator::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com