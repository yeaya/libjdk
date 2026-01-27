#ifndef _com_sun_org_apache_xerces_internal_jaxp_validation_ValidatorHandlerImpl$XMLSchemaTypeInfoProvider_h_
#define _com_sun_org_apache_xerces_internal_jaxp_validation_ValidatorHandlerImpl$XMLSchemaTypeInfoProvider_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.validation.ValidatorHandlerImpl$XMLSchemaTypeInfoProvider
//$ extends javax.xml.validation.TypeInfoProvider

#include <javax/xml/validation/TypeInfoProvider.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {
								class ValidatorHandlerImpl;
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
						namespace xni {
							class Augmentations;
							class XMLAttributes;
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
							class AttributePSVI;
							class ElementPSVI;
							class ItemPSVI;
						}
					}
				}
			}
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class TypeInfo;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

class ValidatorHandlerImpl$XMLSchemaTypeInfoProvider : public ::javax::xml::validation::TypeInfoProvider {
	$class(ValidatorHandlerImpl$XMLSchemaTypeInfoProvider, $NO_CLASS_INIT, ::javax::xml::validation::TypeInfoProvider)
public:
	ValidatorHandlerImpl$XMLSchemaTypeInfoProvider();
	void init$(::com::sun::org::apache::xerces::internal::jaxp::validation::ValidatorHandlerImpl* this$0);
	virtual void beginEndElement(::com::sun::org::apache::xerces::internal::xni::Augmentations* elementAugs);
	virtual void beginStartElement(::com::sun::org::apache::xerces::internal::xni::Augmentations* elementAugs, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes);
	void checkState(bool forElementInfo);
	virtual void finishEndElement();
	virtual void finishStartElement();
	virtual ::com::sun::org::apache::xerces::internal::xs::AttributePSVI* getAttributePSVI(int32_t index);
	virtual ::com::sun::org::apache::xerces::internal::xs::AttributePSVI* getAttributePSVIByName($String* uri, $String* localname);
	::org::w3c::dom::TypeInfo* getAttributeType(int32_t index);
	virtual ::org::w3c::dom::TypeInfo* getAttributeTypeInfo(int32_t index) override;
	virtual ::org::w3c::dom::TypeInfo* getAttributeTypeInfo($String* attributeUri, $String* attributeLocalName);
	virtual ::org::w3c::dom::TypeInfo* getAttributeTypeInfo($String* attributeQName);
	virtual ::com::sun::org::apache::xerces::internal::xs::ElementPSVI* getElementPSVI();
	virtual ::org::w3c::dom::TypeInfo* getElementTypeInfo() override;
	::org::w3c::dom::TypeInfo* getTypeInfoFromPSVI(::com::sun::org::apache::xerces::internal::xs::ItemPSVI* psvi);
	virtual bool isIdAttribute(int32_t index) override;
	virtual bool isSpecified(int32_t index) override;
	::com::sun::org::apache::xerces::internal::jaxp::validation::ValidatorHandlerImpl* this$0 = nullptr;
	::com::sun::org::apache::xerces::internal::xni::Augmentations* fElementAugs = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLAttributes* fAttributes = nullptr;
	bool fInStartElement = false;
	bool fInEndElement = false;
};

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_jaxp_validation_ValidatorHandlerImpl$XMLSchemaTypeInfoProvider_h_