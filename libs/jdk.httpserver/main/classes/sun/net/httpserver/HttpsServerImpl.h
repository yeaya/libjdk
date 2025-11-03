#ifndef _sun_net_httpserver_HttpsServerImpl_h_
#define _sun_net_httpserver_HttpsServerImpl_h_
//$ class sun.net.httpserver.HttpsServerImpl
//$ extends com.sun.net.httpserver.HttpsServer

#include <com/sun/net/httpserver/HttpsServer.h>

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				class HttpContext;
				class HttpHandler;
				class HttpsConfigurator;
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

class HttpsServerImpl : public ::com::sun::net::httpserver::HttpsServer {
	$class(HttpsServerImpl, $NO_CLASS_INIT, ::com::sun::net::httpserver::HttpsServer)
public:
	HttpsServerImpl();
	void init$();
	void init$(::java::net::InetSocketAddress* addr, int32_t backlog);
	virtual void bind(::java::net::InetSocketAddress* addr, int32_t backlog) override;
	virtual ::com::sun::net::httpserver::HttpContext* createContext($String* path, ::com::sun::net::httpserver::HttpHandler* handler) override;
	virtual ::com::sun::net::httpserver::HttpContext* createContext($String* path) override;
	virtual ::java::net::InetSocketAddress* getAddress() override;
	virtual ::java::util::concurrent::Executor* getExecutor() override;
	virtual ::com::sun::net::httpserver::HttpsConfigurator* getHttpsConfigurator() override;
	virtual void removeContext($String* path) override;
	virtual void removeContext(::com::sun::net::httpserver::HttpContext* context) override;
	virtual void setExecutor(::java::util::concurrent::Executor* executor) override;
	virtual void setHttpsConfigurator(::com::sun::net::httpserver::HttpsConfigurator* config) override;
	virtual void start() override;
	virtual void stop(int32_t delay) override;
	::sun::net::httpserver::ServerImpl* server = nullptr;
};

		} // httpserver
	} // net
} // sun

#endif // _sun_net_httpserver_HttpsServerImpl_h_