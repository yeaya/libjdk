#ifndef _org_xml_sax_XMLFilter_h_
#define _org_xml_sax_XMLFilter_h_
//$ interface org.xml.sax.XMLFilter
//$ extends org.xml.sax.XMLReader

#include <org/xml/sax/XMLReader.h>

namespace org {
	namespace xml {
		namespace sax {

class $export XMLFilter : public ::org::xml::sax::XMLReader {
	$interface(XMLFilter, $NO_CLASS_INIT, ::org::xml::sax::XMLReader)
public:
	virtual ::org::xml::sax::XMLReader* getParent() {return nullptr;}
	virtual void setParent(::org::xml::sax::XMLReader* parent) {}
};

		} // sax
	} // xml
} // org

#endif // _org_xml_sax_XMLFilter_h_