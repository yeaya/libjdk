#ifndef _sun_net_httpserver_ServerImpl$Dispatcher_h_
#define _sun_net_httpserver_ServerImpl$Dispatcher_h_
//$ class sun.net.httpserver.ServerImpl$Dispatcher
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace lang {
		class Exception;
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
namespace java {
	namespace util {
		class LinkedList;
	}
}
namespace sun {
	namespace net {
		namespace httpserver {
			class Event;
			class HttpConnection;
			class ServerImpl;
		}
	}
}

namespace sun {
	namespace net {
		namespace httpserver {

class ServerImpl$Dispatcher : public ::java::lang::Runnable {
	$class(ServerImpl$Dispatcher, 0, ::java::lang::Runnable)
public:
	ServerImpl$Dispatcher();
	void init$(::sun::net::httpserver::ServerImpl* this$0);
	virtual void handle(::java::nio::channels::SocketChannel* chan, ::sun::net::httpserver::HttpConnection* conn);
	void handleEvent(::sun::net::httpserver::Event* r);
	void handleException(::java::nio::channels::SelectionKey* key, ::java::lang::Exception* e);
	virtual void reRegister(::sun::net::httpserver::HttpConnection* c);
	virtual void run() override;
	::sun::net::httpserver::ServerImpl* this$0 = nullptr;
	static bool $assertionsDisabled;
	::java::util::LinkedList* connsToRegister = nullptr;
};

		} // httpserver
	} // net
} // sun

#endif // _sun_net_httpserver_ServerImpl$Dispatcher_h_