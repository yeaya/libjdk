#ifndef _com_sun_org_apache_xerces_internal_jaxp_SchemaValidatorConfiguration_h_
#define _com_sun_org_apache_xerces_internal_jaxp_SchemaValidatorConfiguration_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.SchemaValidatorConfiguration
//$ extends com.sun.org.apache.xerces.internal.xni.parser.XMLComponentManager

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>

#pragma push_macro("ERROR_REPORTER")
#undef ERROR_REPORTER
#pragma push_macro("PARSER_SETTINGS")
#undef PARSER_SETTINGS
#pragma push_macro("SCHEMA_VALIDATION")
#undef SCHEMA_VALIDATION
#pragma push_macro("USE_GRAMMAR_POOL_ONLY")
#undef USE_GRAMMAR_POOL_ONLY
#pragma push_macro("VALIDATION")
#undef VALIDATION
#pragma push_macro("VALIDATION_MANAGER")
#undef VALIDATION_MANAGER
#pragma push_macro("XMLGRAMMAR_POOL")
#undef XMLGRAMMAR_POOL

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
						namespace jaxp {

class SchemaValidatorConfiguration : public ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager {
	$class(SchemaValidatorConfiguration, 0, ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager)
public:
	SchemaValidatorConfiguration();
	void init$(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* parentManager, ::com::sun::org::apache::xerces::internal::jaxp::validation::XSGrammarPoolContainer* grammarContainer, ::com::sun::org::apache::xerces::internal::impl::validation::ValidationManager* validationManager);
	virtual bool getFeature($String* featureId) override;
	virtual bool getFeature($String* featureId, bool defaultValue) override;
	virtual ::com::sun::org::apache::xerces::internal::util::FeatureState* getFeatureState($String* featureId) override;
	virtual $Object* getProperty($String* propertyId) override;
	virtual $Object* getProperty($String* propertyId, Object$* defaultValue) override;
	virtual ::com::sun::org::apache::xerces::internal::util::PropertyState* getPropertyState($String* propertyId) override;
	static $String* SCHEMA_VALIDATION;
	static $String* VALIDATION;
	static $String* USE_GRAMMAR_POOL_ONLY;
	static $String* PARSER_SETTINGS;
	static $String* ERROR_REPORTER;
	static $String* VALIDATION_MANAGER;
	static $String* XMLGRAMMAR_POOL;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* fParentComponentManager = nullptr;
	::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* fGrammarPool = nullptr;
	bool fUseGrammarPoolOnly = false;
	::com::sun::org::apache::xerces::internal::impl::validation::ValidationManager* fValidationManager = nullptr;
};

						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ERROR_REPORTER")
#pragma pop_macro("PARSER_SETTINGS")
#pragma pop_macro("SCHEMA_VALIDATION")
#pragma pop_macro("USE_GRAMMAR_POOL_ONLY")
#pragma pop_macro("VALIDATION")
#pragma pop_macro("VALIDATION_MANAGER")
#pragma pop_macro("XMLGRAMMAR_POOL")

#endif // _com_sun_org_apache_xerces_internal_jaxp_SchemaValidatorConfiguration_h_