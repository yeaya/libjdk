#include <MockListener$Invocation.h>

#include <MockListener$OnBinary.h>
#include <MockListener$OnClose.h>
#include <MockListener$OnError.h>
#include <MockListener$OnOpen.h>
#include <MockListener$OnPing.h>
#include <MockListener$OnPong.h>
#include <MockListener$OnText.h>
#include <MockListener.h>
#include <java/net/http/WebSocket.h>
#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $MockListener$OnBinary = ::MockListener$OnBinary;
using $MockListener$OnClose = ::MockListener$OnClose;
using $MockListener$OnError = ::MockListener$OnError;
using $MockListener$OnOpen = ::MockListener$OnOpen;
using $MockListener$OnPing = ::MockListener$OnPing;
using $MockListener$OnPong = ::MockListener$OnPong;
using $MockListener$OnText = ::MockListener$OnText;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WebSocket = ::java::net::http::WebSocket;
using $ByteBuffer = ::java::nio::ByteBuffer;

$FieldInfo _MockListener$Invocation_FieldInfo_[] = {
	{"webSocket", "Ljava/net/http/WebSocket;", nullptr, $FINAL, $field(MockListener$Invocation, webSocket)},
	{}
};

$MethodInfo _MockListener$Invocation_MethodInfo_[] = {
	{"<init>", "(Ljava/net/http/WebSocket;)V", nullptr, $PRIVATE, $method(MockListener$Invocation, init$, void, $WebSocket*)},
	{"onBinary", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;Z)LMockListener$OnBinary;", nullptr, $PUBLIC | $STATIC, $staticMethod(MockListener$Invocation, onBinary, $MockListener$OnBinary*, $WebSocket*, $ByteBuffer*, bool)},
	{"onClose", "(Ljava/net/http/WebSocket;ILjava/lang/String;)LMockListener$OnClose;", nullptr, $PUBLIC | $STATIC, $staticMethod(MockListener$Invocation, onClose, $MockListener$OnClose*, $WebSocket*, int32_t, $String*)},
	{"onError", "(Ljava/net/http/WebSocket;Ljava/lang/Class;)LMockListener$OnError;", "(Ljava/net/http/WebSocket;Ljava/lang/Class<+Ljava/lang/Throwable;>;)LMockListener$OnError;", $PUBLIC | $STATIC, $staticMethod(MockListener$Invocation, onError, $MockListener$OnError*, $WebSocket*, $Class*)},
	{"onOpen", "(Ljava/net/http/WebSocket;)LMockListener$OnOpen;", nullptr, $PUBLIC | $STATIC, $staticMethod(MockListener$Invocation, onOpen, $MockListener$OnOpen*, $WebSocket*)},
	{"onPing", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;)LMockListener$OnPing;", nullptr, $PUBLIC | $STATIC, $staticMethod(MockListener$Invocation, onPing, $MockListener$OnPing*, $WebSocket*, $ByteBuffer*)},
	{"onPong", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;)LMockListener$OnPong;", nullptr, $PUBLIC | $STATIC, $staticMethod(MockListener$Invocation, onPong, $MockListener$OnPong*, $WebSocket*, $ByteBuffer*)},
	{"onText", "(Ljava/net/http/WebSocket;Ljava/lang/String;Z)LMockListener$OnText;", nullptr, $PUBLIC | $STATIC, $staticMethod(MockListener$Invocation, onText, $MockListener$OnText*, $WebSocket*, $String*, bool)},
	{}
};

$InnerClassInfo _MockListener$Invocation_InnerClassesInfo_[] = {
	{"MockListener$Invocation", "MockListener", "Invocation", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _MockListener$Invocation_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"MockListener$Invocation",
	"java.lang.Object",
	nullptr,
	_MockListener$Invocation_FieldInfo_,
	_MockListener$Invocation_MethodInfo_,
	nullptr,
	nullptr,
	_MockListener$Invocation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MockListener"
};

$Object* allocate$MockListener$Invocation($Class* clazz) {
	return $of($alloc(MockListener$Invocation));
}

$MockListener$OnOpen* MockListener$Invocation::onOpen($WebSocket* webSocket) {
	return $new($MockListener$OnOpen, webSocket);
}

$MockListener$OnText* MockListener$Invocation::onText($WebSocket* webSocket, $String* text, bool last) {
	return $new($MockListener$OnText, webSocket, text, last);
}

$MockListener$OnBinary* MockListener$Invocation::onBinary($WebSocket* webSocket, $ByteBuffer* data, bool last) {
	return $new($MockListener$OnBinary, webSocket, data, last);
}

$MockListener$OnPing* MockListener$Invocation::onPing($WebSocket* webSocket, $ByteBuffer* data) {
	return $new($MockListener$OnPing, webSocket, data);
}

$MockListener$OnPong* MockListener$Invocation::onPong($WebSocket* webSocket, $ByteBuffer* data) {
	return $new($MockListener$OnPong, webSocket, data);
}

$MockListener$OnClose* MockListener$Invocation::onClose($WebSocket* webSocket, int32_t statusCode, $String* reason) {
	return $new($MockListener$OnClose, webSocket, statusCode, reason);
}

$MockListener$OnError* MockListener$Invocation::onError($WebSocket* webSocket, $Class* clazz) {
	return $new($MockListener$OnError, webSocket, clazz);
}

void MockListener$Invocation::init$($WebSocket* webSocket) {
	$set(this, webSocket, webSocket);
}

MockListener$Invocation::MockListener$Invocation() {
}

$Class* MockListener$Invocation::load$($String* name, bool initialize) {
	$loadClass(MockListener$Invocation, name, initialize, &_MockListener$Invocation_ClassInfo_, allocate$MockListener$Invocation);
	return class$;
}

$Class* MockListener$Invocation::class$ = nullptr;