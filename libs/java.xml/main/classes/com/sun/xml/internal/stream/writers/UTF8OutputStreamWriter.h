#ifndef _com_sun_xml_internal_stream_writers_UTF8OutputStreamWriter_h_
#define _com_sun_xml_internal_stream_writers_UTF8OutputStreamWriter_h_
//$ class com.sun.xml.internal.stream.writers.UTF8OutputStreamWriter
//$ extends java.io.Writer

#include <java/io/Writer.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace writers {

class UTF8OutputStreamWriter : public ::java::io::Writer {
	$class(UTF8OutputStreamWriter, $NO_CLASS_INIT, ::java::io::Writer)
public:
	UTF8OutputStreamWriter();
	void init$(::java::io::OutputStream* out);
	virtual void close() override;
	virtual void flush() override;
	$String* getEncoding();
	virtual void write(int32_t c) override;
	virtual void write($chars* cbuf) override;
	virtual void write($chars* cbuf, int32_t off, int32_t len) override;
	virtual void write($String* str) override;
	virtual void write($String* str, int32_t off, int32_t len) override;
	::java::io::OutputStream* out = nullptr;
	int32_t lastUTF16CodePoint = 0;
};

					} // writers
				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_writers_UTF8OutputStreamWriter_h_