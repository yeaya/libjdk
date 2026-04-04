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
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $TimerTask = ::java::util::TimerTask;
using $HttpConnection = ::sun::net::httpserver::HttpConnection;
using $ServerImpl = ::sun::net::httpserver::ServerImpl;

namespace sun {
	namespace net {
		namespace httpserver {

void ServerImpl$ServerTimerTask1::init$($ServerImpl* this$0) {
	$set(this, this$0, this$0);
	$TimerTask::init$();
}

void ServerImpl$ServerTimerTask1::run() {
	$useLocalObjectStack();
	$var($LinkedList, toClose, $new($LinkedList));
	this->this$0->time = $System::currentTimeMillis();
	$synchronized(this->this$0->reqConnections) {
		if ($ServerImpl::MAX_REQ_TIME != -1) {
			{
				$var($Iterator, i$, this->this$0->reqConnections->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($HttpConnection, c, $cast($HttpConnection, i$->next()));
					if ($nc(c)->creationTime + $ServerImpl::TIMER_MILLIS + $ServerImpl::MAX_REQ_TIME <= this->this$0->time) {
						toClose->add(c);
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
		if ($ServerImpl::MAX_RSP_TIME != -1) {
			{
				$var($Iterator, i$, this->this$0->rspConnections->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($HttpConnection, c, $cast($HttpConnection, i$->next()));
					if ($nc(c)->rspStartedTime + $ServerImpl::TIMER_MILLIS + $ServerImpl::MAX_RSP_TIME <= this->this$0->time) {
						toClose->add(c);
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
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/net/httpserver/ServerImpl;", nullptr, $FINAL | $SYNTHETIC, $field(ServerImpl$ServerTimerTask1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/net/httpserver/ServerImpl;)V", nullptr, 0, $method(ServerImpl$ServerTimerTask1, init$, void, $ServerImpl*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ServerImpl$ServerTimerTask1, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.httpserver.ServerImpl$ServerTimerTask1", "sun.net.httpserver.ServerImpl", "ServerTimerTask1", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.httpserver.ServerImpl$ServerTimerTask1",
		"java.util.TimerTask",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.httpserver.ServerImpl"
	};
	$loadClass(ServerImpl$ServerTimerTask1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServerImpl$ServerTimerTask1);
	});
	return class$;
}

$Class* ServerImpl$ServerTimerTask1::class$ = nullptr;

		} // httpserver
	} // net
} // sun