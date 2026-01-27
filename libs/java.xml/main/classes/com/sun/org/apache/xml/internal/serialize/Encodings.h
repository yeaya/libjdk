#ifndef _com_sun_org_apache_xml_internal_serialize_Encodings_h_
#define _com_sun_org_apache_xml_internal_serialize_Encodings_h_
//$ class com.sun.org.apache.xml.internal.serialize.Encodings
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_ENCODING")
#undef DEFAULT_ENCODING
#pragma push_macro("DEFAULT_LAST_PRINTABLE")
#undef DEFAULT_LAST_PRINTABLE
#pragma push_macro("JIS_DANGER_CHARS")
#undef JIS_DANGER_CHARS
#pragma push_macro("LAST_PRINTABLE_UNICODE")
#undef LAST_PRINTABLE_UNICODE
#pragma push_macro("UNICODE_ENCODINGS")
#undef UNICODE_ENCODINGS

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {
							class EncodingInfo;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {

class Encodings : public ::java::lang::Object {
	$class(Encodings, 0, ::java::lang::Object)
public:
	Encodings();
	void init$();
	static ::com::sun::org::apache::xml::internal::serialize::EncodingInfo* getEncodingInfo($String* encoding, bool allowJavaNames);
	static const int32_t DEFAULT_LAST_PRINTABLE = 127;
	static const int32_t LAST_PRINTABLE_UNICODE = 0x0000FFFF;
	static $StringArray* UNICODE_ENCODINGS;
	static $String* DEFAULT_ENCODING;
	static ::java::util::Map* _encodings;
	static $String* JIS_DANGER_CHARS;
};

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEFAULT_ENCODING")
#pragma pop_macro("DEFAULT_LAST_PRINTABLE")
#pragma pop_macro("JIS_DANGER_CHARS")
#pragma pop_macro("LAST_PRINTABLE_UNICODE")
#pragma pop_macro("UNICODE_ENCODINGS")

#endif // _com_sun_org_apache_xml_internal_serialize_Encodings_h_