#include <com/sun/org/apache/xalan/internal/xsltc/dom/AnyNodeCounter.h>

#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/Translet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/AnyNodeCounter$DefaultAnyNodeCounter.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/NodeCounter.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <jcpp.h>

#undef MIN_VALUE

using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $Translet = ::com::sun::org::apache::xalan::internal::xsltc::Translet;
using $AnyNodeCounter$DefaultAnyNodeCounter = ::com::sun::org::apache::xalan::internal::xsltc::dom::AnyNodeCounter$DefaultAnyNodeCounter;
using $NodeCounter = ::com::sun::org::apache::xalan::internal::xsltc::dom::NodeCounter;
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

$MethodInfo _AnyNodeCounter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/Translet;Lcom/sun/org/apache/xalan/internal/xsltc/DOM;Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;)V", nullptr, $PUBLIC, $method(AnyNodeCounter, init$, void, $Translet*, $DOM*, $DTMAxisIterator*)},
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/Translet;Lcom/sun/org/apache/xalan/internal/xsltc/DOM;Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;Z)V", nullptr, $PUBLIC, $method(AnyNodeCounter, init$, void, $Translet*, $DOM*, $DTMAxisIterator*, bool)},
	{"getCounter", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AnyNodeCounter, getCounter, $String*)},
	{"getDefaultNodeCounter", "(Lcom/sun/org/apache/xalan/internal/xsltc/Translet;Lcom/sun/org/apache/xalan/internal/xsltc/DOM;Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;)Lcom/sun/org/apache/xalan/internal/xsltc/dom/NodeCounter;", nullptr, $PUBLIC | $STATIC, $staticMethod(AnyNodeCounter, getDefaultNodeCounter, $NodeCounter*, $Translet*, $DOM*, $DTMAxisIterator*)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xalan/internal/xsltc/dom/NodeCounter;", nullptr, $PUBLIC, $virtualMethod(AnyNodeCounter, setStartNode, $NodeCounter*, int32_t)},
	{}
};

$InnerClassInfo _AnyNodeCounter_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.dom.AnyNodeCounter$DefaultAnyNodeCounter", "com.sun.org.apache.xalan.internal.xsltc.dom.AnyNodeCounter", "DefaultAnyNodeCounter", $STATIC},
	{}
};

$ClassInfo _AnyNodeCounter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.dom.AnyNodeCounter",
	"com.sun.org.apache.xalan.internal.xsltc.dom.NodeCounter",
	nullptr,
	nullptr,
	_AnyNodeCounter_MethodInfo_,
	nullptr,
	nullptr,
	_AnyNodeCounter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.dom.AnyNodeCounter$DefaultAnyNodeCounter"
};

$Object* allocate$AnyNodeCounter($Class* clazz) {
	return $of($alloc(AnyNodeCounter));
}

void AnyNodeCounter::init$($Translet* translet, $DOM* document, $DTMAxisIterator* iterator) {
	$NodeCounter::init$(translet, document, iterator);
}

void AnyNodeCounter::init$($Translet* translet, $DOM* document, $DTMAxisIterator* iterator, bool hasFrom) {
	$NodeCounter::init$(translet, document, iterator, hasFrom);
}

$NodeCounter* AnyNodeCounter::setStartNode(int32_t node) {
	this->_node = node;
	this->_nodeType = $nc(this->_document)->getExpandedTypeID(node);
	return this;
}

$String* AnyNodeCounter::getCounter() {
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
			return formatNumbers($cast(int32_t, this->_value));
		}
	} else {
		int32_t next = this->_node;
		int32_t root = $nc(this->_document)->getDocument();
		result = 0;
		while (next >= root && !matchesFrom(next)) {
			if (matchesCount(next)) {
				++result;
			}
			--next;
		}
	}
	return formatNumbers(result);
}

$NodeCounter* AnyNodeCounter::getDefaultNodeCounter($Translet* translet, $DOM* document, $DTMAxisIterator* iterator) {
	$init(AnyNodeCounter);
	return $new($AnyNodeCounter$DefaultAnyNodeCounter, translet, document, iterator);
}

AnyNodeCounter::AnyNodeCounter() {
}

$Class* AnyNodeCounter::load$($String* name, bool initialize) {
	$loadClass(AnyNodeCounter, name, initialize, &_AnyNodeCounter_ClassInfo_, allocate$AnyNodeCounter);
	return class$;
}

$Class* AnyNodeCounter::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com