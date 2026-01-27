#ifndef _com_sun_org_apache_xerces_internal_parsers_XMLParser_h_
#define _com_sun_org_apache_xerces_internal_parsers_XMLParser_h_
//$ class com.sun.org.apache.xerces.internal.parsers.XMLParser
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ENTITY_RESOLVER")
#undef ENTITY_RESOLVER
#pragma push_macro("ERROR_HANDLER")
#undef ERROR_HANDLER
#pragma push_macro("RECOGNIZED_PROPERTIES")
#undef RECOGNIZED_PROPERTIES

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
								class XMLInputSource;
								class XMLParserConfiguration;
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

class XMLParser : public ::java::lang::Object {
	$class(XMLParser, 0, ::java::lang::Object)
public:
	XMLParser();
	void init$(::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration* config);
	virtual bool getFeature($String* featureId);
	virtual void parse(::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* inputSource);
	virtual void reset();
	static $String* ENTITY_RESOLVER;
	static $String* ERROR_HANDLER;
	static $StringArray* RECOGNIZED_PROPERTIES;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration* fConfiguration = nullptr;
	::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager* securityManager = nullptr;
	::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager* securityPropertyManager = nullptr;
};

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ENTITY_RESOLVER")
#pragma pop_macro("ERROR_HANDLER")
#pragma pop_macro("RECOGNIZED_PROPERTIES")

#endif // _com_sun_org_apache_xerces_internal_parsers_XMLParser_h_