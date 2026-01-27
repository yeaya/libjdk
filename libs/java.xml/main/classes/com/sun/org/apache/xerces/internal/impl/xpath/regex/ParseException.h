#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_regex_ParseException_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_regex_ParseException_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {

class ParseException : public ::java::lang::RuntimeException {
	$class(ParseException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	ParseException();
	void init$($String* mes, int32_t location);
	virtual int32_t getLocation();
	static const int64_t serialVersionUID = (int64_t)0x9EAEF31060F36D16;
	int32_t location = 0;
	ParseException(const ParseException& e);
	virtual void throw$() override;
	inline ParseException* operator ->() {
		return (ParseException*)throwing$;
	}
};

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_regex_ParseException_h_