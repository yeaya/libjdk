#ifndef _com_sun_org_apache_xml_internal_serializer_Encodings_h_
#define _com_sun_org_apache_xml_internal_serializer_Encodings_h_
//$ class com.sun.org.apache.xml.internal.serializer.Encodings
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEFAULT_MIME_ENCODING")
#undef DEFAULT_MIME_ENCODING
#pragma push_macro("ENCODINGS_FILE")
#undef ENCODINGS_FILE
#pragma push_macro("ENCODINGS_PROP")
#undef ENCODINGS_PROP

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							class EncodingInfo;
							class Encodings$EncodingInfos;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class OutputStream;
		class Writer;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

class Encodings : public ::java::lang::Object {
	$class(Encodings, 0, ::java::lang::Object)
public:
	Encodings();
	void init$();
	static $String* convertJava2MimeEncoding($String* encoding);
	static $String* convertMime2JavaEncoding($String* encoding);
	static ::com::sun::org::apache::xml::internal::serializer::EncodingInfo* getEncodingInfo($String* encoding);
	static int32_t getLastPrintable();
	static $String* getMimeEncoding($String* encoding);
	static ::java::io::Writer* getWriter(::java::io::OutputStream* output, $String* encoding);
	static bool isHighUTF16Surrogate(char16_t ch);
	static bool isLowUTF16Surrogate(char16_t ch);
	static bool isRecognizedEncoding($String* encoding);
	static int32_t toCodePoint(char16_t highSurrogate, char16_t lowSurrogate);
	static int32_t toCodePoint(char16_t ch);
	static $String* toUpperCaseFast($String* s);
	static const int32_t m_defaultLastPrintable = 127;
	static $String* ENCODINGS_FILE;
	static $String* ENCODINGS_PROP;
	static $String* DEFAULT_MIME_ENCODING;
	static ::com::sun::org::apache::xml::internal::serializer::Encodings$EncodingInfos* _encodingInfos;
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEFAULT_MIME_ENCODING")
#pragma pop_macro("ENCODINGS_FILE")
#pragma pop_macro("ENCODINGS_PROP")

#endif // _com_sun_org_apache_xml_internal_serializer_Encodings_h_