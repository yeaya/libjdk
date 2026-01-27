#ifndef _com_sun_org_apache_xalan_internal_res_XSLMessages_h_
#define _com_sun_org_apache_xalan_internal_res_XSLMessages_h_
//$ class com.sun.org.apache.xalan.internal.res.XSLMessages
//$ extends com.sun.org.apache.xpath.internal.res.XPATHMessages

#include <com/sun/org/apache/xpath/internal/res/XPATHMessages.h>
#include <java/lang/Array.h>

#pragma push_macro("XSLT_ERROR_RESOURCES")
#undef XSLT_ERROR_RESOURCES

namespace java {
	namespace util {
		class ResourceBundle;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace res {

class XSLMessages : public ::com::sun::org::apache::xpath::internal::res::XPATHMessages {
	$class(XSLMessages, 0, ::com::sun::org::apache::xpath::internal::res::XPATHMessages)
public:
	XSLMessages();
	void init$();
	static $String* createMessage($String* msgKey, $ObjectArray* args);
	static $String* createWarning($String* msgKey, $ObjectArray* args);
	static ::java::util::ResourceBundle* XSLTBundle;
	static $String* XSLT_ERROR_RESOURCES;
};

						} // res
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("XSLT_ERROR_RESOURCES")

#endif // _com_sun_org_apache_xalan_internal_res_XSLMessages_h_