#include <B4962064.h>
#include <B4962064$MyAuthenticator.h>
#include <com/sun/net/httpserver/Headers.h>
#include <com/sun/net/httpserver/HttpContext.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <com/sun/net/httpserver/HttpServer.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintWriter.h>
#include <java/net/Authenticator.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/Executors.h>
#include <jcpp.h>

using $B4962064$MyAuthenticator = ::B4962064$MyAuthenticator;
using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $HttpServer = ::com::sun::net::httpserver::HttpServer;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Authenticator = ::java::net::Authenticator;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $Executors = ::java::util::concurrent::Executors;

int32_t B4962064::count = 0;
$HttpServer* B4962064::server = nullptr;
$URL* B4962064::urlsave = nullptr;

void B4962064::init$() {
}

void B4962064::handle($HttpExchange* req) {
	$useLocalObjectStack();
	try {
		switch (B4962064::count) {
		case 0:
			$$nc($nc(req)->getResponseHeaders())->set("Connection"_s, "close"_s);
			$$nc(req->getResponseHeaders())->add("WWW-Authenticate"_s, "Basic realm=\"foo\""_s);
			req->sendResponseHeaders(401, -1);
			break;
		case 1:
		case 3:
			$nc(req)->sendResponseHeaders(200, 0);
			{
				$var($PrintWriter, pw, $new($PrintWriter, $(req->getResponseBody())));
				$var($Throwable, var$0, nullptr);
				try {
					try {
						pw->print("Hello ."_s);
					} catch ($Throwable& t$) {
						try {
							pw->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					pw->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
			break;
		case 2:
			$$nc($nc(req)->getResponseHeaders())->set("Connection"_s, "close"_s);
			$$nc(req->getResponseHeaders())->add("Proxy-Authenticate"_s, "Basic realm=\"foo\""_s);
			req->sendResponseHeaders(407, -1);
			break;
		}
		++B4962064::count;
	} catch ($IOException& e) {
		e->printStackTrace();
	}
}

void B4962064::read($InputStream* is) {
	$init(B4962064);
	int32_t c = 0;
	$nc($System::out)->println("reading"_s);
	while ((c = $nc(is)->read()) != -1) {
		$System::out->write(c);
	}
	$System::out->println(""_s);
	$System::out->println("finished reading"_s);
}

void B4962064::client($String* u) {
	$init(B4962064);
	$useLocalObjectStack();
	$var($URL, url, $new($URL, u));
	$nc($System::out)->println($$str({"client opening connection to: "_s, u}));
	$var($URLConnection, urlc, url->openConnection());
	$var($InputStream, is, $nc(urlc)->getInputStream());
	read(is);
	$nc(is)->close();
}

void B4962064::main($StringArray* args) {
	$init(B4962064);
	$useLocalObjectStack();
	$var(B4962064, b4962064, $new(B4962064));
	try {
		$var($InetAddress, address, $InetAddress::getLoopbackAddress());
		$var($InetAddress, resolved, $InetAddress::getByName($($nc(address)->getHostName())));
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("Lookup: "_s);
		var$0->append(address);
		var$0->append(" -> \""_s);
		var$0->append($(address->getHostName()));
		var$0->append("\" -> "_s);
		var$0->append(resolved);
		$nc($System::out)->println($$str(var$0));
		$assignStatic(B4962064::server, $HttpServer::create($$new($InetSocketAddress, address, 0), 10));
		$nc(B4962064::server)->createContext("/"_s, b4962064);
		$nc(B4962064::server)->setExecutor($($Executors::newSingleThreadExecutor()));
		$nc(B4962064::server)->start();
		int32_t port = $$nc($nc(B4962064::server)->getAddress())->getPort();
		$var($String, proxyHost, address->equals(resolved) ? address->getHostName() : address->getHostAddress());
		$System::setProperty("http.proxyHost"_s, proxyHost);
		$System::setProperty("http.proxyPort"_s, $($Integer::toString(port)));
		$var($B4962064$MyAuthenticator, auth, $new($B4962064$MyAuthenticator));
		$Authenticator::setDefault(auth);
		$System::out->println($$str({"Server started: listening on port: "_s, $$str(port)}));
		$var($String, s, $new($String, "http://foo.com/d1/d2/d3/foo.html"_s));
		$assignStatic(B4962064::urlsave, $new($URL, s));
		client(s);
		$assign(s, $new($String, "http://bar.com/dr/d3/foo.html"_s));
		$assignStatic(B4962064::urlsave, $new($URL, s));
		client(s);
	} catch ($Exception& e) {
		if (B4962064::server != nullptr) {
			B4962064::server->stop(1);
		}
		$throw(e);
	}
	$nc(B4962064::server)->stop(1);
}

void B4962064::except($String* s) {
	$init(B4962064);
	$nc(B4962064::server)->stop(1);
	$throwNew($RuntimeException, s);
}

void B4962064::clinit$($Class* clazz) {
	B4962064::count = 0;
}

B4962064::B4962064() {
}

$Class* B4962064::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"count", "I", nullptr, $STATIC, $staticField(B4962064, count)},
		{"server", "Lcom/sun/net/httpserver/HttpServer;", nullptr, $STATIC, $staticField(B4962064, server)},
		{"urlsave", "Ljava/net/URL;", nullptr, $STATIC, $staticField(B4962064, urlsave)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(B4962064, init$, void)},
		{"client", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(B4962064, client, void, $String*), "java.lang.Exception"},
		{"except", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(B4962064, except, void, $String*)},
		{"handle", "(Lcom/sun/net/httpserver/HttpExchange;)V", nullptr, $PUBLIC, $virtualMethod(B4962064, handle, void, $HttpExchange*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(B4962064, main, void, $StringArray*), "java.lang.Exception"},
		{"read", "(Ljava/io/InputStream;)V", nullptr, $STATIC, $staticMethod(B4962064, read, void, $InputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"B4962064$MyAuthenticator", "B4962064", "MyAuthenticator", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"B4962064",
		"java.lang.Object",
		"com.sun.net.httpserver.HttpHandler",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"B4962064$MyAuthenticator"
	};
	$loadClass(B4962064, name, initialize, &classInfo$$, B4962064::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(B4962064);
	});
	return class$;
}

$Class* B4962064::class$ = nullptr;