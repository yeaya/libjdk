#ifndef _sun_net_httpserver_Event_h_
#define _sun_net_httpserver_Event_h_
//$ class sun.net.httpserver.Event
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace net {
		namespace httpserver {
			class ExchangeImpl;
		}
	}
}

namespace sun {
	namespace net {
		namespace httpserver {

class Event : public ::java::lang::Object {
	$class(Event, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Event();
	void init$(::sun::net::httpserver::ExchangeImpl* t);
	::sun::net::httpserver::ExchangeImpl* exchange = nullptr;
};

		} // httpserver
	} // net
} // sun

#endif // _sun_net_httpserver_Event_h_