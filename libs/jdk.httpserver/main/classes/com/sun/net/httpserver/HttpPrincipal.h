#ifndef _com_sun_net_httpserver_HttpPrincipal_h_
#define _com_sun_net_httpserver_HttpPrincipal_h_
//$ class com.sun.net.httpserver.HttpPrincipal
//$ extends java.security.Principal

#include <java/security/Principal.h>

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

class $export HttpPrincipal : public ::java::security::Principal {
	$class(HttpPrincipal, $NO_CLASS_INIT, ::java::security::Principal)
public:
	HttpPrincipal();
	void init$($String* username, $String* realm);
	virtual bool equals(Object$* another) override;
	virtual $String* getName() override;
	virtual $String* getRealm();
	virtual $String* getUsername();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	$String* username = nullptr;
	$String* realm = nullptr;
};

			} // httpserver
		} // net
	} // sun
} // com

#endif // _com_sun_net_httpserver_HttpPrincipal_h_