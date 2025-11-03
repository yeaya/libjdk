#ifndef _com_sun_net_httpserver_HttpContext_h_
#define _com_sun_net_httpserver_HttpContext_h_
//$ class com.sun.net.httpserver.HttpContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
	namespace util {
		class List;
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

class $export HttpContext : public ::java::lang::Object {
	$class(HttpContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HttpContext();
	void init$();
	virtual ::java::util::Map* getAttributes() {return nullptr;}
	virtual ::com::sun::net::httpserver::Authenticator* getAuthenticator() {return nullptr;}
	virtual ::java::util::List* getFilters() {return nullptr;}
	virtual ::com::sun::net::httpserver::HttpHandler* getHandler() {return nullptr;}
	virtual $String* getPath() {return nullptr;}
	virtual ::com::sun::net::httpserver::HttpServer* getServer() {return nullptr;}
	virtual ::com::sun::net::httpserver::Authenticator* setAuthenticator(::com::sun::net::httpserver::Authenticator* auth) {return nullptr;}
	virtual void setHandler(::com::sun::net::httpserver::HttpHandler* handler) {}
};

			} // httpserver
		} // net
	} // sun
} // com

#endif // _com_sun_net_httpserver_HttpContext_h_