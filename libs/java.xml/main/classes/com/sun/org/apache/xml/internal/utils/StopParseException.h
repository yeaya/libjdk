#ifndef _com_sun_org_apache_xml_internal_utils_StopParseException_h_
#define _com_sun_org_apache_xml_internal_utils_StopParseException_h_
//$ class com.sun.org.apache.xml.internal.utils.StopParseException
//$ extends org.xml.sax.SAXException

#include <org/xml/sax/SAXException.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $export StopParseException : public ::org::xml::sax::SAXException {
	$class(StopParseException, $NO_CLASS_INIT, ::org::xml::sax::SAXException)
public:
	StopParseException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x02EA6F17783BB411;
	StopParseException(const StopParseException& e);
	virtual void throw$() override;
	inline StopParseException* operator ->() {
		return (StopParseException*)throwing$;
	}
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_StopParseException_h_