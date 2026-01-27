#ifndef _com_sun_org_apache_xerces_internal_impl_io_UCSReader_h_
#define _com_sun_org_apache_xerces_internal_impl_io_UCSReader_h_
//$ class com.sun.org.apache.xerces.internal.impl.io.UCSReader
//$ extends java.io.Reader

#include <java/io/Reader.h>
#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_BUFFER_SIZE")
#undef DEFAULT_BUFFER_SIZE
#pragma push_macro("UCS2BE")
#undef UCS2BE
#pragma push_macro("UCS2LE")
#undef UCS2LE
#pragma push_macro("UCS4BE")
#undef UCS4BE
#pragma push_macro("UCS4LE")
#undef UCS4LE

namespace java {
	namespace io {
		class InputStream;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace io {

class UCSReader : public ::java::io::Reader {
	$class(UCSReader, $NO_CLASS_INIT, ::java::io::Reader)
public:
	UCSReader();
	void init$(::java::io::InputStream* inputStream, int16_t encoding);
	void init$(::java::io::InputStream* inputStream, int32_t size, int16_t encoding);
	virtual void close() override;
	virtual void mark(int32_t readAheadLimit) override;
	virtual bool markSupported() override;
	using ::java::io::Reader::read;
	virtual int32_t read() override;
	virtual int32_t read($chars* ch, int32_t offset, int32_t length) override;
	virtual bool ready() override;
	virtual void reset() override;
	virtual int64_t skip(int64_t n) override;
	static const int32_t DEFAULT_BUFFER_SIZE = 8192;
	static const int16_t UCS2LE = 1;
	static const int16_t UCS2BE = 2;
	static const int16_t UCS4LE = 4;
	static const int16_t UCS4BE = 8;
	::java::io::InputStream* fInputStream = nullptr;
	$bytes* fBuffer = nullptr;
	int16_t fEncoding = 0;
};

							} // io
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEFAULT_BUFFER_SIZE")
#pragma pop_macro("UCS2BE")
#pragma pop_macro("UCS2LE")
#pragma pop_macro("UCS4BE")
#pragma pop_macro("UCS4LE")

#endif // _com_sun_org_apache_xerces_internal_impl_io_UCSReader_h_