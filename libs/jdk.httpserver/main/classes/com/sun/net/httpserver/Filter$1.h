#ifndef _com_sun_net_httpserver_Filter$1_h_
#define _com_sun_net_httpserver_Filter$1_h_
//$ class com.sun.net.httpserver.Filter$1
//$ extends com.sun.net.httpserver.Filter

#include <com/sun/net/httpserver/Filter.h>

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

class Filter$1 : public ::com::sun::net::httpserver::Filter {
	$class(Filter$1, $NO_CLASS_INIT, ::com::sun::net::httpserver::Filter)
public:
	Filter$1();
	void init$(::java::util::function::Consumer* val$operation, $String* val$description);
	virtual $String* description() override;
	virtual void doFilter(::com::sun::net::httpserver::HttpExchange* exchange, ::com::sun::net::httpserver::Filter$Chain* chain) override;
	$String* val$description = nullptr;
	::java::util::function::Consumer* val$operation = nullptr;
};

			} // httpserver
		} // net
	} // sun
} // com

#endif // _com_sun_net_httpserver_Filter$1_h_