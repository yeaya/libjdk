#include <MockListener$OnClose.h>
#include <MockListener$Invocation.h>
#include <MockListener.h>
#include <java/net/http/WebSocket.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $MockListener$Invocation = ::MockListener$Invocation;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $WebSocket = ::java::net::http::WebSocket;
using $Objects = ::java::util::Objects;

void MockListener$OnClose::init$($WebSocket* webSocket, int32_t statusCode, $String* reason) {
	$MockListener$Invocation::init$(webSocket);
	this->statusCode = statusCode;
	$set(this, reason, reason);
}

bool MockListener$OnClose::equals(Object$* o) {
	if ($equals(this, o)) {
		return true;
	}
	bool var$0 = o == nullptr;
	if (!var$0) {
		var$0 = $of(this)->getClass() != $of(o)->getClass();
	}
	if (var$0) {
		return false;
	}
	$var(MockListener$OnClose, onClose, $cast(MockListener$OnClose, o));
	bool var$1 = this->statusCode == $nc(onClose)->statusCode && $Objects::equals(this->reason, onClose->reason);
	return var$1 && $Objects::equals(this->webSocket, onClose->webSocket);
}

int32_t MockListener$OnClose::hashCode() {
	$useLocalObjectStack();
	return $Objects::hash($$new($ObjectArray, {
		$($Integer::valueOf(this->statusCode)),
		this->reason,
		this->webSocket
	}));
}

$String* MockListener$OnClose::toString() {
	$useLocalObjectStack();
	return $String::format("onClose(%s, %s, %s)"_s, $$new($ObjectArray, {
		this->webSocket,
		$($Integer::valueOf(this->statusCode)),
		this->reason
	}));
}

MockListener$OnClose::MockListener$OnClose() {
}

$Class* MockListener$OnClose::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"statusCode", "I", nullptr, $FINAL, $field(MockListener$OnClose, statusCode)},
		{"reason", "Ljava/lang/String;", nullptr, $FINAL, $field(MockListener$OnClose, reason)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/http/WebSocket;ILjava/lang/String;)V", nullptr, $PUBLIC, $method(MockListener$OnClose, init$, void, $WebSocket*, int32_t, $String*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(MockListener$OnClose, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(MockListener$OnClose, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MockListener$OnClose, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MockListener$OnClose", "MockListener", "OnClose", $PUBLIC | $STATIC | $FINAL},
		{"MockListener$Invocation", "MockListener", "Invocation", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"MockListener$OnClose",
		"MockListener$Invocation",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"MockListener"
	};
	$loadClass(MockListener$OnClose, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MockListener$OnClose);
	});
	return class$;
}

$Class* MockListener$OnClose::class$ = nullptr;