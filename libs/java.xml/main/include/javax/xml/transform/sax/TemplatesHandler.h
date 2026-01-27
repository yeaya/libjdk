#ifndef _javax_xml_transform_sax_TemplatesHandler_h_
#define _javax_xml_transform_sax_TemplatesHandler_h_
//$ interface javax.xml.transform.sax.TemplatesHandler
//$ extends org.xml.sax.ContentHandler

#include <org/xml/sax/ContentHandler.h>

namespace javax {
	namespace xml {
		namespace transform {
			class Templates;
		}
	}
}

namespace javax {
	namespace xml {
		namespace transform {
			namespace sax {

class $import TemplatesHandler : public ::org::xml::sax::ContentHandler {
	$interface(TemplatesHandler, $NO_CLASS_INIT, ::org::xml::sax::ContentHandler)
public:
	virtual $String* getSystemId() {return nullptr;}
	virtual ::javax::xml::transform::Templates* getTemplates() {return nullptr;}
	virtual void setSystemId($String* systemID) {}
};

			} // sax
		} // transform
	} // xml
} // javax

#endif // _javax_xml_transform_sax_TemplatesHandler_h_