#ifndef _com_sun_org_apache_xerces_internal_impl_dv_xs_ExtendedSchemaDVFactoryImpl_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_xs_ExtendedSchemaDVFactoryImpl_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.xs.ExtendedSchemaDVFactoryImpl
//$ extends com.sun.org.apache.xerces.internal.impl.dv.xs.BaseSchemaDVFactory

#include <com/sun/org/apache/xerces/internal/impl/dv/xs/BaseSchemaDVFactory.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								class XSSimpleType;
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
							class SymbolHash;
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

class ExtendedSchemaDVFactoryImpl : public ::com::sun::org::apache::xerces::internal::impl::dv::xs::BaseSchemaDVFactory {
	$class(ExtendedSchemaDVFactoryImpl, 0, ::com::sun::org::apache::xerces::internal::impl::dv::xs::BaseSchemaDVFactory)
public:
	ExtendedSchemaDVFactoryImpl();
	void init$();
	static void createBuiltInTypes();
	virtual ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* getBuiltInType($String* name) override;
	virtual ::com::sun::org::apache::xerces::internal::util::SymbolHash* getBuiltInTypes() override;
	static ::com::sun::org::apache::xerces::internal::util::SymbolHash* fBuiltInTypes;
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

#endif // _com_sun_org_apache_xerces_internal_impl_dv_xs_ExtendedSchemaDVFactoryImpl_h_