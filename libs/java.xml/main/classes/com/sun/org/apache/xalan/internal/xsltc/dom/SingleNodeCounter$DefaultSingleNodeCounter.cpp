#include <com/sun/org/apache/xalan/internal/xsltc/dom/SingleNodeCounter$DefaultSingleNodeCounter.h>

#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/Translet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/NodeCounter.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/SingleNodeCounter.h>
#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <jcpp.h>

#undef END
#undef MIN_VALUE
#undef PRECEDINGSIBLING

using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $Translet = ::com::sun::org::apache::xalan::internal::xsltc::Translet;
using $NodeCounter = ::com::sun::org::apache::xalan::internal::xsltc::dom::NodeCounter;
using $SingleNodeCounter = ::com::sun::org::apache::xalan::internal::xsltc::dom::SingleNodeCounter;
using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

$MethodInfo _SingleNodeCounter$DefaultSingleNodeCounter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/Translet;Lcom/sun/org/apache/xalan/internal/xsltc/DOM;Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;)V", nullptr, $PUBLIC, $method(SingleNodeCounter$DefaultSingleNodeCounter, init$, void, $Translet*, $DOM*, $DTMAxisIterator*)},
	{"getCounter", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SingleNodeCounter$DefaultSingleNodeCounter, getCounter, $String*)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xalan/internal/xsltc/dom/NodeCounter;", nullptr, $PUBLIC, $virtualMethod(SingleNodeCounter$DefaultSingleNodeCounter, setStartNode, $NodeCounter*, int32_t)},
	{}
};

$InnerClassInfo _SingleNodeCounter$DefaultSingleNodeCounter_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.dom.SingleNodeCounter$DefaultSingleNodeCounter", "com.sun.org.apache.xalan.internal.xsltc.dom.SingleNodeCounter", "DefaultSingleNodeCounter", $STATIC},
	{}
};

$ClassInfo _SingleNodeCounter$DefaultSingleNodeCounter_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.SingleNodeCounter$DefaultSingleNodeCounter",
	"com.sun.org.apache.xalan.internal.xsltc.dom.SingleNodeCounter",
	nullptr,
	nullptr,
	_SingleNodeCounter$DefaultSingleNodeCounter_MethodInfo_,
	nullptr,
	nullptr,
	_SingleNodeCounter$DefaultSingleNodeCounter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.dom.SingleNodeCounter"
};

$Object* allocate$SingleNodeCounter$DefaultSingleNodeCounter($Class* clazz) {
	return $of($alloc(SingleNodeCounter$DefaultSingleNodeCounter));
}

void SingleNodeCounter$DefaultSingleNodeCounter::init$($Translet* translet, $DOM* document, $DTMAxisIterator* iterator) {
	$SingleNodeCounter::init$(translet, document, iterator);
}

$NodeCounter* SingleNodeCounter$DefaultSingleNodeCounter::setStartNode(int32_t node) {
	this->_node = node;
	this->_nodeType = $nc(this->_document)->getExpandedTypeID(node);
	$set(this, _countSiblings, $nc(this->_document)->getTypedAxisIterator($Axis::PRECEDINGSIBLING, $nc(this->_document)->getExpandedTypeID(node)));
	return this;
}

$String* SingleNodeCounter$DefaultSingleNodeCounter::getCounter() {
	int32_t result = 0;
	if (this->_value != $Integer::MIN_VALUE) {
		if (this->_value == 0) {
			return "0"_s;
		} else if ($Double::isNaN(this->_value)) {
			return "NaN"_s;
		} else if (this->_value < 0 && $Double::isInfinite(this->_value)) {
			return "-Infinity"_s;
		} else if ($Double::isInfinite(this->_value)) {
			return "Infinity"_s;
		} else {
			result = $cast(int32_t, this->_value);
		}
	} else {
		int32_t next = 0;
		result = 1;
		$nc(this->_countSiblings)->setStartNode(this->_node);
		while ((next = $nc(this->_countSiblings)->next()) != $NodeCounter::END) {
			++result;
		}
	}
	return formatNumbers(result);
}

SingleNodeCounter$DefaultSingleNodeCounter::SingleNodeCounter$DefaultSingleNodeCounter() {
}

$Class* SingleNodeCounter$DefaultSingleNodeCounter::load$($String* name, bool initialize) {
	$loadClass(SingleNodeCounter$DefaultSingleNodeCounter, name, initialize, &_SingleNodeCounter$DefaultSingleNodeCounter_ClassInfo_, allocate$SingleNodeCounter$DefaultSingleNodeCounter);
	return class$;
}

$Class* SingleNodeCounter$DefaultSingleNodeCounter::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com