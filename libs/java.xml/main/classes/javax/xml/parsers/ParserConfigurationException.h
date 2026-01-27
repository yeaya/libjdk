#ifndef _javax_xml_parsers_ParserConfigurationException_h_
#define _javax_xml_parsers_ParserConfigurationException_h_
//$ class javax.xml.parsers.ParserConfigurationException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace javax {
	namespace xml {
		namespace parsers {

class $export ParserConfigurationException : public ::java::lang::Exception {
	$class(ParserConfigurationException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	ParserConfigurationException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0xCCCE932E900BFDA3;
	ParserConfigurationException(const ParserConfigurationException& e);
	virtual void throw$() override;
	inline ParserConfigurationException* operator ->() {
		return (ParserConfigurationException*)throwing$;
	}
};

		} // parsers
	} // xml
} // javax

#endif // _javax_xml_parsers_ParserConfigurationException_h_