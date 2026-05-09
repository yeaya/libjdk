#include <sun/rmi/transport/tcp/TCPChannel.h>
#include <java/io/DataInputStream.h>
#include <java/io/DataOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/ref/SoftReference.h>
#include <java/net/Socket.h>
#include <java/rmi/ConnectIOException.h>
#include <java/rmi/RemoteException.h>
#include <java/rmi/server/RMIClientSocketFactory.h>
#include <java/rmi/server/RMIServerSocketFactory.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/ListIterator.h>
#include <java/util/WeakHashMap.h>
#include <java/util/concurrent/Future.h>
#include <java/util/concurrent/ScheduledExecutorService.h>
#include <java/util/concurrent/ScheduledFuture.h>
#include <java/util/concurrent/ScheduledThreadPoolExecutor.h>
#include <java/util/concurrent/TimeUnit.h>
#include <java/util/logging/Level.h>
#include <sun/rmi/runtime/Log.h>
#include <sun/rmi/runtime/RuntimeUtil$GetInstanceAction.h>
#include <sun/rmi/runtime/RuntimeUtil.h>
#include <sun/rmi/transport/Connection.h>
#include <sun/rmi/transport/Endpoint.h>
#include <sun/rmi/transport/TransportConstants.h>
#include <sun/rmi/transport/tcp/ConnectionAcceptor.h>
#include <sun/rmi/transport/tcp/TCPChannel$1.h>
#include <sun/rmi/transport/tcp/TCPConnection.h>
#include <sun/rmi/transport/tcp/TCPEndpoint.h>
#include <sun/rmi/transport/tcp/TCPTransport.h>
#include <jcpp.h>

#undef BRIEF
#undef MILLISECONDS
#undef VERBOSE

using $ConnectionArray = $Array<::sun::rmi::transport::Connection>;
using $DataInputStream = ::java::io::DataInputStream;
using $DataOutputStream = ::java::io::DataOutputStream;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $SoftReference = ::java::lang::ref::SoftReference;
using $Socket = ::java::net::Socket;
using $ConnectIOException = ::java::rmi::ConnectIOException;
using $RemoteException = ::java::rmi::RemoteException;
using $RMIClientSocketFactory = ::java::rmi::server::RMIClientSocketFactory;
using $RMIServerSocketFactory = ::java::rmi::server::RMIServerSocketFactory;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ArrayList = ::java::util::ArrayList;
using $ListIterator = ::java::util::ListIterator;
using $WeakHashMap = ::java::util::WeakHashMap;
using $ScheduledExecutorService = ::java::util::concurrent::ScheduledExecutorService;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $Log = ::sun::rmi::runtime::Log;
using $RuntimeUtil = ::sun::rmi::runtime::RuntimeUtil;
using $RuntimeUtil$GetInstanceAction = ::sun::rmi::runtime::RuntimeUtil$GetInstanceAction;
using $Connection = ::sun::rmi::transport::Connection;
using $Endpoint = ::sun::rmi::transport::Endpoint;
using $TransportConstants = ::sun::rmi::transport::TransportConstants;
using $TCPChannel$1 = ::sun::rmi::transport::tcp::TCPChannel$1;
using $TCPConnection = ::sun::rmi::transport::tcp::TCPConnection;
using $TCPEndpoint = ::sun::rmi::transport::tcp::TCPEndpoint;
using $TCPTransport = ::sun::rmi::transport::tcp::TCPTransport;

namespace sun {
	namespace rmi {
		namespace transport {
			namespace tcp {

class TCPChannel$$Lambda$lambda$static$0 : public $PrivilegedAction {
	$class(TCPChannel$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		return $of(TCPChannel::lambda$static$0());
	}
};
$Class* TCPChannel$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TCPChannel$$Lambda$lambda$static$0, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TCPChannel$$Lambda$lambda$static$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.rmi.transport.tcp.TCPChannel$$Lambda$lambda$static$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(TCPChannel$$Lambda$lambda$static$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TCPChannel$$Lambda$lambda$static$0);
	});
	return class$;
}
$Class* TCPChannel$$Lambda$lambda$static$0::class$ = nullptr;

class TCPChannel$$Lambda$lambda$static$1$1 : public $PrivilegedAction {
	$class(TCPChannel$$Lambda$lambda$static$1$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		return $of(TCPChannel::lambda$static$1());
	}
};
$Class* TCPChannel$$Lambda$lambda$static$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TCPChannel$$Lambda$lambda$static$1$1, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TCPChannel$$Lambda$lambda$static$1$1, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.rmi.transport.tcp.TCPChannel$$Lambda$lambda$static$1$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(TCPChannel$$Lambda$lambda$static$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TCPChannel$$Lambda$lambda$static$1$1);
	});
	return class$;
}
$Class* TCPChannel$$Lambda$lambda$static$1$1::class$ = nullptr;

class TCPChannel$$Lambda$lambda$static$2$2 : public $PrivilegedAction {
	$class(TCPChannel$$Lambda$lambda$static$2$2, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		return $of(TCPChannel::lambda$static$2());
	}
};
$Class* TCPChannel$$Lambda$lambda$static$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TCPChannel$$Lambda$lambda$static$2$2, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TCPChannel$$Lambda$lambda$static$2$2, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.rmi.transport.tcp.TCPChannel$$Lambda$lambda$static$2$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(TCPChannel$$Lambda$lambda$static$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TCPChannel$$Lambda$lambda$static$2$2);
	});
	return class$;
}
$Class* TCPChannel$$Lambda$lambda$static$2$2::class$ = nullptr;

int64_t TCPChannel::idleTimeout = 0;
int32_t TCPChannel::handshakeTimeout = 0;
int32_t TCPChannel::responseTimeout = 0;
$ScheduledExecutorService* TCPChannel::scheduler = nullptr;

void TCPChannel::init$($TCPTransport* tr, $TCPEndpoint* ep) {
	$set(this, freeList, $new($ArrayList));
	$set(this, reaper, nullptr);
	$set(this, cacheSecurityManager, nullptr);
	$set(this, tr, tr);
	$set(this, ep, ep);
}

$Endpoint* TCPChannel::getEndpoint() {
	return this->ep;
}

void TCPChannel::checkConnectPermission() {
	$useLocalObjectStack();
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security == nullptr) {
		return;
	}
	if (security != this->cacheSecurityManager) {
		$set(this, okContext, nullptr);
		$set(this, authcache, $new($WeakHashMap));
		$set(this, cacheSecurityManager, security);
	}
	$var($AccessControlContext, ctx, $AccessController::getContext());
	bool var$0 = this->okContext == nullptr;
	if (!var$0) {
		bool var$1 = this->okContext->equals(ctx);
		var$0 = !(var$1 || $nc(this->authcache)->containsKey(ctx));
	}
	if (var$0) {
		$var($String, var$2, $nc(this->ep)->getHost());
		$nc(security)->checkConnect(var$2, this->ep->getPort());
		$nc(this->authcache)->put(ctx, $$new($SoftReference, ctx));
	}
	$set(this, okContext, ctx);
}

$Connection* TCPChannel::newConnection() {
	$var($TCPConnection, conn, nullptr);
	do {
		$assign(conn, nullptr);
		$synchronized(this->freeList) {
			int32_t elementPos = this->freeList->size() - 1;
			if (elementPos >= 0) {
				checkConnectPermission();
				$assign(conn, $cast($TCPConnection, this->freeList->get(elementPos)));
				this->freeList->remove(elementPos);
			}
		}
		if (conn != nullptr) {
			if (!conn->isDead()) {
				$init($TCPTransport);
				$init($Log);
				$nc($TCPTransport::tcpLog)->log($Log::BRIEF, "reuse connection"_s);
				return conn;
			}
			this->free(conn, false);
		}
	} while (conn != nullptr);
	return (createConnection());
}

$Connection* TCPChannel::createConnection() {
	$useLocalObjectStack();
	$var($Connection, conn, nullptr);
	$init($TCPTransport);
	$init($Log);
	$nc($TCPTransport::tcpLog)->log($Log::BRIEF, "create connection"_s);
	$var($Socket, sock, $nc(this->ep)->newSocket());
	$assign(conn, $new($TCPConnection, this, sock));
	try {
		$var($DataOutputStream, out, $new($DataOutputStream, $(conn->getOutputStream())));
		writeTransportHeader(out);
		if (!conn->isReusable()) {
			out->writeByte($TransportConstants::SingleOpProtocol);
		} else {
			out->writeByte($TransportConstants::StreamProtocol);
			out->flush();
			int32_t originalSoTimeout = 0;
			try {
				originalSoTimeout = $nc(sock)->getSoTimeout();
				sock->setSoTimeout(TCPChannel::handshakeTimeout);
			} catch ($Exception& e) {
			}
			$var($DataInputStream, in, $new($DataInputStream, $(conn->getInputStream())));
			int8_t ack = in->readByte();
			if (ack != $TransportConstants::ProtocolAck) {
				$throwNew($ConnectIOException, ack == $TransportConstants::ProtocolNack ? "JRMP StreamProtocol not supported by server"_s : "non-JRMP server at remote endpoint"_s);
			}
			$var($String, suggestedHost, in->readUTF());
			int32_t suggestedPort = in->readInt();
			if ($TCPTransport::tcpLog->isLoggable($Log::VERBOSE)) {
				$TCPTransport::tcpLog->log($Log::VERBOSE, $$str({"server suggested "_s, suggestedHost, ":"_s, $$str(suggestedPort)}));
			}
			$TCPEndpoint::setLocalHost(suggestedHost);
			$var($TCPEndpoint, localEp, $TCPEndpoint::getLocalEndpoint(0, nullptr, nullptr));
			out->writeUTF($($nc(localEp)->getHost()));
			out->writeInt(localEp->getPort());
			if ($TCPTransport::tcpLog->isLoggable($Log::VERBOSE)) {
				$var($StringBuilder, var$0, $new($StringBuilder));
				var$0->append("using "_s);
				var$0->append($(localEp->getHost()));
				var$0->append(":"_s);
				var$0->append(localEp->getPort());
				$TCPTransport::tcpLog->log($Log::VERBOSE, $$str(var$0));
			}
			try {
				$nc(sock)->setSoTimeout((originalSoTimeout != 0 ? originalSoTimeout : TCPChannel::responseTimeout));
			} catch ($Exception& e) {
			}
			out->flush();
		}
	} catch ($IOException& e) {
		try {
			conn->close();
		} catch ($Exception& ex) {
		}
		if ($instanceOf($RemoteException, e)) {
			$throw($cast($RemoteException, e));
		} else {
			$throwNew($ConnectIOException, "error during JRMP connection establishment"_s, e);
		}
	}
	return conn;
}

void TCPChannel::free($Connection* conn, bool reuse) {
	$useLocalObjectStack();
	if (conn == nullptr) {
		return;
	}
	if (reuse && $nc(conn)->isReusable()) {
		int64_t lastuse = $System::currentTimeMillis();
		$var($TCPConnection, tcpConnection, $cast($TCPConnection, conn));
		$init($TCPTransport);
		$init($Log);
		$nc($TCPTransport::tcpLog)->log($Log::BRIEF, "reuse connection"_s);
		$synchronized(this->freeList) {
			this->freeList->add(tcpConnection);
			if (this->reaper == nullptr) {
				$TCPTransport::tcpLog->log($Log::BRIEF, "create reaper"_s);
				$init($TimeUnit);
				$set(this, reaper, $nc(TCPChannel::scheduler)->scheduleWithFixedDelay($$new($TCPChannel$1, this), TCPChannel::idleTimeout, TCPChannel::idleTimeout, $TimeUnit::MILLISECONDS));
			}
		}
		tcpConnection->setLastUseTime(lastuse);
		tcpConnection->setExpiration(lastuse + TCPChannel::idleTimeout);
	} else {
		$init($TCPTransport);
		$init($Log);
		$nc($TCPTransport::tcpLog)->log($Log::BRIEF, "close connection"_s);
		try {
			$nc(conn)->close();
		} catch ($IOException& ignored) {
		}
	}
}

void TCPChannel::writeTransportHeader($DataOutputStream* out) {
	try {
		$var($DataOutputStream, dataOut, $new($DataOutputStream, out));
		dataOut->writeInt($TransportConstants::Magic);
		dataOut->writeShort($TransportConstants::Version);
	} catch ($IOException& e) {
		$throwNew($ConnectIOException, "error writing JRMP transport header"_s, e);
	}
}

void TCPChannel::shedCache() {
	$useLocalObjectStack();
	$var($ConnectionArray, conn, nullptr);
	$synchronized(this->freeList) {
		$assign(conn, $cast($ConnectionArray, this->freeList->toArray($$new($ConnectionArray, this->freeList->size()))));
		this->freeList->clear();
	}
	for (int32_t i = $nc(conn)->length; --i >= 0;) {
		$var($Connection, c, conn->get(i));
		conn->set(i, nullptr);
		try {
			$nc(c)->close();
		} catch ($IOException& e) {
		}
	}
}

void TCPChannel::freeCachedConnections() {
	$useLocalObjectStack();
	$synchronized(this->freeList) {
		int32_t size = this->freeList->size();
		if (size > 0) {
			int64_t time = $System::currentTimeMillis();
			$var($ListIterator, iter, this->freeList->listIterator(size));
			while ($nc(iter)->hasPrevious()) {
				$var($TCPConnection, conn, $cast($TCPConnection, iter->previous()));
				if ($nc(conn)->expired(time)) {
					$init($TCPTransport);
					$init($Log);
					$nc($TCPTransport::tcpLog)->log($Log::VERBOSE, "connection timeout expired"_s);
					try {
						conn->close();
					} catch ($IOException& e) {
					}
					iter->remove();
				}
			}
		}
		if (this->freeList->isEmpty()) {
			$nc(this->reaper)->cancel(false);
			$set(this, reaper, nullptr);
		}
	}
}

$Integer* TCPChannel::lambda$static$2() {
	$init(TCPChannel);
	return $Integer::getInteger("sun.rmi.transport.tcp.responseTimeout"_s, 0);
}

$Integer* TCPChannel::lambda$static$1() {
	$init(TCPChannel);
	return $Integer::getInteger("sun.rmi.transport.tcp.handshakeTimeout"_s, 60000);
}

$Long* TCPChannel::lambda$static$0() {
	$init(TCPChannel);
	return $Long::getLong("sun.rmi.transport.connectionTimeout"_s, 15000);
}

void TCPChannel::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	TCPChannel::idleTimeout = $$sure($Long, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(TCPChannel$$Lambda$lambda$static$0))))->longValue();
	TCPChannel::handshakeTimeout = $$sure($Integer, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(TCPChannel$$Lambda$lambda$static$1$1))))->intValue();
	TCPChannel::responseTimeout = $$sure($Integer, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(TCPChannel$$Lambda$lambda$static$2$2))))->intValue();
	$assignStatic(TCPChannel::scheduler, $$sure($RuntimeUtil, $AccessController::doPrivileged($$new($RuntimeUtil$GetInstanceAction)))->getScheduler());
}

TCPChannel::TCPChannel() {
}

$Class* TCPChannel::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.rmi.transport.tcp.TCPChannel$$Lambda$lambda$static$0")) {
			return TCPChannel$$Lambda$lambda$static$0::load$(name, initialize);
		}
		if (name->equals("sun.rmi.transport.tcp.TCPChannel$$Lambda$lambda$static$1$1")) {
			return TCPChannel$$Lambda$lambda$static$1$1::load$(name, initialize);
		}
		if (name->equals("sun.rmi.transport.tcp.TCPChannel$$Lambda$lambda$static$2$2")) {
			return TCPChannel$$Lambda$lambda$static$2$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"ep", "Lsun/rmi/transport/tcp/TCPEndpoint;", nullptr, $PRIVATE | $FINAL, $field(TCPChannel, ep)},
		{"tr", "Lsun/rmi/transport/tcp/TCPTransport;", nullptr, $PRIVATE | $FINAL, $field(TCPChannel, tr)},
		{"freeList", "Ljava/util/List;", "Ljava/util/List<Lsun/rmi/transport/tcp/TCPConnection;>;", $PRIVATE | $FINAL, $field(TCPChannel, freeList)},
		{"reaper", "Ljava/util/concurrent/Future;", "Ljava/util/concurrent/Future<*>;", $PRIVATE, $field(TCPChannel, reaper)},
		{"acceptor", "Lsun/rmi/transport/tcp/ConnectionAcceptor;", nullptr, $PRIVATE, $field(TCPChannel, acceptor)},
		{"okContext", "Ljava/security/AccessControlContext;", nullptr, $PRIVATE, $field(TCPChannel, okContext)},
		{"authcache", "Ljava/util/WeakHashMap;", "Ljava/util/WeakHashMap<Ljava/security/AccessControlContext;Ljava/lang/ref/Reference<Ljava/security/AccessControlContext;>;>;", $PRIVATE, $field(TCPChannel, authcache)},
		{"cacheSecurityManager", "Ljava/lang/SecurityManager;", nullptr, $PRIVATE, $field(TCPChannel, cacheSecurityManager)},
		{"idleTimeout", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TCPChannel, idleTimeout)},
		{"handshakeTimeout", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TCPChannel, handshakeTimeout)},
		{"responseTimeout", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TCPChannel, responseTimeout)},
		{"scheduler", "Ljava/util/concurrent/ScheduledExecutorService;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TCPChannel, scheduler)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/rmi/transport/tcp/TCPTransport;Lsun/rmi/transport/tcp/TCPEndpoint;)V", nullptr, 0, $method(TCPChannel, init$, void, $TCPTransport*, $TCPEndpoint*)},
		{"checkConnectPermission", "()V", nullptr, $PRIVATE, $method(TCPChannel, checkConnectPermission, void), "java.lang.SecurityException"},
		{"createConnection", "()Lsun/rmi/transport/Connection;", nullptr, $PRIVATE, $method(TCPChannel, createConnection, $Connection*), "java.rmi.RemoteException"},
		{"free", "(Lsun/rmi/transport/Connection;Z)V", nullptr, $PUBLIC, $virtualMethod(TCPChannel, free, void, $Connection*, bool)},
		{"freeCachedConnections", "()V", nullptr, $PRIVATE, $method(TCPChannel, freeCachedConnections, void)},
		{"getEndpoint", "()Lsun/rmi/transport/Endpoint;", nullptr, $PUBLIC, $virtualMethod(TCPChannel, getEndpoint, $Endpoint*)},
		{"lambda$static$0", "()Ljava/lang/Long;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TCPChannel, lambda$static$0, $Long*)},
		{"lambda$static$1", "()Ljava/lang/Integer;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TCPChannel, lambda$static$1, $Integer*)},
		{"lambda$static$2", "()Ljava/lang/Integer;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TCPChannel, lambda$static$2, $Integer*)},
		{"newConnection", "()Lsun/rmi/transport/Connection;", nullptr, $PUBLIC, $virtualMethod(TCPChannel, newConnection, $Connection*), "java.rmi.RemoteException"},
		{"shedCache", "()V", nullptr, $PUBLIC, $virtualMethod(TCPChannel, shedCache, void)},
		{"writeTransportHeader", "(Ljava/io/DataOutputStream;)V", nullptr, $PRIVATE, $method(TCPChannel, writeTransportHeader, void, $DataOutputStream*), "java.rmi.RemoteException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.transport.tcp.TCPChannel$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.rmi.transport.tcp.TCPChannel",
		"java.lang.Object",
		"sun.rmi.transport.Channel",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.rmi.transport.tcp.TCPChannel$1"
	};
	$loadClass(TCPChannel, name, initialize, &classInfo$$, TCPChannel::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TCPChannel);
	});
	return class$;
}

$Class* TCPChannel::class$ = nullptr;

			} // tcp
		} // transport
	} // rmi
} // sun