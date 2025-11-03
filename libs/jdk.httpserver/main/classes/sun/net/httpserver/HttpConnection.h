#ifndef _sun_net_httpserver_HttpConnection_h_
#define _sun_net_httpserver_HttpConnection_h_
//$ class sun.net.httpserver.HttpConnection
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		class System$Logger;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class SelectionKey;
			class SocketChannel;
		}
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class SSLContext;
			class SSLEngine;
		}
	}
}
namespace sun {
	namespace net {
		namespace httpserver {
			class HttpConnection$State;
			class HttpContextImpl;
			class SSLStreams;
		}
	}
}

namespace sun {
	namespace net {
		namespace httpserver {

class HttpConnection : public ::java::lang::Object {
	$class(HttpConnection, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HttpConnection();
	void init$();
	virtual void close();
	virtual ::java::nio::channels::SocketChannel* getChannel();
	virtual ::sun::net::httpserver::HttpContextImpl* getHttpContext();
	virtual ::java::io::InputStream* getInputStream();
	virtual $String* getProtocol();
	virtual ::java::io::OutputStream* getRawOutputStream();
	virtual int32_t getRemaining();
	virtual ::javax::net::ssl::SSLContext* getSSLContext();
	virtual ::javax::net::ssl::SSLEngine* getSSLEngine();
	virtual ::java::nio::channels::SelectionKey* getSelectionKey();
	virtual ::sun::net::httpserver::HttpConnection$State* getState();
	virtual void setChannel(::java::nio::channels::SocketChannel* c);
	virtual void setContext(::sun::net::httpserver::HttpContextImpl* ctx);
	virtual void setParameters(::java::io::InputStream* in, ::java::io::OutputStream* rawout, ::java::nio::channels::SocketChannel* chan, ::javax::net::ssl::SSLEngine* engine, ::sun::net::httpserver::SSLStreams* sslStreams, ::javax::net::ssl::SSLContext* sslContext, $String* protocol, ::sun::net::httpserver::HttpContextImpl* context, ::java::io::InputStream* raw);
	virtual void setRemaining(int32_t r);
	virtual void setState(::sun::net::httpserver::HttpConnection$State* s);
	virtual $String* toString() override;
	::sun::net::httpserver::HttpContextImpl* context = nullptr;
	::javax::net::ssl::SSLEngine* engine = nullptr;
	::javax::net::ssl::SSLContext* sslContext = nullptr;
	::sun::net::httpserver::SSLStreams* sslStreams = nullptr;
	::java::io::InputStream* i = nullptr;
	::java::io::InputStream* raw = nullptr;
	::java::io::OutputStream* rawout = nullptr;
	::java::nio::channels::SocketChannel* chan = nullptr;
	::java::nio::channels::SelectionKey* selectionKey = nullptr;
	$String* protocol = nullptr;
	int64_t time = 0;
	$volatile(int64_t) creationTime = 0;
	$volatile(int64_t) rspStartedTime = 0;
	int32_t remaining = 0;
	bool closed = false;
	::java::lang::System$Logger* logger = nullptr;
	$volatile(::sun::net::httpserver::HttpConnection$State*) state = nullptr;
};

		} // httpserver
	} // net
} // sun

#endif // _sun_net_httpserver_HttpConnection_h_