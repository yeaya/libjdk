#ifndef _com_sun_org_apache_xerces_internal_impl_xs_SchemaGrammar$BuiltinAttrDecl_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_SchemaGrammar$BuiltinAttrDecl_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar$BuiltinAttrDecl
//$ extends com.sun.org.apache.xerces.internal.impl.xs.XSAttributeDecl

#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								class ValidatedInfo;
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
						namespace impl {
							namespace xs {
								class XSComplexTypeDecl;
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
						namespace xs {
							class XSAnnotation;
							class XSNamespaceItem;
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

class SchemaGrammar$BuiltinAttrDecl : public ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl {
	$class(SchemaGrammar$BuiltinAttrDecl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl)
public:
	SchemaGrammar$BuiltinAttrDecl();
	void init$($String* name, $String* tns, ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* type, int16_t scope);
	virtual ::com::sun::org::apache::xerces::internal::xs::XSAnnotation* getAnnotation() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem* getNamespaceItem() override;
	virtual void reset() override;
	using ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl::setValues;
	virtual void setValues($String* name, $String* targetNamespace, ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* simpleType, int16_t constraintType, int16_t scope, ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo* valInfo, ::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl* enclosingCT);
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_SchemaGrammar$BuiltinAttrDecl_h_