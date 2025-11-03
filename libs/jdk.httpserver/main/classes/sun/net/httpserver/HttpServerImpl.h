#ifndef _sun_net_httpserver_HttpServerImpl_h_
#define _sun_net_httpserver_HttpServerImpl_h_
//$ class sun.net.httpserver.HttpServerImpl
//$ extends com.sun.net.httpserver.HttpServer

#include <com/sun/net/httpserver/HttpServer.h>

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				class HttpContext;
				class HttpHandler;
			}
		}
	}
}
namespace java {
	namespace net {
		class InetSocketAddress;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Executor;
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

class HttpServerImpl : public ::com::sun::net::httpserver::HttpServer {
	$class(HttpServerImpl, $NO_CLASS_INIT, ::com::sun::net::httpserver::HttpServer)
public:
	HttpServerImpl();
	void init$();
	void init$(::java::net::InetSocketAddress* addr, int32_t backlog);
	virtual void bind(::java::net::InetSocketAddress* addr, int32_t backlog) override;
	virtual ::com::sun::net::httpserver::HttpContext* createContext($String* path, ::com::sun::net::httpserver::HttpHandler* handler) override;
	virtual ::com::sun::net::httpserver::HttpContext* createContext($String* path) override;
	virtual ::java::net::InetSocketAddress* getAddress() override;
	virtual ::java::util::concurrent::Executor* getExecutor() override;
	virtual void removeContext($String* path) override;
	virtual void removeContext(::com::sun::net::httpserver::HttpContext* context) override;
	virtual void setExecutor(::java::util::concurrent::Executor* executor) override;
	virtual void start() override;
	virtual void stop(int32_t delay) override;
	::sun::net::httpserver::ServerImpl* server = nullptr;
};

		} // httpserver
	} // net
} // sun

#endif // _sun_net_httpserver_HttpServerImpl_h_