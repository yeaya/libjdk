#ifndef _com_sun_org_apache_xpath_internal_res_XPATHMessages_h_
#define _com_sun_org_apache_xpath_internal_res_XPATHMessages_h_
//$ class com.sun.org.apache.xpath.internal.res.XPATHMessages
//$ extends com.sun.org.apache.xml.internal.res.XMLMessages

#include <com/sun/org/apache/xml/internal/res/XMLMessages.h>
#include <java/lang/Array.h>

#pragma push_macro("XPATH_ERROR_RESOURCES")
#undef XPATH_ERROR_RESOURCES

namespace java {
	namespace util {
		class ResourceBundle;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace res {

class $export XPATHMessages : public ::com::sun::org::apache::xml::internal::res::XMLMessages {
	$class(XPATHMessages, 0, ::com::sun::org::apache::xml::internal::res::XMLMessages)
public:
	XPATHMessages();
	void init$();
	static $String* createXPATHMessage($String* msgKey, $ObjectArray* args);
	static $String* createXPATHMsg(::java::util::ResourceBundle* fResourceBundle, $String* msgKey, $ObjectArray* args);
	static $String* createXPATHWarning($String* msgKey, $ObjectArray* args);
	static ::java::util::ResourceBundle* XPATHBundle;
	static $String* XPATH_ERROR_RESOURCES;
};

						} // res
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("XPATH_ERROR_RESOURCES")

#endif // _com_sun_org_apache_xpath_internal_res_XPATHMessages_h_