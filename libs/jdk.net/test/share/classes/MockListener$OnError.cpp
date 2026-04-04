#include <MockListener$OnError.h>
#include <MockListener$Invocation.h>
#include <MockListener.h>
#include <java/net/http/WebSocket.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $MockListener$Invocation = ::MockListener$Invocation;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WebSocket = ::java::net::http::WebSocket;
using $Objects = ::java::util::Objects;

void MockListener$OnError::init$($WebSocket* webSocket, $Class* clazz) {
	$MockListener$Invocation::init$(webSocket);
	$set(this, clazz, clazz);
}

bool MockListener$OnError::equals(Object$* o) {
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
	$var(MockListener$OnError, onError, $cast(MockListener$OnError, o));
	bool var$1 = $Objects::equals(this->clazz, $nc(onError)->clazz);
	return var$1 && $Objects::equals(this->webSocket, onError->webSocket);
}

int32_t MockListener$OnError::hashCode() {
	return $Objects::hash($$new($ObjectArray, {
		this->clazz,
		this->webSocket
	}));
}

$String* MockListener$OnError::toString() {
	return $String::format("onError(%s, %s)"_s, $$new($ObjectArray, {
		this->webSocket,
		this->clazz
	}));
}

MockListener$OnError::MockListener$OnError() {
}

$Class* MockListener$OnError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"clazz", "Ljava/lang/Class;", "Ljava/lang/Class<+Ljava/lang/Throwable;>;", $FINAL, $field(MockListener$OnError, clazz)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/http/WebSocket;Ljava/lang/Class;)V", "(Ljava/net/http/WebSocket;Ljava/lang/Class<+Ljava/lang/Throwable;>;)V", $PUBLIC, $method(MockListener$OnError, init$, void, $WebSocket*, $Class*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(MockListener$OnError, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(MockListener$OnError, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MockListener$OnError, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MockListener$OnError", "MockListener", "OnError", $PUBLIC | $STATIC | $FINAL},
		{"MockListener$Invocation", "MockListener", "Invocation", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"MockListener$OnError",
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
	$loadClass(MockListener$OnError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MockListener$OnError);
	});
	return class$;
}

$Class* MockListener$OnError::class$ = nullptr;