#ifndef _org_xml_sax_SAXNotSupportedException_h_
#define _org_xml_sax_SAXNotSupportedException_h_
//$ class org.xml.sax.SAXNotSupportedException
//$ extends org.xml.sax.SAXException

#include <org/xml/sax/SAXException.h>

namespace org {
	namespace xml {
		namespace sax {

class $import SAXNotSupportedException : public ::org::xml::sax::SAXException {
	$class(SAXNotSupportedException, $NO_CLASS_INIT, ::org::xml::sax::SAXException)
public:
	SAXNotSupportedException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0xEC4121B7A4F96F9A;
	SAXNotSupportedException(const SAXNotSupportedException& e);
	virtual void throw$() override;
	inline SAXNotSupportedException* operator ->() {
		return (SAXNotSupportedException*)throwing$;
	}
};

		} // sax
	} // xml
} // org

#endif // _org_xml_sax_SAXNotSupportedException_h_