#include <B4769350$Server$AuthenticationHandlerT1a.h>
#include <B4769350$AuthenticationHandler.h>
#include <B4769350$Server.h>
#include <B4769350.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <java/lang/InterruptedException.h>
#include <java/util/concurrent/BrokenBarrierException.h>
#include <java/util/concurrent/CyclicBarrier.h>
#include <jcpp.h>

using $B4769350 = ::B4769350;
using $B4769350$AuthenticationHandler = ::B4769350$AuthenticationHandler;
using $B4769350$Server = ::B4769350$Server;
using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BrokenBarrierException = ::java::util::concurrent::BrokenBarrierException;

void B4769350$Server$AuthenticationHandlerT1a::init$($B4769350$Server* this$1) {
	$set(this, this$1, this$1);
	this->count = -1;
}

void B4769350$Server$AuthenticationHandlerT1a::handle($HttpExchange* exchange) {
	++this->count;
	try {
		switch (this->count) {
		case 0:
			$B4769350$AuthenticationHandler::errorReply(exchange, "Basic realm=\"realm1\""_s);
			break;
		case 1:
			$init($B4769350);
			$nc($B4769350::t1Cond1)->await();
			$B4769350$AuthenticationHandler::okReply(exchange);
			break;
		default:
			$nc($System::out)->println("Unexpected request"_s);
		}
	} catch ($InterruptedException& e) {
		$throwNew($RuntimeException, e);
	} catch ($BrokenBarrierException& e) {
		$throwNew($RuntimeException, e);
	}
}

B4769350$Server$AuthenticationHandlerT1a::B4769350$Server$AuthenticationHandlerT1a() {
}

$Class* B4769350$Server$AuthenticationHandlerT1a::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "LB4769350$Server;", nullptr, $FINAL | $SYNTHETIC, $field(B4769350$Server$AuthenticationHandlerT1a, this$1)},
		{"count", "I", nullptr, $VOLATILE, $field(B4769350$Server$AuthenticationHandlerT1a, count)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LB4769350$Server;)V", nullptr, 0, $method(B4769350$Server$AuthenticationHandlerT1a, init$, void, $B4769350$Server*)},
		{"handle", "(Lcom/sun/net/httpserver/HttpExchange;)V", nullptr, $PUBLIC, $virtualMethod(B4769350$Server$AuthenticationHandlerT1a, handle, void, $HttpExchange*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"B4769350$Server", "B4769350", "Server", 0},
		{"B4769350$Server$AuthenticationHandlerT1a", "B4769350$Server", "AuthenticationHandlerT1a", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"B4769350$Server$AuthenticationHandlerT1a",
		"java.lang.Object",
		"com.sun.net.httpserver.HttpHandler",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"B4769350"
	};
	$loadClass(B4769350$Server$AuthenticationHandlerT1a, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(B4769350$Server$AuthenticationHandlerT1a);
	});
	return class$;
}

$Class* B4769350$Server$AuthenticationHandlerT1a::class$ = nullptr;