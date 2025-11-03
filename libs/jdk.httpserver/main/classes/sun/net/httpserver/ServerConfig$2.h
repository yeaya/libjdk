#ifndef _sun_net_httpserver_ServerConfig$2_h_
#define _sun_net_httpserver_ServerConfig$2_h_
//$ class sun.net.httpserver.ServerConfig$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		class System$Logger;
	}
}

namespace sun {
	namespace net {
		namespace httpserver {

class ServerConfig$2 : public ::java::security::PrivilegedAction {
	$class(ServerConfig$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ServerConfig$2();
	void init$(::java::lang::System$Logger* val$logger);
	virtual $Object* run() override;
	::java::lang::System$Logger* val$logger = nullptr;
};

		} // httpserver
	} // net
} // sun

#endif // _sun_net_httpserver_ServerConfig$2_h_