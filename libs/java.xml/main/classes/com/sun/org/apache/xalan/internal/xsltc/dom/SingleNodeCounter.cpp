#include <com/sun/org/apache/xalan/internal/xsltc/dom/SingleNodeCounter.h>

#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/Translet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/NodeCounter.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/SingleNodeCounter$DefaultSingleNodeCounter.h>
#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <jcpp.h>

#undef END
#undef MIN_VALUE
#undef PRECEDINGSIBLING

using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $Translet = ::com::sun::org::apache::xalan::internal::xsltc::Translet;
using $NodeCounter = ::com::sun::org::apache::xalan::internal::xsltc::dom::NodeCounter;
using $SingleNodeCounter$DefaultSingleNodeCounter = ::com::sun::org::apache::xalan::internal::xsltc::dom::SingleNodeCounter$DefaultSingleNodeCounter;
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

$FieldInfo _SingleNodeCounter_FieldInfo_[] = {
	{"EmptyArray", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SingleNodeCounter, EmptyArray)},
	{"_countSiblings", "Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, 0, $field(SingleNodeCounter, _countSiblings)},
	{}
};

$MethodInfo _SingleNodeCounter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/Translet;Lcom/sun/org/apache/xalan/internal/xsltc/DOM;Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;)V", nullptr, $PUBLIC, $method(SingleNodeCounter, init$, void, $Translet*, $DOM*, $DTMAxisIterator*)},
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/Translet;Lcom/sun/org/apache/xalan/internal/xsltc/DOM;Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;Z)V", nullptr, $PUBLIC, $method(SingleNodeCounter, init$, void, $Translet*, $DOM*, $DTMAxisIterator*, bool)},
	{"getCounter", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SingleNodeCounter, getCounter, $String*)},
	{"getDefaultNodeCounter", "(Lcom/sun/org/apache/xalan/internal/xsltc/Translet;Lcom/sun/org/apache/xalan/internal/xsltc/DOM;Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;)Lcom/sun/org/apache/xalan/internal/xsltc/dom/NodeCounter;", nullptr, $PUBLIC | $STATIC, $staticMethod(SingleNodeCounter, getDefaultNodeCounter, $NodeCounter*, $Translet*, $DOM*, $DTMAxisIterator*)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xalan/internal/xsltc/dom/NodeCounter;", nullptr, $PUBLIC, $virtualMethod(SingleNodeCounter, setStartNode, $NodeCounter*, int32_t)},
	{}
};

$InnerClassInfo _SingleNodeCounter_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.dom.SingleNodeCounter$DefaultSingleNodeCounter", "com.sun.org.apache.xalan.internal.xsltc.dom.SingleNodeCounter", "DefaultSingleNodeCounter", $STATIC},
	{}
};

$ClassInfo _SingleNodeCounter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.dom.SingleNodeCounter",
	"com.sun.org.apache.xalan.internal.xsltc.dom.NodeCounter",
	nullptr,
	_SingleNodeCounter_FieldInfo_,
	_SingleNodeCounter_MethodInfo_,
	nullptr,
	nullptr,
	_SingleNodeCounter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.dom.SingleNodeCounter$DefaultSingleNodeCounter"
};

$Object* allocate$SingleNodeCounter($Class* clazz) {
	return $of($alloc(SingleNodeCounter));
}

$ints* SingleNodeCounter::EmptyArray = nullptr;

void SingleNodeCounter::init$($Translet* translet, $DOM* document, $DTMAxisIterator* iterator) {
	$NodeCounter::init$(translet, document, iterator);
	$set(this, _countSiblings, nullptr);
}

void SingleNodeCounter::init$($Translet* translet, $DOM* document, $DTMAxisIterator* iterator, bool hasFrom) {
	$NodeCounter::init$(translet, document, iterator, hasFrom);
	$set(this, _countSiblings, nullptr);
}

$NodeCounter* SingleNodeCounter::setStartNode(int32_t node) {
	this->_node = node;
	this->_nodeType = $nc(this->_document)->getExpandedTypeID(node);
	$set(this, _countSiblings, $nc(this->_document)->getAxisIterator($Axis::PRECEDINGSIBLING));
	return this;
}

$String* SingleNodeCounter::getCounter() {
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
		int32_t next = this->_node;
		result = 0;
		bool matchesCount = this->matchesCount(next);
		if (!matchesCount) {
			while ((next = $nc(this->_document)->getParent(next)) > $NodeCounter::END) {
				if (this->matchesCount(next)) {
					break;
				}
				if (matchesFrom(next)) {
					next = $NodeCounter::END;
					break;
				}
			}
		}
		if (next != $NodeCounter::END) {
			int32_t from = next;
			if (!matchesCount && this->_hasFrom) {
				while ((from = $nc(this->_document)->getParent(from)) > $NodeCounter::END) {
					if (matchesFrom(from)) {
						break;
					}
				}
			}
			if (from != $NodeCounter::END) {
				$nc(this->_countSiblings)->setStartNode(next);
				do {
					if (this->matchesCount(next)) {
						++result;
					}
				} while ((next = $nc(this->_countSiblings)->next()) != $NodeCounter::END);
				return formatNumbers(result);
			}
		}
		return formatNumbers(SingleNodeCounter::EmptyArray);
	}
	return formatNumbers(result);
}

$NodeCounter* SingleNodeCounter::getDefaultNodeCounter($Translet* translet, $DOM* document, $DTMAxisIterator* iterator) {
	$init(SingleNodeCounter);
	return $new($SingleNodeCounter$DefaultSingleNodeCounter, translet, document, iterator);
}

void clinit$SingleNodeCounter($Class* class$) {
	$assignStatic(SingleNodeCounter::EmptyArray, $new($ints, 0));
}

SingleNodeCounter::SingleNodeCounter() {
}

$Class* SingleNodeCounter::load$($String* name, bool initialize) {
	$loadClass(SingleNodeCounter, name, initialize, &_SingleNodeCounter_ClassInfo_, clinit$SingleNodeCounter, allocate$SingleNodeCounter);
	return class$;
}

$Class* SingleNodeCounter::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com