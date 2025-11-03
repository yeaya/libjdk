#ifndef _com_sun_net_httpserver_Authenticator$Success_h_
#define _com_sun_net_httpserver_Authenticator$Success_h_
//$ class com.sun.net.httpserver.Authenticator$Success
//$ extends com.sun.net.httpserver.Authenticator$Result

#include <com/sun/net/httpserver/Authenticator$Result.h>

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				class HttpPrincipal;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

class $import Authenticator$Success : public ::com::sun::net::httpserver::Authenticator$Result {
	$class(Authenticator$Success, $NO_CLASS_INIT, ::com::sun::net::httpserver::Authenticator$Result)
public:
	Authenticator$Success();
	void init$(::com::sun::net::httpserver::HttpPrincipal* p);
	virtual ::com::sun::net::httpserver::HttpPrincipal* getPrincipal();
	::com::sun::net::httpserver::HttpPrincipal* principal = nullptr;
};

			} // httpserver
		} // net
	} // sun
} // com

#endif // _com_sun_net_httpserver_Authenticator$Success_h_