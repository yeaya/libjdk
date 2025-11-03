#ifndef _sun_net_httpserver_FixedLengthOutputStream_h_
#define _sun_net_httpserver_FixedLengthOutputStream_h_
//$ class sun.net.httpserver.FixedLengthOutputStream
//$ extends java.io.FilterOutputStream

#include <java/io/FilterOutputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class OutputStream;
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

class FixedLengthOutputStream : public ::java::io::FilterOutputStream {
	$class(FixedLengthOutputStream, $NO_CLASS_INIT, ::java::io::FilterOutputStream)
public:
	FixedLengthOutputStream();
	void init$(::sun::net::httpserver::ExchangeImpl* t, ::java::io::OutputStream* src, int64_t len);
	virtual void close() override;
	using ::java::io::FilterOutputStream::write;
	virtual void write(int32_t b) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	int64_t remaining = 0;
	bool eof = false;
	bool closed = false;
	::sun::net::httpserver::ExchangeImpl* t = nullptr;
};

		} // httpserver
	} // net
} // sun

#endif // _sun_net_httpserver_FixedLengthOutputStream_h_