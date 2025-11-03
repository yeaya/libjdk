#ifndef _sun_net_httpserver_HttpContextImpl_h_
#define _sun_net_httpserver_HttpContextImpl_h_
//$ class sun.net.httpserver.HttpContextImpl
//$ extends com.sun.net.httpserver.HttpContext

#include <com/sun/net/httpserver/HttpContext.h>

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				class Authenticator;
				class HttpHandler;
				class HttpServer;
			}
		}
	}
}
namespace java {
	namespace lang {
		class System$Logger;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace sun {
	namespace net {
		namespace httpserver {
			class AuthFilter;
			class ServerImpl;
		}
	}
}

namespace sun {
	namespace net {
		namespace httpserver {

class HttpContextImpl : public ::com::sun::net::httpserver::HttpContext {
	$class(HttpContextImpl, $NO_CLASS_INIT, ::com::sun::net::httpserver::HttpContext)
public:
	HttpContextImpl();
	void init$($String* protocol, $String* path, ::com::sun::net::httpserver::HttpHandler* cb, ::sun::net::httpserver::ServerImpl* server);
	virtual ::java::util::Map* getAttributes() override;
	virtual ::com::sun::net::httpserver::Authenticator* getAuthenticator() override;
	virtual ::java::util::List* getFilters() override;
	virtual ::com::sun::net::httpserver::HttpHandler* getHandler() override;
	virtual ::java::lang::System$Logger* getLogger();
	virtual $String* getPath() override;
	virtual $String* getProtocol();
	virtual ::com::sun::net::httpserver::HttpServer* getServer() override;
	virtual ::sun::net::httpserver::ServerImpl* getServerImpl();
	virtual ::java::util::List* getSystemFilters();
	virtual ::com::sun::net::httpserver::Authenticator* setAuthenticator(::com::sun::net::httpserver::Authenticator* auth) override;
	virtual void setHandler(::com::sun::net::httpserver::HttpHandler* h) override;
	$String* path = nullptr;
	$String* protocol = nullptr;
	::sun::net::httpserver::ServerImpl* server = nullptr;
	::sun::net::httpserver::AuthFilter* authfilter = nullptr;
	::java::util::Map* attributes = nullptr;
	::java::util::List* sfilters = nullptr;
	::java::util::List* ufilters = nullptr;
	::com::sun::net::httpserver::Authenticator* authenticator = nullptr;
	::com::sun::net::httpserver::HttpHandler* handler = nullptr;
};

		} // httpserver
	} // net
} // sun

#endif // _sun_net_httpserver_HttpContextImpl_h_