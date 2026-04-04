#include <jdk/internal/net/http/websocket/MessageDecoder$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <jdk/internal/net/http/websocket/Frame$Opcode.h>
#include <jdk/internal/net/http/websocket/MessageDecoder.h>
#include <jcpp.h>

#undef CLOSE
#undef PING
#undef PONG

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $Frame$Opcode = ::jdk::internal::net::http::websocket::Frame$Opcode;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {

$ints* MessageDecoder$1::$SwitchMap$jdk$internal$net$http$websocket$Frame$Opcode = nullptr;

void MessageDecoder$1::clinit$($Class* clazz) {
	$assignStatic(MessageDecoder$1::$SwitchMap$jdk$internal$net$http$websocket$Frame$Opcode, $new($ints, $($Frame$Opcode::values())->length));
	{
		try {
			MessageDecoder$1::$SwitchMap$jdk$internal$net$http$websocket$Frame$Opcode->set($Frame$Opcode::CLOSE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			MessageDecoder$1::$SwitchMap$jdk$internal$net$http$websocket$Frame$Opcode->set($Frame$Opcode::PING->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			MessageDecoder$1::$SwitchMap$jdk$internal$net$http$websocket$Frame$Opcode->set($Frame$Opcode::PONG->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

MessageDecoder$1::MessageDecoder$1() {
}

$Class* MessageDecoder$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$jdk$internal$net$http$websocket$Frame$Opcode", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MessageDecoder$1, $SwitchMap$jdk$internal$net$http$websocket$Frame$Opcode)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.net.http.websocket.MessageDecoder",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.websocket.MessageDecoder$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"jdk.internal.net.http.websocket.MessageDecoder$1",
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
		"jdk.internal.net.http.websocket.MessageDecoder"
	};
	$loadClass(MessageDecoder$1, name, initialize, &classInfo$$, MessageDecoder$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MessageDecoder$1);
	});
	return class$;
}

$Class* MessageDecoder$1::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk