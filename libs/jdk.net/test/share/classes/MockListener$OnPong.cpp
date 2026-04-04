#include <MockListener$OnPong.h>
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

void MockListener$OnPong::init$($WebSocket* webSocket, $ByteBuffer* data) {
	$MockListener$Invocation::init$(webSocket);
	$set(this, data, data);
}

bool MockListener$OnPong::equals(Object$* o) {
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
	$var(MockListener$OnPong, onPong, $cast(MockListener$OnPong, o));
	bool var$1 = $Objects::equals(this->data, $nc(onPong)->data);
	return var$1 && $Objects::equals(this->webSocket, onPong->webSocket);
}

int32_t MockListener$OnPong::hashCode() {
	return $Objects::hash($$new($ObjectArray, {
		this->data,
		this->webSocket
	}));
}

$String* MockListener$OnPong::toString() {
	return $String::format("onPong(%s, %s)"_s, $$new($ObjectArray, {
		this->webSocket,
		this->data
	}));
}

MockListener$OnPong::MockListener$OnPong() {
}

$Class* MockListener$OnPong::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"data", "Ljava/nio/ByteBuffer;", nullptr, $FINAL, $field(MockListener$OnPong, data)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $method(MockListener$OnPong, init$, void, $WebSocket*, $ByteBuffer*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(MockListener$OnPong, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(MockListener$OnPong, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MockListener$OnPong, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MockListener$OnPong", "MockListener", "OnPong", $PUBLIC | $STATIC | $FINAL},
		{"MockListener$Invocation", "MockListener", "Invocation", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"MockListener$OnPong",
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
	$loadClass(MockListener$OnPong, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MockListener$OnPong);
	});
	return class$;
}

$Class* MockListener$OnPong::class$ = nullptr;