#ifndef _com_sun_org_apache_xerces_internal_impl_dv_dtd_DTDDVFactoryImpl_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_dtd_DTDDVFactoryImpl_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.dtd.DTDDVFactoryImpl
//$ extends com.sun.org.apache.xerces.internal.impl.dv.DTDDVFactory

#include <com/sun/org/apache/xerces/internal/impl/dv/DTDDVFactory.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								class DatatypeValidator;
							}
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
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
								namespace dtd {

class DTDDVFactoryImpl : public ::com::sun::org::apache::xerces::internal::impl::dv::DTDDVFactory {
	$class(DTDDVFactoryImpl, 0, ::com::sun::org::apache::xerces::internal::impl::dv::DTDDVFactory)
public:
	DTDDVFactoryImpl();
	void init$();
	virtual ::com::sun::org::apache::xerces::internal::impl::dv::DatatypeValidator* getBuiltInDV($String* name) override;
	virtual ::java::util::Map* getBuiltInTypes() override;
	static ::java::util::Map* fBuiltInTypes;
};

								} // dtd
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_dv_dtd_DTDDVFactoryImpl_h_