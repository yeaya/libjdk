#ifndef _sun_net_httpserver_LeftOverInputStream_h_
#define _sun_net_httpserver_LeftOverInputStream_h_
//$ class sun.net.httpserver.LeftOverInputStream
//$ extends java.io.FilterInputStream

#include <java/io/FilterInputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace sun {
	namespace net {
		namespace httpserver {
			class ExchangeImpl;
			class ServerImpl;
		}
	}
}

namespace sun {
	namespace net {
		namespace httpserver {

class LeftOverInputStream : public ::java::io::FilterInputStream {
	$class(LeftOverInputStream, 0, ::java::io::FilterInputStream)
public:
	LeftOverInputStream();
	void init$(::sun::net::httpserver::ExchangeImpl* t, ::java::io::InputStream* src);
	virtual void close() override;
	virtual bool drain(int64_t l);
	virtual bool isClosed();
	virtual bool isDataBuffered();
	virtual bool isEOF();
	using ::java::io::FilterInputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	virtual int32_t readImpl($bytes* b, int32_t off, int32_t len) {return 0;}
	static bool $assertionsDisabled;
	::sun::net::httpserver::ExchangeImpl* t = nullptr;
	::sun::net::httpserver::ServerImpl* server = nullptr;
	bool closed = false;
	bool eof = false;
	$bytes* one = nullptr;
};

		} // httpserver
	} // net
} // sun

#endif // _sun_net_httpserver_LeftOverInputStream_h_