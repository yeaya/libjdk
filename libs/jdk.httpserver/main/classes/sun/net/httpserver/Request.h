#ifndef _sun_net_httpserver_Request_h_
#define _sun_net_httpserver_Request_h_
//$ class sun.net.httpserver.Request
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BUF_LEN")
#undef BUF_LEN
#pragma push_macro("CR")
#undef CR
#pragma push_macro("LF")
#undef LF

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				class Headers;
			}
		}
	}
}
namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		class StringBuffer;
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

class Request : public ::java::lang::Object {
	$class(Request, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Request();
	void init$(::java::io::InputStream* rawInputStream, ::java::io::OutputStream* rawout);
	void consume(int32_t c);
	virtual ::com::sun::net::httpserver::Headers* headers();
	virtual ::java::io::InputStream* inputStream();
	virtual ::java::io::OutputStream* outputStream();
	virtual $String* readLine();
	virtual $String* requestLine();
	static const int32_t BUF_LEN = 2048;
	static const int8_t CR = 13;
	static const int8_t LF = 10;
	$String* startLine = nullptr;
	::java::nio::channels::SocketChannel* chan = nullptr;
	::java::io::InputStream* is = nullptr;
	::java::io::OutputStream* os = nullptr;
	$chars* buf = nullptr;
	int32_t pos = 0;
	::java::lang::StringBuffer* lineBuf = nullptr;
	::com::sun::net::httpserver::Headers* hdrs = nullptr;
};

		} // httpserver
	} // net
} // sun

#pragma pop_macro("BUF_LEN")
#pragma pop_macro("CR")
#pragma pop_macro("LF")

#endif // _sun_net_httpserver_Request_h_