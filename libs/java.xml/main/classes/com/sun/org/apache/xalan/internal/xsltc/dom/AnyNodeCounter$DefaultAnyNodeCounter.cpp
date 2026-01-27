#include <com/sun/org/apache/xalan/internal/xsltc/dom/AnyNodeCounter$DefaultAnyNodeCounter.h>

#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/Translet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/AnyNodeCounter.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/NodeCounter.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <jcpp.h>

#undef MIN_VALUE

using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $Translet = ::com::sun::org::apache::xalan::internal::xsltc::Translet;
using $AnyNodeCounter = ::com::sun::org::apache::xalan::internal::xsltc::dom::AnyNodeCounter;
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

$MethodInfo _AnyNodeCounter$DefaultAnyNodeCounter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/Translet;Lcom/sun/org/apache/xalan/internal/xsltc/DOM;Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;)V", nullptr, $PUBLIC, $method(AnyNodeCounter$DefaultAnyNodeCounter, init$, void, $Translet*, $DOM*, $DTMAxisIterator*)},
	{"getCounter", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AnyNodeCounter$DefaultAnyNodeCounter, getCounter, $String*)},
	{}
};

$InnerClassInfo _AnyNodeCounter$DefaultAnyNodeCounter_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.dom.AnyNodeCounter$DefaultAnyNodeCounter", "com.sun.org.apache.xalan.internal.xsltc.dom.AnyNodeCounter", "DefaultAnyNodeCounter", $STATIC},
	{}
};

$ClassInfo _AnyNodeCounter$DefaultAnyNodeCounter_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.AnyNodeCounter$DefaultAnyNodeCounter",
	"com.sun.org.apache.xalan.internal.xsltc.dom.AnyNodeCounter",
	nullptr,
	nullptr,
	_AnyNodeCounter$DefaultAnyNodeCounter_MethodInfo_,
	nullptr,
	nullptr,
	_AnyNodeCounter$DefaultAnyNodeCounter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.dom.AnyNodeCounter"
};

$Object* allocate$AnyNodeCounter$DefaultAnyNodeCounter($Class* clazz) {
	return $of($alloc(AnyNodeCounter$DefaultAnyNodeCounter));
}

void AnyNodeCounter$DefaultAnyNodeCounter::init$($Translet* translet, $DOM* document, $DTMAxisIterator* iterator) {
	$AnyNodeCounter::init$(translet, document, iterator);
}

$String* AnyNodeCounter$DefaultAnyNodeCounter::getCounter() {
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
		int32_t ntype = $nc(this->_document)->getExpandedTypeID(this->_node);
		int32_t root = $nc(this->_document)->getDocument();
		while (next >= 0) {
			if (ntype == $nc(this->_document)->getExpandedTypeID(next)) {
				++result;
			}
			if (next == root) {
				break;
			} else {
				--next;
			}
		}
	}
	return formatNumbers(result);
}

AnyNodeCounter$DefaultAnyNodeCounter::AnyNodeCounter$DefaultAnyNodeCounter() {
}

$Class* AnyNodeCounter$DefaultAnyNodeCounter::load$($String* name, bool initialize) {
	$loadClass(AnyNodeCounter$DefaultAnyNodeCounter, name, initialize, &_AnyNodeCounter$DefaultAnyNodeCounter_ClassInfo_, allocate$AnyNodeCounter$DefaultAnyNodeCounter);
	return class$;
}

$Class* AnyNodeCounter$DefaultAnyNodeCounter::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com