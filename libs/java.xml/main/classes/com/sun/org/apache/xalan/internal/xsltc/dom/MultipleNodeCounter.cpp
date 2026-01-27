#include <com/sun/org/apache/xalan/internal/xsltc/dom/MultipleNodeCounter.h>

#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/Translet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/MultipleNodeCounter$DefaultMultipleNodeCounter.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/NodeCounter.h>
#include <com/sun/org/apache/xalan/internal/xsltc/util/IntegerArray.h>
#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <jcpp.h>

#undef END
#undef MIN_VALUE
#undef PRECEDINGSIBLING

using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $Translet = ::com::sun::org::apache::xalan::internal::xsltc::Translet;
using $MultipleNodeCounter$DefaultMultipleNodeCounter = ::com::sun::org::apache::xalan::internal::xsltc::dom::MultipleNodeCounter$DefaultMultipleNodeCounter;
using $NodeCounter = ::com::sun::org::apache::xalan::internal::xsltc::dom::NodeCounter;
using $IntegerArray = ::com::sun::org::apache::xalan::internal::xsltc::util::IntegerArray;
using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
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

$FieldInfo _MultipleNodeCounter_FieldInfo_[] = {
	{"_precSiblings", "Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PRIVATE, $field(MultipleNodeCounter, _precSiblings)},
	{}
};

$MethodInfo _MultipleNodeCounter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/Translet;Lcom/sun/org/apache/xalan/internal/xsltc/DOM;Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;)V", nullptr, $PUBLIC, $method(MultipleNodeCounter, init$, void, $Translet*, $DOM*, $DTMAxisIterator*)},
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/Translet;Lcom/sun/org/apache/xalan/internal/xsltc/DOM;Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;Z)V", nullptr, $PUBLIC, $method(MultipleNodeCounter, init$, void, $Translet*, $DOM*, $DTMAxisIterator*, bool)},
	{"getCounter", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MultipleNodeCounter, getCounter, $String*)},
	{"getDefaultNodeCounter", "(Lcom/sun/org/apache/xalan/internal/xsltc/Translet;Lcom/sun/org/apache/xalan/internal/xsltc/DOM;Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;)Lcom/sun/org/apache/xalan/internal/xsltc/dom/NodeCounter;", nullptr, $PUBLIC | $STATIC, $staticMethod(MultipleNodeCounter, getDefaultNodeCounter, $NodeCounter*, $Translet*, $DOM*, $DTMAxisIterator*)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xalan/internal/xsltc/dom/NodeCounter;", nullptr, $PUBLIC, $virtualMethod(MultipleNodeCounter, setStartNode, $NodeCounter*, int32_t)},
	{}
};

$InnerClassInfo _MultipleNodeCounter_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.dom.MultipleNodeCounter$DefaultMultipleNodeCounter", "com.sun.org.apache.xalan.internal.xsltc.dom.MultipleNodeCounter", "DefaultMultipleNodeCounter", $STATIC},
	{}
};

$ClassInfo _MultipleNodeCounter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.dom.MultipleNodeCounter",
	"com.sun.org.apache.xalan.internal.xsltc.dom.NodeCounter",
	nullptr,
	_MultipleNodeCounter_FieldInfo_,
	_MultipleNodeCounter_MethodInfo_,
	nullptr,
	nullptr,
	_MultipleNodeCounter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.dom.MultipleNodeCounter$DefaultMultipleNodeCounter"
};

$Object* allocate$MultipleNodeCounter($Class* clazz) {
	return $of($alloc(MultipleNodeCounter));
}

void MultipleNodeCounter::init$($Translet* translet, $DOM* document, $DTMAxisIterator* iterator) {
	$NodeCounter::init$(translet, document, iterator);
	$set(this, _precSiblings, nullptr);
}

void MultipleNodeCounter::init$($Translet* translet, $DOM* document, $DTMAxisIterator* iterator, bool hasFrom) {
	$NodeCounter::init$(translet, document, iterator, hasFrom);
	$set(this, _precSiblings, nullptr);
}

$NodeCounter* MultipleNodeCounter::setStartNode(int32_t node) {
	this->_node = node;
	this->_nodeType = $nc(this->_document)->getExpandedTypeID(node);
	$set(this, _precSiblings, $nc(this->_document)->getAxisIterator($Axis::PRECEDINGSIBLING));
	return this;
}

$String* MultipleNodeCounter::getCounter() {
	$useLocalCurrentObjectStackCache();
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
			return formatNumbers($cast(int32_t, this->_value));
		}
	}
	$var($IntegerArray, ancestors, $new($IntegerArray));
	int32_t next = this->_node;
	ancestors->add(next);
	while (true) {
		bool var$0 = (next = $nc(this->_document)->getParent(next)) > $NodeCounter::END;
		if (!(var$0 && !matchesFrom(next))) {
			break;
		}
		{
			ancestors->add(next);
		}
	}
	int32_t nAncestors = ancestors->cardinality();
	$var($ints, counters, $new($ints, nAncestors));
	for (int32_t i = 0; i < nAncestors; ++i) {
		counters->set(i, $Integer::MIN_VALUE);
	}
	{
		int32_t j = 0;
		int32_t i = nAncestors - 1;
		for (; i >= 0; --i, ++j) {
			int32_t counter = counters->get(j);
			int32_t ancestor = ancestors->at(i);
			if (matchesCount(ancestor)) {
				$nc(this->_precSiblings)->setStartNode(ancestor);
				while ((next = $nc(this->_precSiblings)->next()) != $NodeCounter::END) {
					if (matchesCount(next)) {
						counters->set(j, (counters->get(j) == $Integer::MIN_VALUE) ? 1 : counters->get(j) + 1);
					}
				}
				counters->set(j, counters->get(j) == $Integer::MIN_VALUE ? 1 : counters->get(j) + 1);
			}
		}
	}
	return formatNumbers(counters);
}

$NodeCounter* MultipleNodeCounter::getDefaultNodeCounter($Translet* translet, $DOM* document, $DTMAxisIterator* iterator) {
	$init(MultipleNodeCounter);
	return $new($MultipleNodeCounter$DefaultMultipleNodeCounter, translet, document, iterator);
}

MultipleNodeCounter::MultipleNodeCounter() {
}

$Class* MultipleNodeCounter::load$($String* name, bool initialize) {
	$loadClass(MultipleNodeCounter, name, initialize, &_MultipleNodeCounter_ClassInfo_, allocate$MultipleNodeCounter);
	return class$;
}

$Class* MultipleNodeCounter::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com