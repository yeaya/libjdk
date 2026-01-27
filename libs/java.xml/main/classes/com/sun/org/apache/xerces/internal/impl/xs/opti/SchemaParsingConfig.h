#ifndef _com_sun_org_apache_xerces_internal_impl_xs_opti_SchemaParsingConfig_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_opti_SchemaParsingConfig_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.opti.SchemaParsingConfig
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
#pragma push_macro("GENERATE_SYNTHETIC_ANNOTATIONS")
#undef GENERATE_SYNTHETIC_ANNOTATIONS
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
#pragma push_macro("VALIDATION_MANAGER")
#undef VALIDATION_MANAGER
#pragma push_macro("WARN_ON_DUPLICATE_ATTDEF")
#undef WARN_ON_DUPLICATE_ATTDEF
#pragma push_macro("WARN_ON_UNDECLARED_ELEMDEF")
#undef WARN_ON_UNDECLARED_ELEMDEF
#pragma push_macro("XML11_DATATYPE_VALIDATOR_FACTORY")
#undef XML11_DATATYPE_VALIDATOR_FACTORY
#pragma push_macro("XMLGRAMMAR_POOL")
#undef XMLGRAMMAR_POOL

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							class XML11DTDScannerImpl;
							class XML11NSDocumentScannerImpl;
							class XMLDTDScannerImpl;
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
								class XMLComponent;
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
						namespace impl {
							namespace xs {
								namespace opti {

class SchemaParsingConfig : public ::com::sun::org::apache::xerces::internal::parsers::BasicParserConfiguration, public ::com::sun::org::apache::xerces::internal::xni::parser::XMLPullParserConfiguration {
	$class(SchemaParsingConfig, 0, ::com::sun::org::apache::xerces::internal::parsers::BasicParserConfiguration, ::com::sun::org::apache::xerces::internal::xni::parser::XMLPullParserConfiguration)
public:
	SchemaParsingConfig();
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
	void addRecognizedParamsAndSetDefaults(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent* component);
	virtual ::com::sun::org::apache::xerces::internal::util::FeatureState* checkFeature($String* featureId) override;
	virtual ::com::sun::org::apache::xerces::internal::util::PropertyState* checkProperty($String* propertyId) override;
	virtual void cleanup() override;
	virtual void configurePipeline();
	virtual void configureXML11Pipeline();
	virtual ::com::sun::org::apache::xerces::internal::util::FeatureState* getFeatureState($String* featureId) override;
	virtual ::com::sun::org::apache::xerces::internal::util::PropertyState* getPropertyState($String* propertyId) override;
	void initXML11Components();
	virtual bool parse(bool complete) override;
	virtual void parse(::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* source) override;
	virtual void reset() override;
	virtual void resetNodePool();
	void resetXML10();
	void resetXML11();
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
	static $String* WARN_ON_UNDECLARED_ELEMDEF;
	static $String* ALLOW_JAVA_ENCODINGS;
	static $String* CONTINUE_AFTER_FATAL_ERROR;
	static $String* LOAD_EXTERNAL_DTD;
	static $String* NOTIFY_BUILTIN_REFS;
	static $String* NOTIFY_CHAR_REFS;
	static $String* NORMALIZE_DATA;
	static $String* SCHEMA_ELEMENT_DEFAULT;
	static $String* GENERATE_SYNTHETIC_ANNOTATIONS;
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
	static const bool PRINT_EXCEPTION_STACK_TRACE = false;
	::com::sun::org::apache::xerces::internal::impl::dv::DTDDVFactory* fDatatypeValidatorFactory = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLNSDocumentScannerImpl* fNamespaceScanner = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLDTDScannerImpl* fDTDScanner = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dv::DTDDVFactory* fXML11DatatypeFactory = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XML11NSDocumentScannerImpl* fXML11NSDocScanner = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XML11DTDScannerImpl* fXML11DTDScanner = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dv::DTDDVFactory* fCurrentDVFactory = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentScanner* fCurrentScanner = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDScanner* fCurrentDTDScanner = nullptr;
	::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* fGrammarPool = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLVersionDetector* fVersionDetector = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* fErrorReporter = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLEntityManager* fEntityManager = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* fInputSource = nullptr;
	::com::sun::org::apache::xerces::internal::impl::validation::ValidationManager* fValidationManager = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLLocator* fLocator = nullptr;
	bool fParseInProgress = false;
	bool fConfigUpdated = false;
	bool f11Initialized = false;
};

								} // opti
							} // xs
						} // impl
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
#pragma pop_macro("GENERATE_SYNTHETIC_ANNOTATIONS")
#pragma pop_macro("LOAD_EXTERNAL_DTD")
#pragma pop_macro("LOCALE")
#pragma pop_macro("NAMESPACE_BINDER")
#pragma pop_macro("NORMALIZE_DATA")
#pragma pop_macro("NOTIFY_BUILTIN_REFS")
#pragma pop_macro("NOTIFY_CHAR_REFS")
#pragma pop_macro("PRINT_EXCEPTION_STACK_TRACE")
#pragma pop_macro("SCHEMA_ELEMENT_DEFAULT")
#pragma pop_macro("SCHEMA_VALIDATOR")
#pragma pop_macro("VALIDATION_MANAGER")
#pragma pop_macro("WARN_ON_DUPLICATE_ATTDEF")
#pragma pop_macro("WARN_ON_UNDECLARED_ELEMDEF")
#pragma pop_macro("XML11_DATATYPE_VALIDATOR_FACTORY")
#pragma pop_macro("XMLGRAMMAR_POOL")

#endif // _com_sun_org_apache_xerces_internal_impl_xs_opti_SchemaParsingConfig_h_