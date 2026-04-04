#include <WebSocketExample$2.h>
#include <WebSocketExample.h>
#include <java/lang/CharSequence.h>
#include <java/net/http/WebSocket.h>
#include <java/util/concurrent/CompletionStage.h>
#include <jcpp.h>

using $WebSocketExample = ::WebSocketExample;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WebSocket = ::java::net::http::WebSocket;
using $CompletionStage = ::java::util::concurrent::CompletionStage;

void WebSocketExample$2::init$($WebSocketExample* this$0) {
	$set(this, this$0, this$0);
	$set(this, text, $new($StringBuilder));
}

$CompletionStage* WebSocketExample$2::onText($WebSocket* webSocket, $CharSequence* message, bool last) {
	$nc(this->text)->append(message);
	if (last) {
		$WebSocketExample::processCompleteTextMessage(this->text);
		$set(this, text, $new($StringBuilder));
	}
	$nc(webSocket)->request(1);
	return nullptr;
}

WebSocketExample$2::WebSocketExample$2() {
}

$Class* WebSocketExample$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LWebSocketExample;", nullptr, $FINAL | $SYNTHETIC, $field(WebSocketExample$2, this$0)},
		{"text", "Ljava/lang/StringBuilder;", nullptr, 0, $field(WebSocketExample$2, text)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LWebSocketExample;)V", nullptr, 0, $method(WebSocketExample$2, init$, void, $WebSocketExample*)},
		{"onText", "(Ljava/net/http/WebSocket;Ljava/lang/CharSequence;Z)Ljava/util/concurrent/CompletionStage;", "(Ljava/net/http/WebSocket;Ljava/lang/CharSequence;Z)Ljava/util/concurrent/CompletionStage<*>;", $PUBLIC, $virtualMethod(WebSocketExample$2, onText, $CompletionStage*, $WebSocket*, $CharSequence*, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"WebSocketExample",
		"requestExample",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"WebSocketExample$2", nullptr, nullptr, 0},
		{"java.net.http.WebSocket$Listener", "java.net.http.WebSocket", "Listener", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"WebSocketExample$2",
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
	$loadClass(WebSocketExample$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WebSocketExample$2);
	});
	return class$;
}

$Class* WebSocketExample$2::class$ = nullptr;