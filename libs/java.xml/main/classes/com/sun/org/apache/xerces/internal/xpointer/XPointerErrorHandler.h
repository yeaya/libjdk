#ifndef _com_sun_org_apache_xerces_internal_xpointer_XPointerErrorHandler_h_
#define _com_sun_org_apache_xerces_internal_xpointer_XPointerErrorHandler_h_
//$ class com.sun.org.apache.xerces.internal.xpointer.XPointerErrorHandler
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
						namespace xpointer {

class XPointerErrorHandler : public ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler {
	$class(XPointerErrorHandler, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler)
public:
	XPointerErrorHandler();
	void init$();
	void init$(::java::io::PrintWriter* out);
	virtual void error($String* domain, $String* key, ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException* ex) override;
	virtual void fatalError($String* domain, $String* key, ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException* ex) override;
	void printError($String* type, ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException* ex);
	virtual void warning($String* domain, $String* key, ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException* ex) override;
	::java::io::PrintWriter* fOut = nullptr;
};

						} // xpointer
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xpointer_XPointerErrorHandler_h_