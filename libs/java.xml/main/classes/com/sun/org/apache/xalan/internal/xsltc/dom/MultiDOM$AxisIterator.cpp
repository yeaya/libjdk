#include <com/sun/org/apache/xalan/internal/xsltc/dom/MultiDOM$AxisIterator.h>

#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/MultiDOM.h>
#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <jcpp.h>

#undef CHILD
#undef END
#undef IDENT_DTM_NODE_BITS
#undef NULL

using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $MultiDOM = ::com::sun::org::apache::xalan::internal::xsltc::dom::MultiDOM;
using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMManager = ::com::sun::org::apache::xml::internal::dtm::DTMManager;
using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
using $ClassInfo = ::java::lang::ClassInfo;
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

$FieldInfo _MultiDOM$AxisIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xalan/internal/xsltc/dom/MultiDOM;", nullptr, $FINAL | $SYNTHETIC, $field(MultiDOM$AxisIterator, this$0)},
	{"_axis", "I", nullptr, $PRIVATE | $FINAL, $field(MultiDOM$AxisIterator, _axis)},
	{"_type", "I", nullptr, $PRIVATE | $FINAL, $field(MultiDOM$AxisIterator, _type)},
	{"_source", "Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PRIVATE, $field(MultiDOM$AxisIterator, _source)},
	{"_dtmId", "I", nullptr, $PRIVATE, $field(MultiDOM$AxisIterator, _dtmId)},
	{}
};

$MethodInfo _MultiDOM$AxisIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/MultiDOM;II)V", nullptr, $PUBLIC, $method(MultiDOM$AxisIterator, init$, void, $MultiDOM*, int32_t, int32_t)},
	{"cloneIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(MultiDOM$AxisIterator, cloneIterator, $DTMAxisIterator*)},
	{"getLast", "()I", nullptr, $PUBLIC, $virtualMethod(MultiDOM$AxisIterator, getLast, int32_t)},
	{"getPosition", "()I", nullptr, $PUBLIC, $virtualMethod(MultiDOM$AxisIterator, getPosition, int32_t)},
	{"gotoMark", "()V", nullptr, $PUBLIC, $virtualMethod(MultiDOM$AxisIterator, gotoMark, void)},
	{"isReverse", "()Z", nullptr, $PUBLIC, $virtualMethod(MultiDOM$AxisIterator, isReverse, bool)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(MultiDOM$AxisIterator, next, int32_t)},
	{"reset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(MultiDOM$AxisIterator, reset, $DTMAxisIterator*)},
	{"setMark", "()V", nullptr, $PUBLIC, $virtualMethod(MultiDOM$AxisIterator, setMark, void)},
	{"setRestartable", "(Z)V", nullptr, $PUBLIC, $virtualMethod(MultiDOM$AxisIterator, setRestartable, void, bool)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(MultiDOM$AxisIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$InnerClassInfo _MultiDOM$AxisIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.dom.MultiDOM$AxisIterator", "com.sun.org.apache.xalan.internal.xsltc.dom.MultiDOM", "AxisIterator", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _MultiDOM$AxisIterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.MultiDOM$AxisIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIteratorBase",
	nullptr,
	_MultiDOM$AxisIterator_FieldInfo_,
	_MultiDOM$AxisIterator_MethodInfo_,
	nullptr,
	nullptr,
	_MultiDOM$AxisIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.dom.MultiDOM"
};

$Object* allocate$MultiDOM$AxisIterator($Class* clazz) {
	return $of($alloc(MultiDOM$AxisIterator));
}

void MultiDOM$AxisIterator::init$($MultiDOM* this$0, int32_t axis, int32_t type) {
	$set(this, this$0, this$0);
	$DTMAxisIteratorBase::init$();
	this->_dtmId = -1;
	this->_axis = axis;
	this->_type = type;
}

int32_t MultiDOM$AxisIterator::next() {
	if (this->_source == nullptr) {
		return ($DTMAxisIterator::END);
	}
	return $nc(this->_source)->next();
}

void MultiDOM$AxisIterator::setRestartable(bool flag) {
	if (this->_source != nullptr) {
		$nc(this->_source)->setRestartable(flag);
	}
}

$DTMAxisIterator* MultiDOM$AxisIterator::setStartNode(int32_t node) {
	if (node == $DTM::NULL) {
		return this;
	}
	int32_t dom = $usr(node, $DTMManager::IDENT_DTM_NODE_BITS);
	if (this->_source == nullptr || this->_dtmId != dom) {
		if (this->_type == -2) {
			$set(this, _source, $nc($nc(this->this$0->_adapters)->get(dom))->getAxisIterator(this->_axis));
		} else if (this->_axis == $Axis::CHILD) {
			$set(this, _source, $nc($nc(this->this$0->_adapters)->get(dom))->getTypedChildren(this->_type));
		} else {
			$set(this, _source, $nc($nc(this->this$0->_adapters)->get(dom))->getTypedAxisIterator(this->_axis, this->_type));
		}
	}
	this->_dtmId = dom;
	$nc(this->_source)->setStartNode(node);
	return this;
}

$DTMAxisIterator* MultiDOM$AxisIterator::reset() {
	if (this->_source != nullptr) {
		$nc(this->_source)->reset();
	}
	return this;
}

int32_t MultiDOM$AxisIterator::getLast() {
	if (this->_source != nullptr) {
		return $nc(this->_source)->getLast();
	} else {
		return $DTMAxisIterator::END;
	}
}

int32_t MultiDOM$AxisIterator::getPosition() {
	if (this->_source != nullptr) {
		return $nc(this->_source)->getPosition();
	} else {
		return $DTMAxisIterator::END;
	}
}

bool MultiDOM$AxisIterator::isReverse() {
	return $Axis::isReverse(this->_axis);
}

void MultiDOM$AxisIterator::setMark() {
	if (this->_source != nullptr) {
		$nc(this->_source)->setMark();
	}
}

void MultiDOM$AxisIterator::gotoMark() {
	if (this->_source != nullptr) {
		$nc(this->_source)->gotoMark();
	}
}

$DTMAxisIterator* MultiDOM$AxisIterator::cloneIterator() {
	$var(MultiDOM$AxisIterator, clone, $new(MultiDOM$AxisIterator, this->this$0, this->_axis, this->_type));
	if (this->_source != nullptr) {
		$set(clone, _source, $nc(this->_source)->cloneIterator());
	}
	clone->_dtmId = this->_dtmId;
	return clone;
}

MultiDOM$AxisIterator::MultiDOM$AxisIterator() {
}

$Class* MultiDOM$AxisIterator::load$($String* name, bool initialize) {
	$loadClass(MultiDOM$AxisIterator, name, initialize, &_MultiDOM$AxisIterator_ClassInfo_, allocate$MultiDOM$AxisIterator);
	return class$;
}

$Class* MultiDOM$AxisIterator::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com