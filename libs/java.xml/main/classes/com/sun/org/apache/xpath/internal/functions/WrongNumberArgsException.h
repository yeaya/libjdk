#ifndef _com_sun_org_apache_xpath_internal_functions_WrongNumberArgsException_h_
#define _com_sun_org_apache_xpath_internal_functions_WrongNumberArgsException_h_
//$ class com.sun.org.apache.xpath.internal.functions.WrongNumberArgsException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace functions {

class $export WrongNumberArgsException : public ::java::lang::Exception {
	$class(WrongNumberArgsException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	WrongNumberArgsException();
	void init$($String* argsExpected);
	static const int64_t serialVersionUID = (int64_t)0xC0D58CBEBB2A2300;
	WrongNumberArgsException(const WrongNumberArgsException& e);
	virtual void throw$() override;
	inline WrongNumberArgsException* operator ->() {
		return (WrongNumberArgsException*)throwing$;
	}
};

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_functions_WrongNumberArgsException_h_