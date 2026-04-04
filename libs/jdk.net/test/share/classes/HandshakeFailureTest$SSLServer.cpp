#include <HandshakeFailureTest$SSLServer.h>
#include <HandshakeFailureTest$AbstractServer.h>
#include <HandshakeFailureTest.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Error.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/security/SecureRandom.h>
#include <javax/net/ServerSocketFactory.h>
#include <javax/net/ssl/KeyManager.h>
#include <javax/net/ssl/SSLContext.h>
#include <javax/net/ssl/SSLHandshakeException.h>
#include <javax/net/ssl/SSLServerSocketFactory.h>
#include <javax/net/ssl/SSLSocket.h>
#include <javax/net/ssl/TrustManager.h>
#include <jcpp.h>

using $HandshakeFailureTest$AbstractServer = ::HandshakeFailureTest$AbstractServer;
using $KeyManagerArray = $Array<::javax::net::ssl::KeyManager>;
using $TrustManagerArray = $Array<::javax::net::ssl::TrustManager>;
using $IOException = ::java::io::IOException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecureRandom = ::java::security::SecureRandom;
using $ServerSocketFactory = ::javax::net::ServerSocketFactory;
using $SSLContext = ::javax::net::ssl::SSLContext;
using $SSLHandshakeException = ::javax::net::ssl::SSLHandshakeException;
using $SSLSocket = ::javax::net::ssl::SSLSocket;

$SSLContext* HandshakeFailureTest$SSLServer::sslContext = nullptr;
$ServerSocketFactory* HandshakeFailureTest$SSLServer::factory = nullptr;

$SSLContext* HandshakeFailureTest$SSLServer::createUntrustingContext() {
	$init(HandshakeFailureTest$SSLServer);
	try {
		$var($SSLContext, sslContext, $SSLContext::getInstance("TLS"_s));
		$nc(sslContext)->init(nullptr, nullptr, nullptr);
		return sslContext;
	} catch ($Throwable& t) {
		$throwNew($AssertionError, $of(t));
	}
	$shouldNotReachHere();
}

void HandshakeFailureTest$SSLServer::init$() {
	$HandshakeFailureTest$AbstractServer::init$("SSLServer"_s, $($nc(HandshakeFailureTest$SSLServer::factory)->createServerSocket()));
}

void HandshakeFailureTest$SSLServer::run() {
	$useLocalObjectStack();
	while (!this->closed) {
		try {
			$var($SSLSocket, s, $cast($SSLSocket, $nc(this->ss)->accept()));
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$$nc($nc(s)->getInputStream())->read();
					$throwNew($AssertionError, $of("Should not reach here"_s));
				} catch ($Throwable& t$) {
					if (s != nullptr) {
						try {
							s->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				if (s != nullptr) {
					s->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		} catch ($SSLHandshakeException& expected) {
			$nc($System::out)->printf("SSLServer: caught expected exception: %s%n"_s, $$new($ObjectArray, {expected}));
		} catch ($IOException& e) {
			if (!this->closed) {
				$nc($System::out)->println($$str({"SSLServer: unexpected "_s, e}));
				e->printStackTrace($System::out);
			}
		} catch ($Error& e) {
			if (!this->closed) {
				$nc($System::out)->println($$str({"SSLServer: unexpected "_s, e}));
				e->printStackTrace($System::out);
				$throwNew($RuntimeException, e);
			}
			break;
		} catch ($RuntimeException& e) {
			if (!this->closed) {
				$nc($System::out)->println($$str({"SSLServer: unexpected "_s, e}));
				e->printStackTrace($System::out);
				$throwNew($RuntimeException, e);
			}
			break;
		}
	}
}

void HandshakeFailureTest$SSLServer::clinit$($Class* clazz) {
	$assignStatic(HandshakeFailureTest$SSLServer::sslContext, HandshakeFailureTest$SSLServer::createUntrustingContext());
	$assignStatic(HandshakeFailureTest$SSLServer::factory, $nc(HandshakeFailureTest$SSLServer::sslContext)->getServerSocketFactory());
}

HandshakeFailureTest$SSLServer::HandshakeFailureTest$SSLServer() {
}

$Class* HandshakeFailureTest$SSLServer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sslContext", "Ljavax/net/ssl/SSLContext;", nullptr, $STATIC | $FINAL, $staticField(HandshakeFailureTest$SSLServer, sslContext)},
		{"factory", "Ljavax/net/ServerSocketFactory;", nullptr, $STATIC | $FINAL, $staticField(HandshakeFailureTest$SSLServer, factory)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HandshakeFailureTest$SSLServer, init$, void), "java.io.IOException"},
		{"createUntrustingContext", "()Ljavax/net/ssl/SSLContext;", nullptr, $STATIC, $staticMethod(HandshakeFailureTest$SSLServer, createUntrustingContext, $SSLContext*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(HandshakeFailureTest$SSLServer, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HandshakeFailureTest$SSLServer", "HandshakeFailureTest", "SSLServer", $STATIC},
		{"HandshakeFailureTest$AbstractServer", "HandshakeFailureTest", "AbstractServer", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HandshakeFailureTest$SSLServer",
		"HandshakeFailureTest$AbstractServer",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"HandshakeFailureTest"
	};
	$loadClass(HandshakeFailureTest$SSLServer, name, initialize, &classInfo$$, HandshakeFailureTest$SSLServer::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(HandshakeFailureTest$SSLServer));
	});
	return class$;
}

$Class* HandshakeFailureTest$SSLServer::class$ = nullptr;