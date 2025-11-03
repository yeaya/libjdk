#ifndef _com_sun_net_httpserver_Authenticator$Retry_h_
#define _com_sun_net_httpserver_Authenticator$Retry_h_
//$ class com.sun.net.httpserver.Authenticator$Retry
//$ extends com.sun.net.httpserver.Authenticator$Result

#include <com/sun/net/httpserver/Authenticator$Result.h>

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

class $export Authenticator$Retry : public ::com::sun::net::httpserver::Authenticator$Result {
	$class(Authenticator$Retry, $NO_CLASS_INIT, ::com::sun::net::httpserver::Authenticator$Result)
public:
	Authenticator$Retry();
	void init$(int32_t responseCode);
	virtual int32_t getResponseCode();
	int32_t responseCode = 0;
};

			} // httpserver
		} // net
	} // sun
} // com

#endif // _com_sun_net_httpserver_Authenticator$Retry_h_