#ifndef _sun_net_httpserver_SSLStreams$Parameters_h_
#define _sun_net_httpserver_SSLStreams$Parameters_h_
//$ class sun.net.httpserver.SSLStreams$Parameters
//$ extends com.sun.net.httpserver.HttpsParameters

#include <com/sun/net/httpserver/HttpsParameters.h>

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				class HttpsConfigurator;
			}
		}
	}
}
namespace java {
	namespace net {
		class InetSocketAddress;
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class SSLParameters;
		}
	}
}
namespace sun {
	namespace net {
		namespace httpserver {
			class SSLStreams;
		}
	}
}

namespace sun {
	namespace net {
		namespace httpserver {

class SSLStreams$Parameters : public ::com::sun::net::httpserver::HttpsParameters {
	$class(SSLStreams$Parameters, $NO_CLASS_INIT, ::com::sun::net::httpserver::HttpsParameters)
public:
	SSLStreams$Parameters();
	void init$(::sun::net::httpserver::SSLStreams* this$0, ::com::sun::net::httpserver::HttpsConfigurator* cfg, ::java::net::InetSocketAddress* addr);
	virtual ::java::net::InetSocketAddress* getClientAddress() override;
	virtual ::com::sun::net::httpserver::HttpsConfigurator* getHttpsConfigurator() override;
	virtual ::javax::net::ssl::SSLParameters* getSSLParameters();
	virtual void setSSLParameters(::javax::net::ssl::SSLParameters* p) override;
	::sun::net::httpserver::SSLStreams* this$0 = nullptr;
	::java::net::InetSocketAddress* addr = nullptr;
	::com::sun::net::httpserver::HttpsConfigurator* cfg = nullptr;
	::javax::net::ssl::SSLParameters* params = nullptr;
};

		} // httpserver
	} // net
} // sun

#endif // _sun_net_httpserver_SSLStreams$Parameters_h_