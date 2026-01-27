#ifndef _com_sun_org_apache_xerces_internal_impl_xs_AttributePSVImpl_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_AttributePSVImpl_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.AttributePSVImpl
//$ extends com.sun.org.apache.xerces.internal.xs.AttributePSVI

#include <com/sun/org/apache/xerces/internal/xs/AttributePSVI.h>
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
						namespace xs {
							class ItemPSVI;
							class ShortList;
							class StringList;
							class XSAttributeDeclaration;
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

class AttributePSVImpl : public ::com::sun::org::apache::xerces::internal::xs::AttributePSVI {
	$class(AttributePSVImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::AttributePSVI)
public:
	AttributePSVImpl();
	void init$();
	void init$(bool isConstant, ::com::sun::org::apache::xerces::internal::xs::AttributePSVI* attrPSVI);
	virtual ::com::sun::org::apache::xerces::internal::xs::ItemPSVI* constant() override;
	virtual $Object* getActualNormalizedValue() override;
	virtual int16_t getActualNormalizedValueType() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSAttributeDeclaration* getAttributeDeclaration() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::StringList* getErrorCodes() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::StringList* getErrorMessages() override;
	virtual bool getIsSchemaSpecified() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::ShortList* getItemValueTypes() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition* getMemberTypeDefinition() override;
	virtual $String* getSchemaDefault() override;
	virtual $String* getSchemaNormalizedValue() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSValue* getSchemaValue() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* getTypeDefinition() override;
	virtual int16_t getValidationAttempted() override;
	virtual $String* getValidationContext() override;
	virtual int16_t getValidity() override;
	virtual bool isConstant() override;
	virtual void reset();
	::com::sun::org::apache::xerces::internal::xs::XSAttributeDeclaration* fDeclaration = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* fTypeDecl = nullptr;
	bool fSpecified = false;
	::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo* fValue = nullptr;
	int16_t fValidationAttempted = 0;
	int16_t fValidity = 0;
	$StringArray* fErrors = nullptr;
	$String* fValidationContext = nullptr;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xs_AttributePSVImpl_h_