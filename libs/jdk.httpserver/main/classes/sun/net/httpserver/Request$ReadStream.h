#ifndef _sun_net_httpserver_Request$ReadStream_h_
#define _sun_net_httpserver_Request$ReadStream_h_
//$ class sun.net.httpserver.Request$ReadStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

#pragma push_macro("BUFSIZE")
#undef BUFSIZE

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class SocketChannel;
		}
	}
}
namespace sun {
	namespace net {
		namespace httpserver {
			class ServerImpl;
		}
	}
}

namespace sun {
	namespace net {
		namespace httpserver {

class Request$ReadStream : public ::java::io::InputStream {
	$class(Request$ReadStream, 0, ::java::io::InputStream)
public:
	Request$ReadStream();
	void init$(::sun::net::httpserver::ServerImpl* server, ::java::nio::channels::SocketChannel* chan);
	virtual int32_t available() override;
	virtual void close() override;
	virtual void mark(int32_t readlimit) override;
	virtual bool markSupported() override;
	virtual int32_t read($bytes* b) override;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t srclen) override;
	virtual void reset() override;
	static bool $assertionsDisabled;
	::java::nio::channels::SocketChannel* channel = nullptr;
	::java::nio::ByteBuffer* chanbuf = nullptr;
	$bytes* one = nullptr;
	bool closed = false;
	bool eof = false;
	::java::nio::ByteBuffer* markBuf = nullptr;
	bool marked = false;
	bool reset$ = false;
	int32_t readlimit = 0;
	static int64_t readTimeout;
	::sun::net::httpserver::ServerImpl* server = nullptr;
	static const int32_t BUFSIZE = 8192; // 8 * 1024
};

		} // httpserver
	} // net
} // sun

#pragma pop_macro("BUFSIZE")

#endif // _sun_net_httpserver_Request$ReadStream_h_