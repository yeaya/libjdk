#ifndef _sun_net_httpserver_ServerImpl$1_h_
#define _sun_net_httpserver_ServerImpl$1_h_
//$ class sun.net.httpserver.ServerImpl$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace net {
		namespace httpserver {
			class ServerImpl;
		}
	}
}

namespace sun {
	namespace net {
		namespace httpserver {

class ServerImpl$1 : public ::java::security::PrivilegedAction {
	$class(ServerImpl$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ServerImpl$1();
	void init$(::sun::net::httpserver::ServerImpl* this$0);
	virtual $Object* run() override;
	::sun::net::httpserver::ServerImpl* this$0 = nullptr;
};

		} // httpserver
	} // net
} // sun

#endif // _sun_net_httpserver_ServerImpl$1_h_