#ifndef _com_sun_org_apache_xerces_internal_parsers_SecurityConfiguration_h_
#define _com_sun_org_apache_xerces_internal_parsers_SecurityConfiguration_h_
//$ class com.sun.org.apache.xerces.internal.parsers.SecurityConfiguration
//$ extends com.sun.org.apache.xerces.internal.parsers.XIncludeAwareParserConfiguration

#include <com/sun/org/apache/xerces/internal/parsers/XIncludeAwareParserConfiguration.h>

#pragma push_macro("SECURITY_MANAGER_PROPERTY")
#undef SECURITY_MANAGER_PROPERTY

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {
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

class SecurityConfiguration : public ::com::sun::org::apache::xerces::internal::parsers::XIncludeAwareParserConfiguration {
	$class(SecurityConfiguration, 0, ::com::sun::org::apache::xerces::internal::parsers::XIncludeAwareParserConfiguration)
public:
	SecurityConfiguration();
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* grammarPool);
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* grammarPool, ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* parentSettings);
	static $String* SECURITY_MANAGER_PROPERTY;
};

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("SECURITY_MANAGER_PROPERTY")

#endif // _com_sun_org_apache_xerces_internal_parsers_SecurityConfiguration_h_