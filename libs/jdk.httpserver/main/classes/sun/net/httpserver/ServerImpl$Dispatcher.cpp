#include <sun/net/httpserver/ServerImpl$Dispatcher.h>

#include <java/io/IOException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Runnable.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/net/Socket.h>
#include <java/nio/channels/CancelledKeyException.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/Selector.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSequentialList.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <java/util/concurrent/Executor.h>
#include <sun/net/httpserver/Event.h>
#include <sun/net/httpserver/ExchangeImpl.h>
#include <sun/net/httpserver/HttpConnection$State.h>
#include <sun/net/httpserver/HttpConnection.h>
#include <sun/net/httpserver/HttpError.h>
#include <sun/net/httpserver/LeftOverInputStream.h>
#include <sun/net/httpserver/ServerConfig.h>
#include <sun/net/httpserver/ServerImpl$Exchange.h>
#include <sun/net/httpserver/ServerImpl.h>
#include <sun/net/httpserver/WriteFinishedEvent.h>
#include <jcpp.h>

#undef IDLE_INTERVAL
#undef MAX_IDLE_CONNECTIONS
#undef OP_READ
#undef REQUEST
#undef TRACE

using $IOException = ::java::io::IOException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $Socket = ::java::net::Socket;
using $CancelledKeyException = ::java::nio::channels::CancelledKeyException;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $AbstractSelectableChannel = ::java::nio::channels::spi::AbstractSelectableChannel;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $Executor = ::java::util::concurrent::Executor;
using $Event = ::sun::net::httpserver::Event;
using $ExchangeImpl = ::sun::net::httpserver::ExchangeImpl;
using $HttpConnection = ::sun::net::httpserver::HttpConnection;
using $HttpConnection$State = ::sun::net::httpserver::HttpConnection$State;
using $HttpError = ::sun::net::httpserver::HttpError;
using $LeftOverInputStream = ::sun::net::httpserver::LeftOverInputStream;
using $ServerConfig = ::sun::net::httpserver::ServerConfig;
using $ServerImpl = ::sun::net::httpserver::ServerImpl;
using $ServerImpl$Exchange = ::sun::net::httpserver::ServerImpl$Exchange;
using $WriteFinishedEvent = ::sun::net::httpserver::WriteFinishedEvent;

namespace sun {
	namespace net {
		namespace httpserver {

$FieldInfo _ServerImpl$Dispatcher_FieldInfo_[] = {
	{"this$0", "Lsun/net/httpserver/ServerImpl;", nullptr, $FINAL | $SYNTHETIC, $field(ServerImpl$Dispatcher, this$0)},
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ServerImpl$Dispatcher, $assertionsDisabled)},
	{"connsToRegister", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Lsun/net/httpserver/HttpConnection;>;", $FINAL, $field(ServerImpl$Dispatcher, connsToRegister)},
	{}
};

$MethodInfo _ServerImpl$Dispatcher_MethodInfo_[] = {
	{"<init>", "(Lsun/net/httpserver/ServerImpl;)V", nullptr, 0, $method(static_cast<void(ServerImpl$Dispatcher::*)($ServerImpl*)>(&ServerImpl$Dispatcher::init$))},
	{"handle", "(Ljava/nio/channels/SocketChannel;Lsun/net/httpserver/HttpConnection;)V", nullptr, $PUBLIC},
	{"handleEvent", "(Lsun/net/httpserver/Event;)V", nullptr, $PRIVATE, $method(static_cast<void(ServerImpl$Dispatcher::*)($Event*)>(&ServerImpl$Dispatcher::handleEvent))},
	{"handleException", "(Ljava/nio/channels/SelectionKey;Ljava/lang/Exception;)V", nullptr, $PRIVATE, $method(static_cast<void(ServerImpl$Dispatcher::*)($SelectionKey*,$Exception*)>(&ServerImpl$Dispatcher::handleException))},
	{"reRegister", "(Lsun/net/httpserver/HttpConnection;)V", nullptr, 0},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ServerImpl$Dispatcher_InnerClassesInfo_[] = {
	{"sun.net.httpserver.ServerImpl$Dispatcher", "sun.net.httpserver.ServerImpl", "Dispatcher", 0},
	{}
};

$ClassInfo _ServerImpl$Dispatcher_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.httpserver.ServerImpl$Dispatcher",
	"java.lang.Object",
	"java.lang.Runnable",
	_ServerImpl$Dispatcher_FieldInfo_,
	_ServerImpl$Dispatcher_MethodInfo_,
	nullptr,
	nullptr,
	_ServerImpl$Dispatcher_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.httpserver.ServerImpl"
};

$Object* allocate$ServerImpl$Dispatcher($Class* clazz) {
	return $of($alloc(ServerImpl$Dispatcher));
}

bool ServerImpl$Dispatcher::$assertionsDisabled = false;

void ServerImpl$Dispatcher::init$($ServerImpl* this$0) {
	$set(this, this$0, this$0);
	$set(this, connsToRegister, $new($LinkedList));
}

void ServerImpl$Dispatcher::handleEvent($Event* r) {
	$useLocalCurrentObjectStackCache();
	$var($ExchangeImpl, t, $nc(r)->exchange);
	$var($HttpConnection, c, $nc(t)->getConnection());
	try {
		if ($instanceOf($WriteFinishedEvent, r)) {
			$init($System$Logger$Level);
			$nc(this->this$0->logger)->log($System$Logger$Level::TRACE, "Write Finished"_s);
			int32_t exchanges = this->this$0->endExchange();
			if (this->this$0->terminating && exchanges == 0) {
				this->this$0->finished = true;
			}
			$var($LeftOverInputStream, is, t->getOriginalInputStream());
			if (!$nc(is)->isEOF()) {
				t->close$ = true;
				$init($HttpConnection$State);
				if ($nc(c)->getState() == $HttpConnection$State::REQUEST) {
					this->this$0->requestCompleted(c);
				}
			}
			this->this$0->responseCompleted(c);
			if (t->close$ || $nc(this->this$0->idleConnections)->size() >= $ServerImpl::MAX_IDLE_CONNECTIONS) {
				$nc(c)->close();
				$nc(this->this$0->allConnections)->remove(c);
			} else if ($nc(is)->isDataBuffered()) {
				this->this$0->requestStarted(c);
				handle($($nc(c)->getChannel()), c);
			} else {
				$nc(this->connsToRegister)->add(c);
			}
		}
	} catch ($IOException& e) {
		$init($System$Logger$Level);
		$nc(this->this$0->logger)->log($System$Logger$Level::TRACE, "Dispatcher (1)"_s, static_cast<$Throwable*>(e));
		$nc(c)->close();
	}
}

void ServerImpl$Dispatcher::reRegister($HttpConnection* c) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($SocketChannel, chan, $nc(c)->getChannel());
		$nc(chan)->configureBlocking(false);
		$var($SelectionKey, key, chan->register$(this->this$0->selector, $SelectionKey::OP_READ));
		$nc(key)->attach(c);
		$set(c, selectionKey, key);
		$init($ServerImpl);
		c->time = this->this$0->getTime() + $ServerImpl::IDLE_INTERVAL;
		$nc(this->this$0->idleConnections)->add(c);
	} catch ($IOException& e) {
		$ServerImpl::dprint(static_cast<$Exception*>(e));
		$init($System$Logger$Level);
		$nc(this->this$0->logger)->log($System$Logger$Level::TRACE, "Dispatcher(8)"_s, static_cast<$Throwable*>(e));
		$nc(c)->close();
	}
}

void ServerImpl$Dispatcher::run() {
	$useLocalCurrentObjectStackCache();
	while (!this->this$0->finished) {
		try {
			$var($List, list, nullptr);
			$synchronized(this->this$0->lolock) {
				if ($nc(this->this$0->events)->size() > 0) {
					$assign(list, this->this$0->events);
					$set(this->this$0, events, $new($LinkedList));
				}
			}
			if (list != nullptr) {
				{
					$var($Iterator, i$, list->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Event, r, $cast($Event, i$->next()));
						{
							handleEvent(r);
						}
					}
				}
			}
			{
				$var($Iterator, i$, $nc(this->connsToRegister)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($HttpConnection, c, $cast($HttpConnection, i$->next()));
					{
						reRegister(c);
					}
				}
			}
			$nc(this->connsToRegister)->clear();
			$nc(this->this$0->selector)->select((int64_t)1000);
			$var($Set, selected, $nc(this->this$0->selector)->selectedKeys());
			$var($Iterator, iter, $nc(selected)->iterator());
			while ($nc(iter)->hasNext()) {
				$var($SelectionKey, key, $cast($SelectionKey, iter->next()));
				iter->remove();
				if ($nc($of(key))->equals(this->this$0->listenerKey)) {
					if (this->this$0->terminating) {
						continue;
					}
					$var($SocketChannel, chan, $nc(this->this$0->schan)->accept());
					if (chan != nullptr) {
						if ($ServerConfig::noDelay()) {
							$nc($(chan->socket()))->setTcpNoDelay(true);
						}
						chan->configureBlocking(false);
						$var($SelectionKey, newkey, chan->register$(this->this$0->selector, $SelectionKey::OP_READ));
						$var($HttpConnection, c, $new($HttpConnection));
						$set(c, selectionKey, newkey);
						c->setChannel(chan);
						$nc(newkey)->attach(c);
						this->this$0->requestStarted(c);
						$nc(this->this$0->allConnections)->add(c);
					}
				} else {
					try {
						if (key->isReadable()) {
							$var($SocketChannel, chan, $cast($SocketChannel, key->channel()));
							$var($HttpConnection, conn, $cast($HttpConnection, key->attachment()));
							key->cancel();
							$nc(chan)->configureBlocking(true);
							if ($nc(this->this$0->idleConnections)->remove(conn)) {
								this->this$0->requestStarted(conn);
							}
							handle(chan, conn);
						} else if (!ServerImpl$Dispatcher::$assertionsDisabled) {
							$throwNew($AssertionError, $of($$str({"Unexpected non-readable key:"_s, key})));
						}
					} catch ($CancelledKeyException& e) {
						handleException(key, nullptr);
					} catch ($IOException& e) {
						handleException(key, e);
					}
				}
			}
			$nc(this->this$0->selector)->selectNow();
		} catch ($IOException& e) {
			$init($System$Logger$Level);
			$nc(this->this$0->logger)->log($System$Logger$Level::TRACE, "Dispatcher (4)"_s, static_cast<$Throwable*>(e));
		} catch ($Exception& e) {
			$init($System$Logger$Level);
			$nc(this->this$0->logger)->log($System$Logger$Level::TRACE, "Dispatcher (7)"_s, static_cast<$Throwable*>(e));
		}
	}
	try {
		$nc(this->this$0->selector)->close();
	} catch ($Exception& e) {
	}
}

void ServerImpl$Dispatcher::handleException($SelectionKey* key, $Exception* e) {
	$var($HttpConnection, conn, $cast($HttpConnection, $nc(key)->attachment()));
	if (e != nullptr) {
		$init($System$Logger$Level);
		$nc(this->this$0->logger)->log($System$Logger$Level::TRACE, "Dispatcher (2)"_s, static_cast<$Throwable*>(e));
	}
	this->this$0->closeConnection(conn);
}

void ServerImpl$Dispatcher::handle($SocketChannel* chan, $HttpConnection* conn) {
	try {
		$var($ServerImpl$Exchange, t, $new($ServerImpl$Exchange, this->this$0, chan, this->this$0->protocol, conn));
		$nc(this->this$0->executor)->execute(t);
	} catch ($HttpError& e1) {
		$init($System$Logger$Level);
		$nc(this->this$0->logger)->log($System$Logger$Level::TRACE, "Dispatcher (4)"_s, static_cast<$Throwable*>(e1));
		this->this$0->closeConnection(conn);
	} catch ($IOException& e) {
		$init($System$Logger$Level);
		$nc(this->this$0->logger)->log($System$Logger$Level::TRACE, "Dispatcher (5)"_s, static_cast<$Throwable*>(e));
		this->this$0->closeConnection(conn);
	} catch ($Throwable& e) {
		$init($System$Logger$Level);
		$nc(this->this$0->logger)->log($System$Logger$Level::TRACE, "Dispatcher (6)"_s, e);
		this->this$0->closeConnection(conn);
	}
}

void clinit$ServerImpl$Dispatcher($Class* class$) {
	$load($ServerImpl);
	ServerImpl$Dispatcher::$assertionsDisabled = !$ServerImpl::class$->desiredAssertionStatus();
}

ServerImpl$Dispatcher::ServerImpl$Dispatcher() {
}

$Class* ServerImpl$Dispatcher::load$($String* name, bool initialize) {
	$loadClass(ServerImpl$Dispatcher, name, initialize, &_ServerImpl$Dispatcher_ClassInfo_, clinit$ServerImpl$Dispatcher, allocate$ServerImpl$Dispatcher);
	return class$;
}

$Class* ServerImpl$Dispatcher::class$ = nullptr;

		} // httpserver
	} // net
} // sun