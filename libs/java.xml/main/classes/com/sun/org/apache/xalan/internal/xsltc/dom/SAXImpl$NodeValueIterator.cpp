#include <com/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl$NodeValueIterator.h>

#include <com/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2.h>
#include <java/lang/CloneNotSupportedException.h>
#include <jcpp.h>

#undef END
#undef ITERATOR_CLONE_ERR

using $SAXImpl = ::com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl;
using $BasisLibrary = ::com::sun::org::apache::xalan::internal::xsltc::runtime::BasisLibrary;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
using $DTMDefaultBaseIterators = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators;
using $DTMDefaultBaseIterators$InternalAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$InternalAxisIteratorBase;
using $SAX2DTM = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM;
using $SAX2DTM2 = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2;
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

$FieldInfo _SAXImpl$NodeValueIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl;", nullptr, $FINAL | $SYNTHETIC, $field(SAXImpl$NodeValueIterator, this$0)},
	{"_source", "Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PRIVATE, $field(SAXImpl$NodeValueIterator, _source)},
	{"_value", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SAXImpl$NodeValueIterator, _value)},
	{"_op", "Z", nullptr, $PRIVATE, $field(SAXImpl$NodeValueIterator, _op)},
	{"_isReverse", "Z", nullptr, $PRIVATE | $FINAL, $field(SAXImpl$NodeValueIterator, _isReverse)},
	{"_returnType", "I", nullptr, $PRIVATE, $field(SAXImpl$NodeValueIterator, _returnType)},
	{}
};

$MethodInfo _SAXImpl$NodeValueIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl;Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;ILjava/lang/String;Z)V", nullptr, $PUBLIC, $method(SAXImpl$NodeValueIterator, init$, void, $SAXImpl*, $DTMAxisIterator*, int32_t, $String*, bool)},
	{"cloneIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SAXImpl$NodeValueIterator, cloneIterator, $DTMAxisIterator*)},
	{"gotoMark", "()V", nullptr, $PUBLIC, $virtualMethod(SAXImpl$NodeValueIterator, gotoMark, void)},
	{"isReverse", "()Z", nullptr, $PUBLIC, $virtualMethod(SAXImpl$NodeValueIterator, isReverse, bool)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(SAXImpl$NodeValueIterator, next, int32_t)},
	{"reset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SAXImpl$NodeValueIterator, reset, $DTMAxisIterator*)},
	{"setMark", "()V", nullptr, $PUBLIC, $virtualMethod(SAXImpl$NodeValueIterator, setMark, void)},
	{"setRestartable", "(Z)V", nullptr, $PUBLIC, $virtualMethod(SAXImpl$NodeValueIterator, setRestartable, void, bool)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SAXImpl$NodeValueIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$InnerClassInfo _SAXImpl$NodeValueIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl$NodeValueIterator", "com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl", "NodeValueIterator", $PRIVATE | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "InternalAxisIteratorBase", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SAXImpl$NodeValueIterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl$NodeValueIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase",
	nullptr,
	_SAXImpl$NodeValueIterator_FieldInfo_,
	_SAXImpl$NodeValueIterator_MethodInfo_,
	nullptr,
	nullptr,
	_SAXImpl$NodeValueIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl"
};

$Object* allocate$SAXImpl$NodeValueIterator($Class* clazz) {
	return $of($alloc(SAXImpl$NodeValueIterator));
}

void SAXImpl$NodeValueIterator::init$($SAXImpl* this$0, $DTMAxisIterator* source, int32_t returnType, $String* value, bool op) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$InternalAxisIteratorBase::init$(this$0);
	this->_returnType = 1;
	$set(this, _source, source);
	this->_returnType = returnType;
	$set(this, _value, value);
	this->_op = op;
	this->_isReverse = $nc(source)->isReverse();
}

bool SAXImpl$NodeValueIterator::isReverse() {
	return this->_isReverse;
}

$DTMAxisIterator* SAXImpl$NodeValueIterator::cloneIterator() {
	$useLocalCurrentObjectStackCache();
	try {
		$var(SAXImpl$NodeValueIterator, clone, $cast(SAXImpl$NodeValueIterator, $DTMDefaultBaseIterators$InternalAxisIteratorBase::clone()));
		$nc(clone)->_isRestartable = false;
		$set(clone, _source, $nc(this->_source)->cloneIterator());
		$set(clone, _value, this->_value);
		clone->_op = this->_op;
		return clone->reset();
	} catch ($CloneNotSupportedException& e) {
		$init($BasisLibrary);
		$BasisLibrary::runTimeError($BasisLibrary::ITERATOR_CLONE_ERR, $($of(e->toString())));
		return nullptr;
	}
	$shouldNotReachHere();
}

void SAXImpl$NodeValueIterator::setRestartable(bool isRestartable) {
	this->_isRestartable = isRestartable;
	$nc(this->_source)->setRestartable(isRestartable);
}

$DTMAxisIterator* SAXImpl$NodeValueIterator::reset() {
	$nc(this->_source)->reset();
	return resetPosition();
}

int32_t SAXImpl$NodeValueIterator::next() {
	$useLocalCurrentObjectStackCache();
	int32_t node = 0;
	while ((node = $nc(this->_source)->next()) != $DTMAxisIterator::END) {
		$var($String, val, this->this$0->getStringValueX(node));
		if ($nc(this->_value)->equals(val) == this->_op) {
			if (this->_returnType == 0) {
				return returnNode(node);
			} else {
				return returnNode(this->this$0->getParent(node));
			}
		}
	}
	return $DTMAxisIterator::END;
}

$DTMAxisIterator* SAXImpl$NodeValueIterator::setStartNode(int32_t node) {
	if (this->_isRestartable) {
		$nc(this->_source)->setStartNode(this->_startNode = node);
		return resetPosition();
	}
	return this;
}

void SAXImpl$NodeValueIterator::setMark() {
	$nc(this->_source)->setMark();
}

void SAXImpl$NodeValueIterator::gotoMark() {
	$nc(this->_source)->gotoMark();
}

SAXImpl$NodeValueIterator::SAXImpl$NodeValueIterator() {
}

$Class* SAXImpl$NodeValueIterator::load$($String* name, bool initialize) {
	$loadClass(SAXImpl$NodeValueIterator, name, initialize, &_SAXImpl$NodeValueIterator_ClassInfo_, allocate$SAXImpl$NodeValueIterator);
	return class$;
}

$Class* SAXImpl$NodeValueIterator::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com