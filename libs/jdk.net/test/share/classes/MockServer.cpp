#include <MockServer.h>
#include <MockServer$Connection.h>
#include <java/io/IOException.h>
#include <java/lang/InterruptedException.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <javax/net/ServerSocketFactory.h>
#include <javax/net/ssl/SSLServerSocket.h>
#include <jcpp.h>

using $MockServer$Connection = ::MockServer$Connection;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $Socket = ::java::net::Socket;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $ServerSocketFactory = ::javax::net::ServerSocketFactory;
using $SSLServerSocket = ::javax::net::ssl::SSLServerSocket;

$Object* MockServer::clone() {
	return this->$Thread::clone();
}

$String* MockServer::toString() {
	return this->$Thread::toString();
}

int32_t MockServer::hashCode() {
	return this->$Thread::hashCode();
}

bool MockServer::equals(Object$* arg0) {
	return this->$Thread::equals(arg0);
}

void MockServer::finalize() {
	this->$Thread::finalize();
}

$MockServer$Connection* MockServer::activity() {
	$useLocalObjectStack();
	for (int32_t i = 0; i < 80 * 100; ++i) {
		doRemovalsAndAdditions();
		{
			$var($Iterator, i$, $nc(this->sockets)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($MockServer$Connection, c, $cast($MockServer$Connection, i$->next()));
				if ($nc(c)->poll()) {
					if (this->root != nullptr) {
						if (!$nc(c->statusLine)->contains(this->root)) {
							$nc($System::out)->println($$str({"Bad statusLine: "_s, c->statusLine, " closing connection"_s}));
							c->close();
							continue;
						}
					}
					return c;
				}
			}
		}
		try {
			$Thread::sleep(250);
		} catch ($InterruptedException& e) {
			e->printStackTrace();
		}
	}
	return nullptr;
}

void MockServer::doRemovalsAndAdditions() {
	$useLocalObjectStack();
	$synchronized(this->removals) {
		$var($Iterator, i, this->removals->iterator());
		while ($nc(i)->hasNext()) {
			$var($MockServer$Connection, c, $cast($MockServer$Connection, i->next()));
			$nc($System::out)->println($$str({"socket removed: "_s, c}));
			$nc(this->sockets)->remove(c);
		}
		this->removals->clear();
	}
	$synchronized(this->additions) {
		$var($Iterator, i, this->additions->iterator());
		while ($nc(i)->hasNext()) {
			$var($MockServer$Connection, c, $cast($MockServer$Connection, i->next()));
			$nc($System::out)->println($$str({"socket added: "_s, c}));
			$nc(this->sockets)->add(c);
		}
		this->additions->clear();
	}
}

void MockServer::reset() {
	$useLocalObjectStack();
	$var($Iterator, i$, $nc(this->sockets)->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($MockServer$Connection, c, $cast($MockServer$Connection, i$->next()));
		{
			$nc(c)->close();
		}
	}
}

void MockServer::init$(int32_t port, $ServerSocketFactory* factory, $String* root) {
	$useLocalObjectStack();
	$Thread::init$();
	$set(this, counter, $new($AtomicInteger, 0));
	$set(this, ss, $nc(factory)->createServerSocket());
	$nc(this->ss)->setReuseAddress(false);
	this->ss->bind($$new($InetSocketAddress, $($InetAddress::getLoopbackAddress()), 0));
	$set(this, root, root);
	$set(this, sockets, $Collections::synchronizedList($$new($LinkedList)));
	$set(this, removals, $new($LinkedList));
	$set(this, additions, $new($LinkedList));
	setName("Test-Server"_s);
	setDaemon(true);
}

void MockServer::init$(int32_t port, $ServerSocketFactory* factory) {
	MockServer::init$(port, factory, "/foo/"_s);
}

void MockServer::init$(int32_t port) {
	MockServer::init$(port, $($ServerSocketFactory::getDefault()));
}

void MockServer::init$() {
	MockServer::init$(0);
}

int32_t MockServer::port() {
	return $nc(this->ss)->getLocalPort();
}

$String* MockServer::serverAuthority() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($$nc($InetAddress::getLoopbackAddress())->getHostName()));
	var$0->append(":"_s);
	var$0->append(port());
	return $str(var$0);
}

$String* MockServer::getURL() {
	$useLocalObjectStack();
	if ($instanceOf($SSLServerSocket, this->ss)) {
		return $str({"https://"_s, $(serverAuthority()), "/foo/"_s});
	} else {
		return $str({"http://"_s, $(serverAuthority()), "/foo/"_s});
	}
}

void MockServer::close() {
	$useLocalObjectStack();
	this->closed = true;
	try {
		$nc(this->ss)->close();
	} catch ($Throwable& e) {
		e->printStackTrace();
	}
	{
		$var($Iterator, i$, $nc(this->sockets)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($MockServer$Connection, c, $cast($MockServer$Connection, i$->next()));
			{
				$nc(c)->close();
			}
		}
	}
}

void MockServer::run() {
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	bool return$1 = false;
	try {
		try {
			while (!this->closed) {
				try {
					$nc($System::out)->println("Server waiting for connection"_s);
					$var($Socket, s, $nc(this->ss)->accept());
					$var($MockServer$Connection, c, $new($MockServer$Connection, this, s));
					c->start();
					$System::out->println($$str({"Server got new connection: "_s, c}));
					$synchronized(this->additions) {
						this->additions->add(c);
					}
				} catch ($IOException& e) {
					if (this->closed) {
						return$1 = true;
						goto $finally;
					}
					e->printStackTrace($System::out);
				}
			}
		} catch ($Throwable& t) {
			$nc($System::out)->println($$str({"Unexpected exception in accept loop: "_s, t}));
			t->printStackTrace($System::out);
		}
	} catch ($Throwable& var$2) {
		$assign(var$0, var$2);
	} $finally: {
		if (this->closed) {
			$nc($System::out)->println("Server closed: exiting accept loop"_s);
		} else {
			$nc($System::out)->println("Server not closed: exiting accept loop and closing"_s);
			close();
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return;
	}
}

MockServer::MockServer() {
}

$Class* MockServer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ss", "Ljava/net/ServerSocket;", nullptr, $FINAL, $field(MockServer, ss)},
		{"sockets", "Ljava/util/List;", "Ljava/util/List<LMockServer$Connection;>;", $PRIVATE | $FINAL, $field(MockServer, sockets)},
		{"removals", "Ljava/util/List;", "Ljava/util/List<LMockServer$Connection;>;", $PRIVATE | $FINAL, $field(MockServer, removals)},
		{"additions", "Ljava/util/List;", "Ljava/util/List<LMockServer$Connection;>;", $PRIVATE | $FINAL, $field(MockServer, additions)},
		{"counter", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, 0, $field(MockServer, counter)},
		{"root", "Ljava/lang/String;", nullptr, $FINAL, $field(MockServer, root)},
		{"closed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(MockServer, closed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(ILjavax/net/ServerSocketFactory;Ljava/lang/String;)V", nullptr, 0, $method(MockServer, init$, void, int32_t, $ServerSocketFactory*, $String*), "java.io.IOException"},
		{"<init>", "(ILjavax/net/ServerSocketFactory;)V", nullptr, 0, $method(MockServer, init$, void, int32_t, $ServerSocketFactory*), "java.io.IOException"},
		{"<init>", "(I)V", nullptr, 0, $method(MockServer, init$, void, int32_t), "java.io.IOException"},
		{"<init>", "()V", nullptr, 0, $method(MockServer, init$, void), "java.io.IOException"},
		{"activity", "()LMockServer$Connection;", nullptr, $PUBLIC, $virtualMethod(MockServer, activity, $MockServer$Connection*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(MockServer, close, void)},
		{"doRemovalsAndAdditions", "()V", nullptr, $PRIVATE, $method(MockServer, doRemovalsAndAdditions, void)},
		{"getURL", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MockServer, getURL, $String*)},
		{"port", "()I", nullptr, 0, $virtualMethod(MockServer, port, int32_t)},
		{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(MockServer, reset, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(MockServer, run, void)},
		{"serverAuthority", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(MockServer, serverAuthority, $String*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MockServer$Connection", "MockServer", "Connection", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"MockServer",
		"java.lang.Thread",
		"java.io.Closeable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"MockServer$Connection"
	};
	$loadClass(MockServer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MockServer));
	});
	return class$;
}

$Class* MockServer::class$ = nullptr;