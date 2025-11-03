#ifndef _com_sun_net_httpserver_HttpsServer_h_
#define _com_sun_net_httpserver_HttpsServer_h_
//$ class com.sun.net.httpserver.HttpsServer
//$ extends com.sun.net.httpserver.HttpServer

#include <com/sun/net/httpserver/HttpServer.h>

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
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

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

class $import HttpsServer : public ::com::sun::net::httpserver::HttpServer {
	$class(HttpsServer, $NO_CLASS_INIT, ::com::sun::net::httpserver::HttpServer)
public:
	HttpsServer();
	void init$();
	static ::com::sun::net::httpserver::HttpsServer* create();
	static ::com::sun::net::httpserver::HttpsServer* create(::java::net::InetSocketAddress* addr, int32_t backlog);
	virtual ::com::sun::net::httpserver::HttpsConfigurator* getHttpsConfigurator() {return nullptr;}
	virtual void setHttpsConfigurator(::com::sun::net::httpserver::HttpsConfigurator* config) {}
};

			} // httpserver
		} // net
	} // sun
} // com

#endif // _com_sun_net_httpserver_HttpsServer_h_