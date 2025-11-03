#ifndef _sun_net_httpserver_WriteFinishedEvent_h_
#define _sun_net_httpserver_WriteFinishedEvent_h_
//$ class sun.net.httpserver.WriteFinishedEvent
//$ extends sun.net.httpserver.Event

#include <sun/net/httpserver/Event.h>

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

class WriteFinishedEvent : public ::sun::net::httpserver::Event {
	$class(WriteFinishedEvent, 0, ::sun::net::httpserver::Event)
public:
	WriteFinishedEvent();
	void init$(::sun::net::httpserver::ExchangeImpl* t);
	static bool $assertionsDisabled;
};

		} // httpserver
	} // net
} // sun

#endif // _sun_net_httpserver_WriteFinishedEvent_h_