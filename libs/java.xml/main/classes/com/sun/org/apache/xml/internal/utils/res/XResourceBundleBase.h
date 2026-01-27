#ifndef _com_sun_org_apache_xml_internal_utils_res_XResourceBundleBase_h_
#define _com_sun_org_apache_xml_internal_utils_res_XResourceBundleBase_h_
//$ class com.sun.org.apache.xml.internal.utils.res.XResourceBundleBase
//$ extends java.util.ListResourceBundle

#include <java/util/ListResourceBundle.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							namespace res {

class XResourceBundleBase : public ::java::util::ListResourceBundle {
	$class(XResourceBundleBase, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	XResourceBundleBase();
	void init$();
	virtual $String* getMessageKey(int32_t errorCode) {return nullptr;}
	virtual $String* getWarningKey(int32_t errorCode) {return nullptr;}
};

							} // res
						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_res_XResourceBundleBase_h_