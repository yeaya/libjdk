#include <sun/net/httpserver/ServerImpl$ServerTimerTask1.h>

#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/Set.h>
#include <java/util/TimerTask.h>
#include <sun/net/httpserver/HttpConnection.h>
#include <sun/net/httpserver/ServerImpl.h>
#include <jcpp.h>

#undef DEBUG
#undef MAX_REQ_TIME
#undef MAX_RSP_TIME
#undef TIMER_MILLIS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
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

$FieldInfo _ServerImpl$ServerTimerTask1_FieldInfo_[] = {
	{"this$0", "Lsun/net/httpserver/ServerImpl;", nullptr, $FINAL | $SYNTHETIC, $field(ServerImpl$ServerTimerTask1, this$0)},
	{}
};

$MethodInfo _ServerImpl$ServerTimerTask1_MethodInfo_[] = {
	{"<init>", "(Lsun/net/httpserver/ServerImpl;)V", nullptr, 0, $method(static_cast<void(ServerImpl$ServerTimerTask1::*)($ServerImpl*)>(&ServerImpl$ServerTimerTask1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ServerImpl$ServerTimerTask1_InnerClassesInfo_[] = {
	{"sun.net.httpserver.ServerImpl$ServerTimerTask1", "sun.net.httpserver.ServerImpl", "ServerTimerTask1", 0},
	{}
};

$ClassInfo _ServerImpl$ServerTimerTask1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.httpserver.ServerImpl$ServerTimerTask1",
	"java.util.TimerTask",
	nullptr,
	_ServerImpl$ServerTimerTask1_FieldInfo_,
	_ServerImpl$ServerTimerTask1_MethodInfo_,
	nullptr,
	nullptr,
	_ServerImpl$ServerTimerTask1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.httpserver.ServerImpl"
};

$Object* allocate$ServerImpl$ServerTimerTask1($Class* clazz) {
	return $of($alloc(ServerImpl$ServerTimerTask1));
}

void ServerImpl$ServerTimerTask1::init$($ServerImpl* this$0) {
	$set(this, this$0, this$0);
	$TimerTask::init$();
}

void ServerImpl$ServerTimerTask1::run() {
	$useLocalCurrentObjectStackCache();
	$var($LinkedList, toClose, $new($LinkedList));
	this->this$0->time = $System::currentTimeMillis();
	$synchronized(this->this$0->reqConnections) {
		$init($ServerImpl);
		if ($ServerImpl::MAX_REQ_TIME != -1) {
			{
				$var($Iterator, i$, $nc(this->this$0->reqConnections)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($HttpConnection, c, $cast($HttpConnection, i$->next()));
					{
						if ($nc(c)->creationTime + $ServerImpl::TIMER_MILLIS + $ServerImpl::MAX_REQ_TIME <= this->this$0->time) {
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
						$init($System$Logger$Level);
						$nc(this->this$0->logger)->log($System$Logger$Level::DEBUG, $$str({"closing: no request: "_s, c}));
						$nc(this->this$0->reqConnections)->remove(c);
						$nc(this->this$0->allConnections)->remove(c);
						$nc(c)->close();
					}
				}
			}
		}
	}
	$assign(toClose, $new($LinkedList));
	$synchronized(this->this$0->rspConnections) {
		$init($ServerImpl);
		if ($ServerImpl::MAX_RSP_TIME != -1) {
			{
				$var($Iterator, i$, $nc(this->this$0->rspConnections)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($HttpConnection, c, $cast($HttpConnection, i$->next()));
					{
						if ($nc(c)->rspStartedTime + $ServerImpl::TIMER_MILLIS + $ServerImpl::MAX_RSP_TIME <= this->this$0->time) {
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
						$init($System$Logger$Level);
						$nc(this->this$0->logger)->log($System$Logger$Level::DEBUG, $$str({"closing: no response: "_s, c}));
						$nc(this->this$0->rspConnections)->remove(c);
						$nc(this->this$0->allConnections)->remove(c);
						$nc(c)->close();
					}
				}
			}
		}
	}
}

ServerImpl$ServerTimerTask1::ServerImpl$ServerTimerTask1() {
}

$Class* ServerImpl$ServerTimerTask1::load$($String* name, bool initialize) {
	$loadClass(ServerImpl$ServerTimerTask1, name, initialize, &_ServerImpl$ServerTimerTask1_ClassInfo_, allocate$ServerImpl$ServerTimerTask1);
	return class$;
}

$Class* ServerImpl$ServerTimerTask1::class$ = nullptr;

		} // httpserver
	} // net
} // sun