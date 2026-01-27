#ifndef _com_sun_org_apache_xml_internal_serializer_WriterToUTF8Buffered_h_
#define _com_sun_org_apache_xml_internal_serializer_WriterToUTF8Buffered_h_
//$ class com.sun.org.apache.xml.internal.serializer.WriterToUTF8Buffered
//$ extends java.io.Writer
//$ implements com.sun.org.apache.xml.internal.serializer.WriterChain

#include <com/sun/org/apache/xml/internal/serializer/WriterChain.h>
#include <java/io/Writer.h>
#include <java/lang/Array.h>

#pragma push_macro("BYTES_MAX")
#undef BYTES_MAX
#pragma push_macro("CHARS_MAX")
#undef CHARS_MAX

namespace java {
	namespace io {
		class OutputStream;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

class WriterToUTF8Buffered : public ::java::io::Writer, public ::com::sun::org::apache::xml::internal::serializer::WriterChain {
	$class(WriterToUTF8Buffered, $NO_CLASS_INIT, ::java::io::Writer, ::com::sun::org::apache::xml::internal::serializer::WriterChain)
public:
	WriterToUTF8Buffered();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::io::OutputStream* out);
	virtual void close() override;
	virtual void flush() override;
	void flushBuffer();
	virtual ::java::io::OutputStream* getOutputStream() override;
	virtual ::java::io::Writer* getWriter() override;
	virtual $String* toString() override;
	virtual void write($chars* arg0) override;
	virtual void write($String* arg0, int32_t arg1, int32_t arg2) override;
	virtual void write(int32_t c) override;
	virtual void write($chars* chars, int32_t start, int32_t length) override;
	virtual void write($String* s) override;
	static const int32_t BYTES_MAX = 16384; // 16 * 1024
	static const int32_t CHARS_MAX = 5461; // (BYTES_MAX / 3)
	::java::io::OutputStream* m_os = nullptr;
	$bytes* m_outputBytes = nullptr;
	$chars* m_inputChars = nullptr;
	int32_t count = 0;
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("BYTES_MAX")
#pragma pop_macro("CHARS_MAX")

#endif // _com_sun_org_apache_xml_internal_serializer_WriterToUTF8Buffered_h_