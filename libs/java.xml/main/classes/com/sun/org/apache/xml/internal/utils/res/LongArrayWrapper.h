#ifndef _com_sun_org_apache_xml_internal_utils_res_LongArrayWrapper_h_
#define _com_sun_org_apache_xml_internal_utils_res_LongArrayWrapper_h_
//$ class com.sun.org.apache.xml.internal.utils.res.LongArrayWrapper
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

class LongArrayWrapper : public ::java::lang::Object {
	$class(LongArrayWrapper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LongArrayWrapper();
	void init$($longs* arg);
	virtual int32_t getLength();
	virtual int64_t getLong(int32_t index);
	$longs* m_long = nullptr;
};

							} // res
						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_res_LongArrayWrapper_h_