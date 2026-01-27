#ifndef _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDAbstractTraverser$FacetInfo_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDAbstractTraverser$FacetInfo_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractTraverser$FacetInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								class XSFacets;
							}
						}
					}
				}
			}
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Element;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace traversers {

class XSDAbstractTraverser$FacetInfo : public ::java::lang::Object {
	$class(XSDAbstractTraverser$FacetInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XSDAbstractTraverser$FacetInfo();
	void init$(::com::sun::org::apache::xerces::internal::impl::dv::XSFacets* facets, ::org::w3c::dom::Element* nodeAfterFacets, int16_t presentFacets, int16_t fixedFacets);
	::com::sun::org::apache::xerces::internal::impl::dv::XSFacets* facetdata = nullptr;
	::org::w3c::dom::Element* nodeAfterFacets = nullptr;
	int16_t fPresentFacets = 0;
	int16_t fFixedFacets = 0;
};

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDAbstractTraverser$FacetInfo_h_