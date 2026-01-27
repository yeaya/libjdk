#ifndef _com_sun_org_apache_xerces_internal_jaxp_SAXParserImpl_h_
#define _com_sun_org_apache_xerces_internal_jaxp_SAXParserImpl_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.SAXParserImpl
//$ extends javax.xml.parsers.SAXParser
//$ implements com.sun.org.apache.xerces.internal.jaxp.JAXPConstants,com.sun.org.apache.xerces.internal.xs.PSVIProvider

#include <com/sun/org/apache/xerces/internal/jaxp/JAXPConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/PSVIProvider.h>
#include <javax/xml/parsers/SAXParser.h>

#pragma push_macro("NAMESPACES_FEATURE")
#undef NAMESPACES_FEATURE
#pragma push_macro("NAMESPACE_PREFIXES_FEATURE")
#undef NAMESPACE_PREFIXES_FEATURE
#pragma push_macro("SECURITY_MANAGER")
#undef SECURITY_MANAGER
#pragma push_macro("VALIDATION_FEATURE")
#undef VALIDATION_FEATURE
#pragma push_macro("XINCLUDE_FEATURE")
#undef XINCLUDE_FEATURE
#pragma push_macro("XMLSCHEMA_VALIDATION_FEATURE")
#undef XMLSCHEMA_VALIDATION_FEATURE
#pragma push_macro("XML_SECURITY_PROPERTY_MANAGER")
#undef XML_SECURITY_PROPERTY_MANAGER

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
						namespace jaxp {
							class SAXParserFactoryImpl;
							class SAXParserImpl$JAXPSAXParser;
							class UnparsedEntityHandler;
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
						namespace utils {
							class XMLSecurityManager;
							class XMLSecurityPropertyManager;
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
								class XMLComponent;
								class XMLComponentManager;
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
		namespace validation {
			class Schema;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class EntityResolver;
			class ErrorHandler;
			class HandlerBase;
			class InputSource;
			class Parser;
			class XMLReader;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {
				class DefaultHandler;
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

class SAXParserImpl : public ::javax::xml::parsers::SAXParser, public ::com::sun::org::apache::xerces::internal::jaxp::JAXPConstants, public ::com::sun::org::apache::xerces::internal::xs::PSVIProvider {
	$class(SAXParserImpl, 0, ::javax::xml::parsers::SAXParser, ::com::sun::org::apache::xerces::internal::jaxp::JAXPConstants, ::com::sun::org::apache::xerces::internal::xs::PSVIProvider)
public:
	SAXParserImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::xerces::internal::jaxp::SAXParserFactoryImpl* spf, ::java::util::Map* features);
	void init$(::com::sun::org::apache::xerces::internal::jaxp::SAXParserFactoryImpl* spf, ::java::util::Map* features, bool secureProcessing);
	virtual ::com::sun::org::apache::xerces::internal::xs::AttributePSVI* getAttributePSVI(int32_t index) override;
	virtual ::com::sun::org::apache::xerces::internal::xs::AttributePSVI* getAttributePSVIByName($String* uri, $String* localname) override;
	virtual ::com::sun::org::apache::xerces::internal::xs::ElementPSVI* getElementPSVI() override;
	virtual ::org::xml::sax::Parser* getParser() override;
	virtual $Object* getProperty($String* name) override;
	virtual ::javax::xml::validation::Schema* getSchema() override;
	virtual ::org::xml::sax::XMLReader* getXMLReader() override;
	virtual bool isNamespaceAware() override;
	virtual bool isValidating() override;
	virtual bool isXIncludeAware() override;
	using ::javax::xml::parsers::SAXParser::parse;
	virtual void parse(::org::xml::sax::InputSource* is, ::org::xml::sax::helpers::DefaultHandler* dh) override;
	virtual void parse(::org::xml::sax::InputSource* is, ::org::xml::sax::HandlerBase* hb) override;
	virtual void reset() override;
	void setFeatures(::java::util::Map* features);
	virtual void setProperty($String* name, Object$* value) override;
	virtual $String* toString() override;
	static $String* NAMESPACES_FEATURE;
	static $String* NAMESPACE_PREFIXES_FEATURE;
	static $String* VALIDATION_FEATURE;
	static $String* XMLSCHEMA_VALIDATION_FEATURE;
	static $String* XINCLUDE_FEATURE;
	static $String* SECURITY_MANAGER;
	static $String* XML_SECURITY_PROPERTY_MANAGER;
	::com::sun::org::apache::xerces::internal::jaxp::SAXParserImpl$JAXPSAXParser* xmlReader = nullptr;
	$String* schemaLanguage = nullptr;
	::javax::xml::validation::Schema* grammar = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent* fSchemaValidator = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* fSchemaValidatorComponentManager = nullptr;
	::com::sun::org::apache::xerces::internal::impl::validation::ValidationManager* fSchemaValidationManager = nullptr;
	::com::sun::org::apache::xerces::internal::jaxp::UnparsedEntityHandler* fUnparsedEntityHandler = nullptr;
	::org::xml::sax::ErrorHandler* fInitErrorHandler = nullptr;
	::org::xml::sax::EntityResolver* fInitEntityResolver = nullptr;
	::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager* fSecurityManager = nullptr;
	::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager* fSecurityPropertyMgr = nullptr;
};

						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("NAMESPACES_FEATURE")
#pragma pop_macro("NAMESPACE_PREFIXES_FEATURE")
#pragma pop_macro("SECURITY_MANAGER")
#pragma pop_macro("VALIDATION_FEATURE")
#pragma pop_macro("XINCLUDE_FEATURE")
#pragma pop_macro("XMLSCHEMA_VALIDATION_FEATURE")
#pragma pop_macro("XML_SECURITY_PROPERTY_MANAGER")

#endif // _com_sun_org_apache_xerces_internal_jaxp_SAXParserImpl_h_