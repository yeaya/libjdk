#ifndef _com_sun_org_apache_xerces_internal_impl_dv_dtd_XML11DTDDVFactoryImpl_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_dtd_XML11DTDDVFactoryImpl_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.dtd.XML11DTDDVFactoryImpl
//$ extends com.sun.org.apache.xerces.internal.impl.dv.dtd.DTDDVFactoryImpl

#include <com/sun/org/apache/xerces/internal/impl/dv/dtd/DTDDVFactoryImpl.h>

#pragma push_macro("XML11BUILTINTYPES")
#undef XML11BUILTINTYPES

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

class XML11DTDDVFactoryImpl : public ::com::sun::org::apache::xerces::internal::impl::dv::dtd::DTDDVFactoryImpl {
	$class(XML11DTDDVFactoryImpl, 0, ::com::sun::org::apache::xerces::internal::impl::dv::dtd::DTDDVFactoryImpl)
public:
	XML11DTDDVFactoryImpl();
	void init$();
	virtual ::com::sun::org::apache::xerces::internal::impl::dv::DatatypeValidator* getBuiltInDV($String* name) override;
	virtual ::java::util::Map* getBuiltInTypes() override;
	static ::java::util::Map* XML11BUILTINTYPES;
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

#pragma pop_macro("XML11BUILTINTYPES")

#endif // _com_sun_org_apache_xerces_internal_impl_dv_dtd_XML11DTDDVFactoryImpl_h_