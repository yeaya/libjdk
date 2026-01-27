#include <com/sun/org/apache/xalan/internal/xsltc/dom/UnionIterator.h>

#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator$HeapNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/UnionIterator$LookAheadIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <jcpp.h>

using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $MultiValuedNodeHeapIterator = ::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator;
using $MultiValuedNodeHeapIterator$HeapNode = ::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator$HeapNode;
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

$FieldInfo _UnionIterator_FieldInfo_[] = {
	{"_dom", "Lcom/sun/org/apache/xalan/internal/xsltc/DOM;", nullptr, $PRIVATE | $FINAL, $field(UnionIterator, _dom)},
	{}
};

$MethodInfo _UnionIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/DOM;)V", nullptr, $PUBLIC, $method(UnionIterator, init$, void, $DOM*)},
	{"addIterator", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;)Lcom/sun/org/apache/xalan/internal/xsltc/dom/UnionIterator;", nullptr, $PUBLIC, $method(UnionIterator, addIterator, UnionIterator*, $DTMAxisIterator*)},
	{}
};

$InnerClassInfo _UnionIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.dom.UnionIterator$LookAheadIterator", "com.sun.org.apache.xalan.internal.xsltc.dom.UnionIterator", "LookAheadIterator", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _UnionIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.UnionIterator",
	"com.sun.org.apache.xalan.internal.xsltc.dom.MultiValuedNodeHeapIterator",
	nullptr,
	_UnionIterator_FieldInfo_,
	_UnionIterator_MethodInfo_,
	nullptr,
	nullptr,
	_UnionIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.dom.UnionIterator$LookAheadIterator"
};

$Object* allocate$UnionIterator($Class* clazz) {
	return $of($alloc(UnionIterator));
}

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
	$loadClass(UnionIterator, name, initialize, &_UnionIterator_ClassInfo_, allocate$UnionIterator);
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