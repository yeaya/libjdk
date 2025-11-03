#ifndef _sun_net_httpserver_SSLStreams$EngineWrapper_h_
#define _sun_net_httpserver_SSLStreams$EngineWrapper_h_
//$ class sun.net.httpserver.SSLStreams$EngineWrapper
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
namespace javax {
	namespace net {
		namespace ssl {
			class SSLEngine;
		}
	}
}
namespace sun {
	namespace net {
		namespace httpserver {
			class SSLStreams;
			class SSLStreams$WrapperResult;
		}
	}
}

namespace sun {
	namespace net {
		namespace httpserver {

class SSLStreams$EngineWrapper : public ::java::lang::Object {
	$class(SSLStreams$EngineWrapper, 0, ::java::lang::Object)
public:
	SSLStreams$EngineWrapper();
	void init$(::sun::net::httpserver::SSLStreams* this$0, ::java::nio::channels::SocketChannel* chan, ::javax::net::ssl::SSLEngine* engine);
	virtual void close();
	virtual ::sun::net::httpserver::SSLStreams$WrapperResult* recvAndUnwrap(::java::nio::ByteBuffer* dst);
	virtual ::sun::net::httpserver::SSLStreams$WrapperResult* wrapAndSend(::java::nio::ByteBuffer* src);
	virtual ::sun::net::httpserver::SSLStreams$WrapperResult* wrapAndSendX(::java::nio::ByteBuffer* src, bool ignoreClose);
	::sun::net::httpserver::SSLStreams* this$0 = nullptr;
	static bool $assertionsDisabled;
	::java::nio::channels::SocketChannel* chan = nullptr;
	::javax::net::ssl::SSLEngine* engine = nullptr;
	$Object* wrapLock = nullptr;
	$Object* unwrapLock = nullptr;
	::java::nio::ByteBuffer* unwrap_src = nullptr;
	::java::nio::ByteBuffer* wrap_dst = nullptr;
	bool closed = false;
	int32_t u_remaining = 0;
};

		} // httpserver
	} // net
} // sun

#endif // _sun_net_httpserver_SSLStreams$EngineWrapper_h_