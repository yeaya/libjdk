#include <sun/net/httpserver/ServerImpl.h>

#include <com/sun/net/httpserver/HttpContext.h>
#include <com/sun/net/httpserver/HttpHandler.h>
#include <com/sun/net/httpserver/HttpServer.h>
#include <com/sun/net/httpserver/HttpsConfigurator.h>
#include <java/io/IOException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/StackTraceElement.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/lang/ThreadGroup.h>
#include <java/net/BindException.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/SocketAddress.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/Selector.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSequentialList.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <java/util/Timer.h>
#include <java/util/TimerTask.h>
#include <java/util/concurrent/Executor.h>
#include <javax/net/ssl/SSLContext.h>
#include <sun/net/httpserver/Code.h>
#include <sun/net/httpserver/ContextList.h>
#include <sun/net/httpserver/Event.h>
#include <sun/net/httpserver/HttpConnection$State.h>
#include <sun/net/httpserver/HttpConnection.h>
#include <sun/net/httpserver/HttpContextImpl.h>
#include <sun/net/httpserver/ServerConfig.h>
#include <sun/net/httpserver/ServerImpl$1.h>
#include <sun/net/httpserver/ServerImpl$2.h>
#include <sun/net/httpserver/ServerImpl$DefaultExecutor.h>
#include <sun/net/httpserver/ServerImpl$Dispatcher.h>
#include <sun/net/httpserver/ServerImpl$ServerTimerTask.h>
#include <sun/net/httpserver/ServerImpl$ServerTimerTask1.h>
#include <jcpp.h>

#undef CLOCK_TICK
#undef DEBUG
#undef IDLE
#undef IDLE_INTERVAL
#undef MAX_IDLE_CONNECTIONS
#undef MAX_REQ_TIME
#undef MAX_RSP_TIME
#undef OP_ACCEPT
#undef REQUEST
#undef RESPONSE
#undef TIMER_MILLIS
#undef TRACE

using $StackTraceElementArray = $Array<::java::lang::StackTraceElement>;
using $HttpContext = ::com::sun::net::httpserver::HttpContext;
using $HttpHandler = ::com::sun::net::httpserver::HttpHandler;
using $HttpServer = ::com::sun::net::httpserver::HttpServer;
using $HttpsConfigurator = ::com::sun::net::httpserver::HttpsConfigurator;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $StackTraceElement = ::java::lang::StackTraceElement;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $BindException = ::java::net::BindException;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $SocketAddress = ::java::net::SocketAddress;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $AbstractSelectableChannel = ::java::nio::channels::spi::AbstractSelectableChannel;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $AbstractSet = ::java::util::AbstractSet;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $Timer = ::java::util::Timer;
using $TimerTask = ::java::util::TimerTask;
using $Executor = ::java::util::concurrent::Executor;
using $SSLContext = ::javax::net::ssl::SSLContext;
using $Code = ::sun::net::httpserver::Code;
using $ContextList = ::sun::net::httpserver::ContextList;
using $Event = ::sun::net::httpserver::Event;
using $HttpConnection = ::sun::net::httpserver::HttpConnection;
using $HttpConnection$State = ::sun::net::httpserver::HttpConnection$State;
using $HttpContextImpl = ::sun::net::httpserver::HttpContextImpl;
using $ServerConfig = ::sun::net::httpserver::ServerConfig;
using $ServerImpl$1 = ::sun::net::httpserver::ServerImpl$1;
using $ServerImpl$2 = ::sun::net::httpserver::ServerImpl$2;
using $ServerImpl$DefaultExecutor = ::sun::net::httpserver::ServerImpl$DefaultExecutor;
using $ServerImpl$Dispatcher = ::sun::net::httpserver::ServerImpl$Dispatcher;
using $ServerImpl$ServerTimerTask = ::sun::net::httpserver::ServerImpl$ServerTimerTask;
using $ServerImpl$ServerTimerTask1 = ::sun::net::httpserver::ServerImpl$ServerTimerTask1;
using $TimeSource = ::sun::net::httpserver::TimeSource;

namespace sun {
	namespace net {
		namespace httpserver {

$FieldInfo _ServerImpl_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ServerImpl, $assertionsDisabled)},
	{"protocol", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ServerImpl, protocol)},
	{"https", "Z", nullptr, $PRIVATE, $field(ServerImpl, https)},
	{"executor", "Ljava/util/concurrent/Executor;", nullptr, $PRIVATE, $field(ServerImpl, executor)},
	{"httpsConfig", "Lcom/sun/net/httpserver/HttpsConfigurator;", nullptr, $PRIVATE, $field(ServerImpl, httpsConfig)},
	{"sslContext", "Ljavax/net/ssl/SSLContext;", nullptr, $PRIVATE, $field(ServerImpl, sslContext)},
	{"contexts", "Lsun/net/httpserver/ContextList;", nullptr, $PRIVATE, $field(ServerImpl, contexts)},
	{"address", "Ljava/net/InetSocketAddress;", nullptr, $PRIVATE, $field(ServerImpl, address)},
	{"schan", "Ljava/nio/channels/ServerSocketChannel;", nullptr, $PRIVATE, $field(ServerImpl, schan)},
	{"selector", "Ljava/nio/channels/Selector;", nullptr, $PRIVATE, $field(ServerImpl, selector)},
	{"listenerKey", "Ljava/nio/channels/SelectionKey;", nullptr, $PRIVATE, $field(ServerImpl, listenerKey)},
	{"idleConnections", "Ljava/util/Set;", "Ljava/util/Set<Lsun/net/httpserver/HttpConnection;>;", $PRIVATE, $field(ServerImpl, idleConnections)},
	{"allConnections", "Ljava/util/Set;", "Ljava/util/Set<Lsun/net/httpserver/HttpConnection;>;", $PRIVATE, $field(ServerImpl, allConnections)},
	{"reqConnections", "Ljava/util/Set;", "Ljava/util/Set<Lsun/net/httpserver/HttpConnection;>;", $PRIVATE, $field(ServerImpl, reqConnections)},
	{"rspConnections", "Ljava/util/Set;", "Ljava/util/Set<Lsun/net/httpserver/HttpConnection;>;", $PRIVATE, $field(ServerImpl, rspConnections)},
	{"events", "Ljava/util/List;", "Ljava/util/List<Lsun/net/httpserver/Event;>;", $PRIVATE, $field(ServerImpl, events)},
	{"lolock", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(ServerImpl, lolock)},
	{"finished", "Z", nullptr, $PRIVATE | $VOLATILE, $field(ServerImpl, finished)},
	{"terminating", "Z", nullptr, $PRIVATE | $VOLATILE, $field(ServerImpl, terminating)},
	{"bound", "Z", nullptr, $PRIVATE, $field(ServerImpl, bound)},
	{"started", "Z", nullptr, $PRIVATE, $field(ServerImpl, started)},
	{"time", "J", nullptr, $PRIVATE | $VOLATILE, $field(ServerImpl, time)},
	{"subticks", "J", nullptr, $PRIVATE | $VOLATILE, $field(ServerImpl, subticks)},
	{"ticks", "J", nullptr, $PRIVATE | $VOLATILE, $field(ServerImpl, ticks)},
	{"wrapper", "Lcom/sun/net/httpserver/HttpServer;", nullptr, $PRIVATE, $field(ServerImpl, wrapper)},
	{"CLOCK_TICK", "I", nullptr, $STATIC | $FINAL, $staticField(ServerImpl, CLOCK_TICK)},
	{"IDLE_INTERVAL", "J", nullptr, $STATIC | $FINAL, $staticField(ServerImpl, IDLE_INTERVAL)},
	{"MAX_IDLE_CONNECTIONS", "I", nullptr, $STATIC | $FINAL, $staticField(ServerImpl, MAX_IDLE_CONNECTIONS)},
	{"TIMER_MILLIS", "J", nullptr, $STATIC | $FINAL, $staticField(ServerImpl, TIMER_MILLIS)},
	{"MAX_REQ_TIME", "J", nullptr, $STATIC | $FINAL, $staticField(ServerImpl, MAX_REQ_TIME)},
	{"MAX_RSP_TIME", "J", nullptr, $STATIC | $FINAL, $staticField(ServerImpl, MAX_RSP_TIME)},
	{"timer1Enabled", "Z", nullptr, $STATIC | $FINAL, $staticField(ServerImpl, timer1Enabled)},
	{"timer", "Ljava/util/Timer;", nullptr, $PRIVATE, $field(ServerImpl, timer)},
	{"timer1", "Ljava/util/Timer;", nullptr, $PRIVATE, $field(ServerImpl, timer1)},
	{"logger", "Ljava/lang/System$Logger;", nullptr, $PRIVATE | $FINAL, $field(ServerImpl, logger)},
	{"dispatcherThread", "Ljava/lang/Thread;", nullptr, $PRIVATE, $field(ServerImpl, dispatcherThread)},
	{"dispatcher", "Lsun/net/httpserver/ServerImpl$Dispatcher;", nullptr, 0, $field(ServerImpl, dispatcher)},
	{"debug", "Z", nullptr, $STATIC, $staticField(ServerImpl, debug)},
	{"exchangeCount", "I", nullptr, $PRIVATE, $field(ServerImpl, exchangeCount)},
	{}
};

$MethodInfo _ServerImpl_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/net/httpserver/HttpServer;Ljava/lang/String;Ljava/net/InetSocketAddress;I)V", nullptr, 0, $method(static_cast<void(ServerImpl::*)($HttpServer*,$String*,$InetSocketAddress*,int32_t)>(&ServerImpl::init$)), "java.io.IOException"},
	{"addEvent", "(Lsun/net/httpserver/Event;)V", nullptr, 0},
	{"bind", "(Ljava/net/InetSocketAddress;I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"closeConnection", "(Lsun/net/httpserver/HttpConnection;)V", nullptr, $PRIVATE, $method(static_cast<void(ServerImpl::*)($HttpConnection*)>(&ServerImpl::closeConnection))},
	{"createContext", "(Ljava/lang/String;Lcom/sun/net/httpserver/HttpHandler;)Lsun/net/httpserver/HttpContextImpl;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"createContext", "(Ljava/lang/String;)Lsun/net/httpserver/HttpContextImpl;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"delay", "()V", nullptr, 0},
	{"dprint", "(Ljava/lang/String;)V", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)($String*)>(&ServerImpl::dprint))},
	{"dprint", "(Ljava/lang/Exception;)V", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)($Exception*)>(&ServerImpl::dprint))},
	{"endExchange", "()I", nullptr, $SYNCHRONIZED},
	{"getAddress", "()Ljava/net/InetSocketAddress;", nullptr, $PUBLIC},
	{"getExecutor", "()Ljava/util/concurrent/Executor;", nullptr, $PUBLIC},
	{"getHttpsConfigurator", "()Lcom/sun/net/httpserver/HttpsConfigurator;", nullptr, $PUBLIC},
	{"getLogger", "()Ljava/lang/System$Logger;", nullptr, 0},
	{"getSelector", "()Ljava/nio/channels/Selector;", nullptr, 0},
	{"getTicks", "()J", nullptr, 0},
	{"getTime", "()J", nullptr, $PUBLIC},
	{"getTimeMillis", "(J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&ServerImpl::getTimeMillis))},
	{"getWrapper", "()Lcom/sun/net/httpserver/HttpServer;", nullptr, 0},
	{"isFinishing", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(ServerImpl::*)()>(&ServerImpl::isFinishing))},
	{"isValidHeaderKey", "(Ljava/lang/String;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($String*)>(&ServerImpl::isValidHeaderKey))},
	{"logReply", "(ILjava/lang/String;Ljava/lang/String;)V", nullptr, 0},
	{"logStackTrace", "(Ljava/lang/String;)V", nullptr, 0},
	{"removeContext", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.lang.IllegalArgumentException"},
	{"removeContext", "(Lcom/sun/net/httpserver/HttpContext;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.lang.IllegalArgumentException"},
	{"requestCompleted", "(Lsun/net/httpserver/HttpConnection;)V", nullptr, 0},
	{"requestStarted", "(Lsun/net/httpserver/HttpConnection;)V", nullptr, 0},
	{"responseCompleted", "(Lsun/net/httpserver/HttpConnection;)V", nullptr, 0},
	{"setExecutor", "(Ljava/util/concurrent/Executor;)V", nullptr, $PUBLIC},
	{"setHttpsConfigurator", "(Lcom/sun/net/httpserver/HttpsConfigurator;)V", nullptr, $PUBLIC},
	{"start", "()V", nullptr, $PUBLIC},
	{"startExchange", "()V", nullptr, $SYNCHRONIZED},
	{"stop", "(I)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ServerImpl_InnerClassesInfo_[] = {
	{"sun.net.httpserver.ServerImpl$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"sun.net.httpserver.ServerImpl$ServerTimerTask1", "sun.net.httpserver.ServerImpl", "ServerTimerTask1", 0},
	{"sun.net.httpserver.ServerImpl$ServerTimerTask", "sun.net.httpserver.ServerImpl", "ServerTimerTask", 0},
	{"sun.net.httpserver.ServerImpl$Exchange", "sun.net.httpserver.ServerImpl", "Exchange", 0},
	{"sun.net.httpserver.ServerImpl$Dispatcher", "sun.net.httpserver.ServerImpl", "Dispatcher", 0},
	{"sun.net.httpserver.ServerImpl$DefaultExecutor", "sun.net.httpserver.ServerImpl", "DefaultExecutor", $PRIVATE | $STATIC},
	{"sun.net.httpserver.ServerImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ServerImpl_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.httpserver.ServerImpl",
	"java.lang.Object",
	"sun.net.httpserver.TimeSource",
	_ServerImpl_FieldInfo_,
	_ServerImpl_MethodInfo_,
	nullptr,
	nullptr,
	_ServerImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.net.httpserver.ServerImpl$2,sun.net.httpserver.ServerImpl$ServerTimerTask1,sun.net.httpserver.ServerImpl$ServerTimerTask,sun.net.httpserver.ServerImpl$Exchange,sun.net.httpserver.ServerImpl$Exchange$LinkHandler,sun.net.httpserver.ServerImpl$Dispatcher,sun.net.httpserver.ServerImpl$DefaultExecutor,sun.net.httpserver.ServerImpl$1"
};

$Object* allocate$ServerImpl($Class* clazz) {
	return $of($alloc(ServerImpl));
}

bool ServerImpl::$assertionsDisabled = false;
int32_t ServerImpl::CLOCK_TICK = 0;
int64_t ServerImpl::IDLE_INTERVAL = 0;
int32_t ServerImpl::MAX_IDLE_CONNECTIONS = 0;
int64_t ServerImpl::TIMER_MILLIS = 0;
int64_t ServerImpl::MAX_REQ_TIME = 0;
int64_t ServerImpl::MAX_RSP_TIME = 0;
bool ServerImpl::timer1Enabled = false;
bool ServerImpl::debug = false;

void ServerImpl::init$($HttpServer* wrapper, $String* protocol, $InetSocketAddress* addr, int32_t backlog) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$set(this, lolock, $new($Object));
	this->finished = false;
	this->terminating = false;
	this->bound = false;
	this->started = false;
	this->subticks = 0;
	this->exchangeCount = 0;
	$set(this, protocol, protocol);
	$set(this, wrapper, wrapper);
	$set(this, logger, $System::getLogger("com.sun.net.httpserver"_s));
	$ServerConfig::checkLegacyProperties(this->logger);
	this->https = $nc(protocol)->equalsIgnoreCase("https"_s);
	$set(this, address, addr);
	$set(this, contexts, $new($ContextList));
	$set(this, schan, $ServerSocketChannel::open());
	if (addr != nullptr) {
		$var($ServerSocket, socket, $nc(this->schan)->socket());
		$nc(socket)->bind(addr, backlog);
		this->bound = true;
	}
	$set(this, selector, $Selector::open());
	$nc(this->schan)->configureBlocking(false);
	$set(this, listenerKey, $nc(this->schan)->register$(this->selector, $SelectionKey::OP_ACCEPT));
	$set(this, dispatcher, $new($ServerImpl$Dispatcher, this));
	$set(this, idleConnections, $Collections::synchronizedSet($$new($HashSet)));
	$set(this, allConnections, $Collections::synchronizedSet($$new($HashSet)));
	$set(this, reqConnections, $Collections::synchronizedSet($$new($HashSet)));
	$set(this, rspConnections, $Collections::synchronizedSet($$new($HashSet)));
	this->time = $System::currentTimeMillis();
	$set(this, timer, $new($Timer, "server-timer"_s, true));
	$nc(this->timer)->schedule(static_cast<$TimerTask*>($$new($ServerImpl$ServerTimerTask, this)), (int64_t)ServerImpl::CLOCK_TICK, (int64_t)ServerImpl::CLOCK_TICK);
	if (ServerImpl::timer1Enabled) {
		$set(this, timer1, $new($Timer, "server-timer1"_s, true));
		$nc(this->timer1)->schedule(static_cast<$TimerTask*>($$new($ServerImpl$ServerTimerTask1, this)), ServerImpl::TIMER_MILLIS, ServerImpl::TIMER_MILLIS);
		$init($System$Logger$Level);
		$nc(this->logger)->log($System$Logger$Level::DEBUG, "HttpServer timer1 enabled period in ms: "_s, $$new($ObjectArray, {$($of($Long::valueOf(ServerImpl::TIMER_MILLIS)))}));
		$nc(this->logger)->log($System$Logger$Level::DEBUG, $$str({"MAX_REQ_TIME:  "_s, $$str(ServerImpl::MAX_REQ_TIME)}));
		$nc(this->logger)->log($System$Logger$Level::DEBUG, $$str({"MAX_RSP_TIME:  "_s, $$str(ServerImpl::MAX_RSP_TIME)}));
	}
	$set(this, events, $new($LinkedList));
	$init($System$Logger$Level);
	$nc(this->logger)->log($System$Logger$Level::DEBUG, $$str({"HttpServer created "_s, protocol, " "_s, addr}));
}

void ServerImpl::bind($InetSocketAddress* addr, int32_t backlog) {
	if (this->bound) {
		$throwNew($BindException, "HttpServer already bound"_s);
	}
	if (addr == nullptr) {
		$throwNew($NullPointerException, "null address"_s);
	}
	$var($ServerSocket, socket, $nc(this->schan)->socket());
	$nc(socket)->bind(addr, backlog);
	this->bound = true;
}

void ServerImpl::start() {
	if (!this->bound || this->started || this->finished) {
		$throwNew($IllegalStateException, "server in wrong state"_s);
	}
	if (this->executor == nullptr) {
		$set(this, executor, $new($ServerImpl$DefaultExecutor));
	}
	$set(this, dispatcherThread, $new($Thread, nullptr, this->dispatcher, "HTTP-Dispatcher"_s, 0, false));
	this->started = true;
	$nc(this->dispatcherThread)->start();
}

void ServerImpl::setExecutor($Executor* executor) {
	if (this->started) {
		$throwNew($IllegalStateException, "server already started"_s);
	}
	$set(this, executor, executor);
}

$Executor* ServerImpl::getExecutor() {
	return this->executor;
}

void ServerImpl::setHttpsConfigurator($HttpsConfigurator* config) {
	if (config == nullptr) {
		$throwNew($NullPointerException, "null HttpsConfigurator"_s);
	}
	if (this->started) {
		$throwNew($IllegalStateException, "server already started"_s);
	}
	$set(this, httpsConfig, config);
	$set(this, sslContext, $nc(config)->getSSLContext());
}

$HttpsConfigurator* ServerImpl::getHttpsConfigurator() {
	return this->httpsConfig;
}

bool ServerImpl::isFinishing() {
	return this->finished;
}

void ServerImpl::stop(int32_t delay) {
	$useLocalCurrentObjectStackCache();
	if (delay < 0) {
		$throwNew($IllegalArgumentException, "negative delay parameter"_s);
	}
	this->terminating = true;
	try {
		$nc(this->schan)->close();
	} catch ($IOException& e) {
	}
	$nc(this->selector)->wakeup();
	int64_t latest = $System::currentTimeMillis() + delay * 1000;
	while ($System::currentTimeMillis() < latest) {
		this->delay();
		if (this->finished) {
			break;
		}
	}
	this->finished = true;
	$nc(this->selector)->wakeup();
	$synchronized(this->allConnections) {
		{
			$var($Iterator, i$, $nc(this->allConnections)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($HttpConnection, c, $cast($HttpConnection, i$->next()));
				{
					$nc(c)->close();
				}
			}
		}
	}
	$nc(this->allConnections)->clear();
	$nc(this->idleConnections)->clear();
	$nc(this->timer)->cancel();
	if (ServerImpl::timer1Enabled) {
		$nc(this->timer1)->cancel();
	}
	if (this->dispatcherThread != nullptr && this->dispatcherThread != $Thread::currentThread()) {
		try {
			$nc(this->dispatcherThread)->join();
		} catch ($InterruptedException& e) {
			$($Thread::currentThread())->interrupt();
			$init($System$Logger$Level);
			$nc(this->logger)->log($System$Logger$Level::TRACE, "ServerImpl.stop: "_s, static_cast<$Throwable*>(e));
		}
	}
}

$HttpContextImpl* ServerImpl::createContext($String* path, $HttpHandler* handler) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (handler == nullptr || path == nullptr) {
			$throwNew($NullPointerException, "null handler, or path parameter"_s);
		}
		$var($HttpContextImpl, context, $new($HttpContextImpl, this->protocol, path, handler, this));
		$nc(this->contexts)->add(context);
		$init($System$Logger$Level);
		$nc(this->logger)->log($System$Logger$Level::DEBUG, $$str({"context created: "_s, path}));
		return context;
	}
}

$HttpContextImpl* ServerImpl::createContext($String* path) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (path == nullptr) {
			$throwNew($NullPointerException, "null path parameter"_s);
		}
		$var($HttpContextImpl, context, $new($HttpContextImpl, this->protocol, path, nullptr, this));
		$nc(this->contexts)->add(context);
		$init($System$Logger$Level);
		$nc(this->logger)->log($System$Logger$Level::DEBUG, $$str({"context created: "_s, path}));
		return context;
	}
}

void ServerImpl::removeContext($String* path) {
	$synchronized(this) {
		if (path == nullptr) {
			$throwNew($NullPointerException, "null path parameter"_s);
		}
		$nc(this->contexts)->remove(this->protocol, path);
		$init($System$Logger$Level);
		$nc(this->logger)->log($System$Logger$Level::DEBUG, $$str({"context removed: "_s, path}));
	}
}

void ServerImpl::removeContext($HttpContext* context) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (!($instanceOf($HttpContextImpl, context))) {
			$throwNew($IllegalArgumentException, "wrong HttpContext type"_s);
		}
		$nc(this->contexts)->remove($cast($HttpContextImpl, context));
		$init($System$Logger$Level);
		$nc(this->logger)->log($System$Logger$Level::DEBUG, $$str({"context removed: "_s, $($nc(context)->getPath())}));
	}
}

$InetSocketAddress* ServerImpl::getAddress() {
	$beforeCallerSensitive();
	return $cast($InetSocketAddress, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($ServerImpl$1, this))));
}

$Selector* ServerImpl::getSelector() {
	return this->selector;
}

void ServerImpl::addEvent($Event* r) {
	$synchronized(this->lolock) {
		$nc(this->events)->add(r);
		$nc(this->selector)->wakeup();
	}
}

void ServerImpl::dprint($String* s) {
	$load(ServerImpl);
	$synchronized(class$) {
		$init(ServerImpl);
		if (ServerImpl::debug) {
			$nc($System::out)->println(s);
		}
	}
}

void ServerImpl::dprint($Exception* e) {
	$load(ServerImpl);
	$synchronized(class$) {
		$init(ServerImpl);
		if (ServerImpl::debug) {
			$nc($System::out)->println($of(e));
			$nc(e)->printStackTrace();
		}
	}
}

$System$Logger* ServerImpl::getLogger() {
	return this->logger;
}

void ServerImpl::closeConnection($HttpConnection* conn) {
	$nc(conn)->close();
	$nc(this->allConnections)->remove(conn);
	$init($ServerImpl$2);
	switch ($nc($ServerImpl$2::$SwitchMap$sun$net$httpserver$HttpConnection$State)->get($nc(($(conn->getState())))->ordinal())) {
	case 1:
		{
			$nc(this->reqConnections)->remove(conn);
			break;
		}
	case 2:
		{
			$nc(this->rspConnections)->remove(conn);
			break;
		}
	case 3:
		{
			$nc(this->idleConnections)->remove(conn);
			break;
		}
	}
	if (!ServerImpl::$assertionsDisabled && ! !$nc(this->reqConnections)->remove(conn)) {
		$throwNew($AssertionError);
	}
	if (!ServerImpl::$assertionsDisabled && ! !$nc(this->rspConnections)->remove(conn)) {
		$throwNew($AssertionError);
	}
	if (!ServerImpl::$assertionsDisabled && ! !$nc(this->idleConnections)->remove(conn)) {
		$throwNew($AssertionError);
	}
}

void ServerImpl::logReply(int32_t code, $String* requestStr, $String* text$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, text, text$renamed);
	$init($System$Logger$Level);
	if (!$nc(this->logger)->isLoggable($System$Logger$Level::DEBUG)) {
		return;
	}
	if (text == nullptr) {
		$assign(text, ""_s);
	}
	$var($String, r, nullptr);
	if ($nc(requestStr)->length() > 80) {
		$assign(r, $str({$(requestStr->substring(0, 80)), "<TRUNCATED>"_s}));
	} else {
		$assign(r, requestStr);
	}
	$var($String, message, $str({r, " ["_s, $$str(code), " "_s, $($Code::msg(code)), "] ("_s, text, ")"_s}));
	$nc(this->logger)->log($System$Logger$Level::DEBUG, message);
}

int64_t ServerImpl::getTicks() {
	return this->ticks;
}

int64_t ServerImpl::getTime() {
	return this->time;
}

void ServerImpl::delay() {
	$Thread::yield();
	try {
		$Thread::sleep(200);
	} catch ($InterruptedException& e) {
	}
}

void ServerImpl::startExchange() {
	$synchronized(this) {
		++this->exchangeCount;
	}
}

int32_t ServerImpl::endExchange() {
	$synchronized(this) {
		--this->exchangeCount;
		if (!ServerImpl::$assertionsDisabled && !(this->exchangeCount >= 0)) {
			$throwNew($AssertionError);
		}
		return this->exchangeCount;
	}
}

$HttpServer* ServerImpl::getWrapper() {
	return this->wrapper;
}

void ServerImpl::requestStarted($HttpConnection* c) {
	$nc(c)->creationTime = getTime();
	$init($HttpConnection$State);
	c->setState($HttpConnection$State::REQUEST);
	$nc(this->reqConnections)->add(c);
}

void ServerImpl::requestCompleted($HttpConnection* c) {
	$HttpConnection$State* s = $nc(c)->getState();
	$init($HttpConnection$State);
	if (!ServerImpl::$assertionsDisabled && !(s == $HttpConnection$State::REQUEST)) {
		$throwNew($AssertionError, $of($$str({"State is not REQUEST ("_s, s, ")"_s})));
	}
	$nc(this->reqConnections)->remove(c);
	c->rspStartedTime = getTime();
	$nc(this->rspConnections)->add(c);
	c->setState($HttpConnection$State::RESPONSE);
}

void ServerImpl::responseCompleted($HttpConnection* c) {
	$HttpConnection$State* s = $nc(c)->getState();
	$init($HttpConnection$State);
	if (!ServerImpl::$assertionsDisabled && !(s == $HttpConnection$State::RESPONSE)) {
		$throwNew($AssertionError, $of($$str({"State is not RESPONSE ("_s, s, ")"_s})));
	}
	$nc(this->rspConnections)->remove(c);
	c->setState($HttpConnection$State::IDLE);
}

void ServerImpl::logStackTrace($String* s) {
	$useLocalCurrentObjectStackCache();
	$init($System$Logger$Level);
	$nc(this->logger)->log($System$Logger$Level::TRACE, s);
	$var($StringBuilder, b, $new($StringBuilder));
	$var($StackTraceElementArray, e, $($Thread::currentThread())->getStackTrace());
	for (int32_t i = 0; i < $nc(e)->length; ++i) {
		b->append($($nc(e->get(i))->toString()))->append("\n"_s);
	}
	$nc(this->logger)->log($System$Logger$Level::TRACE, $(b->toString()));
}

int64_t ServerImpl::getTimeMillis(int64_t secs) {
	$init(ServerImpl);
	if (secs == -1) {
		return -1;
	} else {
		return secs * 1000;
	}
}

bool ServerImpl::isValidHeaderKey($String* token) {
	$init(ServerImpl);
	$useLocalCurrentObjectStackCache();
	if (token == nullptr) {
		return false;
	}
	bool isValidChar = false;
	$var($chars, chars, $nc(token)->toCharArray());
	$var($String, validSpecialChars, "!#$%&\'*+-.^_`|~"_s);
	{
		$var($chars, arr$, chars);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			char16_t c = arr$->get(i$);
			{
				isValidChar = ((c >= u'a') && (c <= u'z')) || ((c >= u'A') && (c <= u'Z')) || ((c >= u'0') && (c <= u'9'));
				if (!isValidChar && validSpecialChars->indexOf((int32_t)c) == -1) {
					return false;
				}
			}
		}
	}
	return !token->isEmpty();
}

void clinit$ServerImpl($Class* class$) {
	ServerImpl::$assertionsDisabled = !ServerImpl::class$->desiredAssertionStatus();
	ServerImpl::CLOCK_TICK = $ServerConfig::getClockTick();
	ServerImpl::IDLE_INTERVAL = $ServerConfig::getIdleInterval();
	ServerImpl::MAX_IDLE_CONNECTIONS = $ServerConfig::getMaxIdleConnections();
	ServerImpl::TIMER_MILLIS = $ServerConfig::getTimerMillis();
	ServerImpl::MAX_REQ_TIME = ServerImpl::getTimeMillis($ServerConfig::getMaxReqTime());
	ServerImpl::MAX_RSP_TIME = ServerImpl::getTimeMillis($ServerConfig::getMaxRspTime());
	ServerImpl::timer1Enabled = ServerImpl::MAX_REQ_TIME != -1 || ServerImpl::MAX_RSP_TIME != -1;
	ServerImpl::debug = $ServerConfig::debugEnabled();
}

ServerImpl::ServerImpl() {
}

$Class* ServerImpl::load$($String* name, bool initialize) {
	$loadClass(ServerImpl, name, initialize, &_ServerImpl_ClassInfo_, clinit$ServerImpl, allocate$ServerImpl);
	return class$;
}

$Class* ServerImpl::class$ = nullptr;

		} // httpserver
	} // net
} // sun