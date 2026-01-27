#ifndef _com_sun_org_apache_xerces_internal_dom_DOMConfigurationImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_DOMConfigurationImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.DOMConfigurationImpl
//$ extends com.sun.org.apache.xerces.internal.util.ParserConfigurationSettings
//$ implements com.sun.org.apache.xerces.internal.xni.parser.XMLParserConfiguration,org.w3c.dom.DOMConfiguration

#include <com/sun/org/apache/xerces/internal/util/ParserConfigurationSettings.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration.h>
#include <org/w3c/dom/DOMConfiguration.h>

#pragma push_macro("BALANCE_SYNTAX_TREES")
#undef BALANCE_SYNTAX_TREES
#pragma push_macro("CDATA")
#undef CDATA
#pragma push_macro("COMMENTS")
#undef COMMENTS
#pragma push_macro("DISALLOW_DOCTYPE_DECL_FEATURE")
#undef DISALLOW_DOCTYPE_DECL_FEATURE
#pragma push_macro("DTD_VALIDATOR_FACTORY_PROPERTY")
#undef DTD_VALIDATOR_FACTORY_PROPERTY
#pragma push_macro("DTD_VALIDATOR_PROPERTY")
#undef DTD_VALIDATOR_PROPERTY
#pragma push_macro("DTNORMALIZATION")
#undef DTNORMALIZATION
#pragma push_macro("DYNAMIC_VALIDATION")
#undef DYNAMIC_VALIDATION
#pragma push_macro("ENTITIES")
#undef ENTITIES
#pragma push_macro("ENTITY_MANAGER")
#undef ENTITY_MANAGER
#pragma push_macro("ENTITY_RESOLVER")
#undef ENTITY_RESOLVER
#pragma push_macro("ERROR_HANDLER")
#undef ERROR_HANDLER
#pragma push_macro("ERROR_REPORTER")
#undef ERROR_REPORTER
#pragma push_macro("GENERATE_SYNTHETIC_ANNOTATIONS")
#undef GENERATE_SYNTHETIC_ANNOTATIONS
#pragma push_macro("GRAMMAR_POOL")
#undef GRAMMAR_POOL
#pragma push_macro("HONOUR_ALL_SCHEMALOCATIONS")
#undef HONOUR_ALL_SCHEMALOCATIONS
#pragma push_macro("INFOSET_FALSE_PARAMS")
#undef INFOSET_FALSE_PARAMS
#pragma push_macro("INFOSET_MASK")
#undef INFOSET_MASK
#pragma push_macro("INFOSET_TRUE_PARAMS")
#undef INFOSET_TRUE_PARAMS
#pragma push_macro("JAXP_SCHEMA_LANGUAGE")
#undef JAXP_SCHEMA_LANGUAGE
#pragma push_macro("JAXP_SCHEMA_SOURCE")
#undef JAXP_SCHEMA_SOURCE
#pragma push_macro("NAMESPACES")
#undef NAMESPACES
#pragma push_macro("NAMESPACE_GROWTH")
#undef NAMESPACE_GROWTH
#pragma push_macro("NORMALIZE_DATA")
#undef NORMALIZE_DATA
#pragma push_macro("NSDECL")
#undef NSDECL
#pragma push_macro("PSVI")
#undef PSVI
#pragma push_macro("SCHEMA")
#undef SCHEMA
#pragma push_macro("SCHEMA_DV_FACTORY")
#undef SCHEMA_DV_FACTORY
#pragma push_macro("SCHEMA_ELEMENT_DEFAULT")
#undef SCHEMA_ELEMENT_DEFAULT
#pragma push_macro("SCHEMA_FULL_CHECKING")
#undef SCHEMA_FULL_CHECKING
#pragma push_macro("SCHEMA_LOCATION")
#undef SCHEMA_LOCATION
#pragma push_macro("SCHEMA_NONS_LOCATION")
#undef SCHEMA_NONS_LOCATION
#pragma push_macro("SECURITY_MANAGER")
#undef SECURITY_MANAGER
#pragma push_macro("SEND_PSVI")
#undef SEND_PSVI
#pragma push_macro("SPLITCDATA")
#undef SPLITCDATA
#pragma push_macro("SYMBOL_TABLE")
#undef SYMBOL_TABLE
#pragma push_macro("TOLERATE_DUPLICATES")
#undef TOLERATE_DUPLICATES
#pragma push_macro("USE_GRAMMAR_POOL_ONLY")
#undef USE_GRAMMAR_POOL_ONLY
#pragma push_macro("VALIDATE")
#undef VALIDATE
#pragma push_macro("VALIDATE_ANNOTATIONS")
#undef VALIDATE_ANNOTATIONS
#pragma push_macro("VALIDATION_MANAGER")
#undef VALIDATION_MANAGER
#pragma push_macro("WARN_ON_DUPLICATE_ATTDEF")
#undef WARN_ON_DUPLICATE_ATTDEF
#pragma push_macro("WELLFORMED")
#undef WELLFORMED
#pragma push_macro("XERCES_NAMESPACES")
#undef XERCES_NAMESPACES
#pragma push_macro("XERCES_VALIDATION")
#undef XERCES_VALIDATION
#pragma push_macro("XML11_DATATYPE_VALIDATOR_FACTORY")
#undef XML11_DATATYPE_VALIDATOR_FACTORY
#pragma push_macro("XML_SECURITY_PROPERTY_MANAGER")
#undef XML_SECURITY_PROPERTY_MANAGER
#pragma push_macro("XML_STRING")
#undef XML_STRING

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
							namespace dv {
								class DTDDVFactory;
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
						namespace util {
							class DOMErrorHandlerWrapper;
							class PropertyState;
							class SymbolTable;
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
							class XMLDTDContentModelHandler;
							class XMLDTDHandler;
							class XMLDocumentHandler;
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
								class XMLEntityResolver;
								class XMLErrorHandler;
								class XMLInputSource;
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
		class List;
		class Locale;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class DOMException;
			class DOMStringList;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

class DOMConfigurationImpl : public ::com::sun::org::apache::xerces::internal::util::ParserConfigurationSettings, public ::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration, public ::org::w3c::dom::DOMConfiguration {
	$class(DOMConfigurationImpl, 0, ::com::sun::org::apache::xerces::internal::util::ParserConfigurationSettings, ::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration, ::org::w3c::dom::DOMConfiguration)
public:
	DOMConfigurationImpl();
	virtual void addRecognizedFeatures($StringArray* featureIds) override;
	virtual void addRecognizedProperties($StringArray* propertyIds) override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual bool getFeature($String* featureId, bool defaultValue) override;
	virtual ::com::sun::org::apache::xerces::internal::util::FeatureState* getFeatureState($String* featureId) override;
	virtual $Object* getProperty($String* propertyId) override;
	virtual $Object* getProperty($String* propertyId, Object$* defaultValue) override;
	virtual ::com::sun::org::apache::xerces::internal::util::PropertyState* getPropertyState($String* propertyId) override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* parentSettings);
	virtual void addComponent(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent* component);
	virtual bool canSetParameter($String* name, Object$* value) override;
	virtual ::com::sun::org::apache::xerces::internal::util::PropertyState* checkProperty($String* propertyId) override;
	virtual ::com::sun::org::apache::xerces::internal::impl::validation::ValidationManager* createValidationManager();
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler* getDTDContentModelHandler() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler* getDTDHandler() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* getDocumentHandler() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver* getEntityResolver() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler* getErrorHandler() override;
	virtual bool getFeature($String* featureId) override;
	virtual ::java::util::Locale* getLocale() override;
	virtual $Object* getParameter($String* name) override;
	virtual ::org::w3c::dom::DOMStringList* getParameterNames() override;
	static ::org::w3c::dom::DOMException* newFeatureNotFoundError($String* name);
	static ::org::w3c::dom::DOMException* newFeatureNotSupportedError($String* name);
	static ::org::w3c::dom::DOMException* newTypeMismatchError($String* name);
	virtual void parse(::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* inputSource) override;
	virtual void reset();
	virtual void setDTDContentModelHandler(::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler* handler) override;
	virtual void setDTDHandler(::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler* dtdHandler) override;
	void setDTDValidatorFactory($String* version);
	virtual void setDocumentHandler(::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* documentHandler) override;
	virtual void setEntityResolver(::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver* resolver) override;
	virtual void setErrorHandler(::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler* errorHandler) override;
	virtual void setFeature($String* featureId, bool state) override;
	virtual void setLocale(::java::util::Locale* locale) override;
	virtual void setParameter($String* name, Object$* value) override;
	virtual void setProperty($String* propertyId, Object$* value) override;
	virtual $String* toString() override;
	static $String* XML11_DATATYPE_VALIDATOR_FACTORY;
	static $String* XERCES_VALIDATION;
	static $String* XERCES_NAMESPACES;
	static $String* SCHEMA;
	static $String* SCHEMA_FULL_CHECKING;
	static $String* DYNAMIC_VALIDATION;
	static $String* NORMALIZE_DATA;
	static $String* SCHEMA_ELEMENT_DEFAULT;
	static $String* SEND_PSVI;
	static $String* GENERATE_SYNTHETIC_ANNOTATIONS;
	static $String* VALIDATE_ANNOTATIONS;
	static $String* HONOUR_ALL_SCHEMALOCATIONS;
	static $String* USE_GRAMMAR_POOL_ONLY;
	static $String* DISALLOW_DOCTYPE_DECL_FEATURE;
	static $String* BALANCE_SYNTAX_TREES;
	static $String* WARN_ON_DUPLICATE_ATTDEF;
	static $String* NAMESPACE_GROWTH;
	static $String* TOLERATE_DUPLICATES;
	static $String* ENTITY_MANAGER;
	static $String* ERROR_REPORTER;
	static $String* XML_STRING;
	static $String* SYMBOL_TABLE;
	static $String* GRAMMAR_POOL;
	static $String* ERROR_HANDLER;
	static $String* ENTITY_RESOLVER;
	static $String* JAXP_SCHEMA_LANGUAGE;
	static $String* JAXP_SCHEMA_SOURCE;
	static $String* DTD_VALIDATOR_PROPERTY;
	static $String* DTD_VALIDATOR_FACTORY_PROPERTY;
	static $String* VALIDATION_MANAGER;
	static $String* SCHEMA_LOCATION;
	static $String* SCHEMA_NONS_LOCATION;
	static $String* SCHEMA_DV_FACTORY;
	static $String* SECURITY_MANAGER;
	static $String* XML_SECURITY_PROPERTY_MANAGER;
	::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* fDocumentHandler = nullptr;
	int16_t features = 0;
	static const int16_t NAMESPACES = 1; // 1 << 0
	static const int16_t DTNORMALIZATION = 2; // 1 << 1
	static const int16_t ENTITIES = 4; // 1 << 2
	static const int16_t CDATA = 8; // 1 << 3
	static const int16_t SPLITCDATA = 16; // 1 << 4
	static const int16_t COMMENTS = 32; // 1 << 5
	static const int16_t VALIDATE = 64; // 1 << 6
	static const int16_t PSVI = 128; // 1 << 7
	static const int16_t WELLFORMED = 256; // 1 << 8
	static const int16_t NSDECL = 512; // 1 << 9
	static const int16_t INFOSET_TRUE_PARAMS = 801; // NAMESPACES | COMMENTS | WELLFORMED | NSDECL
	static const int16_t INFOSET_FALSE_PARAMS = 14; // ENTITIES | DTNORMALIZATION | CDATA
	static const int16_t INFOSET_MASK = 815; // INFOSET_TRUE_PARAMS | INFOSET_FALSE_PARAMS
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	::java::util::List* fComponents = nullptr;
	::com::sun::org::apache::xerces::internal::impl::validation::ValidationManager* fValidationManager = nullptr;
	::java::util::Locale* fLocale = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* fErrorReporter = nullptr;
	::com::sun::org::apache::xerces::internal::util::DOMErrorHandlerWrapper* fErrorHandlerWrapper = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dv::DTDDVFactory* fCurrentDVFactory = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dv::DTDDVFactory* fDatatypeValidatorFactory = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dv::DTDDVFactory* fXML11DatatypeFactory = nullptr;
	$String* fSchemaLocation = nullptr;
	::org::w3c::dom::DOMStringList* fRecognizedParameters = nullptr;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("BALANCE_SYNTAX_TREES")
#pragma pop_macro("CDATA")
#pragma pop_macro("COMMENTS")
#pragma pop_macro("DISALLOW_DOCTYPE_DECL_FEATURE")
#pragma pop_macro("DTD_VALIDATOR_FACTORY_PROPERTY")
#pragma pop_macro("DTD_VALIDATOR_PROPERTY")
#pragma pop_macro("DTNORMALIZATION")
#pragma pop_macro("DYNAMIC_VALIDATION")
#pragma pop_macro("ENTITIES")
#pragma pop_macro("ENTITY_MANAGER")
#pragma pop_macro("ENTITY_RESOLVER")
#pragma pop_macro("ERROR_HANDLER")
#pragma pop_macro("ERROR_REPORTER")
#pragma pop_macro("GENERATE_SYNTHETIC_ANNOTATIONS")
#pragma pop_macro("GRAMMAR_POOL")
#pragma pop_macro("HONOUR_ALL_SCHEMALOCATIONS")
#pragma pop_macro("INFOSET_FALSE_PARAMS")
#pragma pop_macro("INFOSET_MASK")
#pragma pop_macro("INFOSET_TRUE_PARAMS")
#pragma pop_macro("JAXP_SCHEMA_LANGUAGE")
#pragma pop_macro("JAXP_SCHEMA_SOURCE")
#pragma pop_macro("NAMESPACES")
#pragma pop_macro("NAMESPACE_GROWTH")
#pragma pop_macro("NORMALIZE_DATA")
#pragma pop_macro("NSDECL")
#pragma pop_macro("PSVI")
#pragma pop_macro("SCHEMA")
#pragma pop_macro("SCHEMA_DV_FACTORY")
#pragma pop_macro("SCHEMA_ELEMENT_DEFAULT")
#pragma pop_macro("SCHEMA_FULL_CHECKING")
#pragma pop_macro("SCHEMA_LOCATION")
#pragma pop_macro("SCHEMA_NONS_LOCATION")
#pragma pop_macro("SECURITY_MANAGER")
#pragma pop_macro("SEND_PSVI")
#pragma pop_macro("SPLITCDATA")
#pragma pop_macro("SYMBOL_TABLE")
#pragma pop_macro("TOLERATE_DUPLICATES")
#pragma pop_macro("USE_GRAMMAR_POOL_ONLY")
#pragma pop_macro("VALIDATE")
#pragma pop_macro("VALIDATE_ANNOTATIONS")
#pragma pop_macro("VALIDATION_MANAGER")
#pragma pop_macro("WARN_ON_DUPLICATE_ATTDEF")
#pragma pop_macro("WELLFORMED")
#pragma pop_macro("XERCES_NAMESPACES")
#pragma pop_macro("XERCES_VALIDATION")
#pragma pop_macro("XML11_DATATYPE_VALIDATOR_FACTORY")
#pragma pop_macro("XML_SECURITY_PROPERTY_MANAGER")
#pragma pop_macro("XML_STRING")

#endif // _com_sun_org_apache_xerces_internal_dom_DOMConfigurationImpl_h_