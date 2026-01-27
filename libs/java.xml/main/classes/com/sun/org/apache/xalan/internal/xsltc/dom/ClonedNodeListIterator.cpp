#include <com/sun/org/apache/xalan/internal/xsltc/dom/ClonedNodeListIterator.h>

#include <com/sun/org/apache/xalan/internal/xsltc/dom/CachedNodeListIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <jcpp.h>

using $CachedNodeListIterator = ::com::sun::org::apache::xalan::internal::xsltc::dom::CachedNodeListIterator;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
using $ClassInfo = ::java::lang::ClassInfo;
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

$FieldInfo _ClonedNodeListIterator_FieldInfo_[] = {
	{"_source", "Lcom/sun/org/apache/xalan/internal/xsltc/dom/CachedNodeListIterator;", nullptr, $PRIVATE, $field(ClonedNodeListIterator, _source)},
	{"_index", "I", nullptr, $PRIVATE, $field(ClonedNodeListIterator, _index)},
	{}
};

$MethodInfo _ClonedNodeListIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/CachedNodeListIterator;)V", nullptr, $PUBLIC, $method(ClonedNodeListIterator, init$, void, $CachedNodeListIterator*)},
	{"cloneIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(ClonedNodeListIterator, cloneIterator, $DTMAxisIterator*)},
	{"getNodeByPosition", "(I)I", nullptr, $PUBLIC, $virtualMethod(ClonedNodeListIterator, getNodeByPosition, int32_t, int32_t)},
	{"getPosition", "()I", nullptr, $PUBLIC, $virtualMethod(ClonedNodeListIterator, getPosition, int32_t)},
	{"gotoMark", "()V", nullptr, $PUBLIC, $virtualMethod(ClonedNodeListIterator, gotoMark, void)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(ClonedNodeListIterator, next, int32_t)},
	{"reset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(ClonedNodeListIterator, reset, $DTMAxisIterator*)},
	{"setMark", "()V", nullptr, $PUBLIC, $virtualMethod(ClonedNodeListIterator, setMark, void)},
	{"setRestartable", "(Z)V", nullptr, $PUBLIC, $virtualMethod(ClonedNodeListIterator, setRestartable, void, bool)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(ClonedNodeListIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$ClassInfo _ClonedNodeListIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.ClonedNodeListIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIteratorBase",
	nullptr,
	_ClonedNodeListIterator_FieldInfo_,
	_ClonedNodeListIterator_MethodInfo_
};

$Object* allocate$ClonedNodeListIterator($Class* clazz) {
	return $of($alloc(ClonedNodeListIterator));
}

void ClonedNodeListIterator::init$($CachedNodeListIterator* source) {
	$DTMAxisIteratorBase::init$();
	this->_index = 0;
	$set(this, _source, source);
}

void ClonedNodeListIterator::setRestartable(bool isRestartable) {
}

$DTMAxisIterator* ClonedNodeListIterator::setStartNode(int32_t node) {
	return this;
}

int32_t ClonedNodeListIterator::next() {
	return $nc(this->_source)->getNode(this->_index++);
}

int32_t ClonedNodeListIterator::getPosition() {
	return this->_index == 0 ? 1 : this->_index;
}

int32_t ClonedNodeListIterator::getNodeByPosition(int32_t pos) {
	return $nc(this->_source)->getNode(pos);
}

$DTMAxisIterator* ClonedNodeListIterator::cloneIterator() {
	return $nc(this->_source)->cloneIterator();
}

$DTMAxisIterator* ClonedNodeListIterator::reset() {
	this->_index = 0;
	return this;
}

void ClonedNodeListIterator::setMark() {
	$nc(this->_source)->setMark();
}

void ClonedNodeListIterator::gotoMark() {
	$nc(this->_source)->gotoMark();
}

ClonedNodeListIterator::ClonedNodeListIterator() {
}

$Class* ClonedNodeListIterator::load$($String* name, bool initialize) {
	$loadClass(ClonedNodeListIterator, name, initialize, &_ClonedNodeListIterator_ClassInfo_, allocate$ClonedNodeListIterator);
	return class$;
}

$Class* ClonedNodeListIterator::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com