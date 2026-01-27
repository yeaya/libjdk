#include <com/sun/org/apache/xalan/internal/xsltc/dom/StepIterator.h>

#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <java/lang/CloneNotSupportedException.h>
#include <jcpp.h>

#undef END
#undef ITERATOR_CLONE_ERR

using $BasisLibrary = ::com::sun::org::apache::xalan::internal::xsltc::runtime::BasisLibrary;
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

$FieldInfo _StepIterator_FieldInfo_[] = {
	{"_source", "Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PROTECTED, $field(StepIterator, _source)},
	{"_iterator", "Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PROTECTED, $field(StepIterator, _iterator)},
	{"_pos", "I", nullptr, $PRIVATE, $field(StepIterator, _pos)},
	{}
};

$MethodInfo _StepIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;)V", nullptr, $PUBLIC, $method(StepIterator, init$, void, $DTMAxisIterator*, $DTMAxisIterator*)},
	{"cloneIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(StepIterator, cloneIterator, $DTMAxisIterator*)},
	{"gotoMark", "()V", nullptr, $PUBLIC, $virtualMethod(StepIterator, gotoMark, void)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(StepIterator, next, int32_t)},
	{"reset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(StepIterator, reset, $DTMAxisIterator*)},
	{"setMark", "()V", nullptr, $PUBLIC, $virtualMethod(StepIterator, setMark, void)},
	{"setRestartable", "(Z)V", nullptr, $PUBLIC, $virtualMethod(StepIterator, setRestartable, void, bool)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(StepIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$ClassInfo _StepIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.StepIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIteratorBase",
	nullptr,
	_StepIterator_FieldInfo_,
	_StepIterator_MethodInfo_
};

$Object* allocate$StepIterator($Class* clazz) {
	return $of($alloc(StepIterator));
}

void StepIterator::init$($DTMAxisIterator* source, $DTMAxisIterator* iterator) {
	$DTMAxisIteratorBase::init$();
	this->_pos = -1;
	$set(this, _source, source);
	$set(this, _iterator, iterator);
}

void StepIterator::setRestartable(bool isRestartable) {
	this->_isRestartable = isRestartable;
	$nc(this->_source)->setRestartable(isRestartable);
	$nc(this->_iterator)->setRestartable(true);
}

$DTMAxisIterator* StepIterator::cloneIterator() {
	$useLocalCurrentObjectStackCache();
	this->_isRestartable = false;
	try {
		$var(StepIterator, clone, $cast(StepIterator, $DTMAxisIteratorBase::clone()));
		$set($nc(clone), _source, $nc(this->_source)->cloneIterator());
		$set(clone, _iterator, $nc(this->_iterator)->cloneIterator());
		$nc(clone->_iterator)->setRestartable(true);
		clone->_isRestartable = false;
		return clone->reset();
	} catch ($CloneNotSupportedException& e) {
		$init($BasisLibrary);
		$BasisLibrary::runTimeError($BasisLibrary::ITERATOR_CLONE_ERR, $($of(e->toString())));
		return nullptr;
	}
	$shouldNotReachHere();
}

$DTMAxisIterator* StepIterator::setStartNode(int32_t node) {
	if (this->_isRestartable) {
		$nc(this->_source)->setStartNode(this->_startNode = node);
		$nc(this->_iterator)->setStartNode(this->_includeSelf ? this->_startNode : $nc(this->_source)->next());
		return resetPosition();
	}
	return this;
}

$DTMAxisIterator* StepIterator::reset() {
	$nc(this->_source)->reset();
	$nc(this->_iterator)->setStartNode(this->_includeSelf ? this->_startNode : $nc(this->_source)->next());
	return resetPosition();
}

int32_t StepIterator::next() {
	for (int32_t node = 0;;) {
		if ((node = $nc(this->_iterator)->next()) != $DTMAxisIterator::END) {
			return returnNode(node);
		} else if ((node = $nc(this->_source)->next()) == $DTMAxisIterator::END) {
			return $DTMAxisIterator::END;
		} else {
			$nc(this->_iterator)->setStartNode(node);
		}
	}
}

void StepIterator::setMark() {
	$nc(this->_source)->setMark();
	$nc(this->_iterator)->setMark();
}

void StepIterator::gotoMark() {
	$nc(this->_source)->gotoMark();
	$nc(this->_iterator)->gotoMark();
}

StepIterator::StepIterator() {
}

$Class* StepIterator::load$($String* name, bool initialize) {
	$loadClass(StepIterator, name, initialize, &_StepIterator_ClassInfo_, allocate$StepIterator);
	return class$;
}

$Class* StepIterator::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com