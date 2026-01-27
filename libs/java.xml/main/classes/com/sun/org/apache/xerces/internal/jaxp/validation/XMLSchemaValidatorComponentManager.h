#ifndef _com_sun_org_apache_xerces_internal_jaxp_validation_XMLSchemaValidatorComponentManager_h_
#define _com_sun_org_apache_xerces_internal_jaxp_validation_XMLSchemaValidatorComponentManager_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.validation.XMLSchemaValidatorComponentManager
//$ extends com.sun.org.apache.xerces.internal.util.ParserConfigurationSettings

#include <com/sun/org/apache/xerces/internal/util/ParserConfigurationSettings.h>
#include <java/lang/Array.h>

#pragma push_macro("DISALLOW_DOCTYPE_DECL_FEATURE")
#undef DISALLOW_DOCTYPE_DECL_FEATURE
#pragma push_macro("ENTITY_MANAGER")
#undef ENTITY_MANAGER
#pragma push_macro("ENTITY_RESOLVER")
#undef ENTITY_RESOLVER
#pragma push_macro("ERROR_HANDLER")
#undef ERROR_HANDLER
#pragma push_macro("ERROR_REPORTER")
#undef ERROR_REPORTER
#pragma push_macro("IDENTITY_CONSTRAINT_CHECKING")
#undef IDENTITY_CONSTRAINT_CHECKING
#pragma push_macro("ID_IDREF_CHECKING")
#undef ID_IDREF_CHECKING
#pragma push_macro("IGNORE_XSI_TYPE")
#undef IGNORE_XSI_TYPE
#pragma push_macro("LOCALE")
#undef LOCALE
#pragma push_macro("NAMESPACE_CONTEXT")
#undef NAMESPACE_CONTEXT
#pragma push_macro("NORMALIZE_DATA")
#undef NORMALIZE_DATA
#pragma push_macro("SCHEMA_AUGMENT_PSVI")
#undef SCHEMA_AUGMENT_PSVI
#pragma push_macro("SCHEMA_ELEMENT_DEFAULT")
#undef SCHEMA_ELEMENT_DEFAULT
#pragma push_macro("SCHEMA_VALIDATION")
#undef SCHEMA_VALIDATION
#pragma push_macro("SCHEMA_VALIDATOR")
#undef SCHEMA_VALIDATOR
#pragma push_macro("SECURITY_MANAGER")
#undef SECURITY_MANAGER
#pragma push_macro("SYMBOL_TABLE")
#undef SYMBOL_TABLE
#pragma push_macro("UNPARSED_ENTITY_CHECKING")
#undef UNPARSED_ENTITY_CHECKING
#pragma push_macro("USE_GRAMMAR_POOL_ONLY")
#undef USE_GRAMMAR_POOL_ONLY
#pragma push_macro("VALIDATION")
#undef VALIDATION
#pragma push_macro("VALIDATION_MANAGER")
#undef VALIDATION_MANAGER
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
							class XMLEntityManager;
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
							class FeatureState;
							class PropertyState;
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
							class NamespaceContext;
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
		class HashMap;
		class Locale;
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

class XMLSchemaValidatorComponentManager : public ::com::sun::org::apache::xerces::internal::util::ParserConfigurationSettings {
	$class(XMLSchemaValidatorComponentManager, 0, ::com::sun::org::apache::xerces::internal::util::ParserConfigurationSettings)
public:
	XMLSchemaValidatorComponentManager();
	void init$(::com::sun::org::apache::xerces::internal::jaxp::validation::XSGrammarPoolContainer* grammarContainer);
	void addRecognizedParamsAndSetDefaults(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent* component, ::com::sun::org::apache::xerces::internal::jaxp::validation::XSGrammarPoolContainer* grammarContainer);
	::org::xml::sax::ErrorHandler* getErrorHandler();
	virtual ::com::sun::org::apache::xerces::internal::util::FeatureState* getFeatureState($String* featureId) override;
	::java::util::Locale* getLocale();
	virtual ::com::sun::org::apache::xerces::internal::util::PropertyState* getPropertyState($String* propertyId) override;
	::org::w3c::dom::ls::LSResourceResolver* getResourceResolver();
	void reset();
	void restoreInitialState();
	void setErrorHandler(::org::xml::sax::ErrorHandler* errorHandler);
	virtual void setFeature($String* featureId, bool value) override;
	void setFeatureDefaults(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent* component, $StringArray* recognizedFeatures, ::com::sun::org::apache::xerces::internal::jaxp::validation::XSGrammarPoolContainer* grammarContainer);
	void setLocale(::java::util::Locale* locale);
	virtual void setProperty($String* propertyId, Object$* value) override;
	void setPropertyDefaults(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent* component, $StringArray* recognizedProperties);
	void setResourceResolver(::org::w3c::dom::ls::LSResourceResolver* resourceResolver);
	static $String* SCHEMA_VALIDATION;
	static $String* VALIDATION;
	static $String* USE_GRAMMAR_POOL_ONLY;
	static $String* IGNORE_XSI_TYPE;
	static $String* ID_IDREF_CHECKING;
	static $String* UNPARSED_ENTITY_CHECKING;
	static $String* IDENTITY_CONSTRAINT_CHECKING;
	static $String* DISALLOW_DOCTYPE_DECL_FEATURE;
	static $String* NORMALIZE_DATA;
	static $String* SCHEMA_ELEMENT_DEFAULT;
	static $String* SCHEMA_AUGMENT_PSVI;
	static $String* ENTITY_MANAGER;
	static $String* ENTITY_RESOLVER;
	static $String* ERROR_HANDLER;
	static $String* ERROR_REPORTER;
	static $String* NAMESPACE_CONTEXT;
	static $String* SCHEMA_VALIDATOR;
	static $String* SECURITY_MANAGER;
	static $String* XML_SECURITY_PROPERTY_MANAGER;
	static $String* SYMBOL_TABLE;
	static $String* VALIDATION_MANAGER;
	static $String* XMLGRAMMAR_POOL;
	static $String* LOCALE;
	bool _isSecureMode = false;
	bool fConfigUpdated = false;
	bool fUseGrammarPoolOnly = false;
	::java::util::HashMap* fComponents = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLEntityManager* fEntityManager = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* fErrorReporter = nullptr;
	::com::sun::org::apache::xerces::internal::xni::NamespaceContext* fNamespaceContext = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator* fSchemaValidator = nullptr;
	::com::sun::org::apache::xerces::internal::impl::validation::ValidationManager* fValidationManager = nullptr;
	::java::util::HashMap* fInitFeatures = nullptr;
	::java::util::HashMap* fInitProperties = nullptr;
	::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager* fInitSecurityManager = nullptr;
	::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager* fSecurityPropertyMgr = nullptr;
	::org::xml::sax::ErrorHandler* fErrorHandler = nullptr;
	::org::w3c::dom::ls::LSResourceResolver* fResourceResolver = nullptr;
	::java::util::Locale* fLocale = nullptr;
};

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DISALLOW_DOCTYPE_DECL_FEATURE")
#pragma pop_macro("ENTITY_MANAGER")
#pragma pop_macro("ENTITY_RESOLVER")
#pragma pop_macro("ERROR_HANDLER")
#pragma pop_macro("ERROR_REPORTER")
#pragma pop_macro("IDENTITY_CONSTRAINT_CHECKING")
#pragma pop_macro("ID_IDREF_CHECKING")
#pragma pop_macro("IGNORE_XSI_TYPE")
#pragma pop_macro("LOCALE")
#pragma pop_macro("NAMESPACE_CONTEXT")
#pragma pop_macro("NORMALIZE_DATA")
#pragma pop_macro("SCHEMA_AUGMENT_PSVI")
#pragma pop_macro("SCHEMA_ELEMENT_DEFAULT")
#pragma pop_macro("SCHEMA_VALIDATION")
#pragma pop_macro("SCHEMA_VALIDATOR")
#pragma pop_macro("SECURITY_MANAGER")
#pragma pop_macro("SYMBOL_TABLE")
#pragma pop_macro("UNPARSED_ENTITY_CHECKING")
#pragma pop_macro("USE_GRAMMAR_POOL_ONLY")
#pragma pop_macro("VALIDATION")
#pragma pop_macro("VALIDATION_MANAGER")
#pragma pop_macro("XMLGRAMMAR_POOL")
#pragma pop_macro("XML_SECURITY_PROPERTY_MANAGER")

#endif // _com_sun_org_apache_xerces_internal_jaxp_validation_XMLSchemaValidatorComponentManager_h_