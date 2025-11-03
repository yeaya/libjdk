#ifndef _sun_net_httpserver_ServerConfig$1_h_
#define _sun_net_httpserver_ServerConfig$1_h_
//$ class sun.net.httpserver.ServerConfig$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace net {
		namespace httpserver {

class ServerConfig$1 : public ::java::security::PrivilegedAction {
	$class(ServerConfig$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ServerConfig$1();
	void init$();
	virtual $Object* run() override;
};

		} // httpserver
	} // net
} // sun

#endif // _sun_net_httpserver_ServerConfig$1_h_