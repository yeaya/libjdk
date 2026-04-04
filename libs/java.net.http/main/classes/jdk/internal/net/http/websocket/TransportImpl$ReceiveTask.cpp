#include <jdk/internal/net/http/websocket/TransportImpl$ReceiveTask.h>
#include <java/lang/AssertionError.h>
#include <java/lang/InternalError.h>
#include <java/nio/ByteBuffer.h>
#include <jdk/internal/net/http/common/Demand.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jdk/internal/net/http/common/SequentialScheduler$CompleteRestartableTask.h>
#include <jdk/internal/net/http/common/SequentialScheduler.h>
#include <jdk/internal/net/http/websocket/Frame$Consumer.h>
#include <jdk/internal/net/http/websocket/Frame$Reader.h>
#include <jdk/internal/net/http/websocket/MessageDecoder.h>
#include <jdk/internal/net/http/websocket/MessageStreamConsumer.h>
#include <jdk/internal/net/http/websocket/RawChannel$RawEvent.h>
#include <jdk/internal/net/http/websocket/RawChannel.h>
#include <jdk/internal/net/http/websocket/TransportImpl$1.h>
#include <jdk/internal/net/http/websocket/TransportImpl$ChannelState.h>
#include <jdk/internal/net/http/websocket/TransportImpl.h>
#include <jcpp.h>

#undef UNREGISTERED
#undef WAITING

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $SequentialScheduler$CompleteRestartableTask = ::jdk::internal::net::http::common::SequentialScheduler$CompleteRestartableTask;
using $TransportImpl = ::jdk::internal::net::http::websocket::TransportImpl;
using $TransportImpl$1 = ::jdk::internal::net::http::websocket::TransportImpl$1;
using $TransportImpl$ChannelState = ::jdk::internal::net::http::websocket::TransportImpl$ChannelState;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {

bool TransportImpl$ReceiveTask::$assertionsDisabled = false;

void TransportImpl$ReceiveTask::init$($TransportImpl* this$0) {
	$set(this, this$0, this$0);
	$SequentialScheduler$CompleteRestartableTask::init$();
}

void TransportImpl$ReceiveTask::run() {
	$useLocalObjectStack();
	$init($TransportImpl);
	if ($nc($TransportImpl::debug)->on()) {
		$TransportImpl::debug->log("enter receive task"_s);
	}
	bool loop$continue = false;
	bool loop$break = false;
	while (!$nc(this->this$0->receiveScheduler)->isStopped()) {
		$TransportImpl$ChannelState* rs = this->this$0->readState;
		if ($nc(this->this$0->data)->hasRemaining()) {
			if ($TransportImpl::debug->on()) {
				$TransportImpl::debug->log("remaining bytes received %s"_s, $$new($ObjectArray, {$($Integer::valueOf($nc(this->this$0->data)->remaining()))}));
			}
			if (!$nc(this->this$0->demand)->isFulfilled()) {
				try {
					int32_t oldPos = $nc(this->this$0->data)->position();
					$nc(this->this$0->reader)->readFrame(this->this$0->data, this->this$0->decoder);
					int32_t newPos = $nc(this->this$0->data)->position();
					if (!TransportImpl$ReceiveTask::$assertionsDisabled && !(oldPos != newPos)) {
						$throwNew($AssertionError, this->this$0->data);
					}
				} catch ($Throwable& e) {
					this->this$0->receiveScheduler->stop();
					$nc(this->this$0->messageConsumer)->onError(e);
				}
				if (!$nc(this->this$0->data)->hasRemaining()) {
					$init($TransportImpl$ChannelState);
					rs = ($set(this->this$0, readState, $TransportImpl$ChannelState::UNREGISTERED));
				}
				continue;
			}
			loop$break = true;
			break;
		}
		if ($TransportImpl::debug->on()) {
			$TransportImpl::debug->log("receive state: %s"_s, $$new($ObjectArray, {rs}));
		}
		$init($TransportImpl$1);
		switch ($nc($TransportImpl$1::$SwitchMap$jdk$internal$net$http$websocket$TransportImpl$ChannelState)->get($nc((rs))->ordinal())) {
		case 1:
			loop$break = true;
			break;
		case 2:
			try {
				rs = ($set(this->this$0, readState, $TransportImpl$ChannelState::WAITING));
				$nc(this->this$0->channel)->registerEvent(this->this$0->readEvent);
			} catch ($Throwable& e) {
				this->this$0->receiveScheduler->stop();
				$nc(this->this$0->messageConsumer)->onError(e);
			}
			loop$break = true;
			break;
		case 3:
			try {
				$set(this->this$0, data, $nc(this->this$0->channel)->read());
			} catch ($Throwable& e) {
				this->this$0->receiveScheduler->stop();
				$nc(this->this$0->messageConsumer)->onError(e);
				loop$break = true;
				break;
			}
			if (this->this$0->data == nullptr) {
				this->this$0->receiveScheduler->stop();
				$nc(this->this$0->messageConsumer)->onComplete();
				loop$break = true;
				break;
			} else if (!this->this$0->data->hasRemaining()) {
				rs = ($set(this->this$0, readState, $TransportImpl$ChannelState::UNREGISTERED));
			}
			continue;
		default:
			$throwNew($InternalError, $($String::valueOf(rs)));
		}
		if (loop$continue) {
			loop$continue = false;
			continue;
		}
		if (loop$break) {
			break;
		}
	}
	if ($TransportImpl::debug->on()) {
		$TransportImpl::debug->log("exit receive task"_s);
	}
}

void TransportImpl$ReceiveTask::clinit$($Class* clazz) {
	$load($TransportImpl);
	TransportImpl$ReceiveTask::$assertionsDisabled = !$TransportImpl::class$->desiredAssertionStatus();
}

TransportImpl$ReceiveTask::TransportImpl$ReceiveTask() {
}

$Class* TransportImpl$ReceiveTask::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/net/http/websocket/TransportImpl;", nullptr, $FINAL | $SYNTHETIC, $field(TransportImpl$ReceiveTask, this$0)},
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TransportImpl$ReceiveTask, $assertionsDisabled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/websocket/TransportImpl;)V", nullptr, $PRIVATE, $method(TransportImpl$ReceiveTask, init$, void, $TransportImpl*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TransportImpl$ReceiveTask, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.websocket.TransportImpl$ReceiveTask", "jdk.internal.net.http.websocket.TransportImpl", "ReceiveTask", $PRIVATE},
		{"jdk.internal.net.http.common.SequentialScheduler$CompleteRestartableTask", "jdk.internal.net.http.common.SequentialScheduler", "CompleteRestartableTask", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.websocket.TransportImpl$ReceiveTask",
		"jdk.internal.net.http.common.SequentialScheduler$CompleteRestartableTask",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.websocket.TransportImpl"
	};
	$loadClass(TransportImpl$ReceiveTask, name, initialize, &classInfo$$, TransportImpl$ReceiveTask::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TransportImpl$ReceiveTask);
	});
	return class$;
}

$Class* TransportImpl$ReceiveTask::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk