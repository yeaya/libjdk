#include <com/sun/org/apache/xalan/internal/xsltc/dom/FilterIterator.h>

#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMFilter.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <java/lang/CloneNotSupportedException.h>
#include <jcpp.h>

#undef END
#undef FILTER_ACCEPT
#undef ITERATOR_CLONE_ERR
#undef SHOW_ALL

using $BasisLibrary = ::com::sun::org::apache::xalan::internal::xsltc::runtime::BasisLibrary;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMFilter = ::com::sun::org::apache::xml::internal::dtm::DTMFilter;
using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
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

$FieldInfo _FilterIterator_FieldInfo_[] = {
	{"_source", "Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PRIVATE, $field(FilterIterator, _source)},
	{"_filter", "Lcom/sun/org/apache/xml/internal/dtm/DTMFilter;", nullptr, $PRIVATE | $FINAL, $field(FilterIterator, _filter)},
	{"_isReverse", "Z", nullptr, $PRIVATE | $FINAL, $field(FilterIterator, _isReverse)},
	{}
};

$MethodInfo _FilterIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;Lcom/sun/org/apache/xml/internal/dtm/DTMFilter;)V", nullptr, $PUBLIC, $method(FilterIterator, init$, void, $DTMAxisIterator*, $DTMFilter*)},
	{"cloneIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(FilterIterator, cloneIterator, $DTMAxisIterator*)},
	{"gotoMark", "()V", nullptr, $PUBLIC, $virtualMethod(FilterIterator, gotoMark, void)},
	{"isReverse", "()Z", nullptr, $PUBLIC, $virtualMethod(FilterIterator, isReverse, bool)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(FilterIterator, next, int32_t)},
	{"reset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(FilterIterator, reset, $DTMAxisIterator*)},
	{"setMark", "()V", nullptr, $PUBLIC, $virtualMethod(FilterIterator, setMark, void)},
	{"setRestartable", "(Z)V", nullptr, $PUBLIC, $virtualMethod(FilterIterator, setRestartable, void, bool)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(FilterIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$ClassInfo _FilterIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.FilterIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIteratorBase",
	nullptr,
	_FilterIterator_FieldInfo_,
	_FilterIterator_MethodInfo_
};

$Object* allocate$FilterIterator($Class* clazz) {
	return $of($alloc(FilterIterator));
}

void FilterIterator::init$($DTMAxisIterator* source, $DTMFilter* filter) {
	$DTMAxisIteratorBase::init$();
	$set(this, _source, source);
	$set(this, _filter, filter);
	this->_isReverse = $nc(source)->isReverse();
}

bool FilterIterator::isReverse() {
	return this->_isReverse;
}

void FilterIterator::setRestartable(bool isRestartable) {
	this->_isRestartable = isRestartable;
	$nc(this->_source)->setRestartable(isRestartable);
}

$DTMAxisIterator* FilterIterator::cloneIterator() {
	$useLocalCurrentObjectStackCache();
	try {
		$var(FilterIterator, clone, $cast(FilterIterator, $DTMAxisIteratorBase::clone()));
		$set($nc(clone), _source, $nc(this->_source)->cloneIterator());
		clone->_isRestartable = false;
		return clone->reset();
	} catch ($CloneNotSupportedException& e) {
		$init($BasisLibrary);
		$BasisLibrary::runTimeError($BasisLibrary::ITERATOR_CLONE_ERR, $($of(e->toString())));
		return nullptr;
	}
	$shouldNotReachHere();
}

$DTMAxisIterator* FilterIterator::reset() {
	$nc(this->_source)->reset();
	return resetPosition();
}

int32_t FilterIterator::next() {
	int32_t node = 0;
	while ((node = $nc(this->_source)->next()) != $DTMAxisIterator::END) {
		if ($nc(this->_filter)->acceptNode(node, $DTMFilter::SHOW_ALL) == $DTMIterator::FILTER_ACCEPT) {
			return returnNode(node);
		}
	}
	return $DTMAxisIterator::END;
}

$DTMAxisIterator* FilterIterator::setStartNode(int32_t node) {
	if (this->_isRestartable) {
		$nc(this->_source)->setStartNode(this->_startNode = node);
		return resetPosition();
	}
	return this;
}

void FilterIterator::setMark() {
	$nc(this->_source)->setMark();
}

void FilterIterator::gotoMark() {
	$nc(this->_source)->gotoMark();
}

FilterIterator::FilterIterator() {
}

$Class* FilterIterator::load$($String* name, bool initialize) {
	$loadClass(FilterIterator, name, initialize, &_FilterIterator_ClassInfo_, allocate$FilterIterator);
	return class$;
}

$Class* FilterIterator::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com