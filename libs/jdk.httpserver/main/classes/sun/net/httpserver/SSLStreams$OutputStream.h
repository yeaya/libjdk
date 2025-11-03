#ifndef _sun_net_httpserver_SSLStreams$OutputStream_h_
#define _sun_net_httpserver_SSLStreams$OutputStream_h_
//$ class sun.net.httpserver.SSLStreams$OutputStream
//$ extends java.io.OutputStream

#include <java/io/OutputStream.h>
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

class SSLStreams$OutputStream : public ::java::io::OutputStream {
	$class(SSLStreams$OutputStream, 0, ::java::io::OutputStream)
public:
	SSLStreams$OutputStream();
	void init$(::sun::net::httpserver::SSLStreams* this$0);
	virtual void close() override;
	virtual void flush() override;
	virtual void write(int32_t b) override;
	virtual void write($bytes* b) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	::sun::net::httpserver::SSLStreams* this$0 = nullptr;
	static bool $assertionsDisabled;
	::java::nio::ByteBuffer* buf = nullptr;
	bool closed = false;
	$bytes* single = nullptr;
};

		} // httpserver
	} // net
} // sun

#endif // _sun_net_httpserver_SSLStreams$OutputStream_h_