#ifndef _com_sun_org_apache_xerces_internal_impl_xs_SchemaGrammar$XSAnyType_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_SchemaGrammar$XSAnyType_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar$XSAnyType
//$ extends com.sun.org.apache.xerces.internal.impl.xs.XSComplexTypeDecl

#include <com/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl.h>

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
						namespace impl {
							namespace xs {
								class XSAttributeGroupDecl;
								class XSParticleDecl;
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
							class XSNamespaceItem;
							class XSObjectList;
							class XSTypeDefinition;
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

class SchemaGrammar$XSAnyType : public ::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl {
	$class(SchemaGrammar$XSAnyType, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl)
public:
	SchemaGrammar$XSAnyType();
	void init$();
	::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl* createAttrGrp();
	::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* createParticle();
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getAnnotations() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem* getNamespaceItem() override;
	virtual void reset() override;
	virtual void setContainsTypeID() override;
	virtual void setIsAbstractType() override;
	virtual void setIsAnonymous() override;
	virtual void setName($String* name) override;
	using ::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl::setValues;
	virtual void setValues($String* name, $String* targetNamespace, ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* baseType, int16_t derivedBy, int16_t schemaFinal, int16_t block, int16_t contentType, bool isAbstract, ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl* attrGrp, ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* simpleType, ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* particle);
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_SchemaGrammar$XSAnyType_h_