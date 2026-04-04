#include <com/sun/org/apache/xalan/internal/xsltc/dom/UnionIterator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/UnionIterator$LookAheadIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <jcpp.h>

using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $MultiValuedNodeHeapIterator = ::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator;
using $UnionIterator$LookAheadIterator = ::com::sun::org::apache::xalan::internal::xsltc::dom::UnionIterator$LookAheadIterator;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
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

void UnionIterator::init$($DOM* dom) {
	$MultiValuedNodeHeapIterator::init$();
	$set(this, _dom, dom);
}

UnionIterator* UnionIterator::addIterator($DTMAxisIterator* iterator) {
	addHeapNode($$new($UnionIterator$LookAheadIterator, this, iterator));
	return this;
}

UnionIterator::UnionIterator() {
}

$Class* UnionIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"_dom", "Lcom/sun/org/apache/xalan/internal/xsltc/DOM;", nullptr, $PRIVATE | $FINAL, $field(UnionIterator, _dom)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/DOM;)V", nullptr, $PUBLIC, $method(UnionIterator, init$, void, $DOM*)},
		{"addIterator", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;)Lcom/sun/org/apache/xalan/internal/xsltc/dom/UnionIterator;", nullptr, $PUBLIC, $method(UnionIterator, addIterator, UnionIterator*, $DTMAxisIterator*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xalan.internal.xsltc.dom.UnionIterator$LookAheadIterator", "com.sun.org.apache.xalan.internal.xsltc.dom.UnionIterator", "LookAheadIterator", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.dom.UnionIterator",
		"com.sun.org.apache.xalan.internal.xsltc.dom.MultiValuedNodeHeapIterator",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.org.apache.xalan.internal.xsltc.dom.UnionIterator$LookAheadIterator"
	};
	$loadClass(UnionIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnionIterator);
	});
	return class$;
}

$Class* UnionIterator::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com