#ifndef _sun_net_httpserver_ServerImpl$DefaultExecutor_h_
#define _sun_net_httpserver_ServerImpl$DefaultExecutor_h_
//$ class sun.net.httpserver.ServerImpl$DefaultExecutor
//$ extends java.util.concurrent.Executor

#include <java/util/concurrent/Executor.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}

namespace sun {
	namespace net {
		namespace httpserver {

class ServerImpl$DefaultExecutor : public ::java::util::concurrent::Executor {
	$class(ServerImpl$DefaultExecutor, $NO_CLASS_INIT, ::java::util::concurrent::Executor)
public:
	ServerImpl$DefaultExecutor();
	void init$();
	virtual void execute(::java::lang::Runnable* task) override;
};

		} // httpserver
	} // net
} // sun

#endif // _sun_net_httpserver_ServerImpl$DefaultExecutor_h_