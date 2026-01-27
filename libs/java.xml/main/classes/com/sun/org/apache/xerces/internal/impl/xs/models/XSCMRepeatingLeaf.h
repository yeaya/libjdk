#ifndef _com_sun_org_apache_xerces_internal_impl_xs_models_XSCMRepeatingLeaf_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_models_XSCMRepeatingLeaf_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.models.XSCMRepeatingLeaf
//$ extends com.sun.org.apache.xerces.internal.impl.xs.models.XSCMLeaf

#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSCMLeaf.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace models {

class XSCMRepeatingLeaf : public ::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMLeaf {
	$class(XSCMRepeatingLeaf, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMLeaf)
public:
	XSCMRepeatingLeaf();
	void init$(int32_t type, Object$* leaf, int32_t minOccurs, int32_t maxOccurs, int32_t id, int32_t position);
	int32_t getMaxOccurs();
	int32_t getMinOccurs();
	int32_t fMinOccurs = 0;
	int32_t fMaxOccurs = 0;
};

								} // models
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_models_XSCMRepeatingLeaf_h_