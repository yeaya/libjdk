#include <DeafServer$DeafHandler.h>
#include <DeafServer.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <java/lang/InterruptedException.h>
#include <jcpp.h>

using $DeafServer = ::DeafServer;
using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;

void DeafServer$DeafHandler::init$($DeafServer* this$0) {
	$set(this, this$0, this$0);
}

void DeafServer$DeafHandler::handle($HttpExchange* r) {
	$synchronized(this->this$0) {
		while (!this->this$0->wakeup) {
			try {
				this->this$0->wait();
			} catch ($InterruptedException& e) {
			}
		}
	}
}

DeafServer$DeafHandler::DeafServer$DeafHandler() {
}

$Class* DeafServer$DeafHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LDeafServer;", nullptr, $FINAL | $SYNTHETIC, $field(DeafServer$DeafHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LDeafServer;)V", nullptr, 0, $method(DeafServer$DeafHandler, init$, void, $DeafServer*)},
		{"handle", "(Lcom/sun/net/httpserver/HttpExchange;)V", nullptr, $PUBLIC, $virtualMethod(DeafServer$DeafHandler, handle, void, $HttpExchange*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DeafServer$DeafHandler", "DeafServer", "DeafHandler", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"DeafServer$DeafHandler",
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
		"DeafServer"
	};
	$loadClass(DeafServer$DeafHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeafServer$DeafHandler);
	});
	return class$;
}

$Class* DeafServer$DeafHandler::class$ = nullptr;