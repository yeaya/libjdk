#ifndef _com_sun_org_apache_xml_internal_utils_CharKey_h_
#define _com_sun_org_apache_xml_internal_utils_CharKey_h_
//$ class com.sun.org.apache.xml.internal.utils.CharKey
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $import CharKey : public ::java::lang::Object {
	$class(CharKey, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CharKey();
	void init$(char16_t key);
	void init$();
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	void setChar(char16_t c);
	char16_t m_char = 0;
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_CharKey_h_