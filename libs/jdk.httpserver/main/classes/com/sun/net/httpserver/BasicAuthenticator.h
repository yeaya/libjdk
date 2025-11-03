#ifndef _com_sun_net_httpserver_BasicAuthenticator_h_
#define _com_sun_net_httpserver_BasicAuthenticator_h_
//$ class com.sun.net.httpserver.BasicAuthenticator
//$ extends com.sun.net.httpserver.Authenticator

#include <com/sun/net/httpserver/Authenticator.h>

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				class Authenticator$Result;
				class HttpExchange;
			}
		}
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
	}
}

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

class $export BasicAuthenticator : public ::com::sun::net::httpserver::Authenticator {
	$class(BasicAuthenticator, $NO_CLASS_INIT, ::com::sun::net::httpserver::Authenticator)
public:
	BasicAuthenticator();
	void init$($String* realm);
	void init$($String* realm, ::java::nio::charset::Charset* charset);
	virtual ::com::sun::net::httpserver::Authenticator$Result* authenticate(::com::sun::net::httpserver::HttpExchange* t) override;
	virtual bool checkCredentials($String* username, $String* password) {return false;}
	virtual $String* getRealm();
	void setAuthHeader(::com::sun::net::httpserver::HttpExchange* t);
	$String* realm = nullptr;
	::java::nio::charset::Charset* charset = nullptr;
	bool isUTF8 = false;
};

			} // httpserver
		} // net
	} // sun
} // com

#endif // _com_sun_net_httpserver_BasicAuthenticator_h_