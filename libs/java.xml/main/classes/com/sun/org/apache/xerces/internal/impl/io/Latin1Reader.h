#ifndef _com_sun_org_apache_xerces_internal_impl_io_Latin1Reader_h_
#define _com_sun_org_apache_xerces_internal_impl_io_Latin1Reader_h_
//$ class com.sun.org.apache.xerces.internal.impl.io.Latin1Reader
//$ extends java.io.Reader

#include <java/io/Reader.h>
#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_BUFFER_SIZE")
#undef DEFAULT_BUFFER_SIZE

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

class Latin1Reader : public ::java::io::Reader {
	$class(Latin1Reader, $NO_CLASS_INIT, ::java::io::Reader)
public:
	Latin1Reader();
	void init$(::java::io::InputStream* inputStream);
	void init$(::java::io::InputStream* inputStream, int32_t size);
	void init$(::java::io::InputStream* inputStream, $bytes* buffer);
	virtual void close() override;
	virtual void mark(int32_t readAheadLimit) override;
	virtual bool markSupported() override;
	using ::java::io::Reader::read;
	virtual int32_t read() override;
	virtual int32_t read($chars* ch, int32_t offset, int32_t length) override;
	virtual bool ready() override;
	virtual void reset() override;
	virtual int64_t skip(int64_t n) override;
	static const int32_t DEFAULT_BUFFER_SIZE = 2048;
	::java::io::InputStream* fInputStream = nullptr;
	$bytes* fBuffer = nullptr;
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

#endif // _com_sun_org_apache_xerces_internal_impl_io_Latin1Reader_h_