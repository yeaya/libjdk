#include <MockListener$OnText.h>
#include <MockListener$Invocation.h>
#include <MockListener.h>
#include <java/net/http/WebSocket.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $MockListener$Invocation = ::MockListener$Invocation;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $WebSocket = ::java::net::http::WebSocket;
using $Objects = ::java::util::Objects;

void MockListener$OnText::init$($WebSocket* webSocket, $String* text, bool last) {
	$MockListener$Invocation::init$(webSocket);
	$set(this, text, text);
	this->last = last;
}

bool MockListener$OnText::equals(Object$* o) {
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
	$var(MockListener$OnText, onText, $cast(MockListener$OnText, o));
	bool var$1 = $Objects::equals(this->text, $nc(onText)->text) && this->last == onText->last;
	return var$1 && $Objects::equals(this->webSocket, onText->webSocket);
}

int32_t MockListener$OnText::hashCode() {
	$useLocalObjectStack();
	return $Objects::hash($$new($ObjectArray, {
		this->text,
		$($Boolean::valueOf(this->last)),
		this->webSocket
	}));
}

$String* MockListener$OnText::toString() {
	$useLocalObjectStack();
	return $String::format("onText(%s, message.length=%s, %s)"_s, $$new($ObjectArray, {
		this->webSocket,
		$($Integer::valueOf($nc(this->text)->length())),
		$($Boolean::valueOf(this->last))
	}));
}

MockListener$OnText::MockListener$OnText() {
}

$Class* MockListener$OnText::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"text", "Ljava/lang/String;", nullptr, $FINAL, $field(MockListener$OnText, text)},
		{"last", "Z", nullptr, $FINAL, $field(MockListener$OnText, last)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/http/WebSocket;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(MockListener$OnText, init$, void, $WebSocket*, $String*, bool)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(MockListener$OnText, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(MockListener$OnText, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MockListener$OnText, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MockListener$OnText", "MockListener", "OnText", $PUBLIC | $STATIC | $FINAL},
		{"MockListener$Invocation", "MockListener", "Invocation", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"MockListener$OnText",
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
	$loadClass(MockListener$OnText, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MockListener$OnText);
	});
	return class$;
}

$Class* MockListener$OnText::class$ = nullptr;