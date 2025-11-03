#ifndef _sun_net_httpserver_ExchangeImpl_h_
#define _sun_net_httpserver_ExchangeImpl_h_
//$ class sun.net.httpserver.ExchangeImpl
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("FORMATTER")
#undef FORMATTER
#pragma push_macro("HEAD")
#undef HEAD

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				class Headers;
				class HttpExchange;
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
	namespace lang {
		class Thread;
	}
}
namespace java {
	namespace net {
		class InetSocketAddress;
		class URI;
	}
}
namespace java {
	namespace time {
		namespace format {
			class DateTimeFormatter;
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class SSLSession;
		}
	}
}
namespace sun {
	namespace net {
		namespace httpserver {
			class HttpConnection;
			class HttpContextImpl;
			class LeftOverInputStream;
			class PlaceholderOutputStream;
			class Request;
			class ServerImpl;
		}
	}
}

namespace sun {
	namespace net {
		namespace httpserver {

class ExchangeImpl : public ::java::lang::Object {
	$class(ExchangeImpl, 0, ::java::lang::Object)
public:
	ExchangeImpl();
	void init$($String* m, ::java::net::URI* u, ::sun::net::httpserver::Request* req, int64_t len, ::sun::net::httpserver::HttpConnection* connection);
	$bytes* bytes($String* s, int32_t extra);
	virtual void close();
	static ::sun::net::httpserver::ExchangeImpl* get(::com::sun::net::httpserver::HttpExchange* t);
	virtual $Object* getAttribute($String* name);
	virtual ::sun::net::httpserver::HttpConnection* getConnection();
	virtual ::sun::net::httpserver::HttpContextImpl* getHttpContext();
	virtual ::java::net::InetSocketAddress* getLocalAddress();
	virtual ::sun::net::httpserver::LeftOverInputStream* getOriginalInputStream();
	virtual ::sun::net::httpserver::PlaceholderOutputStream* getPlaceholderResponseBody();
	virtual ::com::sun::net::httpserver::HttpPrincipal* getPrincipal();
	virtual $String* getProtocol();
	virtual ::java::net::InetSocketAddress* getRemoteAddress();
	virtual ::java::io::InputStream* getRequestBody();
	virtual ::com::sun::net::httpserver::Headers* getRequestHeaders();
	virtual $String* getRequestMethod();
	virtual ::java::net::URI* getRequestURI();
	virtual ::java::io::OutputStream* getResponseBody();
	virtual int32_t getResponseCode();
	virtual ::com::sun::net::httpserver::Headers* getResponseHeaders();
	virtual ::javax::net::ssl::SSLSession* getSSLSession();
	virtual ::sun::net::httpserver::ServerImpl* getServerImpl();
	bool isHeadRequest();
	virtual void sendResponseHeaders(int32_t rCode, int64_t contentLen);
	virtual void setAttribute($String* name, Object$* value);
	virtual void setPrincipal(::com::sun::net::httpserver::HttpPrincipal* principal);
	virtual void setStreams(::java::io::InputStream* i, ::java::io::OutputStream* o);
	virtual void write(::com::sun::net::httpserver::Headers* map, ::java::io::OutputStream* os);
	static bool $assertionsDisabled;
	::com::sun::net::httpserver::Headers* reqHdrs = nullptr;
	::com::sun::net::httpserver::Headers* rspHdrs = nullptr;
	::sun::net::httpserver::Request* req = nullptr;
	$String* method = nullptr;
	bool writefinished = false;
	::java::net::URI* uri = nullptr;
	::sun::net::httpserver::HttpConnection* connection = nullptr;
	int64_t reqContentLen = 0;
	int64_t rspContentLen = 0;
	::java::io::InputStream* ris = nullptr;
	::java::io::OutputStream* ros = nullptr;
	$Thread* thread = nullptr;
	bool close$ = false;
	bool closed = false;
	bool http10 = false;
	static ::java::time::format::DateTimeFormatter* FORMATTER;
	static $String* HEAD;
	::java::io::InputStream* uis = nullptr;
	::java::io::OutputStream* uos = nullptr;
	::sun::net::httpserver::LeftOverInputStream* uis_orig = nullptr;
	::sun::net::httpserver::PlaceholderOutputStream* uos_orig = nullptr;
	bool sentHeaders = false;
	::java::util::Map* attributes = nullptr;
	int32_t rcode = 0;
	::com::sun::net::httpserver::HttpPrincipal* principal = nullptr;
	::sun::net::httpserver::ServerImpl* server = nullptr;
	$bytes* rspbuf = nullptr;
};

		} // httpserver
	} // net
} // sun

#pragma pop_macro("FORMATTER")
#pragma pop_macro("HEAD")

#endif // _sun_net_httpserver_ExchangeImpl_h_