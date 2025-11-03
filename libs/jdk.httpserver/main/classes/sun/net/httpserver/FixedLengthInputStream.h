#ifndef _sun_net_httpserver_FixedLengthInputStream_h_
#define _sun_net_httpserver_FixedLengthInputStream_h_
//$ class sun.net.httpserver.FixedLengthInputStream
//$ extends sun.net.httpserver.LeftOverInputStream

#include <java/lang/Array.h>
#include <sun/net/httpserver/LeftOverInputStream.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace sun {
	namespace net {
		namespace httpserver {
			class ExchangeImpl;
		}
	}
}

namespace sun {
	namespace net {
		namespace httpserver {

class FixedLengthInputStream : public ::sun::net::httpserver::LeftOverInputStream {
	$class(FixedLengthInputStream, $NO_CLASS_INIT, ::sun::net::httpserver::LeftOverInputStream)
public:
	FixedLengthInputStream();
	void init$(::sun::net::httpserver::ExchangeImpl* t, ::java::io::InputStream* src, int64_t len);
	virtual int32_t available() override;
	virtual void mark(int32_t l) override;
	virtual bool markSupported() override;
	using ::sun::net::httpserver::LeftOverInputStream::read;
	virtual int32_t readImpl($bytes* b, int32_t off, int32_t len) override;
	virtual void reset() override;
	int64_t remaining = 0;
};

		} // httpserver
	} // net
} // sun

#endif // _sun_net_httpserver_FixedLengthInputStream_h_