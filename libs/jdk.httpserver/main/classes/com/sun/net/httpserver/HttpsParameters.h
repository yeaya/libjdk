#ifndef _com_sun_net_httpserver_HttpsParameters_h_
#define _com_sun_net_httpserver_HttpsParameters_h_
//$ class com.sun.net.httpserver.HttpsParameters
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

class $export HttpsParameters : public ::java::lang::Object {
	$class(HttpsParameters, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HttpsParameters();
	void init$();
	virtual $StringArray* getCipherSuites();
	virtual ::java::net::InetSocketAddress* getClientAddress() {return nullptr;}
	virtual ::com::sun::net::httpserver::HttpsConfigurator* getHttpsConfigurator() {return nullptr;}
	virtual bool getNeedClientAuth();
	virtual $StringArray* getProtocols();
	virtual bool getWantClientAuth();
	virtual void setCipherSuites($StringArray* cipherSuites);
	virtual void setNeedClientAuth(bool needClientAuth);
	virtual void setProtocols($StringArray* protocols);
	virtual void setSSLParameters(::javax::net::ssl::SSLParameters* params) {}
	virtual void setWantClientAuth(bool wantClientAuth);
	$StringArray* cipherSuites = nullptr;
	$StringArray* protocols = nullptr;
	bool wantClientAuth = false;
	bool needClientAuth = false;
};

			} // httpserver
		} // net
	} // sun
} // com

#endif // _com_sun_net_httpserver_HttpsParameters_h_