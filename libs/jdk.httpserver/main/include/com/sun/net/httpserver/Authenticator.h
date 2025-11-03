#ifndef _com_sun_net_httpserver_Authenticator_h_
#define _com_sun_net_httpserver_Authenticator_h_
//$ class com.sun.net.httpserver.Authenticator
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

class $import Authenticator : public ::java::lang::Object {
	$class(Authenticator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Authenticator();
	void init$();
	virtual ::com::sun::net::httpserver::Authenticator$Result* authenticate(::com::sun::net::httpserver::HttpExchange* exch) {return nullptr;}
};

			} // httpserver
		} // net
	} // sun
} // com

#endif // _com_sun_net_httpserver_Authenticator_h_