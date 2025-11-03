#ifndef _com_sun_net_httpserver_HttpExchange_h_
#define _com_sun_net_httpserver_HttpExchange_h_
//$ class com.sun.net.httpserver.HttpExchange
//$ extends java.lang.AutoCloseable

#include <java/lang/AutoCloseable.h>

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				class Headers;
				class HttpContext;
				class HttpPrincipal;
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
	namespace net {
		class InetSocketAddress;
		class URI;
	}
}

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

class $export HttpExchange : public ::java::lang::AutoCloseable {
	$class(HttpExchange, $NO_CLASS_INIT, ::java::lang::AutoCloseable)
public:
	HttpExchange();
	virtual void close() override {}
	void init$();
	virtual $Object* getAttribute($String* name) {return nullptr;}
	virtual ::com::sun::net::httpserver::HttpContext* getHttpContext() {return nullptr;}
	virtual ::java::net::InetSocketAddress* getLocalAddress() {return nullptr;}
	virtual ::com::sun::net::httpserver::HttpPrincipal* getPrincipal() {return nullptr;}
	virtual $String* getProtocol() {return nullptr;}
	virtual ::java::net::InetSocketAddress* getRemoteAddress() {return nullptr;}
	virtual ::java::io::InputStream* getRequestBody() {return nullptr;}
	virtual ::com::sun::net::httpserver::Headers* getRequestHeaders() {return nullptr;}
	virtual $String* getRequestMethod() {return nullptr;}
	virtual ::java::net::URI* getRequestURI() {return nullptr;}
	virtual ::java::io::OutputStream* getResponseBody() {return nullptr;}
	virtual int32_t getResponseCode() {return 0;}
	virtual ::com::sun::net::httpserver::Headers* getResponseHeaders() {return nullptr;}
	virtual void sendResponseHeaders(int32_t rCode, int64_t responseLength) {}
	virtual void setAttribute($String* name, Object$* value) {}
	virtual void setStreams(::java::io::InputStream* i, ::java::io::OutputStream* o) {}
};

			} // httpserver
		} // net
	} // sun
} // com

#endif // _com_sun_net_httpserver_HttpExchange_h_