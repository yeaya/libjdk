#ifndef _com_sun_org_apache_xerces_internal_jaxp_validation_ValidatorHandlerImpl_h_
#define _com_sun_org_apache_xerces_internal_jaxp_validation_ValidatorHandlerImpl_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.validation.ValidatorHandlerImpl
//$ extends javax.xml.validation.ValidatorHandler
//$ implements org.xml.sax.DTDHandler,com.sun.org.apache.xerces.internal.impl.validation.EntityState,com.sun.org.apache.xerces.internal.xs.PSVIProvider,com.sun.org.apache.xerces.internal.jaxp.validation.ValidatorHelper,com.sun.org.apache.xerces.internal.xni.XMLDocumentHandler

#include <com/sun/org/apache/xerces/internal/impl/validation/EntityState.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/ValidatorHelper.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/xs/PSVIProvider.h>
#include <java/lang/Array.h>
#include <javax/xml/validation/ValidatorHandler.h>
#include <org/xml/sax/DTDHandler.h>

#pragma push_macro("ERROR_REPORTER")
#undef ERROR_REPORTER
#pragma push_macro("NAMESPACE_CONTEXT")
#undef NAMESPACE_CONTEXT
#pragma push_macro("NAMESPACE_PREFIXES")
#undef NAMESPACE_PREFIXES
#pragma push_macro("SCHEMA_VALIDATOR")
#undef SCHEMA_VALIDATOR
#pragma push_macro("SECURITY_MANAGER")
#undef SECURITY_MANAGER
#pragma push_macro("STRING_INTERNING")
#undef STRING_INTERNING
#pragma push_macro("SYMBOL_TABLE")
#undef SYMBOL_TABLE
#pragma push_macro("VALIDATION_MANAGER")
#undef VALIDATION_MANAGER
#pragma push_macro("XML_SECURITY_PROPERTY_MANAGER")
#undef XML_SECURITY_PROPERTY_MANAGER

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							class XMLErrorReporter;
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
							namespace validation {
								class ValidationManager;
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
								class XMLSchemaValidator;
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
						namespace jaxp {
							namespace validation {
								class ValidatorHandlerImpl$ResolutionForwarder;
								class ValidatorHandlerImpl$XMLSchemaTypeInfoProvider;
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
						namespace util {
							class AttributesProxy;
							class SAXLocatorWrapper;
							class SymbolTable;
							class XMLAttributesImpl;
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
							class NamespaceContext;
							class QName;
							class XMLAttributes;
							class XMLLocator;
							class XMLResourceIdentifier;
							class XMLString;
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
							namespace parser {
								class XMLDocumentSource;
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
namespace java {
	namespace util {
		class Map;
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
namespace javax {
	namespace xml {
		namespace validation {
			class TypeInfoProvider;
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
			class Attributes;
			class ContentHandler;
			class ErrorHandler;
			class Locator;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			namespace ext {
				class Attributes2;
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
						namespace jaxp {
							namespace validation {

class ValidatorHandlerImpl : public ::javax::xml::validation::ValidatorHandler, public ::org::xml::sax::DTDHandler, public ::com::sun::org::apache::xerces::internal::impl::validation::EntityState, public ::com::sun::org::apache::xerces::internal::xs::PSVIProvider, public ::com::sun::org::apache::xerces::internal::jaxp::validation::ValidatorHelper, public ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler {
	$class(ValidatorHandlerImpl, 0, ::javax::xml::validation::ValidatorHandler, ::org::xml::sax::DTDHandler, ::com::sun::org::apache::xerces::internal::impl::validation::EntityState, ::com::sun::org::apache::xerces::internal::xs::PSVIProvider, ::com::sun::org::apache::xerces::internal::jaxp::validation::ValidatorHelper, ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler)
public:
	ValidatorHandlerImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::xerces::internal::jaxp::validation::XSGrammarPoolContainer* grammarContainer);
	void init$(::com::sun::org::apache::xerces::internal::jaxp::validation::XMLSchemaValidatorComponentManager* componentManager);
	virtual void characters(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void characters($chars* ch, int32_t start, int32_t length) override;
	virtual void comment(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void doctypeDecl($String* rootElement, $String* publicId, $String* systemId, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void emptyElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endCDATA(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endDocument(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endDocument() override;
	virtual void endElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endElement($String* uri, $String* localName, $String* qName) override;
	virtual void endGeneralEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endPrefixMapping($String* prefix) override;
	void fillQName(::com::sun::org::apache::xerces::internal::xni::QName* toFill, $String* uri, $String* localpart, $String* raw);
	void fillXMLAttribute(::org::xml::sax::Attributes* att, int32_t index);
	void fillXMLAttributes(::org::xml::sax::Attributes* att);
	void fillXMLAttributes2(::org::xml::sax::ext::Attributes2* att);
	virtual ::com::sun::org::apache::xerces::internal::xs::AttributePSVI* getAttributePSVI(int32_t index) override;
	virtual ::com::sun::org::apache::xerces::internal::xs::AttributePSVI* getAttributePSVIByName($String* uri, $String* localname) override;
	virtual ::org::xml::sax::ContentHandler* getContentHandler() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource* getDocumentSource() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::ElementPSVI* getElementPSVI() override;
	virtual ::org::xml::sax::ErrorHandler* getErrorHandler() override;
	virtual bool getFeature($String* name) override;
	virtual $Object* getProperty($String* name) override;
	virtual ::org::w3c::dom::ls::LSResourceResolver* getResourceResolver() override;
	virtual ::javax::xml::validation::TypeInfoProvider* getTypeInfoProvider() override;
	virtual void ignorableWhitespace(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void ignorableWhitespace($chars* ch, int32_t start, int32_t length) override;
	virtual bool isEntityDeclared($String* name) override;
	virtual bool isEntityUnparsed($String* name) override;
	virtual void notationDecl($String* name, $String* publicId, $String* systemId) override;
	virtual void processingInstruction($String* target, ::com::sun::org::apache::xerces::internal::xni::XMLString* data, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void processingInstruction($String* target, $String* data) override;
	virtual void setContentHandler(::org::xml::sax::ContentHandler* receiver) override;
	virtual void setDocumentLocator(::org::xml::sax::Locator* locator) override;
	virtual void setDocumentSource(::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource* source) override;
	virtual void setErrorHandler(::org::xml::sax::ErrorHandler* errorHandler) override;
	virtual void setFeature($String* name, bool value) override;
	virtual void setProperty($String* name, Object$* object) override;
	virtual void setResourceResolver(::org::w3c::dom::ls::LSResourceResolver* resourceResolver) override;
	virtual void skippedEntity($String* name) override;
	virtual void startCDATA(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startDocument(::com::sun::org::apache::xerces::internal::xni::XMLLocator* locator, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::NamespaceContext* namespaceContext, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startDocument() override;
	virtual void startElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startElement($String* uri, $String* localName, $String* qName, ::org::xml::sax::Attributes* atts) override;
	virtual void startGeneralEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startPrefixMapping($String* prefix, $String* uri) override;
	virtual void textDecl($String* version, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual $String* toString() override;
	virtual void unparsedEntityDecl($String* name, $String* publicId, $String* systemId, $String* notationName) override;
	virtual void validate(::javax::xml::transform::Source* source, ::javax::xml::transform::Result* result) override;
	virtual void xmlDecl($String* version, $String* encoding, $String* standalone, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	static $String* NAMESPACE_PREFIXES;
	static $String* STRING_INTERNING;
	static $String* ERROR_REPORTER;
	static $String* NAMESPACE_CONTEXT;
	static $String* SCHEMA_VALIDATOR;
	static $String* SECURITY_MANAGER;
	static $String* SYMBOL_TABLE;
	static $String* VALIDATION_MANAGER;
	static $String* XML_SECURITY_PROPERTY_MANAGER;
	::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* fErrorReporter = nullptr;
	::com::sun::org::apache::xerces::internal::xni::NamespaceContext* fNamespaceContext = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator* fSchemaValidator = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	::com::sun::org::apache::xerces::internal::impl::validation::ValidationManager* fValidationManager = nullptr;
	::com::sun::org::apache::xerces::internal::jaxp::validation::XMLSchemaValidatorComponentManager* fComponentManager = nullptr;
	::com::sun::org::apache::xerces::internal::util::SAXLocatorWrapper* fSAXLocatorWrapper = nullptr;
	bool fNeedPushNSContext = false;
	::java::util::Map* fUnparsedEntities = nullptr;
	bool fStringsInternalized = false;
	::com::sun::org::apache::xerces::internal::xni::QName* fElementQName = nullptr;
	::com::sun::org::apache::xerces::internal::xni::QName* fAttributeQName = nullptr;
	::com::sun::org::apache::xerces::internal::util::XMLAttributesImpl* fAttributes = nullptr;
	::com::sun::org::apache::xerces::internal::util::AttributesProxy* fAttrAdapter = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLString* fTempString = nullptr;
	::org::xml::sax::ContentHandler* fContentHandler = nullptr;
	::com::sun::org::apache::xerces::internal::jaxp::validation::ValidatorHandlerImpl$XMLSchemaTypeInfoProvider* fTypeInfoProvider = nullptr;
	::com::sun::org::apache::xerces::internal::jaxp::validation::ValidatorHandlerImpl$ResolutionForwarder* fResolutionForwarder = nullptr;
};

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ERROR_REPORTER")
#pragma pop_macro("NAMESPACE_CONTEXT")
#pragma pop_macro("NAMESPACE_PREFIXES")
#pragma pop_macro("SCHEMA_VALIDATOR")
#pragma pop_macro("SECURITY_MANAGER")
#pragma pop_macro("STRING_INTERNING")
#pragma pop_macro("SYMBOL_TABLE")
#pragma pop_macro("VALIDATION_MANAGER")
#pragma pop_macro("XML_SECURITY_PROPERTY_MANAGER")

#endif // _com_sun_org_apache_xerces_internal_jaxp_validation_ValidatorHandlerImpl_h_