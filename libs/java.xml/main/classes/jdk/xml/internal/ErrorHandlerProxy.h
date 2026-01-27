#ifndef _jdk_xml_internal_ErrorHandlerProxy_h_
#define _jdk_xml_internal_ErrorHandlerProxy_h_
//$ class jdk.xml.internal.ErrorHandlerProxy
//$ extends org.xml.sax.ErrorHandler

#include <org/xml/sax/ErrorHandler.h>

namespace org {
	namespace xml {
		namespace sax {
			class SAXParseException;
		}
	}
}

namespace jdk {
	namespace xml {
		namespace internal {

class ErrorHandlerProxy : public ::org::xml::sax::ErrorHandler {
	$class(ErrorHandlerProxy, $NO_CLASS_INIT, ::org::xml::sax::ErrorHandler)
public:
	ErrorHandlerProxy();
	void init$();
	virtual void error(::org::xml::sax::SAXParseException* exception) override;
	virtual void fatalError(::org::xml::sax::SAXParseException* exception) override;
	virtual void warning(::org::xml::sax::SAXParseException* exception) override;
};

		} // internal
	} // xml
} // jdk

#endif // _jdk_xml_internal_ErrorHandlerProxy_h_