#ifndef _com_sun_org_apache_xml_internal_serializer_EncodingInfo_h_
#define _com_sun_org_apache_xml_internal_serializer_EncodingInfo_h_
//$ class com.sun.org.apache.xml.internal.serializer.EncodingInfo
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							class EncodingInfo$InEncoding;
						}
					}
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

class EncodingInfo : public ::java::lang::Object {
	$class(EncodingInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	EncodingInfo();
	void init$($String* name, $String* javaName);
	static bool inEncoding(char16_t ch, $String* encoding);
	static bool inEncoding(char16_t high, char16_t low, $String* encoding);
	static bool inEncoding(char16_t ch, $bytes* data);
	bool isInEncoding(char16_t ch);
	bool isInEncoding(char16_t high, char16_t low);
	$String* name = nullptr;
	$String* javaName = nullptr;
	::com::sun::org::apache::xml::internal::serializer::EncodingInfo$InEncoding* m_encoding = nullptr;
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_EncodingInfo_h_