#ifndef _com_sun_net_httpserver_spi_HttpServerProvider_h_
#define _com_sun_net_httpserver_spi_HttpServerProvider_h_
//$ class com.sun.net.httpserver.spi.HttpServerProvider
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				namespace spi {

class $export HttpServerProvider : public ::java::lang::Object {
	$class(HttpServerProvider, 0, ::java::lang::Object)
public:
	HttpServerProvider();
	void init$();
	virtual ::com::sun::net::httpserver::HttpServer* createHttpServer(::java::net::InetSocketAddress* addr, int32_t backlog) {return nullptr;}
	virtual ::com::sun::net::httpserver::HttpsServer* createHttpsServer(::java::net::InetSocketAddress* addr, int32_t backlog) {return nullptr;}
	static bool loadProviderAsService();
	static bool loadProviderFromProperty();
	static ::com::sun::net::httpserver::spi::HttpServerProvider* provider();
	static $Object* lock;
	static ::com::sun::net::httpserver::spi::HttpServerProvider* provider$;
};

				} // spi
			} // httpserver
		} // net
	} // sun
} // com

#endif // _com_sun_net_httpserver_spi_HttpServerProvider_h_