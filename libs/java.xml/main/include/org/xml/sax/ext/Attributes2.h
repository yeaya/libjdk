#ifndef _org_xml_sax_ext_Attributes2_h_
#define _org_xml_sax_ext_Attributes2_h_
//$ interface org.xml.sax.ext.Attributes2
//$ extends org.xml.sax.Attributes

#include <org/xml/sax/Attributes.h>

namespace org {
	namespace xml {
		namespace sax {
			namespace ext {

class $import Attributes2 : public ::org::xml::sax::Attributes {
	$interface(Attributes2, $NO_CLASS_INIT, ::org::xml::sax::Attributes)
public:
	virtual bool isDeclared(int32_t index) {return false;}
	virtual bool isDeclared($String* qName) {return false;}
	virtual bool isDeclared($String* uri, $String* localName) {return false;}
	virtual bool isSpecified(int32_t index) {return false;}
	virtual bool isSpecified($String* uri, $String* localName) {return false;}
	virtual bool isSpecified($String* qName) {return false;}
};

			} // ext
		} // sax
	} // xml
} // org

#endif // _org_xml_sax_ext_Attributes2_h_