#ifndef _com_sun_net_httpserver_Authenticator$Failure_h_
#define _com_sun_net_httpserver_Authenticator$Failure_h_
//$ class com.sun.net.httpserver.Authenticator$Failure
//$ extends com.sun.net.httpserver.Authenticator$Result

#include <com/sun/net/httpserver/Authenticator$Result.h>

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

class $import Authenticator$Failure : public ::com::sun::net::httpserver::Authenticator$Result {
	$class(Authenticator$Failure, $NO_CLASS_INIT, ::com::sun::net::httpserver::Authenticator$Result)
public:
	Authenticator$Failure();
	void init$(int32_t responseCode);
	virtual int32_t getResponseCode();
	int32_t responseCode = 0;
};

			} // httpserver
		} // net
	} // sun
} // com

#endif // _com_sun_net_httpserver_Authenticator$Failure_h_