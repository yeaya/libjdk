#include <jdk/internal/net/http/websocket/TransportImpl$SendTask.h>
#include <java/io/IOException.h>
#include <java/lang/InternalError.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <java/util/function/BiConsumer.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jdk/internal/net/http/common/SequentialScheduler$CompleteRestartableTask.h>
#include <jdk/internal/net/http/websocket/MessageEncoder.h>
#include <jdk/internal/net/http/websocket/MessageQueue$QueueCallback.h>
#include <jdk/internal/net/http/websocket/MessageQueue.h>
#include <jdk/internal/net/http/websocket/RawChannel$RawEvent.h>
#include <jdk/internal/net/http/websocket/RawChannel.h>
#include <jdk/internal/net/http/websocket/TransportImpl$1.h>
#include <jdk/internal/net/http/websocket/TransportImpl$ChannelState.h>
#include <jdk/internal/net/http/websocket/TransportImpl$SendTask$1.h>
#include <jdk/internal/net/http/websocket/TransportImpl$SendTask$2.h>
#include <jdk/internal/net/http/websocket/TransportImpl.h>
#include <jcpp.h>

#undef AVAILABLE
#undef UNREGISTERED
#undef WAITING

using $IOException = ::java::io::IOException;
using $Boolean = ::java::lang::Boolean;
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
using $TransportImpl$SendTask$1 = ::jdk::internal::net::http::websocket::TransportImpl$SendTask$1;
using $TransportImpl$SendTask$2 = ::jdk::internal::net::http::websocket::TransportImpl$SendTask$2;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {

void TransportImpl$SendTask::init$($TransportImpl* this$0) {
	$set(this, this$0, this$0);
	$SequentialScheduler$CompleteRestartableTask::init$();
	$set(this, encodingCallback, $new($TransportImpl$SendTask$1, this));
	this->firstPass = true;
	$set(this, loadCallback, $new($TransportImpl$SendTask$2, this));
}

void TransportImpl$SendTask::run() {
	$useLocalObjectStack();
	$init($TransportImpl);
	if ($nc($TransportImpl::debug)->on()) {
		$TransportImpl::debug->log("enter send task"_s);
	}
	while (!$nc(this->this$0->queue)->isEmpty()) {
		try {
			if ($nc(this->this$0->dst)->hasRemaining()) {
				if ($TransportImpl::debug->on()) {
					$TransportImpl::debug->log("%s bytes remaining in buffer %s"_s, $$new($ObjectArray, {
						$($Integer::valueOf(this->this$0->dst->remaining())),
						this->this$0->dst
					}));
				}
				if (!tryCompleteWrite()) {
					break;
				}
			} else if (!this->encoded) {
				if (this->firstPass) {
					this->firstPass = false;
					this->this$0->queue->peek(this->loadCallback);
					if ($TransportImpl::debug->on()) {
						$TransportImpl::debug->log("load message"_s);
					}
				}
				this->this$0->dst->clear();
				this->encoded = $$sure($Boolean, this->this$0->queue->peek(this->encodingCallback))->booleanValue();
				this->this$0->dst->flip();
				if (!tryCompleteWrite()) {
					break;
				}
			} else {
				$nc(this->this$0->encoder)->reset();
				removeAndComplete(nullptr);
			}
		} catch ($Throwable& t) {
			if ($TransportImpl::debug->on()) {
				$TransportImpl::debug->log("send task exception %s"_s, $$new($ObjectArray, {$of(t)}));
			}
			$nc(this->this$0->dst)->position($nc(this->this$0->dst)->limit());
			$nc(this->this$0->encoder)->reset();
			removeAndComplete(t);
		}
	}
	if ($TransportImpl::debug->on()) {
		$TransportImpl::debug->log("exit send task"_s);
	}
}

bool TransportImpl$SendTask::tryCompleteWrite() {
	$useLocalObjectStack();
	$init($TransportImpl);
	if ($nc($TransportImpl::debug)->on()) {
		$TransportImpl::debug->log("enter writing"_s);
	}
	bool finished = false;
	bool loop$continue = false;
	bool loop$break = false;
	while (true) {
		$TransportImpl$ChannelState* ws = $cast($TransportImpl$ChannelState, $nc(this->this$0->writeState)->get());
		if ($TransportImpl::debug->on()) {
			$TransportImpl::debug->log("write state: %s"_s, $$new($ObjectArray, {ws}));
		}
		{
			$init($TransportImpl$1);
			bool written = false;
			switch ($nc($TransportImpl$1::$SwitchMap$jdk$internal$net$http$websocket$TransportImpl$ChannelState)->get((ws)->ordinal())) {
			case 1:
				loop$break = true;
				break;
			case 2:
				if ($TransportImpl::debug->on()) {
					$TransportImpl::debug->log("registering write event"_s);
				}
				$nc(this->this$0->channel)->registerEvent(this->this$0->writeEvent);
				this->this$0->writeState->compareAndSet($TransportImpl$ChannelState::UNREGISTERED, $TransportImpl$ChannelState::WAITING);
				if ($TransportImpl::debug->on()) {
					$TransportImpl::debug->log("registered write event"_s);
				}
				loop$break = true;
				break;
			case 3:
				written = this->this$0->write();
				if (written) {
					if ($TransportImpl::debug->on()) {
						$TransportImpl::debug->log("finished writing to the channel"_s);
					}
					finished = true;
					loop$break = true;
					break;
				} else {
					this->this$0->writeState->compareAndSet($TransportImpl$ChannelState::AVAILABLE, $TransportImpl$ChannelState::UNREGISTERED);
					continue;
				}
			case 4:
				$throwNew($IOException, "Output closed"_s);
			default:
				$throwNew($InternalError, $($String::valueOf(ws)));
			}
			if (loop$continue) {
				loop$continue = false;
				continue;
			}
			if (loop$break) {
				break;
			}
		}
	}
	if ($TransportImpl::debug->on()) {
		$TransportImpl::debug->log("exit writing"_s);
	}
	return finished;
}

void TransportImpl$SendTask::removeAndComplete($Throwable* error) {
	$useLocalObjectStack();
	$init($TransportImpl);
	if ($nc($TransportImpl::debug)->on()) {
		$TransportImpl::debug->log("removeAndComplete error=%s"_s, $$new($ObjectArray, {$of(error)}));
	}
	$nc(this->this$0->queue)->remove();
	if (error != nullptr) {
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->action)->accept(nullptr, error);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->future)->completeExceptionally(error);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	} else {
		$var($Throwable, var$2, nullptr);
		try {
			$nc(this->action)->accept(this->attachment, nullptr);
		} catch ($Throwable& var$3) {
			$assign(var$2, var$3);
		} /*finally*/ {
			$nc(this->future)->complete(this->attachment);
		}
		if (var$2 != nullptr) {
			$throw(var$2);
		}
	}
	this->encoded = false;
	this->firstPass = true;
	$set(this, attachment, nullptr);
	$set(this, action, nullptr);
	$set(this, future, nullptr);
}

TransportImpl$SendTask::TransportImpl$SendTask() {
}

$Class* TransportImpl$SendTask::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/net/http/websocket/TransportImpl;", nullptr, $FINAL | $SYNTHETIC, $field(TransportImpl$SendTask, this$0)},
		{"encodingCallback", "Ljdk/internal/net/http/websocket/MessageQueue$QueueCallback;", "Ljdk/internal/net/http/websocket/MessageQueue$QueueCallback<Ljava/lang/Boolean;Ljava/io/IOException;>;", $PRIVATE | $FINAL, $field(TransportImpl$SendTask, encodingCallback)},
		{"firstPass", "Z", nullptr, $PRIVATE, $field(TransportImpl$SendTask, firstPass)},
		{"encoded", "Z", nullptr, $PRIVATE, $field(TransportImpl$SendTask, encoded)},
		{"attachment", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(TransportImpl$SendTask, attachment)},
		{"action", "Ljava/util/function/BiConsumer;", nullptr, $PRIVATE, $field(TransportImpl$SendTask, action)},
		{"future", "Ljava/util/concurrent/CompletableFuture;", nullptr, $PRIVATE, $field(TransportImpl$SendTask, future)},
		{"loadCallback", "Ljdk/internal/net/http/websocket/MessageQueue$QueueCallback;", "Ljdk/internal/net/http/websocket/MessageQueue$QueueCallback<Ljava/lang/Boolean;Ljava/lang/RuntimeException;>;", $PRIVATE | $FINAL, $field(TransportImpl$SendTask, loadCallback)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/websocket/TransportImpl;)V", nullptr, $PRIVATE, $method(TransportImpl$SendTask, init$, void, $TransportImpl*)},
		{"removeAndComplete", "(Ljava/lang/Throwable;)V", nullptr, $PRIVATE, $method(TransportImpl$SendTask, removeAndComplete, void, $Throwable*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TransportImpl$SendTask, run, void)},
		{"tryCompleteWrite", "()Z", nullptr, $PRIVATE, $method(TransportImpl$SendTask, tryCompleteWrite, bool), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.websocket.TransportImpl$SendTask", "jdk.internal.net.http.websocket.TransportImpl", "SendTask", $PRIVATE},
		{"jdk.internal.net.http.common.SequentialScheduler$CompleteRestartableTask", "jdk.internal.net.http.common.SequentialScheduler", "CompleteRestartableTask", $PUBLIC | $STATIC | $ABSTRACT},
		{"jdk.internal.net.http.websocket.TransportImpl$SendTask$2", nullptr, nullptr, 0},
		{"jdk.internal.net.http.websocket.TransportImpl$SendTask$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.websocket.TransportImpl$SendTask",
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
	$loadClass(TransportImpl$SendTask, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransportImpl$SendTask);
	});
	return class$;
}

$Class* TransportImpl$SendTask::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk