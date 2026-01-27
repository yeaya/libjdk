#ifndef _com_sun_org_apache_xerces_internal_jaxp_DocumentBuilderImpl_h_
#define _com_sun_org_apache_xerces_internal_jaxp_DocumentBuilderImpl_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.DocumentBuilderImpl
//$ extends javax.xml.parsers.DocumentBuilder
//$ implements com.sun.org.apache.xerces.internal.jaxp.JAXPConstants

#include <com/sun/org/apache/xerces/internal/jaxp/JAXPConstants.h>
#include <javax/xml/parsers/DocumentBuilder.h>

#pragma push_macro("ACCESS_EXTERNAL_DTD")
#undef ACCESS_EXTERNAL_DTD
#pragma push_macro("ACCESS_EXTERNAL_SCHEMA")
#undef ACCESS_EXTERNAL_SCHEMA
#pragma push_macro("CREATE_CDATA_NODES_FEATURE")
#undef CREATE_CDATA_NODES_FEATURE
#pragma push_macro("CREATE_ENTITY_REF_NODES_FEATURE")
#undef CREATE_ENTITY_REF_NODES_FEATURE
#pragma push_macro("INCLUDE_COMMENTS_FEATURE")
#undef INCLUDE_COMMENTS_FEATURE
#pragma push_macro("INCLUDE_IGNORABLE_WHITESPACE")
#undef INCLUDE_IGNORABLE_WHITESPACE
#pragma push_macro("NAMESPACES_FEATURE")
#undef NAMESPACES_FEATURE
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
							class DocumentBuilderFactoryImpl;
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
						namespace parsers {
							class DOMParser;
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
	namespace w3c {
		namespace dom {
			class DOMImplementation;
			class Document;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class EntityResolver;
			class ErrorHandler;
			class InputSource;
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

class DocumentBuilderImpl : public ::javax::xml::parsers::DocumentBuilder, public ::com::sun::org::apache::xerces::internal::jaxp::JAXPConstants {
	$class(DocumentBuilderImpl, 0, ::javax::xml::parsers::DocumentBuilder, ::com::sun::org::apache::xerces::internal::jaxp::JAXPConstants)
public:
	DocumentBuilderImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::xerces::internal::jaxp::DocumentBuilderFactoryImpl* dbf, ::java::util::Map* dbfAttrs, ::java::util::Map* features);
	void init$(::com::sun::org::apache::xerces::internal::jaxp::DocumentBuilderFactoryImpl* dbf, ::java::util::Map* dbfAttrs, ::java::util::Map* features, bool secureProcessing);
	virtual ::org::w3c::dom::DOMImplementation* getDOMImplementation() override;
	virtual ::com::sun::org::apache::xerces::internal::parsers::DOMParser* getDOMParser();
	virtual ::javax::xml::validation::Schema* getSchema() override;
	virtual bool isNamespaceAware() override;
	virtual bool isValidating() override;
	virtual bool isXIncludeAware() override;
	virtual ::org::w3c::dom::Document* newDocument() override;
	using ::javax::xml::parsers::DocumentBuilder::parse;
	virtual ::org::w3c::dom::Document* parse(::org::xml::sax::InputSource* is) override;
	virtual void reset() override;
	void resetSchemaValidator();
	void setDocumentBuilderFactoryAttributes(::java::util::Map* dbfAttrs);
	virtual void setEntityResolver(::org::xml::sax::EntityResolver* er) override;
	virtual void setErrorHandler(::org::xml::sax::ErrorHandler* eh) override;
	void setFeatures(::java::util::Map* features);
	virtual $String* toString() override;
	static $String* NAMESPACES_FEATURE;
	static $String* INCLUDE_IGNORABLE_WHITESPACE;
	static $String* CREATE_ENTITY_REF_NODES_FEATURE;
	static $String* INCLUDE_COMMENTS_FEATURE;
	static $String* CREATE_CDATA_NODES_FEATURE;
	static $String* XINCLUDE_FEATURE;
	static $String* XMLSCHEMA_VALIDATION_FEATURE;
	static $String* VALIDATION_FEATURE;
	static $String* SECURITY_MANAGER;
	static $String* XML_SECURITY_PROPERTY_MANAGER;
	static $String* ACCESS_EXTERNAL_DTD;
	static $String* ACCESS_EXTERNAL_SCHEMA;
	::com::sun::org::apache::xerces::internal::parsers::DOMParser* domParser = nullptr;
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

#pragma pop_macro("ACCESS_EXTERNAL_DTD")
#pragma pop_macro("ACCESS_EXTERNAL_SCHEMA")
#pragma pop_macro("CREATE_CDATA_NODES_FEATURE")
#pragma pop_macro("CREATE_ENTITY_REF_NODES_FEATURE")
#pragma pop_macro("INCLUDE_COMMENTS_FEATURE")
#pragma pop_macro("INCLUDE_IGNORABLE_WHITESPACE")
#pragma pop_macro("NAMESPACES_FEATURE")
#pragma pop_macro("SECURITY_MANAGER")
#pragma pop_macro("VALIDATION_FEATURE")
#pragma pop_macro("XINCLUDE_FEATURE")
#pragma pop_macro("XMLSCHEMA_VALIDATION_FEATURE")
#pragma pop_macro("XML_SECURITY_PROPERTY_MANAGER")

#endif // _com_sun_org_apache_xerces_internal_jaxp_DocumentBuilderImpl_h_