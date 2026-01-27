#include <com/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator.h>

#include <com/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator$HeapNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <java/lang/CloneNotSupportedException.h>
#include <jcpp.h>

#undef END
#undef ITERATOR_CLONE_ERR

using $MultiValuedNodeHeapIterator$HeapNodeArray = $Array<::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator$HeapNode>;
using $MultiValuedNodeHeapIterator$HeapNode = ::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator$HeapNode;
using $BasisLibrary = ::com::sun::org::apache::xalan::internal::xsltc::runtime::BasisLibrary;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
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

$FieldInfo _MultiValuedNodeHeapIterator_FieldInfo_[] = {
	{"InitSize", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MultiValuedNodeHeapIterator, InitSize)},
	{"_heapSize", "I", nullptr, $PRIVATE, $field(MultiValuedNodeHeapIterator, _heapSize)},
	{"_size", "I", nullptr, $PRIVATE, $field(MultiValuedNodeHeapIterator, _size)},
	{"_heap", "[Lcom/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator$HeapNode;", nullptr, $PRIVATE, $field(MultiValuedNodeHeapIterator, _heap)},
	{"_free", "I", nullptr, $PRIVATE, $field(MultiValuedNodeHeapIterator, _free)},
	{"_returnedLast", "I", nullptr, $PRIVATE, $field(MultiValuedNodeHeapIterator, _returnedLast)},
	{"_cachedReturnedLast", "I", nullptr, $PRIVATE, $field(MultiValuedNodeHeapIterator, _cachedReturnedLast)},
	{"_cachedHeapSize", "I", nullptr, $PRIVATE, $field(MultiValuedNodeHeapIterator, _cachedHeapSize)},
	{}
};

$MethodInfo _MultiValuedNodeHeapIterator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(MultiValuedNodeHeapIterator, init$, void)},
	{"addHeapNode", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator$HeapNode;)V", nullptr, $PROTECTED, $virtualMethod(MultiValuedNodeHeapIterator, addHeapNode, void, $MultiValuedNodeHeapIterator$HeapNode*)},
	{"cloneIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(MultiValuedNodeHeapIterator, cloneIterator, $DTMAxisIterator*)},
	{"gotoMark", "()V", nullptr, $PUBLIC, $virtualMethod(MultiValuedNodeHeapIterator, gotoMark, void)},
	{"heapify", "(I)V", nullptr, $PRIVATE, $method(MultiValuedNodeHeapIterator, heapify, void, int32_t)},
	{"init", "()V", nullptr, $PROTECTED, $virtualMethod(MultiValuedNodeHeapIterator, init, void)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(MultiValuedNodeHeapIterator, next, int32_t)},
	{"reset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(MultiValuedNodeHeapIterator, reset, $DTMAxisIterator*)},
	{"setMark", "()V", nullptr, $PUBLIC, $virtualMethod(MultiValuedNodeHeapIterator, setMark, void)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(MultiValuedNodeHeapIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$InnerClassInfo _MultiValuedNodeHeapIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.dom.MultiValuedNodeHeapIterator$HeapNode", "com.sun.org.apache.xalan.internal.xsltc.dom.MultiValuedNodeHeapIterator", "HeapNode", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MultiValuedNodeHeapIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.dom.MultiValuedNodeHeapIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIteratorBase",
	nullptr,
	_MultiValuedNodeHeapIterator_FieldInfo_,
	_MultiValuedNodeHeapIterator_MethodInfo_,
	nullptr,
	nullptr,
	_MultiValuedNodeHeapIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.dom.MultiValuedNodeHeapIterator$HeapNode"
};

$Object* allocate$MultiValuedNodeHeapIterator($Class* clazz) {
	return $of($alloc(MultiValuedNodeHeapIterator));
}

void MultiValuedNodeHeapIterator::init$() {
	$DTMAxisIteratorBase::init$();
	this->_heapSize = 0;
	this->_size = MultiValuedNodeHeapIterator::InitSize;
	$set(this, _heap, $new($MultiValuedNodeHeapIterator$HeapNodeArray, MultiValuedNodeHeapIterator::InitSize));
	this->_free = 0;
	this->_cachedReturnedLast = $DTMAxisIterator::END;
}

$DTMAxisIterator* MultiValuedNodeHeapIterator::cloneIterator() {
	$useLocalCurrentObjectStackCache();
	this->_isRestartable = false;
	$var($MultiValuedNodeHeapIterator$HeapNodeArray, heapCopy, $new($MultiValuedNodeHeapIterator$HeapNodeArray, $nc(this->_heap)->length));
	try {
		$var(MultiValuedNodeHeapIterator, clone, $cast(MultiValuedNodeHeapIterator, $DTMAxisIteratorBase::clone()));
		for (int32_t i = 0; i < this->_free; ++i) {
			heapCopy->set(i, $($nc($nc(this->_heap)->get(i))->cloneHeapNode()));
		}
		$nc(clone)->setRestartable(false);
		$set(clone, _heap, heapCopy);
		return clone->reset();
	} catch ($CloneNotSupportedException& e) {
		$init($BasisLibrary);
		$BasisLibrary::runTimeError($BasisLibrary::ITERATOR_CLONE_ERR, $($of(e->toString())));
		return nullptr;
	}
	$shouldNotReachHere();
}

void MultiValuedNodeHeapIterator::addHeapNode($MultiValuedNodeHeapIterator$HeapNode* node) {
	if (this->_free == this->_size) {
		$var($MultiValuedNodeHeapIterator$HeapNodeArray, newArray, $new($MultiValuedNodeHeapIterator$HeapNodeArray, this->_size *= 2));
		$System::arraycopy(this->_heap, 0, newArray, 0, this->_free);
		$set(this, _heap, newArray);
	}
	++this->_heapSize;
	$nc(this->_heap)->set(this->_free++, node);
}

int32_t MultiValuedNodeHeapIterator::next() {
	$useLocalCurrentObjectStackCache();
	while (this->_heapSize > 0) {
		int32_t smallest = $nc($nc(this->_heap)->get(0))->_node;
		if (smallest == $DTMAxisIterator::END) {
			if (this->_heapSize > 1) {
				$var($MultiValuedNodeHeapIterator$HeapNode, temp, $nc(this->_heap)->get(0));
				$nc(this->_heap)->set(0, $nc(this->_heap)->get(--this->_heapSize));
				$nc(this->_heap)->set(this->_heapSize, temp);
			} else {
				return $DTMAxisIterator::END;
			}
		} else if (smallest == this->_returnedLast) {
			$nc($nc(this->_heap)->get(0))->step();
		} else {
			$nc($nc(this->_heap)->get(0))->step();
			heapify(0);
			return returnNode(this->_returnedLast = smallest);
		}
		heapify(0);
	}
	return $DTMAxisIterator::END;
}

$DTMAxisIterator* MultiValuedNodeHeapIterator::setStartNode(int32_t node) {
	if (this->_isRestartable) {
		this->_startNode = node;
		for (int32_t i = 0; i < this->_free; ++i) {
			if (!$nc($nc(this->_heap)->get(i))->_isStartSet) {
				$nc($nc(this->_heap)->get(i))->setStartNode(node);
				$nc($nc(this->_heap)->get(i))->step();
				$nc($nc(this->_heap)->get(i))->_isStartSet = true;
			}
		}
		for (int32_t i = (this->_heapSize = this->_free) / 2; i >= 0; --i) {
			heapify(i);
		}
		this->_returnedLast = $DTMAxisIterator::END;
		return resetPosition();
	}
	return this;
}

void MultiValuedNodeHeapIterator::init() {
	for (int32_t i = 0; i < this->_free; ++i) {
		$nc(this->_heap)->set(i, nullptr);
	}
	this->_heapSize = 0;
	this->_free = 0;
}

void MultiValuedNodeHeapIterator::heapify(int32_t i) {
	$useLocalCurrentObjectStackCache();
	{
		int32_t r = 0;
		int32_t l = 0;
		int32_t smallest = 0;
		for (;;) {
			r = (i + 1) << 1;
			l = r - 1;
			smallest = l < this->_heapSize && $nc($nc(this->_heap)->get(l))->isLessThan($nc(this->_heap)->get(i)) ? l : i;
			if (r < this->_heapSize && $nc($nc(this->_heap)->get(r))->isLessThan($nc(this->_heap)->get(smallest))) {
				smallest = r;
			}
			if (smallest != i) {
				$var($MultiValuedNodeHeapIterator$HeapNode, temp, $nc(this->_heap)->get(smallest));
				$nc(this->_heap)->set(smallest, $nc(this->_heap)->get(i));
				$nc(this->_heap)->set(i, temp);
				i = smallest;
			} else {
				break;
			}
		}
	}
}

void MultiValuedNodeHeapIterator::setMark() {
	for (int32_t i = 0; i < this->_free; ++i) {
		$nc($nc(this->_heap)->get(i))->setMark();
	}
	this->_cachedReturnedLast = this->_returnedLast;
	this->_cachedHeapSize = this->_heapSize;
}

void MultiValuedNodeHeapIterator::gotoMark() {
	for (int32_t i = 0; i < this->_free; ++i) {
		$nc($nc(this->_heap)->get(i))->gotoMark();
	}
	for (int32_t i = (this->_heapSize = this->_cachedHeapSize) / 2; i >= 0; --i) {
		heapify(i);
	}
	this->_returnedLast = this->_cachedReturnedLast;
}

$DTMAxisIterator* MultiValuedNodeHeapIterator::reset() {
	for (int32_t i = 0; i < this->_free; ++i) {
		$nc($nc(this->_heap)->get(i))->reset();
		$nc($nc(this->_heap)->get(i))->step();
	}
	for (int32_t i = (this->_heapSize = this->_free) / 2; i >= 0; --i) {
		heapify(i);
	}
	this->_returnedLast = $DTMAxisIterator::END;
	return resetPosition();
}

MultiValuedNodeHeapIterator::MultiValuedNodeHeapIterator() {
}

$Class* MultiValuedNodeHeapIterator::load$($String* name, bool initialize) {
	$loadClass(MultiValuedNodeHeapIterator, name, initialize, &_MultiValuedNodeHeapIterator_ClassInfo_, allocate$MultiValuedNodeHeapIterator);
	return class$;
}

$Class* MultiValuedNodeHeapIterator::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com