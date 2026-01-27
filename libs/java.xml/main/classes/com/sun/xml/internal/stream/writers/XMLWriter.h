#ifndef _com_sun_xml_internal_stream_writers_XMLWriter_h_
#define _com_sun_xml_internal_stream_writers_XMLWriter_h_
//$ class com.sun.xml.internal.stream.writers.XMLWriter
//$ extends java.io.Writer

#include <java/io/Writer.h>
#include <java/lang/Array.h>

#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("THRESHHOLD_LENGTH")
#undef THRESHHOLD_LENGTH

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {
							class XMLStringBuffer;
						}
					}
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace writers {

class XMLWriter : public ::java::io::Writer {
	$class(XMLWriter, $NO_CLASS_INIT, ::java::io::Writer)
public:
	XMLWriter();
	void init$(::java::io::Writer* writer);
	void init$(::java::io::Writer* writer, int32_t size);
	virtual void close() override;
	void conditionalWrite();
	void ensureOpen();
	virtual void flush() override;
	virtual ::java::io::Writer* getWriter();
	virtual void reset();
	virtual void setWriter(::java::io::Writer* writer);
	virtual void setWriter(::java::io::Writer* writer, int32_t size);
	virtual void write(int32_t c) override;
	virtual void write($chars* cbuf) override;
	virtual void write($chars* cbuf, int32_t off, int32_t len) override;
	virtual void write($String* str, int32_t off, int32_t len) override;
	virtual void write($String* str) override;
	void writeBufferedData();
	::java::io::Writer* writer = nullptr;
	int32_t size = 0;
	::com::sun::org::apache::xerces::internal::util::XMLStringBuffer* buffer = nullptr;
	static const int32_t THRESHHOLD_LENGTH = 4096; // 1 << 12
	static const bool DEBUG = false;
};

					} // writers
				} // stream
			} // internal
		} // xml
	} // sun
} // com

#pragma pop_macro("DEBUG")
#pragma pop_macro("THRESHHOLD_LENGTH")

#endif // _com_sun_xml_internal_stream_writers_XMLWriter_h_