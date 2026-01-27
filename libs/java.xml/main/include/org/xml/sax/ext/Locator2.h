#ifndef _org_xml_sax_ext_Locator2_h_
#define _org_xml_sax_ext_Locator2_h_
//$ interface org.xml.sax.ext.Locator2
//$ extends org.xml.sax.Locator

#include <org/xml/sax/Locator.h>

namespace org {
	namespace xml {
		namespace sax {
			namespace ext {

class $import Locator2 : public ::org::xml::sax::Locator {
	$interface(Locator2, $NO_CLASS_INIT, ::org::xml::sax::Locator)
public:
	virtual $String* getEncoding() {return nullptr;}
	virtual $String* getXMLVersion() {return nullptr;}
};

			} // ext
		} // sax
	} // xml
} // org

#endif // _org_xml_sax_ext_Locator2_h_