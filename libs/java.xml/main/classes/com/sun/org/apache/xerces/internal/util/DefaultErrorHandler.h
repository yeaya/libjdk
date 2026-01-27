#ifndef _com_sun_org_apache_xerces_internal_util_DefaultErrorHandler_h_
#define _com_sun_org_apache_xerces_internal_util_DefaultErrorHandler_h_
//$ class com.sun.org.apache.xerces.internal.util.DefaultErrorHandler
//$ extends com.sun.org.apache.xerces.internal.xni.parser.XMLErrorHandler

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler.h>

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
namespace java {
	namespace io {
		class PrintWriter;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

class DefaultErrorHandler : public ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler {
	$class(DefaultErrorHandler, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler)
public:
	DefaultErrorHandler();
	void init$();
	void init$(::java::io::PrintWriter* out);
	virtual void error($String* domain, $String* key, ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException* ex) override;
	virtual void fatalError($String* domain, $String* key, ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException* ex) override;
	void printError($String* type, ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException* ex);
	virtual void warning($String* domain, $String* key, ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException* ex) override;
	::java::io::PrintWriter* fOut = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_DefaultErrorHandler_h_