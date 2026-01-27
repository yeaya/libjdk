#ifndef _com_sun_org_apache_xerces_internal_impl_dv_DTDDVFactory_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_DTDDVFactory_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.DTDDVFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEFAULT_FACTORY_CLASS")
#undef DEFAULT_FACTORY_CLASS
#pragma push_macro("XML11_DATATYPE_VALIDATOR_FACTORY")
#undef XML11_DATATYPE_VALIDATOR_FACTORY

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

class DTDDVFactory : public ::java::lang::Object {
	$class(DTDDVFactory, 0, ::java::lang::Object)
public:
	DTDDVFactory();
	void init$();
	virtual ::com::sun::org::apache::xerces::internal::impl::dv::DatatypeValidator* getBuiltInDV($String* name) {return nullptr;}
	virtual ::java::util::Map* getBuiltInTypes() {return nullptr;}
	static ::com::sun::org::apache::xerces::internal::impl::dv::DTDDVFactory* getInstance();
	static ::com::sun::org::apache::xerces::internal::impl::dv::DTDDVFactory* getInstance($String* factoryClass);
	static $String* DEFAULT_FACTORY_CLASS;
	static $String* XML11_DATATYPE_VALIDATOR_FACTORY;
};

							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEFAULT_FACTORY_CLASS")
#pragma pop_macro("XML11_DATATYPE_VALIDATOR_FACTORY")

#endif // _com_sun_org_apache_xerces_internal_impl_dv_DTDDVFactory_h_