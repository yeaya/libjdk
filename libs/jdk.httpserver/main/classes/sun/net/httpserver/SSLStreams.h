#ifndef _sun_net_httpserver_SSLStreams_h_
#define _sun_net_httpserver_SSLStreams_h_
//$ class sun.net.httpserver.SSLStreams
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class SocketChannel;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class Lock;
			}
		}
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class SSLContext;
			class SSLEngine;
			class SSLEngineResult$HandshakeStatus;
		}
	}
}
namespace sun {
	namespace net {
		namespace httpserver {
			class SSLStreams$BufType;
			class SSLStreams$EngineWrapper;
			class SSLStreams$InputStream;
			class SSLStreams$OutputStream;
			class SSLStreams$WrapperResult;
			class ServerImpl;
			class TimeSource;
		}
	}
}

namespace sun {
	namespace net {
		namespace httpserver {

class SSLStreams : public ::java::lang::Object {
	$class(SSLStreams, 0, ::java::lang::Object)
public:
	SSLStreams();
	void init$(::sun::net::httpserver::ServerImpl* server, ::javax::net::ssl::SSLContext* sslctx, ::java::nio::channels::SocketChannel* chan);
	::java::nio::ByteBuffer* allocate(::sun::net::httpserver::SSLStreams$BufType* type);
	::java::nio::ByteBuffer* allocate(::sun::net::httpserver::SSLStreams$BufType* type, int32_t len);
	virtual void beginHandshake();
	virtual void close();
	void configureEngine(::com::sun::net::httpserver::HttpsConfigurator* cfg, ::java::net::InetSocketAddress* addr);
	virtual void doClosure();
	virtual void doHandshake(::javax::net::ssl::SSLEngineResult$HandshakeStatus* hs_status);
	virtual ::sun::net::httpserver::SSLStreams$InputStream* getInputStream();
	virtual ::sun::net::httpserver::SSLStreams$OutputStream* getOutputStream();
	virtual ::javax::net::ssl::SSLEngine* getSSLEngine();
	::java::nio::ByteBuffer* realloc(::java::nio::ByteBuffer* b, bool flip, ::sun::net::httpserver::SSLStreams$BufType* type);
	virtual ::sun::net::httpserver::SSLStreams$WrapperResult* recvData(::java::nio::ByteBuffer* dst);
	virtual ::sun::net::httpserver::SSLStreams$WrapperResult* sendData(::java::nio::ByteBuffer* src);
	static bool $assertionsDisabled;
	::javax::net::ssl::SSLContext* sslctx = nullptr;
	::java::nio::channels::SocketChannel* chan = nullptr;
	::sun::net::httpserver::TimeSource* time = nullptr;
	::sun::net::httpserver::ServerImpl* server = nullptr;
	::javax::net::ssl::SSLEngine* engine = nullptr;
	::sun::net::httpserver::SSLStreams$EngineWrapper* wrapper = nullptr;
	::sun::net::httpserver::SSLStreams$OutputStream* os = nullptr;
	::sun::net::httpserver::SSLStreams$InputStream* is = nullptr;
	::java::util::concurrent::locks::Lock* handshaking = nullptr;
	int32_t app_buf_size = 0;
	int32_t packet_buf_size = 0;
};

		} // httpserver
	} // net
} // sun

#endif // _sun_net_httpserver_SSLStreams_h_