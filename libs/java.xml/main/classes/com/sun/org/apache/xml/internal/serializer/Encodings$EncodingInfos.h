#ifndef _com_sun_org_apache_xml_internal_serializer_Encodings$EncodingInfos_h_
#define _com_sun_org_apache_xml_internal_serializer_Encodings$EncodingInfos_h_
//$ class com.sun.org.apache.xml.internal.serializer.Encodings$EncodingInfos
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							class EncodingInfo;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace util {
		class Map;
		class Properties;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

class Encodings$EncodingInfos : public ::java::lang::Object {
	$class(Encodings$EncodingInfos, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Encodings$EncodingInfos();
	void init$();
	$String* findCharsetNameFor($String* name);
	$String* findCharsetNameFor($String* javaName, $StringArray* mimes);
	::com::sun::org::apache::xml::internal::serializer::EncodingInfo* findEncoding($String* normalizedEncoding);
	::com::sun::org::apache::xml::internal::serializer::EncodingInfo* getEncodingFromJavaKey($String* normalizedJavaName);
	::com::sun::org::apache::xml::internal::serializer::EncodingInfo* getEncodingFromMimeKey($String* normalizedMimeName);
	void loadEncodingInfo();
	::java::util::Properties* loadProperties();
	::java::io::InputStream* openEncodingsFileStream();
	$StringArray* parseMimeTypes($String* val);
	void putEncoding($String* key, ::com::sun::org::apache::xml::internal::serializer::EncodingInfo* info);
	::java::util::Map* _encodingTableKeyJava = nullptr;
	::java::util::Map* _encodingTableKeyMime = nullptr;
	::java::util::Map* _encodingDynamicTable = nullptr;
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_Encodings$EncodingInfos_h_