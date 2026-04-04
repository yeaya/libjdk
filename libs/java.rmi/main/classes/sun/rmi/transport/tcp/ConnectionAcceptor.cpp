#include <sun/rmi/transport/tcp/ConnectionAcceptor.h>
#include <java/lang/InterruptedException.h>
#include <java/security/AccessController.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <sun/rmi/runtime/NewThreadAction.h>
#include <sun/rmi/transport/Connection.h>
#include <sun/rmi/transport/tcp/TCPTransport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $ArrayList = ::java::util::ArrayList;
using $NewThreadAction = ::sun::rmi::runtime::NewThreadAction;
using $Connection = ::sun::rmi::transport::Connection;
using $TCPTransport = ::sun::rmi::transport::tcp::TCPTransport;

namespace sun {
	namespace rmi {
		namespace transport {
			namespace tcp {

int32_t ConnectionAcceptor::threadNum = 0;

void ConnectionAcceptor::init$($TCPTransport* transport) {
	$set(this, queue, $new($ArrayList));
	$set(this, transport, transport);
}

void ConnectionAcceptor::startNewAcceptor() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("TCPChannel Accept-"_s);
	var$0->append(++ConnectionAcceptor::threadNum);
	$var($Thread, t, $cast($Thread, $AccessController::doPrivileged($$new($NewThreadAction, this, $$str(var$0), true))));
	$nc(t)->start();
}

void ConnectionAcceptor::accept($Connection* conn) {
	$synchronized(this->queue) {
		this->queue->add(conn);
		this->queue->notify();
	}
}

void ConnectionAcceptor::run() {
	$var($Connection, conn, nullptr);
	$synchronized(this->queue) {
		while (this->queue->size() == 0) {
			try {
				this->queue->wait();
			} catch ($InterruptedException& e) {
			}
		}
		startNewAcceptor();
		$assign(conn, $cast($Connection, $nc(this->queue)->remove(0)));
	}
	$nc(this->transport)->handleMessages(conn, true);
}

void ConnectionAcceptor::clinit$($Class* clazz) {
	ConnectionAcceptor::threadNum = 0;
}

ConnectionAcceptor::ConnectionAcceptor() {
}

$Class* ConnectionAcceptor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"transport", "Lsun/rmi/transport/tcp/TCPTransport;", nullptr, $PRIVATE, $field(ConnectionAcceptor, transport)},
		{"queue", "Ljava/util/List;", "Ljava/util/List<Lsun/rmi/transport/Connection;>;", $PRIVATE, $field(ConnectionAcceptor, queue)},
		{"threadNum", "I", nullptr, $PRIVATE | $STATIC, $staticField(ConnectionAcceptor, threadNum)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/rmi/transport/tcp/TCPTransport;)V", nullptr, $PUBLIC, $method(ConnectionAcceptor, init$, void, $TCPTransport*)},
		{"accept", "(Lsun/rmi/transport/Connection;)V", nullptr, $PUBLIC, $virtualMethod(ConnectionAcceptor, accept, void, $Connection*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ConnectionAcceptor, run, void)},
		{"startNewAcceptor", "()V", nullptr, $PUBLIC, $virtualMethod(ConnectionAcceptor, startNewAcceptor, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.transport.tcp.ConnectionAcceptor",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ConnectionAcceptor, name, initialize, &classInfo$$, ConnectionAcceptor::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ConnectionAcceptor);
	});
	return class$;
}

$Class* ConnectionAcceptor::class$ = nullptr;

			} // tcp
		} // transport
	} // rmi
} // sun