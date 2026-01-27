#ifndef _org_xml_sax_Parser_h_
#define _org_xml_sax_Parser_h_
//$ interface org.xml.sax.Parser
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Locale;
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class DTDHandler;
			class DocumentHandler;
			class EntityResolver;
			class ErrorHandler;
			class InputSource;
		}
	}
}

namespace org {
	namespace xml {
		namespace sax {

class $import Parser : public ::java::lang::Object {
	$interface(Parser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void parse(::org::xml::sax::InputSource* source) {}
	virtual void parse($String* systemId) {}
	virtual void setDTDHandler(::org::xml::sax::DTDHandler* handler) {}
	virtual void setDocumentHandler(::org::xml::sax::DocumentHandler* handler) {}
	virtual void setEntityResolver(::org::xml::sax::EntityResolver* resolver) {}
	virtual void setErrorHandler(::org::xml::sax::ErrorHandler* handler) {}
	virtual void setLocale(::java::util::Locale* locale) {}
};

		} // sax
	} // xml
} // org

#endif // _org_xml_sax_Parser_h_