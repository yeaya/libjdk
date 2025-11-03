#ifndef _sun_net_httpserver_ServerImpl$ServerTimerTask1_h_
#define _sun_net_httpserver_ServerImpl$ServerTimerTask1_h_
//$ class sun.net.httpserver.ServerImpl$ServerTimerTask1
//$ extends java.util.TimerTask

#include <java/util/TimerTask.h>

namespace sun {
	namespace net {
		namespace httpserver {
			class ServerImpl;
		}
	}
}

namespace sun {
	namespace net {
		namespace httpserver {

class ServerImpl$ServerTimerTask1 : public ::java::util::TimerTask {
	$class(ServerImpl$ServerTimerTask1, $NO_CLASS_INIT, ::java::util::TimerTask)
public:
	ServerImpl$ServerTimerTask1();
	void init$(::sun::net::httpserver::ServerImpl* this$0);
	virtual void run() override;
	::sun::net::httpserver::ServerImpl* this$0 = nullptr;
};

		} // httpserver
	} // net
} // sun

#endif // _sun_net_httpserver_ServerImpl$ServerTimerTask1_h_