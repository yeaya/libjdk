#include <com/sun/org/apache/xalan/internal/xsltc/dom/MatchingIterator.h>

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

$FieldInfo _MatchingIterator_FieldInfo_[] = {
	{"_source", "Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PRIVATE, $field(MatchingIterator, _source)},
	{"_match", "I", nullptr, $PRIVATE | $FINAL, $field(MatchingIterator, _match)},
	{}
};

$MethodInfo _MatchingIterator_MethodInfo_[] = {
	{"<init>", "(ILcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;)V", nullptr, $PUBLIC, $method(MatchingIterator, init$, void, int32_t, $DTMAxisIterator*)},
	{"cloneIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(MatchingIterator, cloneIterator, $DTMAxisIterator*)},
	{"getLast", "()I", nullptr, $PUBLIC, $virtualMethod(MatchingIterator, getLast, int32_t)},
	{"getPosition", "()I", nullptr, $PUBLIC, $virtualMethod(MatchingIterator, getPosition, int32_t)},
	{"gotoMark", "()V", nullptr, $PUBLIC, $virtualMethod(MatchingIterator, gotoMark, void)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(MatchingIterator, next, int32_t)},
	{"reset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(MatchingIterator, reset, $DTMAxisIterator*)},
	{"setMark", "()V", nullptr, $PUBLIC, $virtualMethod(MatchingIterator, setMark, void)},
	{"setRestartable", "(Z)V", nullptr, $PUBLIC, $virtualMethod(MatchingIterator, setRestartable, void, bool)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(MatchingIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$ClassInfo _MatchingIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.MatchingIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIteratorBase",
	nullptr,
	_MatchingIterator_FieldInfo_,
	_MatchingIterator_MethodInfo_
};

$Object* allocate$MatchingIterator($Class* clazz) {
	return $of($alloc(MatchingIterator));
}

void MatchingIterator::init$(int32_t match, $DTMAxisIterator* source) {
	$DTMAxisIteratorBase::init$();
	$set(this, _source, source);
	this->_match = match;
}

void MatchingIterator::setRestartable(bool isRestartable) {
	this->_isRestartable = isRestartable;
	$nc(this->_source)->setRestartable(isRestartable);
}

$DTMAxisIterator* MatchingIterator::cloneIterator() {
	$useLocalCurrentObjectStackCache();
	try {
		$var(MatchingIterator, clone, $cast(MatchingIterator, $DTMAxisIteratorBase::clone()));
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

$DTMAxisIterator* MatchingIterator::setStartNode(int32_t node) {
	if (this->_isRestartable) {
		$nc(this->_source)->setStartNode(node);
		this->_position = 1;
		while (true) {
			bool var$0 = (node = $nc(this->_source)->next()) != $DTMAxisIterator::END;
			if (!(var$0 && node != this->_match)) {
				break;
			}
			{
				++this->_position;
			}
		}
	}
	return this;
}

$DTMAxisIterator* MatchingIterator::reset() {
	$nc(this->_source)->reset();
	return resetPosition();
}

int32_t MatchingIterator::next() {
	return $nc(this->_source)->next();
}

int32_t MatchingIterator::getLast() {
	if (this->_last == -1) {
		this->_last = $nc(this->_source)->getLast();
	}
	return this->_last;
}

int32_t MatchingIterator::getPosition() {
	return this->_position;
}

void MatchingIterator::setMark() {
	$nc(this->_source)->setMark();
}

void MatchingIterator::gotoMark() {
	$nc(this->_source)->gotoMark();
}

MatchingIterator::MatchingIterator() {
}

$Class* MatchingIterator::load$($String* name, bool initialize) {
	$loadClass(MatchingIterator, name, initialize, &_MatchingIterator_ClassInfo_, allocate$MatchingIterator);
	return class$;
}

$Class* MatchingIterator::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com