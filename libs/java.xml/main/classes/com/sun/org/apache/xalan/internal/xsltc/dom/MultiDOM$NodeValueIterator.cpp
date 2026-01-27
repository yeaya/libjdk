#include <com/sun/org/apache/xalan/internal/xsltc/dom/MultiDOM$NodeValueIterator.h>

#include <com/sun/org/apache/xalan/internal/xsltc/dom/MultiDOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <java/lang/CloneNotSupportedException.h>
#include <jcpp.h>

#undef END
#undef ITERATOR_CLONE_ERR

using $MultiDOM = ::com::sun::org::apache::xalan::internal::xsltc::dom::MultiDOM;
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

$FieldInfo _MultiDOM$NodeValueIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xalan/internal/xsltc/dom/MultiDOM;", nullptr, $FINAL | $SYNTHETIC, $field(MultiDOM$NodeValueIterator, this$0)},
	{"_source", "Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PRIVATE, $field(MultiDOM$NodeValueIterator, _source)},
	{"_value", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MultiDOM$NodeValueIterator, _value)},
	{"_op", "Z", nullptr, $PRIVATE, $field(MultiDOM$NodeValueIterator, _op)},
	{"_isReverse", "Z", nullptr, $PRIVATE | $FINAL, $field(MultiDOM$NodeValueIterator, _isReverse)},
	{"_returnType", "I", nullptr, $PRIVATE, $field(MultiDOM$NodeValueIterator, _returnType)},
	{}
};

$MethodInfo _MultiDOM$NodeValueIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/MultiDOM;Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;ILjava/lang/String;Z)V", nullptr, $PUBLIC, $method(MultiDOM$NodeValueIterator, init$, void, $MultiDOM*, $DTMAxisIterator*, int32_t, $String*, bool)},
	{"cloneIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(MultiDOM$NodeValueIterator, cloneIterator, $DTMAxisIterator*)},
	{"gotoMark", "()V", nullptr, $PUBLIC, $virtualMethod(MultiDOM$NodeValueIterator, gotoMark, void)},
	{"isReverse", "()Z", nullptr, $PUBLIC, $virtualMethod(MultiDOM$NodeValueIterator, isReverse, bool)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(MultiDOM$NodeValueIterator, next, int32_t)},
	{"reset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(MultiDOM$NodeValueIterator, reset, $DTMAxisIterator*)},
	{"setMark", "()V", nullptr, $PUBLIC, $virtualMethod(MultiDOM$NodeValueIterator, setMark, void)},
	{"setRestartable", "(Z)V", nullptr, $PUBLIC, $virtualMethod(MultiDOM$NodeValueIterator, setRestartable, void, bool)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(MultiDOM$NodeValueIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$InnerClassInfo _MultiDOM$NodeValueIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.dom.MultiDOM$NodeValueIterator", "com.sun.org.apache.xalan.internal.xsltc.dom.MultiDOM", "NodeValueIterator", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _MultiDOM$NodeValueIterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.MultiDOM$NodeValueIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIteratorBase",
	nullptr,
	_MultiDOM$NodeValueIterator_FieldInfo_,
	_MultiDOM$NodeValueIterator_MethodInfo_,
	nullptr,
	nullptr,
	_MultiDOM$NodeValueIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.dom.MultiDOM"
};

$Object* allocate$MultiDOM$NodeValueIterator($Class* clazz) {
	return $of($alloc(MultiDOM$NodeValueIterator));
}

void MultiDOM$NodeValueIterator::init$($MultiDOM* this$0, $DTMAxisIterator* source, int32_t returnType, $String* value, bool op) {
	$set(this, this$0, this$0);
	$DTMAxisIteratorBase::init$();
	this->_returnType = 1;
	$set(this, _source, source);
	this->_returnType = returnType;
	$set(this, _value, value);
	this->_op = op;
	this->_isReverse = $nc(source)->isReverse();
}

bool MultiDOM$NodeValueIterator::isReverse() {
	return this->_isReverse;
}

$DTMAxisIterator* MultiDOM$NodeValueIterator::cloneIterator() {
	$useLocalCurrentObjectStackCache();
	try {
		$var(MultiDOM$NodeValueIterator, clone, $cast(MultiDOM$NodeValueIterator, $DTMAxisIteratorBase::clone()));
		$set($nc(clone), _source, $nc(this->_source)->cloneIterator());
		clone->setRestartable(false);
		return clone->reset();
	} catch ($CloneNotSupportedException& e) {
		$init($BasisLibrary);
		$BasisLibrary::runTimeError($BasisLibrary::ITERATOR_CLONE_ERR, $($of(e->toString())));
		return nullptr;
	}
	$shouldNotReachHere();
}

void MultiDOM$NodeValueIterator::setRestartable(bool isRestartable) {
	this->_isRestartable = isRestartable;
	$nc(this->_source)->setRestartable(isRestartable);
}

$DTMAxisIterator* MultiDOM$NodeValueIterator::reset() {
	$nc(this->_source)->reset();
	return resetPosition();
}

int32_t MultiDOM$NodeValueIterator::next() {
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

$DTMAxisIterator* MultiDOM$NodeValueIterator::setStartNode(int32_t node) {
	if (this->_isRestartable) {
		$nc(this->_source)->setStartNode(this->_startNode = node);
		return resetPosition();
	}
	return this;
}

void MultiDOM$NodeValueIterator::setMark() {
	$nc(this->_source)->setMark();
}

void MultiDOM$NodeValueIterator::gotoMark() {
	$nc(this->_source)->gotoMark();
}

MultiDOM$NodeValueIterator::MultiDOM$NodeValueIterator() {
}

$Class* MultiDOM$NodeValueIterator::load$($String* name, bool initialize) {
	$loadClass(MultiDOM$NodeValueIterator, name, initialize, &_MultiDOM$NodeValueIterator_ClassInfo_, allocate$MultiDOM$NodeValueIterator);
	return class$;
}

$Class* MultiDOM$NodeValueIterator::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com