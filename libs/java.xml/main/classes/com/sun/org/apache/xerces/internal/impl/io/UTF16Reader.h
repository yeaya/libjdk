#ifndef _com_sun_org_apache_xerces_internal_impl_io_UTF16Reader_h_
#define _com_sun_org_apache_xerces_internal_impl_io_UTF16Reader_h_
//$ class com.sun.org.apache.xerces.internal.impl.io.UTF16Reader
//$ extends java.io.Reader

#include <java/io/Reader.h>
#include <java/lang/Array.h>

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

class UTF16Reader : public ::java::io::Reader {
	$class(UTF16Reader, $NO_CLASS_INIT, ::java::io::Reader)
public:
	UTF16Reader();
	void init$(::java::io::InputStream* inputStream, bool isBigEndian);
	void init$(::java::io::InputStream* inputStream, bool isBigEndian, ::com::sun::org::apache::xerces::internal::util::MessageFormatter* messageFormatter, ::java::util::Locale* locale);
	void init$(::java::io::InputStream* inputStream, int32_t size, bool isBigEndian, ::com::sun::org::apache::xerces::internal::util::MessageFormatter* messageFormatter, ::java::util::Locale* locale);
	void init$(::java::io::InputStream* inputStream, $bytes* buffer, bool isBigEndian, ::com::sun::org::apache::xerces::internal::util::MessageFormatter* messageFormatter, ::java::util::Locale* locale);
	virtual void close() override;
	void expectedTwoBytes();
	virtual void mark(int32_t readAheadLimit) override;
	virtual bool markSupported() override;
	void processBE($chars* ch, int32_t offset, int32_t count);
	void processLE($chars* ch, int32_t offset, int32_t count);
	using ::java::io::Reader::read;
	virtual int32_t read() override;
	virtual int32_t read($chars* ch, int32_t offset, int32_t length) override;
	virtual bool ready() override;
	virtual void reset() override;
	virtual int64_t skip(int64_t n) override;
	static const int32_t DEFAULT_BUFFER_SIZE = 4096;
	::java::io::InputStream* fInputStream = nullptr;
	$bytes* fBuffer = nullptr;
	bool fIsBigEndian = false;
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

#pragma pop_macro("DEFAULT_BUFFER_SIZE")

#endif // _com_sun_org_apache_xerces_internal_impl_io_UTF16Reader_h_