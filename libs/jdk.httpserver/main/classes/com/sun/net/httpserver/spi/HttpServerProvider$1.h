#ifndef _com_sun_net_httpserver_spi_HttpServerProvider$1_h_
#define _com_sun_net_httpserver_spi_HttpServerProvider$1_h_
//$ class com.sun.net.httpserver.spi.HttpServerProvider$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				namespace spi {

class HttpServerProvider$1 : public ::java::security::PrivilegedAction {
	$class(HttpServerProvider$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	HttpServerProvider$1();
	void init$();
	virtual $Object* run() override;
};

				} // spi
			} // httpserver
		} // net
	} // sun
} // com

#endif // _com_sun_net_httpserver_spi_HttpServerProvider$1_h_