#ifndef _com_sun_org_apache_xerces_internal_parsers_XML11Configuration_h_
#define _com_sun_org_apache_xerces_internal_parsers_XML11Configuration_h_
//$ class com.sun.org.apache.xerces.internal.parsers.XML11Configuration
//$ extends com.sun.org.apache.xerces.internal.util.ParserConfigurationSettings
//$ implements com.sun.org.apache.xerces.internal.xni.parser.XMLPullParserConfiguration,com.sun.org.apache.xerces.internal.parsers.XML11Configurable

#include <com/sun/org/apache/xerces/internal/parsers/XML11Configurable.h>
#include <com/sun/org/apache/xerces/internal/util/ParserConfigurationSettings.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLPullParserConfiguration.h>

#pragma push_macro("ALLOW_JAVA_ENCODINGS")
#undef ALLOW_JAVA_ENCODINGS
#pragma push_macro("CONTINUE_AFTER_FATAL_ERROR")
#undef CONTINUE_AFTER_FATAL_ERROR
#pragma push_macro("DATATYPE_VALIDATOR_FACTORY")
#undef DATATYPE_VALIDATOR_FACTORY
#pragma push_macro("DOCUMENT_SCANNER")
#undef DOCUMENT_SCANNER
#pragma push_macro("DTD_PROCESSOR")
#undef DTD_PROCESSOR
#pragma push_macro("DTD_SCANNER")
#undef DTD_SCANNER
#pragma push_macro("DTD_VALIDATOR")
#undef DTD_VALIDATOR
#pragma push_macro("ENTITY_MANAGER")
#undef ENTITY_MANAGER
#pragma push_macro("ENTITY_RESOLVER")
#undef ENTITY_RESOLVER
#pragma push_macro("ERROR_HANDLER")
#undef ERROR_HANDLER
#pragma push_macro("ERROR_REPORTER")
#undef ERROR_REPORTER
#pragma push_macro("EXTERNAL_GENERAL_ENTITIES")
#undef EXTERNAL_GENERAL_ENTITIES
#pragma push_macro("EXTERNAL_PARAMETER_ENTITIES")
#undef EXTERNAL_PARAMETER_ENTITIES
#pragma push_macro("GENERATE_SYNTHETIC_ANNOTATIONS")
#undef GENERATE_SYNTHETIC_ANNOTATIONS
#pragma push_macro("HONOUR_ALL_SCHEMALOCATIONS")
#undef HONOUR_ALL_SCHEMALOCATIONS
#pragma push_macro("IDENTITY_CONSTRAINT_CHECKING")
#undef IDENTITY_CONSTRAINT_CHECKING
#pragma push_macro("ID_IDREF_CHECKING")
#undef ID_IDREF_CHECKING
#pragma push_macro("IGNORE_XSI_TYPE")
#undef IGNORE_XSI_TYPE
#pragma push_macro("JAXP_SCHEMA_LANGUAGE")
#undef JAXP_SCHEMA_LANGUAGE
#pragma push_macro("JAXP_SCHEMA_SOURCE")
#undef JAXP_SCHEMA_SOURCE
#pragma push_macro("LOAD_EXTERNAL_DTD")
#undef LOAD_EXTERNAL_DTD
#pragma push_macro("LOCALE")
#undef LOCALE
#pragma push_macro("NAMESPACES")
#undef NAMESPACES
#pragma push_macro("NAMESPACE_BINDER")
#undef NAMESPACE_BINDER
#pragma push_macro("NAMESPACE_GROWTH")
#undef NAMESPACE_GROWTH
#pragma push_macro("NORMALIZE_DATA")
#undef NORMALIZE_DATA
#pragma push_macro("NOTIFY_BUILTIN_REFS")
#undef NOTIFY_BUILTIN_REFS
#pragma push_macro("NOTIFY_CHAR_REFS")
#undef NOTIFY_CHAR_REFS
#pragma push_macro("PRINT_EXCEPTION_STACK_TRACE")
#undef PRINT_EXCEPTION_STACK_TRACE
#pragma push_macro("ROOT_ELEMENT_DECL")
#undef ROOT_ELEMENT_DECL
#pragma push_macro("ROOT_TYPE_DEF")
#undef ROOT_TYPE_DEF
#pragma push_macro("SCHEMA_AUGMENT_PSVI")
#undef SCHEMA_AUGMENT_PSVI
#pragma push_macro("SCHEMA_DV_FACTORY")
#undef SCHEMA_DV_FACTORY
#pragma push_macro("SCHEMA_ELEMENT_DEFAULT")
#undef SCHEMA_ELEMENT_DEFAULT
#pragma push_macro("SCHEMA_LOCATION")
#undef SCHEMA_LOCATION
#pragma push_macro("SCHEMA_NONS_LOCATION")
#undef SCHEMA_NONS_LOCATION
#pragma push_macro("SCHEMA_VALIDATOR")
#undef SCHEMA_VALIDATOR
#pragma push_macro("SECURITY_MANAGER")
#undef SECURITY_MANAGER
#pragma push_macro("SYMBOL_TABLE")
#undef SYMBOL_TABLE
#pragma push_macro("TOLERATE_DUPLICATES")
#undef TOLERATE_DUPLICATES
#pragma push_macro("UNPARSED_ENTITY_CHECKING")
#undef UNPARSED_ENTITY_CHECKING
#pragma push_macro("USE_GRAMMAR_POOL_ONLY")
#undef USE_GRAMMAR_POOL_ONLY
#pragma push_macro("VALIDATE_ANNOTATIONS")
#undef VALIDATE_ANNOTATIONS
#pragma push_macro("VALIDATION")
#undef VALIDATION
#pragma push_macro("VALIDATION_MANAGER")
#undef VALIDATION_MANAGER
#pragma push_macro("WARN_ON_DUPLICATE_ATTDEF")
#undef WARN_ON_DUPLICATE_ATTDEF
#pragma push_macro("WARN_ON_DUPLICATE_ENTITYDEF")
#undef WARN_ON_DUPLICATE_ENTITYDEF
#pragma push_macro("WARN_ON_UNDECLARED_ELEMDEF")
#undef WARN_ON_UNDECLARED_ELEMDEF
#pragma push_macro("XML11_DATATYPE_VALIDATOR_FACTORY")
#undef XML11_DATATYPE_VALIDATOR_FACTORY
#pragma push_macro("XMLGRAMMAR_POOL")
#undef XMLGRAMMAR_POOL
#pragma push_macro("XMLSCHEMA_FULL_CHECKING")
#undef XMLSCHEMA_FULL_CHECKING
#pragma push_macro("XMLSCHEMA_VALIDATION")
#undef XMLSCHEMA_VALIDATION
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
							class XML11DTDScannerImpl;
							class XML11DocumentScannerImpl;
							class XML11NSDocumentScannerImpl;
							class XMLDocumentScannerImpl;
							class XMLEntityManager;
							class XMLErrorReporter;
							class XMLNSDocumentScannerImpl;
							class XMLVersionDetector;
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
							namespace dtd {
								class XML11DTDProcessor;
								class XML11DTDValidator;
								class XML11NSDTDValidator;
								class XMLDTDProcessor;
								class XMLDTDValidator;
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
						namespace util {
							class FeatureState;
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
							class XMLLocator;
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
							namespace grammars {
								class XMLGrammarPool;
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
							namespace parser {
								class XMLComponent;
								class XMLComponentManager;
								class XMLDTDScanner;
								class XMLDocumentScanner;
								class XMLDocumentSource;
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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {

class XML11Configuration : public ::com::sun::org::apache::xerces::internal::util::ParserConfigurationSettings, public ::com::sun::org::apache::xerces::internal::xni::parser::XMLPullParserConfiguration, public ::com::sun::org::apache::xerces::internal::parsers::XML11Configurable {
	$class(XML11Configuration, 0, ::com::sun::org::apache::xerces::internal::util::ParserConfigurationSettings, ::com::sun::org::apache::xerces::internal::xni::parser::XMLPullParserConfiguration, ::com::sun::org::apache::xerces::internal::parsers::XML11Configurable)
public:
	XML11Configuration();
	virtual void addRecognizedFeatures($StringArray* featureIds) override;
	virtual void addRecognizedProperties($StringArray* propertyIds) override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual bool getFeature($String* featureId) override;
	virtual bool getFeature($String* featureId, bool defaultValue) override;
	virtual $Object* getProperty($String* propertyId) override;
	virtual $Object* getProperty($String* propertyId, Object$* defaultValue) override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* grammarPool);
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* grammarPool, ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* parentSettings);
	virtual void addCommonComponent(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent* component);
	virtual void addComponent(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent* component);
	virtual void addRecognizedParamsAndSetDefaults(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent* component);
	virtual void addXML11Component(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent* component);
	virtual ::com::sun::org::apache::xerces::internal::util::FeatureState* checkFeature($String* featureId) override;
	virtual ::com::sun::org::apache::xerces::internal::util::PropertyState* checkProperty($String* propertyId) override;
	virtual void cleanup() override;
	virtual void configurePipeline();
	virtual void configureXML11Pipeline();
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler* getDTDContentModelHandler() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler* getDTDHandler() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* getDocumentHandler() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver* getEntityResolver() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler* getErrorHandler() override;
	virtual ::com::sun::org::apache::xerces::internal::util::FeatureState* getFeatureState($String* featureId) override;
	virtual ::com::sun::org::apache::xerces::internal::util::FeatureState* getFeatureState0($String* featureId);
	virtual ::java::util::Locale* getLocale() override;
	virtual ::com::sun::org::apache::xerces::internal::util::PropertyState* getPropertyState($String* propertyId) override;
	void initXML11Components();
	virtual void parse(::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* source) override;
	virtual bool parse(bool complete) override;
	virtual void reset();
	virtual void resetCommon();
	void resetSymbolTable();
	virtual void resetXML11();
	virtual void setDTDContentModelHandler(::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler* handler) override;
	virtual void setDTDHandler(::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler* dtdHandler) override;
	virtual void setDocumentHandler(::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* documentHandler) override;
	virtual void setEntityResolver(::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver* resolver) override;
	virtual void setErrorHandler(::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler* errorHandler) override;
	virtual void setFeature($String* featureId, bool state) override;
	virtual void setInputSource(::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* inputSource) override;
	virtual void setLocale(::java::util::Locale* locale) override;
	virtual void setProperty($String* propertyId, Object$* value) override;
	virtual $String* toString() override;
	static $String* XML11_DATATYPE_VALIDATOR_FACTORY;
	static $String* WARN_ON_DUPLICATE_ATTDEF;
	static $String* WARN_ON_DUPLICATE_ENTITYDEF;
	static $String* WARN_ON_UNDECLARED_ELEMDEF;
	static $String* ALLOW_JAVA_ENCODINGS;
	static $String* CONTINUE_AFTER_FATAL_ERROR;
	static $String* LOAD_EXTERNAL_DTD;
	static $String* NOTIFY_BUILTIN_REFS;
	static $String* NOTIFY_CHAR_REFS;
	static $String* NORMALIZE_DATA;
	static $String* SCHEMA_ELEMENT_DEFAULT;
	static $String* SCHEMA_AUGMENT_PSVI;
	static $String* XMLSCHEMA_VALIDATION;
	static $String* XMLSCHEMA_FULL_CHECKING;
	static $String* GENERATE_SYNTHETIC_ANNOTATIONS;
	static $String* VALIDATE_ANNOTATIONS;
	static $String* HONOUR_ALL_SCHEMALOCATIONS;
	static $String* NAMESPACE_GROWTH;
	static $String* TOLERATE_DUPLICATES;
	static $String* USE_GRAMMAR_POOL_ONLY;
	static $String* VALIDATION;
	static $String* NAMESPACES;
	static $String* EXTERNAL_GENERAL_ENTITIES;
	static $String* EXTERNAL_PARAMETER_ENTITIES;
	static $String* IGNORE_XSI_TYPE;
	static $String* ID_IDREF_CHECKING;
	static $String* UNPARSED_ENTITY_CHECKING;
	static $String* IDENTITY_CONSTRAINT_CHECKING;
	static $String* XML_STRING;
	static $String* SYMBOL_TABLE;
	static $String* ERROR_HANDLER;
	static $String* ENTITY_RESOLVER;
	static $String* SCHEMA_VALIDATOR;
	static $String* SCHEMA_LOCATION;
	static $String* SCHEMA_NONS_LOCATION;
	static $String* ERROR_REPORTER;
	static $String* ENTITY_MANAGER;
	static $String* DOCUMENT_SCANNER;
	static $String* DTD_SCANNER;
	static $String* XMLGRAMMAR_POOL;
	static $String* DTD_PROCESSOR;
	static $String* DTD_VALIDATOR;
	static $String* NAMESPACE_BINDER;
	static $String* DATATYPE_VALIDATOR_FACTORY;
	static $String* VALIDATION_MANAGER;
	static $String* JAXP_SCHEMA_LANGUAGE;
	static $String* JAXP_SCHEMA_SOURCE;
	static $String* ROOT_TYPE_DEF;
	static $String* ROOT_ELEMENT_DECL;
	static $String* LOCALE;
	static $String* SCHEMA_DV_FACTORY;
	static $String* XML_SECURITY_PROPERTY_MANAGER;
	static $String* SECURITY_MANAGER;
	static const bool PRINT_EXCEPTION_STACK_TRACE = false;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* fInputSource = nullptr;
	::com::sun::org::apache::xerces::internal::impl::validation::ValidationManager* fValidationManager = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLVersionDetector* fVersionDetector = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLLocator* fLocator = nullptr;
	::java::util::Locale* fLocale = nullptr;
	::java::util::List* fComponents = nullptr;
	::java::util::List* fXML11Components = nullptr;
	::java::util::List* fCommonComponents = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* fDocumentHandler = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler* fDTDHandler = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler* fDTDContentModelHandler = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource* fLastComponent = nullptr;
	bool fParseInProgress = false;
	bool fConfigUpdated = false;
	::com::sun::org::apache::xerces::internal::impl::dv::DTDDVFactory* fDatatypeValidatorFactory = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLNSDocumentScannerImpl* fNamespaceScanner = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl* fNonNSScanner = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDValidator* fDTDValidator = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDValidator* fNonNSDTDValidator = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDScanner* fDTDScanner = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDProcessor* fDTDProcessor = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dv::DTDDVFactory* fXML11DatatypeFactory = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XML11NSDocumentScannerImpl* fXML11NSDocScanner = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XML11DocumentScannerImpl* fXML11DocScanner = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dtd::XML11NSDTDValidator* fXML11NSDTDValidator = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dtd::XML11DTDValidator* fXML11DTDValidator = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XML11DTDScannerImpl* fXML11DTDScanner = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dtd::XML11DTDProcessor* fXML11DTDProcessor = nullptr;
	::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* fGrammarPool = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* fErrorReporter = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLEntityManager* fEntityManager = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator* fSchemaValidator = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentScanner* fCurrentScanner = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dv::DTDDVFactory* fCurrentDVFactory = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDScanner* fCurrentDTDScanner = nullptr;
	bool f11Initialized = false;
	bool fSymbolTableProvided = false;
	bool fSymbolTableJustInitialized = false;
};

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ALLOW_JAVA_ENCODINGS")
#pragma pop_macro("CONTINUE_AFTER_FATAL_ERROR")
#pragma pop_macro("DATATYPE_VALIDATOR_FACTORY")
#pragma pop_macro("DOCUMENT_SCANNER")
#pragma pop_macro("DTD_PROCESSOR")
#pragma pop_macro("DTD_SCANNER")
#pragma pop_macro("DTD_VALIDATOR")
#pragma pop_macro("ENTITY_MANAGER")
#pragma pop_macro("ENTITY_RESOLVER")
#pragma pop_macro("ERROR_HANDLER")
#pragma pop_macro("ERROR_REPORTER")
#pragma pop_macro("EXTERNAL_GENERAL_ENTITIES")
#pragma pop_macro("EXTERNAL_PARAMETER_ENTITIES")
#pragma pop_macro("GENERATE_SYNTHETIC_ANNOTATIONS")
#pragma pop_macro("HONOUR_ALL_SCHEMALOCATIONS")
#pragma pop_macro("IDENTITY_CONSTRAINT_CHECKING")
#pragma pop_macro("ID_IDREF_CHECKING")
#pragma pop_macro("IGNORE_XSI_TYPE")
#pragma pop_macro("JAXP_SCHEMA_LANGUAGE")
#pragma pop_macro("JAXP_SCHEMA_SOURCE")
#pragma pop_macro("LOAD_EXTERNAL_DTD")
#pragma pop_macro("LOCALE")
#pragma pop_macro("NAMESPACES")
#pragma pop_macro("NAMESPACE_BINDER")
#pragma pop_macro("NAMESPACE_GROWTH")
#pragma pop_macro("NORMALIZE_DATA")
#pragma pop_macro("NOTIFY_BUILTIN_REFS")
#pragma pop_macro("NOTIFY_CHAR_REFS")
#pragma pop_macro("PRINT_EXCEPTION_STACK_TRACE")
#pragma pop_macro("ROOT_ELEMENT_DECL")
#pragma pop_macro("ROOT_TYPE_DEF")
#pragma pop_macro("SCHEMA_AUGMENT_PSVI")
#pragma pop_macro("SCHEMA_DV_FACTORY")
#pragma pop_macro("SCHEMA_ELEMENT_DEFAULT")
#pragma pop_macro("SCHEMA_LOCATION")
#pragma pop_macro("SCHEMA_NONS_LOCATION")
#pragma pop_macro("SCHEMA_VALIDATOR")
#pragma pop_macro("SECURITY_MANAGER")
#pragma pop_macro("SYMBOL_TABLE")
#pragma pop_macro("TOLERATE_DUPLICATES")
#pragma pop_macro("UNPARSED_ENTITY_CHECKING")
#pragma pop_macro("USE_GRAMMAR_POOL_ONLY")
#pragma pop_macro("VALIDATE_ANNOTATIONS")
#pragma pop_macro("VALIDATION")
#pragma pop_macro("VALIDATION_MANAGER")
#pragma pop_macro("WARN_ON_DUPLICATE_ATTDEF")
#pragma pop_macro("WARN_ON_DUPLICATE_ENTITYDEF")
#pragma pop_macro("WARN_ON_UNDECLARED_ELEMDEF")
#pragma pop_macro("XML11_DATATYPE_VALIDATOR_FACTORY")
#pragma pop_macro("XMLGRAMMAR_POOL")
#pragma pop_macro("XMLSCHEMA_FULL_CHECKING")
#pragma pop_macro("XMLSCHEMA_VALIDATION")
#pragma pop_macro("XML_SECURITY_PROPERTY_MANAGER")
#pragma pop_macro("XML_STRING")

#endif // _com_sun_org_apache_xerces_internal_parsers_XML11Configuration_h_