#ifndef _com_sun_org_apache_xml_internal_serializer_WriterChain_h_
#define _com_sun_org_apache_xml_internal_serializer_WriterChain_h_
//$ interface com.sun.org.apache.xml.internal.serializer.WriterChain
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

class WriterChain : public ::java::lang::Object {
	$interface(WriterChain, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void close() {}
	virtual void flush() {}
	virtual ::java::io::OutputStream* getOutputStream() {return nullptr;}
	virtual ::java::io::Writer* getWriter() {return nullptr;}
	virtual void write(int32_t val) {}
	virtual void write($chars* chars) {}
	virtual void write($chars* chars, int32_t start, int32_t count) {}
	virtual void write($String* chars) {}
	virtual void write($String* chars, int32_t start, int32_t count) {}
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_WriterChain_h_