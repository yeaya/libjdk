#ifndef _com_sun_org_apache_xpath_internal_SourceTree_h_
#define _com_sun_org_apache_xpath_internal_SourceTree_h_
//$ class com.sun.org.apache.xpath.internal.SourceTree
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {

class $export SourceTree : public ::java::lang::Object {
	$class(SourceTree, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SourceTree();
	void init$(int32_t root, $String* url);
	$String* m_url = nullptr;
	int32_t m_root = 0;
};

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_SourceTree_h_