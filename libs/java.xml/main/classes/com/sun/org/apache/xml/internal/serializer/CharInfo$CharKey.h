#ifndef _com_sun_org_apache_xml_internal_serializer_CharInfo$CharKey_h_
#define _com_sun_org_apache_xml_internal_serializer_CharInfo$CharKey_h_
//$ class com.sun.org.apache.xml.internal.serializer.CharInfo$CharKey
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

class CharInfo$CharKey : public ::java::lang::Object {
	$class(CharInfo$CharKey, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CharInfo$CharKey();
	void init$(char16_t key);
	void init$();
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	void setChar(char16_t c);
	char16_t m_char = 0;
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_CharInfo$CharKey_h_