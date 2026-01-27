#include <com/sun/org/apache/xalan/internal/xsltc/dom/SortingIterator.h>

#include <com/sun/org/apache/xalan/internal/xsltc/dom/NodeSortRecord.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/NodeSortRecordFactory.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <java/lang/CloneNotSupportedException.h>
#include <jcpp.h>

#undef END
#undef INIT_DATA_SIZE
#undef ITERATOR_CLONE_ERR

using $NodeSortRecordArray = $Array<::com::sun::org::apache::xalan::internal::xsltc::dom::NodeSortRecord>;
using $NodeSortRecord = ::com::sun::org::apache::xalan::internal::xsltc::dom::NodeSortRecord;
using $NodeSortRecordFactory = ::com::sun::org::apache::xalan::internal::xsltc::dom::NodeSortRecordFactory;
using $BasisLibrary = ::com::sun::org::apache::xalan::internal::xsltc::runtime::BasisLibrary;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Exception = ::java::lang::Exception;
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

$FieldInfo _SortingIterator_FieldInfo_[] = {
	{"INIT_DATA_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SortingIterator, INIT_DATA_SIZE)},
	{"_source", "Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PRIVATE, $field(SortingIterator, _source)},
	{"_factory", "Lcom/sun/org/apache/xalan/internal/xsltc/dom/NodeSortRecordFactory;", nullptr, $PRIVATE, $field(SortingIterator, _factory)},
	{"_data", "[Lcom/sun/org/apache/xalan/internal/xsltc/dom/NodeSortRecord;", nullptr, $PRIVATE, $field(SortingIterator, _data)},
	{"_free", "I", nullptr, $PRIVATE, $field(SortingIterator, _free)},
	{"_current", "I", nullptr, $PRIVATE, $field(SortingIterator, _current)},
	{}
};

$MethodInfo _SortingIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;Lcom/sun/org/apache/xalan/internal/xsltc/dom/NodeSortRecordFactory;)V", nullptr, $PUBLIC, $method(SortingIterator, init$, void, $DTMAxisIterator*, $NodeSortRecordFactory*)},
	{"addRecord", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/NodeSortRecord;)V", nullptr, $PRIVATE, $method(SortingIterator, addRecord, void, $NodeSortRecord*)},
	{"cloneIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SortingIterator, cloneIterator, $DTMAxisIterator*)},
	{"getLast", "()I", nullptr, $PUBLIC, $virtualMethod(SortingIterator, getLast, int32_t)},
	{"getPosition", "()I", nullptr, $PUBLIC, $virtualMethod(SortingIterator, getPosition, int32_t)},
	{"gotoMark", "()V", nullptr, $PUBLIC, $virtualMethod(SortingIterator, gotoMark, void)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(SortingIterator, next, int32_t)},
	{"partition", "(II)I", nullptr, $PRIVATE, $method(SortingIterator, partition, int32_t, int32_t, int32_t)},
	{"quicksort", "(II)V", nullptr, $PRIVATE, $method(SortingIterator, quicksort, void, int32_t, int32_t)},
	{"setMark", "()V", nullptr, $PUBLIC, $virtualMethod(SortingIterator, setMark, void)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SortingIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$ClassInfo _SortingIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.SortingIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIteratorBase",
	nullptr,
	_SortingIterator_FieldInfo_,
	_SortingIterator_MethodInfo_
};

$Object* allocate$SortingIterator($Class* clazz) {
	return $of($alloc(SortingIterator));
}

void SortingIterator::init$($DTMAxisIterator* source, $NodeSortRecordFactory* factory) {
	$DTMAxisIteratorBase::init$();
	this->_free = 0;
	$set(this, _source, source);
	$set(this, _factory, factory);
}

int32_t SortingIterator::next() {
	return this->_current < this->_free ? $nc($nc(this->_data)->get(this->_current++))->getNode() : $DTMAxisIterator::END;
}

$DTMAxisIterator* SortingIterator::setStartNode(int32_t node) {
	$useLocalCurrentObjectStackCache();
	try {
		$nc(this->_source)->setStartNode(this->_startNode = node);
		$set(this, _data, $new($NodeSortRecordArray, SortingIterator::INIT_DATA_SIZE));
		this->_free = 0;
		while ((node = $nc(this->_source)->next()) != $DTMAxisIterator::END) {
			addRecord($($nc(this->_factory)->makeNodeSortRecord(node, this->_free)));
		}
		quicksort(0, this->_free - 1);
		this->_current = 0;
		return this;
	} catch ($Exception& e) {
		return this;
	}
	$shouldNotReachHere();
}

int32_t SortingIterator::getPosition() {
	return this->_current == 0 ? 1 : this->_current;
}

int32_t SortingIterator::getLast() {
	return this->_free;
}

void SortingIterator::setMark() {
	$nc(this->_source)->setMark();
	this->_markedNode = this->_current;
}

void SortingIterator::gotoMark() {
	$nc(this->_source)->gotoMark();
	this->_current = this->_markedNode;
}

$DTMAxisIterator* SortingIterator::cloneIterator() {
	$useLocalCurrentObjectStackCache();
	try {
		$var(SortingIterator, clone, $cast(SortingIterator, $DTMAxisIteratorBase::clone()));
		$set($nc(clone), _source, $nc(this->_source)->cloneIterator());
		$set(clone, _factory, this->_factory);
		$set(clone, _data, this->_data);
		clone->_free = this->_free;
		clone->_current = this->_current;
		clone->setRestartable(false);
		return clone->reset();
	} catch ($CloneNotSupportedException& e) {
		$init($BasisLibrary);
		$BasisLibrary::runTimeError($BasisLibrary::ITERATOR_CLONE_ERR, $($of(e->toString())));
		return nullptr;
	}
	$shouldNotReachHere();
}

void SortingIterator::addRecord($NodeSortRecord* record) {
	if (this->_free == $nc(this->_data)->length) {
		$var($NodeSortRecordArray, newArray, $new($NodeSortRecordArray, $nc(this->_data)->length * 2));
		$System::arraycopy(this->_data, 0, newArray, 0, this->_free);
		$set(this, _data, newArray);
	}
	$nc(this->_data)->set(this->_free++, record);
}

void SortingIterator::quicksort(int32_t p, int32_t r) {
	while (p < r) {
		int32_t q = partition(p, r);
		quicksort(p, q);
		p = q + 1;
	}
}

int32_t SortingIterator::partition(int32_t p, int32_t r) {
	$useLocalCurrentObjectStackCache();
	$var($NodeSortRecord, x, $nc(this->_data)->get((int32_t)((uint32_t)(p + r) >> 1)));
	int32_t i = p - 1;
	int32_t j = r + 1;
	while (true) {
		while ($nc(x)->compareTo($nc(this->_data)->get(--j)) < 0) {
		}
		while ($nc(x)->compareTo($nc(this->_data)->get(++i)) > 0) {
		}
		if (i < j) {
			$var($NodeSortRecord, t, $nc(this->_data)->get(i));
			$nc(this->_data)->set(i, $nc(this->_data)->get(j));
			$nc(this->_data)->set(j, t);
		} else {
			return (j);
		}
	}
}

SortingIterator::SortingIterator() {
}

$Class* SortingIterator::load$($String* name, bool initialize) {
	$loadClass(SortingIterator, name, initialize, &_SortingIterator_ClassInfo_, allocate$SortingIterator);
	return class$;
}

$Class* SortingIterator::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com