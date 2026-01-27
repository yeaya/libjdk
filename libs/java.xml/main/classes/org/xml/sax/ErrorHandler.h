#ifndef _org_xml_sax_ErrorHandler_h_
#define _org_xml_sax_ErrorHandler_h_
//$ interface org.xml.sax.ErrorHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace xml {
		namespace sax {
			class SAXParseException;
		}
	}
}

namespace org {
	namespace xml {
		namespace sax {

class $export ErrorHandler : public ::java::lang::Object {
	$interface(ErrorHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void error(::org::xml::sax::SAXParseException* exception) {}
	virtual void fatalError(::org::xml::sax::SAXParseException* exception) {}
	virtual void warning(::org::xml::sax::SAXParseException* exception) {}
};

		} // sax
	} // xml
} // org

#endif // _org_xml_sax_ErrorHandler_h_