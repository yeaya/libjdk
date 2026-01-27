#ifndef _com_sun_org_apache_xml_internal_utils_res_StringArrayWrapper_h_
#define _com_sun_org_apache_xml_internal_utils_res_StringArrayWrapper_h_
//$ class com.sun.org.apache.xml.internal.utils.res.StringArrayWrapper
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							namespace res {

class StringArrayWrapper : public ::java::lang::Object {
	$class(StringArrayWrapper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StringArrayWrapper();
	void init$($StringArray* arg);
	virtual int32_t getLength();
	virtual $String* getString(int32_t index);
	$StringArray* m_string = nullptr;
};

							} // res
						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_res_StringArrayWrapper_h_