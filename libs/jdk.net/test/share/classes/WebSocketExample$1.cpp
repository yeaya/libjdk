#include <WebSocketExample$1.h>
#include <WebSocketExample.h>
#include <jcpp.h>

using $WebSocketExample = ::WebSocketExample;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void WebSocketExample$1::init$($WebSocketExample* this$0) {
	$set(this, this$0, this$0);
}

WebSocketExample$1::WebSocketExample$1() {
}

$Class* WebSocketExample$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LWebSocketExample;", nullptr, $FINAL | $SYNTHETIC, $field(WebSocketExample$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LWebSocketExample;)V", nullptr, 0, $method(WebSocketExample$1, init$, void, $WebSocketExample*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"WebSocketExample",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"WebSocketExample$1", nullptr, nullptr, 0},
		{"java.net.http.WebSocket$Listener", "java.net.http.WebSocket", "Listener", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"WebSocketExample$1",
		"java.lang.Object",
		"java.net.http.WebSocket$Listener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"WebSocketExample"
	};
	$loadClass(WebSocketExample$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WebSocketExample$1);
	});
	return class$;
}

$Class* WebSocketExample$1::class$ = nullptr;