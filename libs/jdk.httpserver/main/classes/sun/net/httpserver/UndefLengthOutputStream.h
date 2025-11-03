#ifndef _sun_net_httpserver_UndefLengthOutputStream_h_
#define _sun_net_httpserver_UndefLengthOutputStream_h_
//$ class sun.net.httpserver.UndefLengthOutputStream
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

class UndefLengthOutputStream : public ::java::io::FilterOutputStream {
	$class(UndefLengthOutputStream, $NO_CLASS_INIT, ::java::io::FilterOutputStream)
public:
	UndefLengthOutputStream();
	void init$(::sun::net::httpserver::ExchangeImpl* t, ::java::io::OutputStream* src);
	virtual void close() override;
	using ::java::io::FilterOutputStream::write;
	virtual void write(int32_t b) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	bool closed = false;
	::sun::net::httpserver::ExchangeImpl* t = nullptr;
};

		} // httpserver
	} // net
} // sun

#endif // _sun_net_httpserver_UndefLengthOutputStream_h_