#ifndef _com_sun_org_apache_xml_internal_utils_res_IntArrayWrapper_h_
#define _com_sun_org_apache_xml_internal_utils_res_IntArrayWrapper_h_
//$ class com.sun.org.apache.xml.internal.utils.res.IntArrayWrapper
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

class IntArrayWrapper : public ::java::lang::Object {
	$class(IntArrayWrapper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	IntArrayWrapper();
	void init$($ints* arg);
	virtual int32_t getInt(int32_t index);
	virtual int32_t getLength();
	$ints* m_int = nullptr;
};

							} // res
						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_res_IntArrayWrapper_h_