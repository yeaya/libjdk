#include <com/sun/org/apache/xalan/internal/xsltc/dom/NthIterator.h>

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

$FieldInfo _NthIterator_FieldInfo_[] = {
	{"_source", "Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PRIVATE, $field(NthIterator, _source)},
	{"_position", "I", nullptr, $PRIVATE | $FINAL, $field(NthIterator, _position)},
	{"_ready", "Z", nullptr, $PRIVATE, $field(NthIterator, _ready)},
	{}
};

$MethodInfo _NthIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;I)V", nullptr, $PUBLIC, $method(NthIterator, init$, void, $DTMAxisIterator*, int32_t)},
	{"cloneIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(NthIterator, cloneIterator, $DTMAxisIterator*)},
	{"getLast", "()I", nullptr, $PUBLIC, $virtualMethod(NthIterator, getLast, int32_t)},
	{"getPosition", "()I", nullptr, $PUBLIC, $virtualMethod(NthIterator, getPosition, int32_t)},
	{"gotoMark", "()V", nullptr, $PUBLIC, $virtualMethod(NthIterator, gotoMark, void)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(NthIterator, next, int32_t)},
	{"reset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(NthIterator, reset, $DTMAxisIterator*)},
	{"setMark", "()V", nullptr, $PUBLIC, $virtualMethod(NthIterator, setMark, void)},
	{"setRestartable", "(Z)V", nullptr, $PUBLIC, $virtualMethod(NthIterator, setRestartable, void, bool)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(NthIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$ClassInfo _NthIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.NthIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIteratorBase",
	nullptr,
	_NthIterator_FieldInfo_,
	_NthIterator_MethodInfo_
};

$Object* allocate$NthIterator($Class* clazz) {
	return $of($alloc(NthIterator));
}

void NthIterator::init$($DTMAxisIterator* source, int32_t n) {
	$DTMAxisIteratorBase::init$();
	$set(this, _source, source);
	this->_position = n;
}

void NthIterator::setRestartable(bool isRestartable) {
	this->_isRestartable = isRestartable;
	$nc(this->_source)->setRestartable(isRestartable);
}

$DTMAxisIterator* NthIterator::cloneIterator() {
	$useLocalCurrentObjectStackCache();
	try {
		$var(NthIterator, clone, $cast(NthIterator, $DTMAxisIteratorBase::clone()));
		$set($nc(clone), _source, $nc(this->_source)->cloneIterator());
		clone->_isRestartable = false;
		return clone;
	} catch ($CloneNotSupportedException& e) {
		$init($BasisLibrary);
		$BasisLibrary::runTimeError($BasisLibrary::ITERATOR_CLONE_ERR, $($of(e->toString())));
		return nullptr;
	}
	$shouldNotReachHere();
}

int32_t NthIterator::next() {
	if (this->_ready) {
		this->_ready = false;
		return $nc(this->_source)->getNodeByPosition(this->_position);
	}
	return $DTMAxisIterator::END;
}

$DTMAxisIterator* NthIterator::setStartNode(int32_t node) {
	if (this->_isRestartable) {
		$nc(this->_source)->setStartNode(node);
		this->_ready = true;
	}
	return this;
}

$DTMAxisIterator* NthIterator::reset() {
	$nc(this->_source)->reset();
	this->_ready = true;
	return this;
}

int32_t NthIterator::getLast() {
	return 1;
}

int32_t NthIterator::getPosition() {
	return 1;
}

void NthIterator::setMark() {
	$nc(this->_source)->setMark();
}

void NthIterator::gotoMark() {
	$nc(this->_source)->gotoMark();
}

NthIterator::NthIterator() {
}

$Class* NthIterator::load$($String* name, bool initialize) {
	$loadClass(NthIterator, name, initialize, &_NthIterator_ClassInfo_, allocate$NthIterator);
	return class$;
}

$Class* NthIterator::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com