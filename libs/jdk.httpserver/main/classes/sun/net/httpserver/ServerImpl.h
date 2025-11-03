#ifndef _sun_net_httpserver_ServerImpl_h_
#define _sun_net_httpserver_ServerImpl_h_
//$ class sun.net.httpserver.ServerImpl
//$ extends sun.net.httpserver.TimeSource

#include <sun/net/httpserver/TimeSource.h>

#pragma push_macro("CLOCK_TICK")
#undef CLOCK_TICK
#pragma push_macro("IDLE_INTERVAL")
#undef IDLE_INTERVAL
#pragma push_macro("MAX_IDLE_CONNECTIONS")
#undef MAX_IDLE_CONNECTIONS
#pragma push_macro("MAX_REQ_TIME")
#undef MAX_REQ_TIME
#pragma push_macro("MAX_RSP_TIME")
#undef MAX_RSP_TIME
#pragma push_macro("TIMER_MILLIS")
#undef TIMER_MILLIS

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				class HttpContext;
				class HttpHandler;
				class HttpServer;
				class HttpsConfigurator;
			}
		}
	}
}
namespace java {
	namespace lang {
		class Exception;
		class System$Logger;
		class Thread;
	}
}
namespace java {
	namespace net {
		class InetSocketAddress;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class SelectionKey;
			class Selector;
			class ServerSocketChannel;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Set;
		class Timer;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Executor;
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
namespace sun {
	namespace net {
		namespace httpserver {
			class ContextList;
			class Event;
			class HttpConnection;
			class HttpContextImpl;
			class ServerImpl$Dispatcher;
		}
	}
}

namespace sun {
	namespace net {
		namespace httpserver {

class ServerImpl : public ::sun::net::httpserver::TimeSource {
	$class(ServerImpl, 0, ::sun::net::httpserver::TimeSource)
public:
	ServerImpl();
	void init$(::com::sun::net::httpserver::HttpServer* wrapper, $String* protocol, ::java::net::InetSocketAddress* addr, int32_t backlog);
	virtual void addEvent(::sun::net::httpserver::Event* r);
	virtual void bind(::java::net::InetSocketAddress* addr, int32_t backlog);
	void closeConnection(::sun::net::httpserver::HttpConnection* conn);
	virtual ::sun::net::httpserver::HttpContextImpl* createContext($String* path, ::com::sun::net::httpserver::HttpHandler* handler);
	virtual ::sun::net::httpserver::HttpContextImpl* createContext($String* path);
	virtual void delay();
	static void dprint($String* s);
	static void dprint(::java::lang::Exception* e);
	virtual int32_t endExchange();
	virtual ::java::net::InetSocketAddress* getAddress();
	virtual ::java::util::concurrent::Executor* getExecutor();
	virtual ::com::sun::net::httpserver::HttpsConfigurator* getHttpsConfigurator();
	virtual ::java::lang::System$Logger* getLogger();
	virtual ::java::nio::channels::Selector* getSelector();
	virtual int64_t getTicks();
	virtual int64_t getTime() override;
	static int64_t getTimeMillis(int64_t secs);
	virtual ::com::sun::net::httpserver::HttpServer* getWrapper();
	bool isFinishing();
	static bool isValidHeaderKey($String* token);
	virtual void logReply(int32_t code, $String* requestStr, $String* text);
	virtual void logStackTrace($String* s);
	virtual void removeContext($String* path);
	virtual void removeContext(::com::sun::net::httpserver::HttpContext* context);
	virtual void requestCompleted(::sun::net::httpserver::HttpConnection* c);
	virtual void requestStarted(::sun::net::httpserver::HttpConnection* c);
	virtual void responseCompleted(::sun::net::httpserver::HttpConnection* c);
	virtual void setExecutor(::java::util::concurrent::Executor* executor);
	virtual void setHttpsConfigurator(::com::sun::net::httpserver::HttpsConfigurator* config);
	virtual void start();
	virtual void startExchange();
	virtual void stop(int32_t delay);
	static bool $assertionsDisabled;
	$String* protocol = nullptr;
	bool https = false;
	::java::util::concurrent::Executor* executor = nullptr;
	::com::sun::net::httpserver::HttpsConfigurator* httpsConfig = nullptr;
	::javax::net::ssl::SSLContext* sslContext = nullptr;
	::sun::net::httpserver::ContextList* contexts = nullptr;
	::java::net::InetSocketAddress* address = nullptr;
	::java::nio::channels::ServerSocketChannel* schan = nullptr;
	::java::nio::channels::Selector* selector = nullptr;
	::java::nio::channels::SelectionKey* listenerKey = nullptr;
	::java::util::Set* idleConnections = nullptr;
	::java::util::Set* allConnections = nullptr;
	::java::util::Set* reqConnections = nullptr;
	::java::util::Set* rspConnections = nullptr;
	::java::util::List* events = nullptr;
	$Object* lolock = nullptr;
	$volatile(bool) finished = false;
	$volatile(bool) terminating = false;
	bool bound = false;
	bool started = false;
	$volatile(int64_t) time = 0;
	$volatile(int64_t) subticks = 0;
	$volatile(int64_t) ticks = 0;
	::com::sun::net::httpserver::HttpServer* wrapper = nullptr;
	static int32_t CLOCK_TICK;
	static int64_t IDLE_INTERVAL;
	static int32_t MAX_IDLE_CONNECTIONS;
	static int64_t TIMER_MILLIS;
	static int64_t MAX_REQ_TIME;
	static int64_t MAX_RSP_TIME;
	static bool timer1Enabled;
	::java::util::Timer* timer = nullptr;
	::java::util::Timer* timer1 = nullptr;
	::java::lang::System$Logger* logger = nullptr;
	$Thread* dispatcherThread = nullptr;
	::sun::net::httpserver::ServerImpl$Dispatcher* dispatcher = nullptr;
	static bool debug;
	int32_t exchangeCount = 0;
};

		} // httpserver
	} // net
} // sun

#pragma pop_macro("CLOCK_TICK")
#pragma pop_macro("IDLE_INTERVAL")
#pragma pop_macro("MAX_IDLE_CONNECTIONS")
#pragma pop_macro("MAX_REQ_TIME")
#pragma pop_macro("MAX_RSP_TIME")
#pragma pop_macro("TIMER_MILLIS")

#endif // _sun_net_httpserver_ServerImpl_h_