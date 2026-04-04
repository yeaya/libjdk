#include <jdk/internal/net/http/websocket/MessageQueue$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <jdk/internal/net/http/websocket/MessageQueue$Type.h>
#include <jdk/internal/net/http/websocket/MessageQueue.h>
#include <jcpp.h>

#undef BINARY
#undef CLOSE
#undef PING
#undef PONG
#undef TEXT

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $MessageQueue$Type = ::jdk::internal::net::http::websocket::MessageQueue$Type;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {

$ints* MessageQueue$1::$SwitchMap$jdk$internal$net$http$websocket$MessageQueue$Type = nullptr;

void MessageQueue$1::clinit$($Class* clazz) {
	$assignStatic(MessageQueue$1::$SwitchMap$jdk$internal$net$http$websocket$MessageQueue$Type, $new($ints, $($MessageQueue$Type::values())->length));
	{
		try {
			MessageQueue$1::$SwitchMap$jdk$internal$net$http$websocket$MessageQueue$Type->set($MessageQueue$Type::TEXT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			MessageQueue$1::$SwitchMap$jdk$internal$net$http$websocket$MessageQueue$Type->set($MessageQueue$Type::BINARY->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			MessageQueue$1::$SwitchMap$jdk$internal$net$http$websocket$MessageQueue$Type->set($MessageQueue$Type::PING->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			MessageQueue$1::$SwitchMap$jdk$internal$net$http$websocket$MessageQueue$Type->set($MessageQueue$Type::PONG->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			MessageQueue$1::$SwitchMap$jdk$internal$net$http$websocket$MessageQueue$Type->set($MessageQueue$Type::CLOSE->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

MessageQueue$1::MessageQueue$1() {
}

$Class* MessageQueue$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$jdk$internal$net$http$websocket$MessageQueue$Type", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MessageQueue$1, $SwitchMap$jdk$internal$net$http$websocket$MessageQueue$Type)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.net.http.websocket.MessageQueue",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.websocket.MessageQueue$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"jdk.internal.net.http.websocket.MessageQueue$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.websocket.MessageQueue"
	};
	$loadClass(MessageQueue$1, name, initialize, &classInfo$$, MessageQueue$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MessageQueue$1);
	});
	return class$;
}

$Class* MessageQueue$1::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk