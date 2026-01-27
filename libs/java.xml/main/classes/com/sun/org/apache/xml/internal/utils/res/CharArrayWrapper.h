#ifndef _com_sun_org_apache_xml_internal_utils_res_CharArrayWrapper_h_
#define _com_sun_org_apache_xml_internal_utils_res_CharArrayWrapper_h_
//$ class com.sun.org.apache.xml.internal.utils.res.CharArrayWrapper
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

class CharArrayWrapper : public ::java::lang::Object {
	$class(CharArrayWrapper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CharArrayWrapper();
	void init$($chars* arg);
	virtual char16_t getChar(int32_t index);
	virtual int32_t getLength();
	$chars* m_char = nullptr;
};

							} // res
						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_res_CharArrayWrapper_h_