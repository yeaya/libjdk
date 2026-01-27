#ifndef _com_sun_org_apache_xerces_internal_xni_parser_XMLPullParserConfiguration_h_
#define _com_sun_org_apache_xerces_internal_xni_parser_XMLPullParserConfiguration_h_
//$ interface com.sun.org.apache.xerces.internal.xni.parser.XMLPullParserConfiguration
//$ extends com.sun.org.apache.xerces.internal.xni.parser.XMLParserConfiguration

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace parser {
								class XMLInputSource;
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

class XMLPullParserConfiguration : public ::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration {
	$interface(XMLPullParserConfiguration, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration)
public:
	virtual void cleanup() {}
	using ::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration::parse;
	using ::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration::getFeature;
	using ::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration::getProperty;
	virtual bool parse(bool complete) {return false;}
	virtual void setInputSource(::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* inputSource) {}
};

							} // parser
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xni_parser_XMLPullParserConfiguration_h_