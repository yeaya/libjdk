#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAbstractTraverser$FacetInfo.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/XSFacets.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAbstractTraverser.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

using $XSFacets = ::com::sun::org::apache::xerces::internal::impl::dv::XSFacets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::org::w3c::dom::Element;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace traversers {

$FieldInfo _XSDAbstractTraverser$FacetInfo_FieldInfo_[] = {
	{"facetdata", "Lcom/sun/org/apache/xerces/internal/impl/dv/XSFacets;", nullptr, $FINAL, $field(XSDAbstractTraverser$FacetInfo, facetdata)},
	{"nodeAfterFacets", "Lorg/w3c/dom/Element;", nullptr, $FINAL, $field(XSDAbstractTraverser$FacetInfo, nodeAfterFacets)},
	{"fPresentFacets", "S", nullptr, $FINAL, $field(XSDAbstractTraverser$FacetInfo, fPresentFacets)},
	{"fFixedFacets", "S", nullptr, $FINAL, $field(XSDAbstractTraverser$FacetInfo, fFixedFacets)},
	{}
};

$MethodInfo _XSDAbstractTraverser$FacetInfo_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/dv/XSFacets;Lorg/w3c/dom/Element;SS)V", nullptr, 0, $method(XSDAbstractTraverser$FacetInfo, init$, void, $XSFacets*, $Element*, int16_t, int16_t)},
	{}
};

$InnerClassInfo _XSDAbstractTraverser$FacetInfo_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractTraverser$FacetInfo", "com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractTraverser", "FacetInfo", $STATIC | $FINAL},
	{}
};

$ClassInfo _XSDAbstractTraverser$FacetInfo_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractTraverser$FacetInfo",
	"java.lang.Object",
	nullptr,
	_XSDAbstractTraverser$FacetInfo_FieldInfo_,
	_XSDAbstractTraverser$FacetInfo_MethodInfo_,
	nullptr,
	nullptr,
	_XSDAbstractTraverser$FacetInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractTraverser"
};

$Object* allocate$XSDAbstractTraverser$FacetInfo($Class* clazz) {
	return $of($alloc(XSDAbstractTraverser$FacetInfo));
}

void XSDAbstractTraverser$FacetInfo::init$($XSFacets* facets, $Element* nodeAfterFacets, int16_t presentFacets, int16_t fixedFacets) {
	$set(this, facetdata, facets);
	$set(this, nodeAfterFacets, nodeAfterFacets);
	this->fPresentFacets = presentFacets;
	this->fFixedFacets = fixedFacets;
}

XSDAbstractTraverser$FacetInfo::XSDAbstractTraverser$FacetInfo() {
}

$Class* XSDAbstractTraverser$FacetInfo::load$($String* name, bool initialize) {
	$loadClass(XSDAbstractTraverser$FacetInfo, name, initialize, &_XSDAbstractTraverser$FacetInfo_ClassInfo_, allocate$XSDAbstractTraverser$FacetInfo);
	return class$;
}

$Class* XSDAbstractTraverser$FacetInfo::class$ = nullptr;

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com