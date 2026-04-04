#include <MockListener$OnPing.h>
#include <MockListener$Invocation.h>
#include <MockListener.h>
#include <java/net/http/WebSocket.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $MockListener$Invocation = ::MockListener$Invocation;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WebSocket = ::java::net::http::WebSocket;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Objects = ::java::util::Objects;

void MockListener$OnPing::init$($WebSocket* webSocket, $ByteBuffer* data) {
	$MockListener$Invocation::init$(webSocket);
	$set(this, data, data);
}

bool MockListener$OnPing::equals(Object$* o) {
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
	$var(MockListener$OnPing, onPing, $cast(MockListener$OnPing, o));
	bool var$1 = $Objects::equals(this->data, $nc(onPing)->data);
	return var$1 && $Objects::equals(this->webSocket, onPing->webSocket);
}

int32_t MockListener$OnPing::hashCode() {
	return $Objects::hash($$new($ObjectArray, {
		this->data,
		this->webSocket
	}));
}

$String* MockListener$OnPing::toString() {
	return $String::format("onPing(%s, %s)"_s, $$new($ObjectArray, {
		this->webSocket,
		this->data
	}));
}

MockListener$OnPing::MockListener$OnPing() {
}

$Class* MockListener$OnPing::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"data", "Ljava/nio/ByteBuffer;", nullptr, $FINAL, $field(MockListener$OnPing, data)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $method(MockListener$OnPing, init$, void, $WebSocket*, $ByteBuffer*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(MockListener$OnPing, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(MockListener$OnPing, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MockListener$OnPing, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MockListener$OnPing", "MockListener", "OnPing", $PUBLIC | $STATIC | $FINAL},
		{"MockListener$Invocation", "MockListener", "Invocation", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"MockListener$OnPing",
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
	$loadClass(MockListener$OnPing, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MockListener$OnPing);
	});
	return class$;
}

$Class* MockListener$OnPing::class$ = nullptr;