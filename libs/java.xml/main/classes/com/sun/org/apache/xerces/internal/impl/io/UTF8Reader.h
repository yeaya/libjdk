#ifndef _com_sun_org_apache_xerces_internal_impl_io_UTF8Reader_h_
#define _com_sun_org_apache_xerces_internal_impl_io_UTF8Reader_h_
//$ class com.sun.org.apache.xerces.internal.impl.io.UTF8Reader
//$ extends java.io.Reader

#include <java/io/Reader.h>
#include <java/lang/Array.h>

#pragma push_macro("DEBUG_READ")
#undef DEBUG_READ
#pragma push_macro("DEFAULT_BUFFER_SIZE")
#undef DEFAULT_BUFFER_SIZE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {
							class MessageFormatter;
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
		class Locale;
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

class UTF8Reader : public ::java::io::Reader {
	$class(UTF8Reader, $NO_CLASS_INIT, ::java::io::Reader)
public:
	UTF8Reader();
	void init$(::java::io::InputStream* inputStream);
	void init$(::java::io::InputStream* inputStream, ::com::sun::org::apache::xerces::internal::util::MessageFormatter* messageFormatter, ::java::util::Locale* locale);
	void init$(::java::io::InputStream* inputStream, int32_t size, ::com::sun::org::apache::xerces::internal::util::MessageFormatter* messageFormatter, ::java::util::Locale* locale);
	virtual void close() override;
	void expectedByte(int32_t position, int32_t count);
	void invalidByte(int32_t position, int32_t count, int32_t c);
	void invalidSurrogate(int32_t uuuuu);
	virtual void mark(int32_t readAheadLimit) override;
	virtual bool markSupported() override;
	using ::java::io::Reader::read;
	virtual int32_t read() override;
	virtual int32_t read($chars* ch, int32_t offset, int32_t length) override;
	virtual bool ready() override;
	virtual void reset() override;
	virtual int64_t skip(int64_t n) override;
	static const int32_t DEFAULT_BUFFER_SIZE = 2048;
	static const bool DEBUG_READ = false;
	::java::io::InputStream* fInputStream = nullptr;
	$bytes* fBuffer = nullptr;
	int32_t fOffset = 0;
	int32_t fSurrogate = 0;
	::com::sun::org::apache::xerces::internal::util::MessageFormatter* fFormatter = nullptr;
	::java::util::Locale* fLocale = nullptr;
};

							} // io
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEBUG_READ")
#pragma pop_macro("DEFAULT_BUFFER_SIZE")

#endif // _com_sun_org_apache_xerces_internal_impl_io_UTF8Reader_h_