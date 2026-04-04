#include <jdk/internal/net/http/websocket/MessageQueue$Message.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/Supplier.h>
#include <jdk/internal/net/http/websocket/MessageQueue$Type.h>
#include <jdk/internal/net/http/websocket/MessageQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {

void MessageQueue$Message::init$() {
}

MessageQueue$Message::MessageQueue$Message() {
}

$Class* MessageQueue$Message::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ready", "Z", nullptr, $PRIVATE | $VOLATILE, $field(MessageQueue$Message, ready)},
		{"type", "Ljdk/internal/net/http/websocket/MessageQueue$Type;", nullptr, $PRIVATE, $field(MessageQueue$Message, type)},
		{"binarySupplier", "Ljava/util/function/Supplier;", "Ljava/util/function/Supplier<+Ljava/nio/ByteBuffer;>;", $PRIVATE, $field(MessageQueue$Message, binarySupplier)},
		{"binary", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $field(MessageQueue$Message, binary)},
		{"text", "Ljava/nio/CharBuffer;", nullptr, $PRIVATE, $field(MessageQueue$Message, text)},
		{"isLast", "Z", nullptr, $PRIVATE, $field(MessageQueue$Message, isLast)},
		{"statusCode", "I", nullptr, $PRIVATE, $field(MessageQueue$Message, statusCode)},
		{"attachment", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(MessageQueue$Message, attachment)},
		{"action", "Ljava/util/function/BiConsumer;", nullptr, $PRIVATE, $field(MessageQueue$Message, action)},
		{"future", "Ljava/util/concurrent/CompletableFuture;", nullptr, $PRIVATE, $field(MessageQueue$Message, future)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(MessageQueue$Message, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.websocket.MessageQueue$Message", "jdk.internal.net.http.websocket.MessageQueue", "Message", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.websocket.MessageQueue$Message",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.websocket.MessageQueue"
	};
	$loadClass(MessageQueue$Message, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MessageQueue$Message);
	});
	return class$;
}

$Class* MessageQueue$Message::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk