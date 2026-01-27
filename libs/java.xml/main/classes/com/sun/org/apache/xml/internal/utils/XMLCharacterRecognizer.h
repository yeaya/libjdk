#ifndef _com_sun_org_apache_xml_internal_utils_XMLCharacterRecognizer_h_
#define _com_sun_org_apache_xml_internal_utils_XMLCharacterRecognizer_h_
//$ class com.sun.org.apache.xml.internal.utils.XMLCharacterRecognizer
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class StringBuffer;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $export XMLCharacterRecognizer : public ::java::lang::Object {
	$class(XMLCharacterRecognizer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XMLCharacterRecognizer();
	void init$();
	static bool isWhiteSpace(char16_t ch);
	static bool isWhiteSpace($chars* ch, int32_t start, int32_t length);
	static bool isWhiteSpace(::java::lang::StringBuffer* buf);
	static bool isWhiteSpace($String* s);
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_XMLCharacterRecognizer_h_