#ifndef _com_sun_org_apache_xerces_internal_xni_parser_XMLErrorHandler_h_
#define _com_sun_org_apache_xerces_internal_xni_parser_XMLErrorHandler_h_
//$ interface com.sun.org.apache.xerces.internal.xni.parser.XMLErrorHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace parser {
								class XMLParseException;
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

class XMLErrorHandler : public ::java::lang::Object {
	$interface(XMLErrorHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void error($String* domain, $String* key, ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException* exception) {}
	virtual void fatalError($String* domain, $String* key, ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException* exception) {}
	virtual void warning($String* domain, $String* key, ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException* exception) {}
};

							} // parser
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xni_parser_XMLErrorHandler_h_