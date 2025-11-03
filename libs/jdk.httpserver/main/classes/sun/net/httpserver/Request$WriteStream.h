#ifndef _sun_net_httpserver_Request$WriteStream_h_
#define _sun_net_httpserver_Request$WriteStream_h_
//$ class sun.net.httpserver.Request$WriteStream
//$ extends java.io.OutputStream

#include <java/io/OutputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class SelectionKey;
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

class Request$WriteStream : public ::java::io::OutputStream {
	$class(Request$WriteStream, 0, ::java::io::OutputStream)
public:
	Request$WriteStream();
	void init$(::sun::net::httpserver::ServerImpl* server, ::java::nio::channels::SocketChannel* channel);
	virtual void close() override;
	virtual void write(int32_t b) override;
	virtual void write($bytes* b) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	static bool $assertionsDisabled;
	::java::nio::channels::SocketChannel* channel = nullptr;
	::java::nio::ByteBuffer* buf = nullptr;
	::java::nio::channels::SelectionKey* key = nullptr;
	bool closed = false;
	$bytes* one = nullptr;
	::sun::net::httpserver::ServerImpl* server = nullptr;
};

		} // httpserver
	} // net
} // sun

#endif // _sun_net_httpserver_Request$WriteStream_h_