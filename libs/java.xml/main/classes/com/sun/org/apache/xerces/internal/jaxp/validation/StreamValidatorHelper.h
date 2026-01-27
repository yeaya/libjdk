#ifndef _com_sun_org_apache_xerces_internal_jaxp_validation_StreamValidatorHelper_h_
#define _com_sun_org_apache_xerces_internal_jaxp_validation_StreamValidatorHelper_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.validation.StreamValidatorHelper
//$ extends com.sun.org.apache.xerces.internal.jaxp.validation.ValidatorHelper

#include <com/sun/org/apache/xerces/internal/jaxp/validation/ValidatorHelper.h>

#pragma push_macro("ENTITY_RESOLVER")
#undef ENTITY_RESOLVER
#pragma push_macro("ERROR_HANDLER")
#undef ERROR_HANDLER
#pragma push_macro("ERROR_REPORTER")
#undef ERROR_REPORTER
#pragma push_macro("PARSER_SETTINGS")
#undef PARSER_SETTINGS
#pragma push_macro("SCHEMA_VALIDATOR")
#undef SCHEMA_VALIDATOR
#pragma push_macro("SECURITY_MANAGER")
#undef SECURITY_MANAGER
#pragma push_macro("SYMBOL_TABLE")
#undef SYMBOL_TABLE
#pragma push_macro("VALIDATION_MANAGER")
#undef VALIDATION_MANAGER

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
								class ValidatorHandlerImpl;
								class XMLSchemaValidatorComponentManager;
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
								class XMLParserConfiguration;
							}
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class SoftReference;
		}
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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

class StreamValidatorHelper : public ::com::sun::org::apache::xerces::internal::jaxp::validation::ValidatorHelper {
	$class(StreamValidatorHelper, 0, ::com::sun::org::apache::xerces::internal::jaxp::validation::ValidatorHelper)
public:
	StreamValidatorHelper();
	void init$(::com::sun::org::apache::xerces::internal::jaxp::validation::XMLSchemaValidatorComponentManager* componentManager);
	::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration* initialize();
	virtual void validate(::javax::xml::transform::Source* source, ::javax::xml::transform::Result* result) override;
	static $String* PARSER_SETTINGS;
	static $String* ENTITY_RESOLVER;
	static $String* ERROR_HANDLER;
	static $String* ERROR_REPORTER;
	static $String* SCHEMA_VALIDATOR;
	static $String* SYMBOL_TABLE;
	static $String* VALIDATION_MANAGER;
	static $String* SECURITY_MANAGER;
	::java::lang::ref::SoftReference* fConfiguration = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator* fSchemaValidator = nullptr;
	::com::sun::org::apache::xerces::internal::jaxp::validation::XMLSchemaValidatorComponentManager* fComponentManager = nullptr;
	::com::sun::org::apache::xerces::internal::jaxp::validation::ValidatorHandlerImpl* handler = nullptr;
};

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ENTITY_RESOLVER")
#pragma pop_macro("ERROR_HANDLER")
#pragma pop_macro("ERROR_REPORTER")
#pragma pop_macro("PARSER_SETTINGS")
#pragma pop_macro("SCHEMA_VALIDATOR")
#pragma pop_macro("SECURITY_MANAGER")
#pragma pop_macro("SYMBOL_TABLE")
#pragma pop_macro("VALIDATION_MANAGER")

#endif // _com_sun_org_apache_xerces_internal_jaxp_validation_StreamValidatorHelper_h_