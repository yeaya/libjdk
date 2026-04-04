#include <jdk/internal/net/http/websocket/MessageQueue$Type.h>
#include <java/lang/Enum.h>
#include <jdk/internal/net/http/websocket/MessageQueue.h>
#include <jcpp.h>

#undef BINARY
#undef CLOSE
#undef PING
#undef PONG
#undef TEXT

using $MessageQueue$TypeArray = $Array<::jdk::internal::net::http::websocket::MessageQueue$Type>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {

MessageQueue$Type* MessageQueue$Type::TEXT = nullptr;
MessageQueue$Type* MessageQueue$Type::BINARY = nullptr;
MessageQueue$Type* MessageQueue$Type::PING = nullptr;
MessageQueue$Type* MessageQueue$Type::PONG = nullptr;
MessageQueue$Type* MessageQueue$Type::CLOSE = nullptr;
$MessageQueue$TypeArray* MessageQueue$Type::$VALUES = nullptr;

$MessageQueue$TypeArray* MessageQueue$Type::$values() {
	$init(MessageQueue$Type);
	return $new($MessageQueue$TypeArray, {
		MessageQueue$Type::TEXT,
		MessageQueue$Type::BINARY,
		MessageQueue$Type::PING,
		MessageQueue$Type::PONG,
		MessageQueue$Type::CLOSE
	});
}

$MessageQueue$TypeArray* MessageQueue$Type::values() {
	$init(MessageQueue$Type);
	return $cast($MessageQueue$TypeArray, MessageQueue$Type::$VALUES->clone());
}

MessageQueue$Type* MessageQueue$Type::valueOf($String* name) {
	$init(MessageQueue$Type);
	return $cast(MessageQueue$Type, $Enum::valueOf(MessageQueue$Type::class$, name));
}

void MessageQueue$Type::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void MessageQueue$Type::clinit$($Class* clazz) {
	$assignStatic(MessageQueue$Type::TEXT, $new(MessageQueue$Type, "TEXT"_s, 0));
	$assignStatic(MessageQueue$Type::BINARY, $new(MessageQueue$Type, "BINARY"_s, 1));
	$assignStatic(MessageQueue$Type::PING, $new(MessageQueue$Type, "PING"_s, 2));
	$assignStatic(MessageQueue$Type::PONG, $new(MessageQueue$Type, "PONG"_s, 3));
	$assignStatic(MessageQueue$Type::CLOSE, $new(MessageQueue$Type, "CLOSE"_s, 4));
	$assignStatic(MessageQueue$Type::$VALUES, MessageQueue$Type::$values());
}

MessageQueue$Type::MessageQueue$Type() {
}

$Class* MessageQueue$Type::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"TEXT", "Ljdk/internal/net/http/websocket/MessageQueue$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MessageQueue$Type, TEXT)},
		{"BINARY", "Ljdk/internal/net/http/websocket/MessageQueue$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MessageQueue$Type, BINARY)},
		{"PING", "Ljdk/internal/net/http/websocket/MessageQueue$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MessageQueue$Type, PING)},
		{"PONG", "Ljdk/internal/net/http/websocket/MessageQueue$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MessageQueue$Type, PONG)},
		{"CLOSE", "Ljdk/internal/net/http/websocket/MessageQueue$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MessageQueue$Type, CLOSE)},
		{"$VALUES", "[Ljdk/internal/net/http/websocket/MessageQueue$Type;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(MessageQueue$Type, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljdk/internal/net/http/websocket/MessageQueue$Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MessageQueue$Type, $values, $MessageQueue$TypeArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(MessageQueue$Type, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Ljdk/internal/net/http/websocket/MessageQueue$Type;", nullptr, $PUBLIC | $STATIC, $staticMethod(MessageQueue$Type, valueOf, MessageQueue$Type*, $String*)},
		{"values", "()[Ljdk/internal/net/http/websocket/MessageQueue$Type;", nullptr, $PUBLIC | $STATIC, $staticMethod(MessageQueue$Type, values, $MessageQueue$TypeArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.websocket.MessageQueue$Type", "jdk.internal.net.http.websocket.MessageQueue", "Type", $PRIVATE | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"jdk.internal.net.http.websocket.MessageQueue$Type",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljdk/internal/net/http/websocket/MessageQueue$Type;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.websocket.MessageQueue"
	};
	$loadClass(MessageQueue$Type, name, initialize, &classInfo$$, MessageQueue$Type::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(MessageQueue$Type));
	});
	return class$;
}

$Class* MessageQueue$Type::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk