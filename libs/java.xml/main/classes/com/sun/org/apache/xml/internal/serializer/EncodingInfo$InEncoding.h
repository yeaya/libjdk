#ifndef _com_sun_org_apache_xml_internal_serializer_EncodingInfo$InEncoding_h_
#define _com_sun_org_apache_xml_internal_serializer_EncodingInfo$InEncoding_h_
//$ interface com.sun.org.apache.xml.internal.serializer.EncodingInfo$InEncoding
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

class EncodingInfo$InEncoding : public ::java::lang::Object {
	$interface(EncodingInfo$InEncoding, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool isInEncoding(char16_t ch) {return false;}
	virtual bool isInEncoding(char16_t high, char16_t low) {return false;}
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_EncodingInfo$InEncoding_h_