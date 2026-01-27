#ifndef _com_sun_org_apache_xerces_internal_impl_dv_xs_AnyURIDV_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_xs_AnyURIDV_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.xs.AnyURIDV
//$ extends com.sun.org.apache.xerces.internal.impl.dv.xs.TypeValidator

#include <com/sun/org/apache/xerces/internal/impl/dv/xs/TypeValidator.h>
#include <java/lang/Array.h>

#pragma push_macro("BASE_URI")
#undef BASE_URI

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								class ValidationContext;
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
						namespace util {
							class URI;
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
							namespace dv {
								namespace xs {

class AnyURIDV : public ::com::sun::org::apache::xerces::internal::impl::dv::xs::TypeValidator {
	$class(AnyURIDV, 0, ::com::sun::org::apache::xerces::internal::impl::dv::xs::TypeValidator)
public:
	AnyURIDV();
	void init$();
	static $String* encode($String* anyURI);
	virtual $Object* getActualValue($String* content, ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext* context) override;
	virtual int16_t getAllowedFacets() override;
	static ::com::sun::org::apache::xerces::internal::util::URI* BASE_URI;
	static $booleans* gNeedEscaping;
	static $chars* gAfterEscaping1;
	static $chars* gAfterEscaping2;
	static $chars* gHexChs;
};

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("BASE_URI")

#endif // _com_sun_org_apache_xerces_internal_impl_dv_xs_AnyURIDV_h_