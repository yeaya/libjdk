#ifndef _com_sun_net_httpserver_HttpHandler_h_
#define _com_sun_net_httpserver_HttpHandler_h_
//$ interface com.sun.net.httpserver.HttpHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				class HttpExchange;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

class $import HttpHandler : public ::java::lang::Object {
	$interface(HttpHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void handle(::com::sun::net::httpserver::HttpExchange* exchange) {}
};

			} // httpserver
		} // net
	} // sun
} // com

#endif // _com_sun_net_httpserver_HttpHandler_h_