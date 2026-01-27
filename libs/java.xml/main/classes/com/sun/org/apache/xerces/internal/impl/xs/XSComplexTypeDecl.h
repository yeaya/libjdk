#ifndef _com_sun_org_apache_xerces_internal_impl_xs_XSComplexTypeDecl_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_XSComplexTypeDecl_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.XSComplexTypeDecl
//$ extends com.sun.org.apache.xerces.internal.xs.XSComplexTypeDefinition
//$ implements org.w3c.dom.TypeInfo

#include <com/sun/org/apache/xerces/internal/xs/XSComplexTypeDefinition.h>
#include <org/w3c/dom/TypeInfo.h>

#pragma push_macro("CT_HAS_TYPE_ID")
#undef CT_HAS_TYPE_ID
#pragma push_macro("CT_IS_ABSTRACT")
#undef CT_IS_ABSTRACT
#pragma push_macro("CT_IS_ANONYMOUS")
#undef CT_IS_ANONYMOUS
#pragma push_macro("DERIVATION_ANY")
#undef DERIVATION_ANY
#pragma push_macro("DERIVATION_EXTENSION")
#undef DERIVATION_EXTENSION
#pragma push_macro("DERIVATION_LIST")
#undef DERIVATION_LIST
#pragma push_macro("DERIVATION_RESTRICTION")
#undef DERIVATION_RESTRICTION
#pragma push_macro("DERIVATION_UNION")
#undef DERIVATION_UNION

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
						namespace impl {
							namespace xs {
								namespace models {
									class CMBuilder;
									class XSCMValidator;
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
								namespace util {
									class XSObjectListImpl;
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
						namespace xs {
							class XSAttributeUse;
							class XSNamespaceItem;
							class XSObjectList;
							class XSParticle;
							class XSSimpleTypeDefinition;
							class XSTypeDefinition;
							class XSWildcard;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
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

class XSComplexTypeDecl : public ::com::sun::org::apache::xerces::internal::xs::XSComplexTypeDefinition, public ::org::w3c::dom::TypeInfo {
	$class(XSComplexTypeDecl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::XSComplexTypeDefinition, ::org::w3c::dom::TypeInfo)
public:
	XSComplexTypeDecl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void appendTypeInfo(::java::lang::StringBuilder* str);
	virtual bool containsTypeID();
	virtual bool derivedFrom($String* ancestorNS, $String* ancestorName, int16_t derivationMethod) override;
	virtual bool derivedFromType(::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* ancestor, int16_t derivationMethod) override;
	virtual bool getAbstract() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getAnnotations() override;
	virtual bool getAnonymous() override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl* getAttrGrp();
	virtual ::com::sun::org::apache::xerces::internal::xs::XSAttributeUse* getAttributeUse($String* namespace$, $String* name);
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getAttributeUses() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSWildcard* getAttributeWildcard() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* getBaseType() override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMValidator* getContentModel(::com::sun::org::apache::xerces::internal::impl::xs::models::CMBuilder* cmBuilder);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMValidator* getContentModel(::com::sun::org::apache::xerces::internal::impl::xs::models::CMBuilder* cmBuilder, bool forUPA);
	virtual int16_t getContentType() override;
	virtual int16_t getDerivationMethod() override;
	virtual int16_t getFinal() override;
	virtual int16_t getFinalSet();
	virtual $String* getName() override;
	virtual $String* getNamespace() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem* getNamespaceItem() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSParticle* getParticle() override;
	virtual int16_t getProhibitedSubstitutions() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition* getSimpleType() override;
	virtual $String* getTargetNamespace();
	virtual int16_t getType() override;
	virtual int16_t getTypeCategory() override;
	virtual $String* getTypeName() override;
	virtual $String* getTypeNamespace() override;
	virtual bool isDOMDerivedFrom($String* ancestorNS, $String* ancestorName, int32_t derivationMethod);
	bool isDerivedByAny($String* ancestorNS, $String* ancestorName, int32_t derivationMethod, ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* type);
	bool isDerivedByExtension($String* ancestorNS, $String* ancestorName, int32_t derivationMethod, ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* type);
	bool isDerivedByRestriction($String* ancestorNS, $String* ancestorName, int32_t derivationMethod, ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* type);
	virtual bool isDerivedFrom($String* typeNamespaceArg, $String* typeNameArg, int32_t derivationMethod) override;
	virtual bool isFinal(int16_t derivation) override;
	virtual bool isProhibitedSubstitution(int16_t prohibited) override;
	virtual void reset();
	virtual void setContainsTypeID();
	virtual void setIsAbstractType();
	virtual void setIsAnonymous();
	virtual void setName($String* name);
	virtual void setNamespaceItem(::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem* namespaceItem);
	virtual void setValues($String* name, $String* targetNamespace, ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* baseType, int16_t derivedBy, int16_t schemaFinal, int16_t block, int16_t contentType, bool isAbstract, ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl* attrGrp, ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* simpleType, ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* particle, ::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl* annotations);
	virtual $String* toString() override;
	$String* fName = nullptr;
	$String* fTargetNamespace = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* fBaseType = nullptr;
	int16_t fDerivedBy = 0;
	int16_t fFinal = 0;
	int16_t fBlock = 0;
	int16_t fMiscFlags = 0;
	::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl* fAttrGrp = nullptr;
	int16_t fContentType = 0;
	::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* fXSSimpleType = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* fParticle = nullptr;
	$volatile(::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMValidator*) fCMValidator = nullptr;
	$volatile(::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMValidator*) fUPACMValidator = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl* fAnnotations = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem* fNamespaceItem = nullptr;
	static const int32_t DERIVATION_ANY = 0;
	static const int32_t DERIVATION_RESTRICTION = 1;
	static const int32_t DERIVATION_EXTENSION = 2;
	static const int32_t DERIVATION_UNION = 4;
	static const int32_t DERIVATION_LIST = 8;
	static const int16_t CT_IS_ABSTRACT = 1;
	static const int16_t CT_HAS_TYPE_ID = 2;
	static const int16_t CT_IS_ANONYMOUS = 4;
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("CT_HAS_TYPE_ID")
#pragma pop_macro("CT_IS_ABSTRACT")
#pragma pop_macro("CT_IS_ANONYMOUS")
#pragma pop_macro("DERIVATION_ANY")
#pragma pop_macro("DERIVATION_EXTENSION")
#pragma pop_macro("DERIVATION_LIST")
#pragma pop_macro("DERIVATION_RESTRICTION")
#pragma pop_macro("DERIVATION_UNION")

#endif // _com_sun_org_apache_xerces_internal_impl_xs_XSComplexTypeDecl_h_