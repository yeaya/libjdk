#ifndef _com_sun_org_apache_xml_internal_res_XMLMessages_h_
#define _com_sun_org_apache_xml_internal_res_XMLMessages_h_
//$ class com.sun.org.apache.xml.internal.res.XMLMessages
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BAD_CODE")
#undef BAD_CODE
#pragma push_macro("FORMAT_FAILED")
#undef FORMAT_FAILED
#pragma push_macro("XML_ERROR_RESOURCES")
#undef XML_ERROR_RESOURCES

namespace java {
	namespace util {
		class Locale;
		class ResourceBundle;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace res {

class $export XMLMessages : public ::java::lang::Object {
	$class(XMLMessages, 0, ::java::lang::Object)
public:
	XMLMessages();
	void init$();
	static $String* createMsg(::java::util::ResourceBundle* fResourceBundle, $String* msgKey, $ObjectArray* args);
	static $String* createXMLMessage($String* msgKey, $ObjectArray* args);
	virtual ::java::util::Locale* getLocale();
	virtual void setLocale(::java::util::Locale* locale);
	::java::util::Locale* fLocale = nullptr;
	static ::java::util::ResourceBundle* XMLBundle;
	static $String* XML_ERROR_RESOURCES;
	static $String* BAD_CODE;
	static $String* FORMAT_FAILED;
};

						} // res
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("BAD_CODE")
#pragma pop_macro("FORMAT_FAILED")
#pragma pop_macro("XML_ERROR_RESOURCES")

#endif // _com_sun_org_apache_xml_internal_res_XMLMessages_h_