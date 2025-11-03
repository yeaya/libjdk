#ifndef _sun_net_httpserver_HttpExchangeImpl_h_
#define _sun_net_httpserver_HttpExchangeImpl_h_
//$ class sun.net.httpserver.HttpExchangeImpl
//$ extends com.sun.net.httpserver.HttpExchange

#include <com/sun/net/httpserver/HttpExchange.h>

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

class HttpExchangeImpl : public ::com::sun::net::httpserver::HttpExchange {
	$class(HttpExchangeImpl, $NO_CLASS_INIT, ::com::sun::net::httpserver::HttpExchange)
public:
	HttpExchangeImpl();
	void init$(::sun::net::httpserver::ExchangeImpl* impl);
	virtual void close() override;
	virtual $Object* getAttribute($String* name) override;
	virtual ::sun::net::httpserver::ExchangeImpl* getExchangeImpl();
	virtual ::com::sun::net::httpserver::HttpContext* getHttpContext() override;
	virtual ::java::net::InetSocketAddress* getLocalAddress() override;
	virtual ::com::sun::net::httpserver::HttpPrincipal* getPrincipal() override;
	virtual $String* getProtocol() override;
	virtual ::java::net::InetSocketAddress* getRemoteAddress() override;
	virtual ::java::io::InputStream* getRequestBody() override;
	virtual ::com::sun::net::httpserver::Headers* getRequestHeaders() override;
	virtual $String* getRequestMethod() override;
	virtual ::java::net::URI* getRequestURI() override;
	virtual ::java::io::OutputStream* getResponseBody() override;
	virtual int32_t getResponseCode() override;
	virtual ::com::sun::net::httpserver::Headers* getResponseHeaders() override;
	virtual void sendResponseHeaders(int32_t rCode, int64_t contentLen) override;
	virtual void setAttribute($String* name, Object$* value) override;
	virtual void setStreams(::java::io::InputStream* i, ::java::io::OutputStream* o) override;
	::sun::net::httpserver::ExchangeImpl* impl = nullptr;
};

		} // httpserver
	} // net
} // sun

#endif // _sun_net_httpserver_HttpExchangeImpl_h_