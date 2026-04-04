#include <jdk/internal/net/http/websocket/Frame$Consumer.h>
#include <java/nio/ByteBuffer.h>
#include <jdk/internal/net/http/websocket/Frame$Opcode.h>
#include <jdk/internal/net/http/websocket/Frame.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Frame$Opcode = ::jdk::internal::net::http::websocket::Frame$Opcode;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {

$Class* Frame$Consumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"endFrame", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Frame$Consumer, endFrame, void)},
		{"fin", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Frame$Consumer, fin, void, bool)},
		{"mask", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Frame$Consumer, mask, void, bool)},
		{"maskingKey", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Frame$Consumer, maskingKey, void, int32_t)},
		{"opcode", "(Ljdk/internal/net/http/websocket/Frame$Opcode;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Frame$Consumer, opcode, void, $Frame$Opcode*)},
		{"payloadData", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Frame$Consumer, payloadData, void, $ByteBuffer*)},
		{"payloadLen", "(J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Frame$Consumer, payloadLen, void, int64_t)},
		{"rsv1", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Frame$Consumer, rsv1, void, bool)},
		{"rsv2", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Frame$Consumer, rsv2, void, bool)},
		{"rsv3", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Frame$Consumer, rsv3, void, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.websocket.Frame$Consumer", "jdk.internal.net.http.websocket.Frame", "Consumer", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"jdk.internal.net.http.websocket.Frame$Consumer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.websocket.Frame"
	};
	$loadClass(Frame$Consumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Frame$Consumer);
	});
	return class$;
}

$Class* Frame$Consumer::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk