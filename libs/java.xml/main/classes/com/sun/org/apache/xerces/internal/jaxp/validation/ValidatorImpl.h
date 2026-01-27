#ifndef _com_sun_org_apache_xerces_internal_jaxp_validation_ValidatorImpl_h_
#define _com_sun_org_apache_xerces_internal_jaxp_validation_ValidatorImpl_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.validation.ValidatorImpl
//$ extends javax.xml.validation.Validator
//$ implements com.sun.org.apache.xerces.internal.xs.PSVIProvider

#include <com/sun/org/apache/xerces/internal/xs/PSVIProvider.h>
#include <javax/xml/validation/Validator.h>

#pragma push_macro("CURRENT_ELEMENT_NODE")
#undef CURRENT_ELEMENT_NODE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {
								class DOMValidatorHelper;
								class StAXValidatorHelper;
								class StreamValidatorHelper;
								class ValidatorHandlerImpl;
								class XMLSchemaValidatorComponentManager;
								class XSGrammarPoolContainer;
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
							class AttributePSVI;
							class ElementPSVI;
						}
					}
				}
			}
		}
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			class Result;
			class Source;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {
				class LSResourceResolver;
			}
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class ErrorHandler;
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

class ValidatorImpl : public ::javax::xml::validation::Validator, public ::com::sun::org::apache::xerces::internal::xs::PSVIProvider {
	$class(ValidatorImpl, 0, ::javax::xml::validation::Validator, ::com::sun::org::apache::xerces::internal::xs::PSVIProvider)
public:
	ValidatorImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::xerces::internal::jaxp::validation::XSGrammarPoolContainer* grammarContainer);
	virtual ::com::sun::org::apache::xerces::internal::xs::AttributePSVI* getAttributePSVI(int32_t index) override;
	virtual ::com::sun::org::apache::xerces::internal::xs::AttributePSVI* getAttributePSVIByName($String* uri, $String* localname) override;
	virtual ::com::sun::org::apache::xerces::internal::xs::ElementPSVI* getElementPSVI() override;
	virtual ::org::xml::sax::ErrorHandler* getErrorHandler() override;
	virtual bool getFeature($String* name) override;
	virtual $Object* getProperty($String* name) override;
	virtual ::org::w3c::dom::ls::LSResourceResolver* getResourceResolver() override;
	virtual void reset() override;
	virtual void setErrorHandler(::org::xml::sax::ErrorHandler* errorHandler) override;
	virtual void setFeature($String* name, bool value) override;
	virtual void setProperty($String* name, Object$* object) override;
	virtual void setResourceResolver(::org::w3c::dom::ls::LSResourceResolver* resourceResolver) override;
	using ::javax::xml::validation::Validator::validate;
	virtual $String* toString() override;
	virtual void validate(::javax::xml::transform::Source* source, ::javax::xml::transform::Result* result) override;
	::com::sun::org::apache::xerces::internal::jaxp::validation::XMLSchemaValidatorComponentManager* fComponentManager = nullptr;
	::com::sun::org::apache::xerces::internal::jaxp::validation::ValidatorHandlerImpl* fSAXValidatorHelper = nullptr;
	::com::sun::org::apache::xerces::internal::jaxp::validation::DOMValidatorHelper* fDOMValidatorHelper = nullptr;
	::com::sun::org::apache::xerces::internal::jaxp::validation::StreamValidatorHelper* fStreamValidatorHelper = nullptr;
	::com::sun::org::apache::xerces::internal::jaxp::validation::StAXValidatorHelper* fStaxValidatorHelper = nullptr;
	bool fConfigurationChanged = false;
	bool fErrorHandlerChanged = false;
	bool fResourceResolverChanged = false;
	static $String* CURRENT_ELEMENT_NODE;
};

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("CURRENT_ELEMENT_NODE")

#endif // _com_sun_org_apache_xerces_internal_jaxp_validation_ValidatorImpl_h_