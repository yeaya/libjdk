#ifndef _sun_net_httpserver_ServerImpl$Exchange_h_
#define _sun_net_httpserver_ServerImpl$Exchange_h_
//$ class sun.net.httpserver.ServerImpl$Exchange
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class SocketChannel;
		}
	}
}
namespace sun {
	namespace net {
		namespace httpserver {
			class ExchangeImpl;
			class HttpConnection;
			class HttpContextImpl;
			class ServerImpl;
		}
	}
}

namespace sun {
	namespace net {
		namespace httpserver {

class ServerImpl$Exchange : public ::java::lang::Runnable {
	$class(ServerImpl$Exchange, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	ServerImpl$Exchange();
	void init$(::sun::net::httpserver::ServerImpl* this$0, ::java::nio::channels::SocketChannel* chan, $String* protocol, ::sun::net::httpserver::HttpConnection* conn);
	virtual void reject(int32_t code, $String* requestStr, $String* message);
	virtual void run() override;
	virtual void sendReply(int32_t code, bool closeNow, $String* text);
	::sun::net::httpserver::ServerImpl* this$0 = nullptr;
	::java::nio::channels::SocketChannel* chan = nullptr;
	::sun::net::httpserver::HttpConnection* connection = nullptr;
	::sun::net::httpserver::HttpContextImpl* context = nullptr;
	::java::io::InputStream* rawin = nullptr;
	::java::io::OutputStream* rawout = nullptr;
	$String* protocol = nullptr;
	::sun::net::httpserver::ExchangeImpl* tx = nullptr;
	::sun::net::httpserver::HttpContextImpl* ctx = nullptr;
	bool rejected = false;
};

		} // httpserver
	} // net
} // sun

#endif // _sun_net_httpserver_ServerImpl$Exchange_h_