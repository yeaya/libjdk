#ifndef _sun_net_httpserver_AuthFilter_h_
#define _sun_net_httpserver_AuthFilter_h_
//$ class sun.net.httpserver.AuthFilter
//$ extends com.sun.net.httpserver.Filter

#include <com/sun/net/httpserver/Filter.h>

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				class Authenticator;
				class Filter$Chain;
				class HttpExchange;
			}
		}
	}
}

namespace sun {
	namespace net {
		namespace httpserver {

class AuthFilter : public ::com::sun::net::httpserver::Filter {
	$class(AuthFilter, $NO_CLASS_INIT, ::com::sun::net::httpserver::Filter)
public:
	AuthFilter();
	void init$(::com::sun::net::httpserver::Authenticator* authenticator);
	virtual void consumeInput(::com::sun::net::httpserver::HttpExchange* t);
	virtual $String* description() override;
	virtual void doFilter(::com::sun::net::httpserver::HttpExchange* t, ::com::sun::net::httpserver::Filter$Chain* chain) override;
	virtual void setAuthenticator(::com::sun::net::httpserver::Authenticator* a);
	::com::sun::net::httpserver::Authenticator* authenticator = nullptr;
};

		} // httpserver
	} // net
} // sun

#endif // _sun_net_httpserver_AuthFilter_h_