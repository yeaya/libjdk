#include <B4769350$Server$AuthenticationHandlerT2b.h>
#include <B4769350$AuthenticationHandler.h>
#include <B4769350$Server.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <jcpp.h>

using $B4769350$AuthenticationHandler = ::B4769350$AuthenticationHandler;
using $B4769350$Server = ::B4769350$Server;
using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void B4769350$Server$AuthenticationHandlerT2b::init$($B4769350$Server* this$1) {
	$set(this, this$1, this$1);
	this->count = -1;
}

void B4769350$Server$AuthenticationHandlerT2b::handle($HttpExchange* exchange) {
	++this->count;
	switch (this->count) {
	case 0:
		$B4769350$AuthenticationHandler::errorReply(exchange, "Basic realm=\"realm3\""_s);
		break;
	case 1:
		$B4769350$AuthenticationHandler::okReply(exchange);
		break;
	default:
		$nc($System::out)->println("Unexpected request"_s);
	}
}

B4769350$Server$AuthenticationHandlerT2b::B4769350$Server$AuthenticationHandlerT2b() {
}

$Class* B4769350$Server$AuthenticationHandlerT2b::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "LB4769350$Server;", nullptr, $FINAL | $SYNTHETIC, $field(B4769350$Server$AuthenticationHandlerT2b, this$1)},
		{"count", "I", nullptr, $VOLATILE, $field(B4769350$Server$AuthenticationHandlerT2b, count)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LB4769350$Server;)V", nullptr, 0, $method(B4769350$Server$AuthenticationHandlerT2b, init$, void, $B4769350$Server*)},
		{"handle", "(Lcom/sun/net/httpserver/HttpExchange;)V", nullptr, $PUBLIC, $virtualMethod(B4769350$Server$AuthenticationHandlerT2b, handle, void, $HttpExchange*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"B4769350$Server", "B4769350", "Server", 0},
		{"B4769350$Server$AuthenticationHandlerT2b", "B4769350$Server", "AuthenticationHandlerT2b", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"B4769350$Server$AuthenticationHandlerT2b",
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
	$loadClass(B4769350$Server$AuthenticationHandlerT2b, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(B4769350$Server$AuthenticationHandlerT2b);
	});
	return class$;
}

$Class* B4769350$Server$AuthenticationHandlerT2b::class$ = nullptr;