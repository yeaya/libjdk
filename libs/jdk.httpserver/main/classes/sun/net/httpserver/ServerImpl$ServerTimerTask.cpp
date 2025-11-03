#include <sun/net/httpserver/ServerImpl$ServerTimerTask.h>

#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/Set.h>
#include <java/util/TimerTask.h>
#include <sun/net/httpserver/HttpConnection.h>
#include <sun/net/httpserver/ServerImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $Set = ::java::util::Set;
using $TimerTask = ::java::util::TimerTask;
using $HttpConnection = ::sun::net::httpserver::HttpConnection;
using $ServerImpl = ::sun::net::httpserver::ServerImpl;

namespace sun {
	namespace net {
		namespace httpserver {

$FieldInfo _ServerImpl$ServerTimerTask_FieldInfo_[] = {
	{"this$0", "Lsun/net/httpserver/ServerImpl;", nullptr, $FINAL | $SYNTHETIC, $field(ServerImpl$ServerTimerTask, this$0)},
	{}
};

$MethodInfo _ServerImpl$ServerTimerTask_MethodInfo_[] = {
	{"<init>", "(Lsun/net/httpserver/ServerImpl;)V", nullptr, 0, $method(static_cast<void(ServerImpl$ServerTimerTask::*)($ServerImpl*)>(&ServerImpl$ServerTimerTask::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ServerImpl$ServerTimerTask_InnerClassesInfo_[] = {
	{"sun.net.httpserver.ServerImpl$ServerTimerTask", "sun.net.httpserver.ServerImpl", "ServerTimerTask", 0},
	{}
};

$ClassInfo _ServerImpl$ServerTimerTask_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.httpserver.ServerImpl$ServerTimerTask",
	"java.util.TimerTask",
	nullptr,
	_ServerImpl$ServerTimerTask_FieldInfo_,
	_ServerImpl$ServerTimerTask_MethodInfo_,
	nullptr,
	nullptr,
	_ServerImpl$ServerTimerTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.httpserver.ServerImpl"
};

$Object* allocate$ServerImpl$ServerTimerTask($Class* clazz) {
	return $of($alloc(ServerImpl$ServerTimerTask));
}

void ServerImpl$ServerTimerTask::init$($ServerImpl* this$0) {
	$set(this, this$0, this$0);
	$TimerTask::init$();
}

void ServerImpl$ServerTimerTask::run() {
	$useLocalCurrentObjectStackCache();
	$var($LinkedList, toClose, $new($LinkedList));
	this->this$0->time = $System::currentTimeMillis();
	++this->this$0->ticks;
	$synchronized(this->this$0->idleConnections) {
		{
			$var($Iterator, i$, $nc(this->this$0->idleConnections)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($HttpConnection, c, $cast($HttpConnection, i$->next()));
				{
					if ($nc(c)->time <= this->this$0->time) {
						toClose->add(c);
					}
				}
			}
		}
		{
			$var($Iterator, i$, toClose->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($HttpConnection, c, $cast($HttpConnection, i$->next()));
				{
					$nc(this->this$0->idleConnections)->remove(c);
					$nc(this->this$0->allConnections)->remove(c);
					$nc(c)->close();
				}
			}
		}
	}
}

ServerImpl$ServerTimerTask::ServerImpl$ServerTimerTask() {
}

$Class* ServerImpl$ServerTimerTask::load$($String* name, bool initialize) {
	$loadClass(ServerImpl$ServerTimerTask, name, initialize, &_ServerImpl$ServerTimerTask_ClassInfo_, allocate$ServerImpl$ServerTimerTask);
	return class$;
}

$Class* ServerImpl$ServerTimerTask::class$ = nullptr;

		} // httpserver
	} // net
} // sun