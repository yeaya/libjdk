#ifndef _com_sun_org_apache_xerces_internal_jaxp_SAXParserImpl$JAXPSAXParser_h_
#define _com_sun_org_apache_xerces_internal_jaxp_SAXParserImpl$JAXPSAXParser_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.SAXParserImpl$JAXPSAXParser
//$ extends com.sun.org.apache.xerces.internal.parsers.SAXParser

#include <com/sun/org/apache/xerces/internal/parsers/SAXParser.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							class SAXParserImpl;
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
	namespace util {
		class Locale;
		class Map;
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class InputSource;
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

class SAXParserImpl$JAXPSAXParser : public ::com::sun::org::apache::xerces::internal::parsers::SAXParser {
	$class(SAXParserImpl$JAXPSAXParser, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::parsers::SAXParser)
public:
	SAXParserImpl$JAXPSAXParser();
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::jaxp::SAXParserImpl* saxParser, ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager* securityPropertyMgr, ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager* securityManager);
	virtual bool getFeature($String* name) override;
	virtual bool getFeature0($String* name);
	virtual ::java::util::Locale* getLocale();
	virtual $Object* getProperty($String* name) override;
	virtual $Object* getProperty0($String* name);
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration* getXMLParserConfiguration();
	using ::com::sun::org::apache::xerces::internal::parsers::SAXParser::parse;
	virtual void parse(::org::xml::sax::InputSource* inputSource) override;
	virtual void parse($String* systemId) override;
	void resetSchemaValidator();
	virtual void restoreInitState();
	virtual void setFeature($String* name, bool value) override;
	virtual void setFeature0($String* name, bool value);
	virtual void setProperty($String* name, Object$* value) override;
	virtual void setProperty0($String* name, Object$* value);
	void setSchemaValidatorFeature($String* name, bool value);
	void setSchemaValidatorProperty($String* name, Object$* value);
	::java::util::Map* fInitFeatures = nullptr;
	::java::util::Map* fInitProperties = nullptr;
	::com::sun::org::apache::xerces::internal::jaxp::SAXParserImpl* fSAXParser = nullptr;
	::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager* fSecurityManager = nullptr;
	::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager* fSecurityPropertyMgr = nullptr;
};

						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_jaxp_SAXParserImpl$JAXPSAXParser_h_