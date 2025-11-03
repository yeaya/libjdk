#ifndef _sun_net_httpserver_SSLStreams$WrapperResult_h_
#define _sun_net_httpserver_SSLStreams$WrapperResult_h_
//$ class sun.net.httpserver.SSLStreams$WrapperResult
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class SSLEngineResult;
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

class SSLStreams$WrapperResult : public ::java::lang::Object {
	$class(SSLStreams$WrapperResult, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SSLStreams$WrapperResult();
	void init$(::sun::net::httpserver::SSLStreams* this$0);
	::sun::net::httpserver::SSLStreams* this$0 = nullptr;
	::javax::net::ssl::SSLEngineResult* result = nullptr;
	::java::nio::ByteBuffer* buf = nullptr;
};

		} // httpserver
	} // net
} // sun

#endif // _sun_net_httpserver_SSLStreams$WrapperResult_h_