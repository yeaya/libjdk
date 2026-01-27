#ifndef _org_xml_sax_DocumentHandler_h_
#define _org_xml_sax_DocumentHandler_h_
//$ interface org.xml.sax.DocumentHandler
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace org {
	namespace xml {
		namespace sax {
			class AttributeList;
			class Locator;
		}
	}
}

namespace org {
	namespace xml {
		namespace sax {

class $import DocumentHandler : public ::java::lang::Object {
	$interface(DocumentHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void characters($chars* ch, int32_t start, int32_t length) {}
	virtual void endDocument() {}
	virtual void endElement($String* name) {}
	virtual void ignorableWhitespace($chars* ch, int32_t start, int32_t length) {}
	virtual void processingInstruction($String* target, $String* data) {}
	virtual void setDocumentLocator(::org::xml::sax::Locator* locator) {}
	virtual void startDocument() {}
	virtual void startElement($String* name, ::org::xml::sax::AttributeList* atts) {}
};

		} // sax
	} // xml
} // org

#endif // _org_xml_sax_DocumentHandler_h_