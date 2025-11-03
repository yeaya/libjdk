#ifndef _com_sun_net_httpserver_HttpServer_h_
#define _com_sun_net_httpserver_HttpServer_h_
//$ class com.sun.net.httpserver.HttpServer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				class HttpContext;
				class HttpHandler;
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
	namespace util {
		namespace concurrent {
			class Executor;
		}
	}
}

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

class $import HttpServer : public ::java::lang::Object {
	$class(HttpServer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HttpServer();
	void init$();
	virtual void bind(::java::net::InetSocketAddress* addr, int32_t backlog) {}
	static ::com::sun::net::httpserver::HttpServer* create();
	static ::com::sun::net::httpserver::HttpServer* create(::java::net::InetSocketAddress* addr, int32_t backlog);
	virtual ::com::sun::net::httpserver::HttpContext* createContext($String* path, ::com::sun::net::httpserver::HttpHandler* handler) {return nullptr;}
	virtual ::com::sun::net::httpserver::HttpContext* createContext($String* path) {return nullptr;}
	virtual ::java::net::InetSocketAddress* getAddress() {return nullptr;}
	virtual ::java::util::concurrent::Executor* getExecutor() {return nullptr;}
	virtual void removeContext($String* path) {}
	virtual void removeContext(::com::sun::net::httpserver::HttpContext* context) {}
	virtual void setExecutor(::java::util::concurrent::Executor* executor) {}
	virtual void start() {}
	virtual void stop(int32_t delay) {}
};

			} // httpserver
		} // net
	} // sun
} // com

#endif // _com_sun_net_httpserver_HttpServer_h_