#ifndef _com_sun_net_httpserver_Filter$Chain_h_
#define _com_sun_net_httpserver_Filter$Chain_h_
//$ class com.sun.net.httpserver.Filter$Chain
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				class HttpExchange;
				class HttpHandler;
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
		class ListIterator;
	}
}

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

class $import Filter$Chain : public ::java::lang::Object {
	$class(Filter$Chain, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Filter$Chain();
	void init$(::java::util::List* filters, ::com::sun::net::httpserver::HttpHandler* handler);
	virtual void doFilter(::com::sun::net::httpserver::HttpExchange* exchange);
	::java::util::ListIterator* iter = nullptr;
	::com::sun::net::httpserver::HttpHandler* handler = nullptr;
};

			} // httpserver
		} // net
	} // sun
} // com

#endif // _com_sun_net_httpserver_Filter$Chain_h_