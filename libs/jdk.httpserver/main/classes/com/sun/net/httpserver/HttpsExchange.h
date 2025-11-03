#ifndef _com_sun_net_httpserver_HttpsExchange_h_
#define _com_sun_net_httpserver_HttpsExchange_h_
//$ class com.sun.net.httpserver.HttpsExchange
//$ extends com.sun.net.httpserver.HttpExchange

#include <com/sun/net/httpserver/HttpExchange.h>

namespace javax {
	namespace net {
		namespace ssl {
			class SSLSession;
		}
	}
}

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

class $export HttpsExchange : public ::com::sun::net::httpserver::HttpExchange {
	$class(HttpsExchange, $NO_CLASS_INIT, ::com::sun::net::httpserver::HttpExchange)
public:
	HttpsExchange();
	void init$();
	virtual ::javax::net::ssl::SSLSession* getSSLSession() {return nullptr;}
};

			} // httpserver
		} // net
	} // sun
} // com

#endif // _com_sun_net_httpserver_HttpsExchange_h_