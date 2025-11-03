#ifndef _sun_net_httpserver_DefaultHttpServerProvider_h_
#define _sun_net_httpserver_DefaultHttpServerProvider_h_
//$ class sun.net.httpserver.DefaultHttpServerProvider
//$ extends com.sun.net.httpserver.spi.HttpServerProvider

#include <com/sun/net/httpserver/spi/HttpServerProvider.h>

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				class HttpServer;
				class HttpsServer;
			}
		}
	}
}
namespace java {
	namespace net {
		class InetSocketAddress;
	}
}

namespace sun {
	namespace net {
		namespace httpserver {

class DefaultHttpServerProvider : public ::com::sun::net::httpserver::spi::HttpServerProvider {
	$class(DefaultHttpServerProvider, $NO_CLASS_INIT, ::com::sun::net::httpserver::spi::HttpServerProvider)
public:
	DefaultHttpServerProvider();
	void init$();
	virtual ::com::sun::net::httpserver::HttpServer* createHttpServer(::java::net::InetSocketAddress* addr, int32_t backlog) override;
	virtual ::com::sun::net::httpserver::HttpsServer* createHttpsServer(::java::net::InetSocketAddress* addr, int32_t backlog) override;
};

		} // httpserver
	} // net
} // sun

#endif // _sun_net_httpserver_DefaultHttpServerProvider_h_