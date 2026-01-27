#ifndef _com_sun_org_apache_xerces_internal_impl_xs_ElementPSVImpl_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_ElementPSVImpl_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.ElementPSVImpl
//$ extends com.sun.org.apache.xerces.internal.xs.ElementPSVI

#include <com/sun/org/apache/xerces/internal/xs/ElementPSVI.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								class ValidatedInfo;
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
								class SchemaGrammar;
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
							class ItemPSVI;
							class ShortList;
							class StringList;
							class XSElementDeclaration;
							class XSModel;
							class XSNotationDeclaration;
							class XSSimpleTypeDefinition;
							class XSTypeDefinition;
							class XSValue;
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

class ElementPSVImpl : public ::com::sun::org::apache::xerces::internal::xs::ElementPSVI {
	$class(ElementPSVImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::ElementPSVI)
public:
	ElementPSVImpl();
	void init$();
	void init$(bool isConstant, ::com::sun::org::apache::xerces::internal::xs::ElementPSVI* elementPSVI);
	virtual ::com::sun::org::apache::xerces::internal::xs::ItemPSVI* constant() override;
	virtual void copySchemaInformationTo(::com::sun::org::apache::xerces::internal::impl::xs::ElementPSVImpl* target);
	virtual $Object* getActualNormalizedValue() override;
	virtual int16_t getActualNormalizedValueType() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSElementDeclaration* getElementDeclaration() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::StringList* getErrorCodes() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::StringList* getErrorMessages() override;
	virtual bool getIsSchemaSpecified() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::ShortList* getItemValueTypes() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition* getMemberTypeDefinition() override;
	virtual bool getNil() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNotationDeclaration* getNotation() override;
	virtual $String* getSchemaDefault() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSModel* getSchemaInformation() override;
	virtual $String* getSchemaNormalizedValue() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSValue* getSchemaValue() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* getTypeDefinition() override;
	virtual int16_t getValidationAttempted() override;
	virtual $String* getValidationContext() override;
	virtual int16_t getValidity() override;
	virtual bool isConstant() override;
	virtual void reset();
	::com::sun::org::apache::xerces::internal::xs::XSElementDeclaration* fDeclaration = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* fTypeDecl = nullptr;
	bool fNil = false;
	bool fSpecified = false;
	::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo* fValue = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSNotationDeclaration* fNotation = nullptr;
	int16_t fValidationAttempted = 0;
	int16_t fValidity = 0;
	$StringArray* fErrors = nullptr;
	$String* fValidationContext = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar>* fGrammars = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSModel* fSchemaInformation = nullptr;
	bool fIsConstant = false;
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_ElementPSVImpl_h_