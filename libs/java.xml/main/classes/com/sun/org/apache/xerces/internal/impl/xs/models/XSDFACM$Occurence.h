#ifndef _com_sun_org_apache_xerces_internal_impl_xs_models_XSDFACM$Occurence_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_models_XSDFACM$Occurence_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.models.XSDFACM$Occurence
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace models {
									class XSCMRepeatingLeaf;
								}
							}
						}
					}
				}
			}
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
								namespace models {

class XSDFACM$Occurence : public ::java::lang::Object {
	$class(XSDFACM$Occurence, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XSDFACM$Occurence();
	void init$(::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMRepeatingLeaf* leaf, int32_t elemIndex);
	virtual $String* toString() override;
	int32_t minOccurs = 0;
	int32_t maxOccurs = 0;
	int32_t elemIndex = 0;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xs_models_XSDFACM$Occurence_h_