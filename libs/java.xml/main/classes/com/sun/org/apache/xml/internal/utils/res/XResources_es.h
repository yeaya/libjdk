#ifndef _com_sun_org_apache_xml_internal_utils_res_XResources_es_h_
#define _com_sun_org_apache_xml_internal_utils_res_XResources_es_h_
//$ class com.sun.org.apache.xml.internal.utils.res.XResources_es
//$ extends com.sun.org.apache.xml.internal.utils.res.XResourceBundle

#include <com/sun/org/apache/xml/internal/utils/res/XResourceBundle.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							namespace res {

class XResources_es : public ::com::sun::org::apache::xml::internal::utils::res::XResourceBundle {
	$class(XResources_es, 0, ::com::sun::org::apache::xml::internal::utils::res::XResourceBundle)
public:
	XResources_es();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
	static $Array<::java::lang::Object, 2>* _contents;
};

							} // res
						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_res_XResources_es_h_