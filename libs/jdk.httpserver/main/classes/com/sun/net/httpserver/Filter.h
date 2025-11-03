#ifndef _com_sun_net_httpserver_Filter_h_
#define _com_sun_net_httpserver_Filter_h_
//$ class com.sun.net.httpserver.Filter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				class Filter$Chain;
				class HttpExchange;
			}
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
	}
}

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

class $export Filter : public ::java::lang::Object {
	$class(Filter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Filter();
	void init$();
	static ::com::sun::net::httpserver::Filter* afterHandler($String* description, ::java::util::function::Consumer* operation);
	static ::com::sun::net::httpserver::Filter* beforeHandler($String* description, ::java::util::function::Consumer* operation);
	virtual $String* description() {return nullptr;}
	virtual void doFilter(::com::sun::net::httpserver::HttpExchange* exchange, ::com::sun::net::httpserver::Filter$Chain* chain) {}
};

			} // httpserver
		} // net
	} // sun
} // com

#endif // _com_sun_net_httpserver_Filter_h_