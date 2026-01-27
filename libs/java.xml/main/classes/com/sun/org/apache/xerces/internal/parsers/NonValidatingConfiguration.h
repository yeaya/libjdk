#ifndef _com_sun_org_apache_xerces_internal_parsers_NonValidatingConfiguration_h_
#define _com_sun_org_apache_xerces_internal_parsers_NonValidatingConfiguration_h_
//$ class com.sun.org.apache.xerces.internal.parsers.NonValidatingConfiguration
//$ extends com.sun.org.apache.xerces.internal.parsers.BasicParserConfiguration
//$ implements com.sun.org.apache.xerces.internal.xni.parser.XMLPullParserConfiguration

#include <com/sun/org/apache/xerces/internal/parsers/BasicParserConfiguration.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLPullParserConfiguration.h>

#pragma push_macro("ALLOW_JAVA_ENCODINGS")
#undef ALLOW_JAVA_ENCODINGS
#pragma push_macro("CONTINUE_AFTER_FATAL_ERROR")
#undef CONTINUE_AFTER_FATAL_ERROR
#pragma push_macro("DATATYPE_VALIDATOR_FACTORY")
#undef DATATYPE_VALIDATOR_FACTORY
#pragma push_macro("DOCUMENT_SCANNER")
#undef DOCUMENT_SCANNER
#pragma push_macro("DTD_SCANNER")
#undef DTD_SCANNER
#pragma push_macro("DTD_VALIDATOR")
#undef DTD_VALIDATOR
#pragma push_macro("ENTITY_MANAGER")
#undef ENTITY_MANAGER
#pragma push_macro("ERROR_REPORTER")
#undef ERROR_REPORTER
#pragma push_macro("LOAD_EXTERNAL_DTD")
#undef LOAD_EXTERNAL_DTD
#pragma push_macro("LOCALE")
#undef LOCALE
#pragma push_macro("NAMESPACE_BINDER")
#undef NAMESPACE_BINDER
#pragma push_macro("NORMALIZE_DATA")
#undef NORMALIZE_DATA
#pragma push_macro("NOTIFY_BUILTIN_REFS")
#undef NOTIFY_BUILTIN_REFS
#pragma push_macro("NOTIFY_CHAR_REFS")
#undef NOTIFY_CHAR_REFS
#pragma push_macro("PRINT_EXCEPTION_STACK_TRACE")
#undef PRINT_EXCEPTION_STACK_TRACE
#pragma push_macro("SCHEMA_ELEMENT_DEFAULT")
#undef SCHEMA_ELEMENT_DEFAULT
#pragma push_macro("SCHEMA_VALIDATOR")
#undef SCHEMA_VALIDATOR
#pragma push_macro("SECURITY_MANAGER")
#undef SECURITY_MANAGER
#pragma push_macro("VALIDATION_MANAGER")
#undef VALIDATION_MANAGER
#pragma push_macro("WARN_ON_DUPLICATE_ATTDEF")
#undef WARN_ON_DUPLICATE_ATTDEF
#pragma push_macro("WARN_ON_DUPLICATE_ENTITYDEF")
#undef WARN_ON_DUPLICATE_ENTITYDEF
#pragma push_macro("WARN_ON_UNDECLARED_ELEMDEF")
#undef WARN_ON_UNDECLARED_ELEMDEF
#pragma push_macro("XMLGRAMMAR_POOL")
#undef XMLGRAMMAR_POOL
#pragma push_macro("XML_SECURITY_PROPERTY_MANAGER")
#undef XML_SECURITY_PROPERTY_MANAGER

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							class XMLDocumentScannerImpl;
							class XMLEntityManager;
							class XMLErrorReporter;
							class XMLNSDocumentScannerImpl;
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
								class XMLComponentManager;
								class XMLDTDScanner;
								class XMLDocumentScanner;
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

class NonValidatingConfiguration : public ::com::sun::org::apache::xerces::internal::parsers::BasicParserConfiguration, public ::com::sun::org::apache::xerces::internal::xni::parser::XMLPullParserConfiguration {
	$class(NonValidatingConfiguration, 0, ::com::sun::org::apache::xerces::internal::parsers::BasicParserConfiguration, ::com::sun::org::apache::xerces::internal::xni::parser::XMLPullParserConfiguration)
public:
	NonValidatingConfiguration();
	virtual void addRecognizedFeatures($StringArray* featureIds) override;
	virtual void addRecognizedProperties($StringArray* propertyIds) override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler* getDTDContentModelHandler() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler* getDTDHandler() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* getDocumentHandler() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver* getEntityResolver() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler* getErrorHandler() override;
	virtual bool getFeature($String* featureId) override;
	virtual bool getFeature($String* featureId, bool defaultValue) override;
	virtual ::java::util::Locale* getLocale() override;
	virtual $Object* getProperty($String* propertyId) override;
	virtual $Object* getProperty($String* propertyId, Object$* defaultValue) override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* grammarPool);
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* grammarPool, ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* parentSettings);
	virtual ::com::sun::org::apache::xerces::internal::util::FeatureState* checkFeature($String* featureId) override;
	virtual ::com::sun::org::apache::xerces::internal::util::PropertyState* checkProperty($String* propertyId) override;
	virtual void cleanup() override;
	virtual void configurePipeline();
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDScanner* createDTDScanner();
	virtual ::com::sun::org::apache::xerces::internal::impl::dv::DTDDVFactory* createDatatypeValidatorFactory();
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentScanner* createDocumentScanner();
	virtual ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager* createEntityManager();
	virtual ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* createErrorReporter();
	virtual ::com::sun::org::apache::xerces::internal::impl::validation::ValidationManager* createValidationManager();
	virtual ::com::sun::org::apache::xerces::internal::util::FeatureState* getFeatureState($String* featureId) override;
	virtual ::com::sun::org::apache::xerces::internal::util::PropertyState* getPropertyState($String* propertyId) override;
	virtual bool parse(bool complete) override;
	virtual void parse(::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* source) override;
	virtual void reset() override;
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
	static $String* ERROR_REPORTER;
	static $String* ENTITY_MANAGER;
	static $String* DOCUMENT_SCANNER;
	static $String* DTD_SCANNER;
	static $String* XMLGRAMMAR_POOL;
	static $String* DTD_VALIDATOR;
	static $String* NAMESPACE_BINDER;
	static $String* DATATYPE_VALIDATOR_FACTORY;
	static $String* VALIDATION_MANAGER;
	static $String* SCHEMA_VALIDATOR;
	static $String* LOCALE;
	static $String* XML_SECURITY_PROPERTY_MANAGER;
	static $String* SECURITY_MANAGER;
	static const bool PRINT_EXCEPTION_STACK_TRACE = false;
	::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* fGrammarPool = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dv::DTDDVFactory* fDatatypeValidatorFactory = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* fErrorReporter = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLEntityManager* fEntityManager = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentScanner* fScanner = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* fInputSource = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDScanner* fDTDScanner = nullptr;
	::com::sun::org::apache::xerces::internal::impl::validation::ValidationManager* fValidationManager = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLNSDocumentScannerImpl* fNamespaceScanner = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl* fNonNSScanner = nullptr;
	bool fConfigUpdated = false;
	::com::sun::org::apache::xerces::internal::xni::XMLLocator* fLocator = nullptr;
	bool fParseInProgress = false;
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
#pragma pop_macro("DTD_SCANNER")
#pragma pop_macro("DTD_VALIDATOR")
#pragma pop_macro("ENTITY_MANAGER")
#pragma pop_macro("ERROR_REPORTER")
#pragma pop_macro("LOAD_EXTERNAL_DTD")
#pragma pop_macro("LOCALE")
#pragma pop_macro("NAMESPACE_BINDER")
#pragma pop_macro("NORMALIZE_DATA")
#pragma pop_macro("NOTIFY_BUILTIN_REFS")
#pragma pop_macro("NOTIFY_CHAR_REFS")
#pragma pop_macro("PRINT_EXCEPTION_STACK_TRACE")
#pragma pop_macro("SCHEMA_ELEMENT_DEFAULT")
#pragma pop_macro("SCHEMA_VALIDATOR")
#pragma pop_macro("SECURITY_MANAGER")
#pragma pop_macro("VALIDATION_MANAGER")
#pragma pop_macro("WARN_ON_DUPLICATE_ATTDEF")
#pragma pop_macro("WARN_ON_DUPLICATE_ENTITYDEF")
#pragma pop_macro("WARN_ON_UNDECLARED_ELEMDEF")
#pragma pop_macro("XMLGRAMMAR_POOL")
#pragma pop_macro("XML_SECURITY_PROPERTY_MANAGER")

#endif // _com_sun_org_apache_xerces_internal_parsers_NonValidatingConfiguration_h_