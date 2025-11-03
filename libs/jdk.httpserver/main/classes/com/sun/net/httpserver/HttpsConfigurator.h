#ifndef _com_sun_net_httpserver_HttpsConfigurator_h_
#define _com_sun_net_httpserver_HttpsConfigurator_h_
//$ class com.sun.net.httpserver.HttpsConfigurator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				class HttpsParameters;
			}
		}
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class SSLContext;
		}
	}
}

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

class $export HttpsConfigurator : public ::java::lang::Object {
	$class(HttpsConfigurator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HttpsConfigurator();
	void init$(::javax::net::ssl::SSLContext* context);
	virtual void configure(::com::sun::net::httpserver::HttpsParameters* params);
	virtual ::javax::net::ssl::SSLContext* getSSLContext();
	::javax::net::ssl::SSLContext* context = nullptr;
};

			} // httpserver
		} // net
	} // sun
} // com

#endif // _com_sun_net_httpserver_HttpsConfigurator_h_