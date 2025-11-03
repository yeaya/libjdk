#ifndef _sun_net_httpserver_SSLStreams$InputStream_h_
#define _sun_net_httpserver_SSLStreams$InputStream_h_
//$ class sun.net.httpserver.SSLStreams$InputStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace sun {
	namespace net {
		namespace httpserver {
			class SSLStreams;
		}
	}
}

namespace sun {
	namespace net {
		namespace httpserver {

class SSLStreams$InputStream : public ::java::io::InputStream {
	$class(SSLStreams$InputStream, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	SSLStreams$InputStream();
	void init$(::sun::net::httpserver::SSLStreams* this$0);
	virtual int32_t available() override;
	virtual void close() override;
	virtual bool markSupported() override;
	virtual int32_t read($bytes* buf, int32_t off, int32_t len) override;
	virtual int32_t read($bytes* buf) override;
	virtual int32_t read() override;
	virtual void reset() override;
	virtual int64_t skip(int64_t s) override;
	::sun::net::httpserver::SSLStreams* this$0 = nullptr;
	::java::nio::ByteBuffer* bbuf = nullptr;
	bool closed = false;
	bool eof = false;
	bool needData = false;
	$bytes* single = nullptr;
};

		} // httpserver
	} // net
} // sun

#endif // _sun_net_httpserver_SSLStreams$InputStream_h_