#ifndef _sun_net_httpserver_ServerImpl$Exchange$LinkHandler_h_
#define _sun_net_httpserver_ServerImpl$Exchange$LinkHandler_h_
//$ class sun.net.httpserver.ServerImpl$Exchange$LinkHandler
//$ extends com.sun.net.httpserver.HttpHandler

#include <com/sun/net/httpserver/HttpHandler.h>

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				class Filter$Chain;
				class HttpExchange;
			}
		}
	}
}
namespace sun {
	namespace net {
		namespace httpserver {
			class ServerImpl$Exchange;
		}
	}
}

namespace sun {
	namespace net {
		namespace httpserver {

class ServerImpl$Exchange$LinkHandler : public ::com::sun::net::httpserver::HttpHandler {
	$class(ServerImpl$Exchange$LinkHandler, $NO_CLASS_INIT, ::com::sun::net::httpserver::HttpHandler)
public:
	ServerImpl$Exchange$LinkHandler();
	void init$(::sun::net::httpserver::ServerImpl$Exchange* this$1, ::com::sun::net::httpserver::Filter$Chain* nextChain);
	virtual void handle(::com::sun::net::httpserver::HttpExchange* exchange) override;
	::sun::net::httpserver::ServerImpl$Exchange* this$1 = nullptr;
	::com::sun::net::httpserver::Filter$Chain* nextChain = nullptr;
};

		} // httpserver
	} // net
} // sun

#endif // _sun_net_httpserver_ServerImpl$Exchange$LinkHandler_h_