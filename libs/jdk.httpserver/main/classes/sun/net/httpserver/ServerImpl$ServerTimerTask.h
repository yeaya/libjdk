#ifndef _sun_net_httpserver_ServerImpl$ServerTimerTask_h_
#define _sun_net_httpserver_ServerImpl$ServerTimerTask_h_
//$ class sun.net.httpserver.ServerImpl$ServerTimerTask
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

class ServerImpl$ServerTimerTask : public ::java::util::TimerTask {
	$class(ServerImpl$ServerTimerTask, $NO_CLASS_INIT, ::java::util::TimerTask)
public:
	ServerImpl$ServerTimerTask();
	void init$(::sun::net::httpserver::ServerImpl* this$0);
	virtual void run() override;
	::sun::net::httpserver::ServerImpl* this$0 = nullptr;
};

		} // httpserver
	} // net
} // sun

#endif // _sun_net_httpserver_ServerImpl$ServerTimerTask_h_