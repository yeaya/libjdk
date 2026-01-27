#ifndef _com_sun_org_apache_xml_internal_utils_Constants_h_
#define _com_sun_org_apache_xml_internal_utils_Constants_h_
//$ class com.sun.org.apache.xml.internal.utils.Constants
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("S_BUILTIN_EXTENSIONS_URL")
#undef S_BUILTIN_EXTENSIONS_URL
#pragma push_macro("S_BUILTIN_OLD_EXTENSIONS_URL")
#undef S_BUILTIN_OLD_EXTENSIONS_URL
#pragma push_macro("S_EXSLT_COMMON_URL")
#undef S_EXSLT_COMMON_URL
#pragma push_macro("S_EXSLT_DATETIME_URL")
#undef S_EXSLT_DATETIME_URL
#pragma push_macro("S_EXSLT_DYNAMIC_URL")
#undef S_EXSLT_DYNAMIC_URL
#pragma push_macro("S_EXSLT_FUNCTIONS_URL")
#undef S_EXSLT_FUNCTIONS_URL
#pragma push_macro("S_EXSLT_MATH_URL")
#undef S_EXSLT_MATH_URL
#pragma push_macro("S_EXSLT_SETS_URL")
#undef S_EXSLT_SETS_URL
#pragma push_macro("S_EXSLT_STRINGS_URL")
#undef S_EXSLT_STRINGS_URL
#pragma push_macro("S_EXTENSIONS_JAVA_URL")
#undef S_EXTENSIONS_JAVA_URL
#pragma push_macro("S_EXTENSIONS_LOTUSXSL_JAVA_URL")
#undef S_EXTENSIONS_LOTUSXSL_JAVA_URL
#pragma push_macro("S_EXTENSIONS_OLD_JAVA_URL")
#undef S_EXTENSIONS_OLD_JAVA_URL
#pragma push_macro("S_EXTENSIONS_PIPE_URL")
#undef S_EXTENSIONS_PIPE_URL
#pragma push_macro("S_EXTENSIONS_REDIRECT_URL")
#undef S_EXTENSIONS_REDIRECT_URL
#pragma push_macro("S_EXTENSIONS_SQL_URL")
#undef S_EXTENSIONS_SQL_URL
#pragma push_macro("S_EXTENSIONS_XALANLIB_URL")
#undef S_EXTENSIONS_XALANLIB_URL
#pragma push_macro("S_OLDXSLNAMESPACEURL")
#undef S_OLDXSLNAMESPACEURL
#pragma push_macro("S_VENDOR")
#undef S_VENDOR
#pragma push_macro("S_VENDORURL")
#undef S_VENDORURL
#pragma push_macro("S_XMLNAMESPACEURI")
#undef S_XMLNAMESPACEURI
#pragma push_macro("S_XSLNAMESPACEURL")
#undef S_XSLNAMESPACEURL
#pragma push_macro("XSLTVERSUPPORTED")
#undef XSLTVERSUPPORTED

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $export Constants : public ::java::lang::Object {
	$class(Constants, 0, ::java::lang::Object)
public:
	Constants();
	void init$();
	static $String* S_XMLNAMESPACEURI;
	static $String* S_XSLNAMESPACEURL;
	static $String* S_OLDXSLNAMESPACEURL;
	static $String* S_VENDOR;
	static $String* S_VENDORURL;
	static $String* S_BUILTIN_EXTENSIONS_URL;
	static $String* S_BUILTIN_OLD_EXTENSIONS_URL;
	static $String* S_EXTENSIONS_OLD_JAVA_URL;
	static $String* S_EXTENSIONS_JAVA_URL;
	static $String* S_EXTENSIONS_LOTUSXSL_JAVA_URL;
	static $String* S_EXTENSIONS_XALANLIB_URL;
	static $String* S_EXTENSIONS_REDIRECT_URL;
	static $String* S_EXTENSIONS_PIPE_URL;
	static $String* S_EXTENSIONS_SQL_URL;
	static $String* S_EXSLT_COMMON_URL;
	static $String* S_EXSLT_MATH_URL;
	static $String* S_EXSLT_SETS_URL;
	static $String* S_EXSLT_DATETIME_URL;
	static $String* S_EXSLT_FUNCTIONS_URL;
	static $String* S_EXSLT_DYNAMIC_URL;
	static $String* S_EXSLT_STRINGS_URL;
	static double XSLTVERSUPPORTED;
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("S_BUILTIN_EXTENSIONS_URL")
#pragma pop_macro("S_BUILTIN_OLD_EXTENSIONS_URL")
#pragma pop_macro("S_EXSLT_COMMON_URL")
#pragma pop_macro("S_EXSLT_DATETIME_URL")
#pragma pop_macro("S_EXSLT_DYNAMIC_URL")
#pragma pop_macro("S_EXSLT_FUNCTIONS_URL")
#pragma pop_macro("S_EXSLT_MATH_URL")
#pragma pop_macro("S_EXSLT_SETS_URL")
#pragma pop_macro("S_EXSLT_STRINGS_URL")
#pragma pop_macro("S_EXTENSIONS_JAVA_URL")
#pragma pop_macro("S_EXTENSIONS_LOTUSXSL_JAVA_URL")
#pragma pop_macro("S_EXTENSIONS_OLD_JAVA_URL")
#pragma pop_macro("S_EXTENSIONS_PIPE_URL")
#pragma pop_macro("S_EXTENSIONS_REDIRECT_URL")
#pragma pop_macro("S_EXTENSIONS_SQL_URL")
#pragma pop_macro("S_EXTENSIONS_XALANLIB_URL")
#pragma pop_macro("S_OLDXSLNAMESPACEURL")
#pragma pop_macro("S_VENDOR")
#pragma pop_macro("S_VENDORURL")
#pragma pop_macro("S_XMLNAMESPACEURI")
#pragma pop_macro("S_XSLNAMESPACEURL")
#pragma pop_macro("XSLTVERSUPPORTED")

#endif // _com_sun_org_apache_xml_internal_utils_Constants_h_