#ifndef _com_sun_org_apache_xerces_internal_impl_dv_xs_FullDVFactory_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_xs_FullDVFactory_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.xs.FullDVFactory
//$ extends com.sun.org.apache.xerces.internal.impl.dv.xs.BaseDVFactory

#include <com/sun/org/apache/xerces/internal/impl/dv/xs/BaseDVFactory.h>

#pragma push_macro("URI_SCHEMAFORSCHEMA")
#undef URI_SCHEMAFORSCHEMA

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

class FullDVFactory : public ::com::sun::org::apache::xerces::internal::impl::dv::xs::BaseDVFactory {
	$class(FullDVFactory, 0, ::com::sun::org::apache::xerces::internal::impl::dv::xs::BaseDVFactory)
public:
	FullDVFactory();
	void init$();
	static void createBuiltInTypes(::com::sun::org::apache::xerces::internal::util::SymbolHash* types);
	virtual ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* getBuiltInType($String* name) override;
	virtual ::com::sun::org::apache::xerces::internal::util::SymbolHash* getBuiltInTypes() override;
	static $String* URI_SCHEMAFORSCHEMA;
	static ::com::sun::org::apache::xerces::internal::util::SymbolHash* fFullTypes;
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

#pragma pop_macro("URI_SCHEMAFORSCHEMA")

#endif // _com_sun_org_apache_xerces_internal_impl_dv_xs_FullDVFactory_h_