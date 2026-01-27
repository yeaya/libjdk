#ifndef _com_sun_org_apache_xml_internal_utils_WrongParserException_h_
#define _com_sun_org_apache_xml_internal_utils_WrongParserException_h_
//$ class com.sun.org.apache.xml.internal.utils.WrongParserException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $export WrongParserException : public ::java::lang::RuntimeException {
	$class(WrongParserException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	WrongParserException();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x59F36BFBF08D7E86;
	WrongParserException(const WrongParserException& e);
	virtual void throw$() override;
	inline WrongParserException* operator ->() {
		return (WrongParserException*)throwing$;
	}
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_WrongParserException_h_