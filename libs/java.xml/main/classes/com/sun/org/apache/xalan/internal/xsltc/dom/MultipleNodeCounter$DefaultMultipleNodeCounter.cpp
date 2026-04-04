#include <com/sun/org/apache/xalan/internal/xsltc/dom/MultipleNodeCounter$DefaultMultipleNodeCounter.h>
#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/Translet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/MultipleNodeCounter.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <jcpp.h>

using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $Translet = ::com::sun::org::apache::xalan::internal::xsltc::Translet;
using $MultipleNodeCounter = ::com::sun::org::apache::xalan::internal::xsltc::dom::MultipleNodeCounter;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $ClassInfo = ::java::lang::ClassInfo;
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

void MultipleNodeCounter$DefaultMultipleNodeCounter::init$($Translet* translet, $DOM* document, $DTMAxisIterator* iterator) {
	$MultipleNodeCounter::init$(translet, document, iterator);
}

MultipleNodeCounter$DefaultMultipleNodeCounter::MultipleNodeCounter$DefaultMultipleNodeCounter() {
}

$Class* MultipleNodeCounter$DefaultMultipleNodeCounter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/Translet;Lcom/sun/org/apache/xalan/internal/xsltc/DOM;Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;)V", nullptr, $PUBLIC, $method(MultipleNodeCounter$DefaultMultipleNodeCounter, init$, void, $Translet*, $DOM*, $DTMAxisIterator*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xalan.internal.xsltc.dom.MultipleNodeCounter$DefaultMultipleNodeCounter", "com.sun.org.apache.xalan.internal.xsltc.dom.MultipleNodeCounter", "DefaultMultipleNodeCounter", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.dom.MultipleNodeCounter$DefaultMultipleNodeCounter",
		"com.sun.org.apache.xalan.internal.xsltc.dom.MultipleNodeCounter",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xalan.internal.xsltc.dom.MultipleNodeCounter"
	};
	$loadClass(MultipleNodeCounter$DefaultMultipleNodeCounter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultipleNodeCounter$DefaultMultipleNodeCounter);
	});
	return class$;
}

$Class* MultipleNodeCounter$DefaultMultipleNodeCounter::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com