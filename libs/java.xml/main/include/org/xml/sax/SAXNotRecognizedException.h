#ifndef _org_xml_sax_SAXNotRecognizedException_h_
#define _org_xml_sax_SAXNotRecognizedException_h_
//$ class org.xml.sax.SAXNotRecognizedException
//$ extends org.xml.sax.SAXException

#include <org/xml/sax/SAXException.h>

namespace org {
	namespace xml {
		namespace sax {

class $import SAXNotRecognizedException : public ::org::xml::sax::SAXException {
	$class(SAXNotRecognizedException, $NO_CLASS_INIT, ::org::xml::sax::SAXException)
public:
	SAXNotRecognizedException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x4B808FF241A211DD;
	SAXNotRecognizedException(const SAXNotRecognizedException& e);
	virtual void throw$() override;
	inline SAXNotRecognizedException* operator ->() {
		return (SAXNotRecognizedException*)throwing$;
	}
};

		} // sax
	} // xml
} // org

#endif // _org_xml_sax_SAXNotRecognizedException_h_