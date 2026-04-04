#include <MockListener$OnBinary.h>
#include <MockListener$Invocation.h>
#include <MockListener.h>
#include <java/net/http/WebSocket.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $MockListener$Invocation = ::MockListener$Invocation;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WebSocket = ::java::net::http::WebSocket;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Objects = ::java::util::Objects;

void MockListener$OnBinary::init$($WebSocket* webSocket, $ByteBuffer* data, bool last) {
	$MockListener$Invocation::init$(webSocket);
	$set(this, data, data);
	this->last = last;
}

bool MockListener$OnBinary::equals(Object$* o) {
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
	$var(MockListener$OnBinary, onBinary, $cast(MockListener$OnBinary, o));
	bool var$1 = $Objects::equals(this->data, $nc(onBinary)->data) && this->last == onBinary->last;
	return var$1 && $Objects::equals(this->webSocket, onBinary->webSocket);
}

int32_t MockListener$OnBinary::hashCode() {
	$useLocalObjectStack();
	return $Objects::hash($$new($ObjectArray, {
		this->data,
		$($Boolean::valueOf(this->last)),
		this->webSocket
	}));
}

$String* MockListener$OnBinary::toString() {
	$useLocalObjectStack();
	return $String::format("onBinary(%s, %s, %s)"_s, $$new($ObjectArray, {
		this->webSocket,
		this->data,
		$($Boolean::valueOf(this->last))
	}));
}

MockListener$OnBinary::MockListener$OnBinary() {
}

$Class* MockListener$OnBinary::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"data", "Ljava/nio/ByteBuffer;", nullptr, $FINAL, $field(MockListener$OnBinary, data)},
		{"last", "Z", nullptr, $FINAL, $field(MockListener$OnBinary, last)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;Z)V", nullptr, $PUBLIC, $method(MockListener$OnBinary, init$, void, $WebSocket*, $ByteBuffer*, bool)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(MockListener$OnBinary, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(MockListener$OnBinary, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MockListener$OnBinary, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MockListener$OnBinary", "MockListener", "OnBinary", $PUBLIC | $STATIC | $FINAL},
		{"MockListener$Invocation", "MockListener", "Invocation", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"MockListener$OnBinary",
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
	$loadClass(MockListener$OnBinary, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MockListener$OnBinary);
	});
	return class$;
}

$Class* MockListener$OnBinary::class$ = nullptr;