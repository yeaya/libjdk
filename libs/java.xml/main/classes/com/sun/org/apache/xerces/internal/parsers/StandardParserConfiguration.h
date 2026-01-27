#ifndef _com_sun_org_apache_xerces_internal_parsers_StandardParserConfiguration_h_
#define _com_sun_org_apache_xerces_internal_parsers_StandardParserConfiguration_h_
//$ class com.sun.org.apache.xerces.internal.parsers.StandardParserConfiguration
//$ extends com.sun.org.apache.xerces.internal.parsers.DTDConfiguration

#include <com/sun/org/apache/xerces/internal/parsers/DTDConfiguration.h>

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
#pragma push_macro("NAMESPACE_GROWTH")
#undef NAMESPACE_GROWTH
#pragma push_macro("NORMALIZE_DATA")
#undef NORMALIZE_DATA
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
#pragma push_macro("TOLERATE_DUPLICATES")
#undef TOLERATE_DUPLICATES
#pragma push_macro("UNPARSED_ENTITY_CHECKING")
#undef UNPARSED_ENTITY_CHECKING
#pragma push_macro("VALIDATE_ANNOTATIONS")
#undef VALIDATE_ANNOTATIONS
#pragma push_macro("XMLSCHEMA_FULL_CHECKING")
#undef XMLSCHEMA_FULL_CHECKING
#pragma push_macro("XMLSCHEMA_VALIDATION")
#undef XMLSCHEMA_VALIDATION

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
						namespace parsers {

class StandardParserConfiguration : public ::com::sun::org::apache::xerces::internal::parsers::DTDConfiguration {
	$class(StandardParserConfiguration, 0, ::com::sun::org::apache::xerces::internal::parsers::DTDConfiguration)
public:
	StandardParserConfiguration();
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* grammarPool);
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* grammarPool, ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* parentSettings);
	virtual ::com::sun::org::apache::xerces::internal::util::FeatureState* checkFeature($String* featureId) override;
	virtual ::com::sun::org::apache::xerces::internal::util::PropertyState* checkProperty($String* propertyId) override;
	virtual void configurePipeline() override;
	static $String* NORMALIZE_DATA;
	static $String* SCHEMA_ELEMENT_DEFAULT;
	static $String* SCHEMA_AUGMENT_PSVI;
	static $String* XMLSCHEMA_VALIDATION;
	static $String* XMLSCHEMA_FULL_CHECKING;
	static $String* GENERATE_SYNTHETIC_ANNOTATIONS;
	static $String* VALIDATE_ANNOTATIONS;
	static $String* HONOUR_ALL_SCHEMALOCATIONS;
	static $String* IGNORE_XSI_TYPE;
	static $String* ID_IDREF_CHECKING;
	static $String* UNPARSED_ENTITY_CHECKING;
	static $String* IDENTITY_CONSTRAINT_CHECKING;
	static $String* NAMESPACE_GROWTH;
	static $String* TOLERATE_DUPLICATES;
	static $String* SCHEMA_VALIDATOR;
	static $String* SCHEMA_LOCATION;
	static $String* SCHEMA_NONS_LOCATION;
	static $String* SCHEMA_DV_FACTORY;
	static $String* ROOT_TYPE_DEF;
	static $String* ROOT_ELEMENT_DECL;
	::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator* fSchemaValidator = nullptr;
};

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("GENERATE_SYNTHETIC_ANNOTATIONS")
#pragma pop_macro("HONOUR_ALL_SCHEMALOCATIONS")
#pragma pop_macro("IDENTITY_CONSTRAINT_CHECKING")
#pragma pop_macro("ID_IDREF_CHECKING")
#pragma pop_macro("IGNORE_XSI_TYPE")
#pragma pop_macro("NAMESPACE_GROWTH")
#pragma pop_macro("NORMALIZE_DATA")
#pragma pop_macro("ROOT_ELEMENT_DECL")
#pragma pop_macro("ROOT_TYPE_DEF")
#pragma pop_macro("SCHEMA_AUGMENT_PSVI")
#pragma pop_macro("SCHEMA_DV_FACTORY")
#pragma pop_macro("SCHEMA_ELEMENT_DEFAULT")
#pragma pop_macro("SCHEMA_LOCATION")
#pragma pop_macro("SCHEMA_NONS_LOCATION")
#pragma pop_macro("SCHEMA_VALIDATOR")
#pragma pop_macro("TOLERATE_DUPLICATES")
#pragma pop_macro("UNPARSED_ENTITY_CHECKING")
#pragma pop_macro("VALIDATE_ANNOTATIONS")
#pragma pop_macro("XMLSCHEMA_FULL_CHECKING")
#pragma pop_macro("XMLSCHEMA_VALIDATION")

#endif // _com_sun_org_apache_xerces_internal_parsers_StandardParserConfiguration_h_