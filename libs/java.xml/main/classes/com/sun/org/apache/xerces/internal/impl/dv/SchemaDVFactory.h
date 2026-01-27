#ifndef _com_sun_org_apache_xerces_internal_impl_dv_SchemaDVFactory_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_SchemaDVFactory_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.SchemaDVFactory
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_FACTORY_CLASS")
#undef DEFAULT_FACTORY_CLASS

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
						namespace xs {
							class XSObjectList;
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

class SchemaDVFactory : public ::java::lang::Object {
	$class(SchemaDVFactory, 0, ::java::lang::Object)
public:
	SchemaDVFactory();
	void init$();
	virtual ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* createTypeList($String* name, $String* targetNamespace, int16_t finalSet, ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* itemType, ::com::sun::org::apache::xerces::internal::xs::XSObjectList* annotations) {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* createTypeRestriction($String* name, $String* targetNamespace, int16_t finalSet, ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* base, ::com::sun::org::apache::xerces::internal::xs::XSObjectList* annotations) {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* createTypeUnion($String* name, $String* targetNamespace, int16_t finalSet, $Array<::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType>* memberTypes, ::com::sun::org::apache::xerces::internal::xs::XSObjectList* annotations) {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* getBuiltInType($String* name) {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::util::SymbolHash* getBuiltInTypes() {return nullptr;}
	static ::com::sun::org::apache::xerces::internal::impl::dv::SchemaDVFactory* getInstance();
	static ::com::sun::org::apache::xerces::internal::impl::dv::SchemaDVFactory* getInstance($String* factoryClass);
	static $String* DEFAULT_FACTORY_CLASS;
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

#endif // _com_sun_org_apache_xerces_internal_impl_dv_SchemaDVFactory_h_