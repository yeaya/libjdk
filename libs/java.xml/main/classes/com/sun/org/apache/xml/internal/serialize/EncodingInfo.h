#ifndef _com_sun_org_apache_xml_internal_serialize_EncodingInfo_h_
#define _com_sun_org_apache_xml_internal_serialize_EncodingInfo_h_
//$ class com.sun.org.apache.xml.internal.serialize.EncodingInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class OutputStream;
		class Writer;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class CharsetEncoder;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {

class EncodingInfo : public ::java::lang::Object {
	$class(EncodingInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	EncodingInfo();
	void init$($String* ianaName, $String* javaName, int32_t lastPrintable);
	virtual $String* getIANAName();
	virtual ::java::io::Writer* getWriter(::java::io::OutputStream* output);
	virtual bool isPrintable(char16_t ch);
	bool isPrintable0(char16_t ch);
	static void testJavaEncodingName($String* name);
	$String* ianaName = nullptr;
	$String* javaName = nullptr;
	int32_t lastPrintable = 0;
	::java::nio::charset::CharsetEncoder* fCharsetEncoder = nullptr;
	bool fHaveTriedCharsetEncoder = false;
};

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serialize_EncodingInfo_h_