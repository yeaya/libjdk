#include <MockListener$OnOpen.h>
#include <MockListener$Invocation.h>
#include <MockListener.h>
#include <java/net/http/WebSocket.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $MockListener$Invocation = ::MockListener$Invocation;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WebSocket = ::java::net::http::WebSocket;
using $Objects = ::java::util::Objects;

void MockListener$OnOpen::init$($WebSocket* webSocket) {
	$MockListener$Invocation::init$(webSocket);
}

bool MockListener$OnOpen::equals(Object$* o) {
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
	$var($MockListener$Invocation, that, $cast($MockListener$Invocation, o));
	return $Objects::equals(this->webSocket, $nc(that)->webSocket);
}

int32_t MockListener$OnOpen::hashCode() {
	return $Objects::hashCode(this->webSocket);
}

$String* MockListener$OnOpen::toString() {
	return $String::format("onOpen(%s)"_s, $$new($ObjectArray, {this->webSocket}));
}

MockListener$OnOpen::MockListener$OnOpen() {
}

$Class* MockListener$OnOpen::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/http/WebSocket;)V", nullptr, $PUBLIC, $method(MockListener$OnOpen, init$, void, $WebSocket*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(MockListener$OnOpen, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(MockListener$OnOpen, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MockListener$OnOpen, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MockListener$OnOpen", "MockListener", "OnOpen", $PUBLIC | $STATIC | $FINAL},
		{"MockListener$Invocation", "MockListener", "Invocation", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"MockListener$OnOpen",
		"MockListener$Invocation",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"MockListener"
	};
	$loadClass(MockListener$OnOpen, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MockListener$OnOpen);
	});
	return class$;
}

$Class* MockListener$OnOpen::class$ = nullptr;