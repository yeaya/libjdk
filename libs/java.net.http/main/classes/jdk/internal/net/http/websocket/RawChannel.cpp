#include <jdk/internal/net/http/websocket/RawChannel.h>
#include <java/nio/ByteBuffer.h>
#include <jdk/internal/net/http/websocket/RawChannel$RawEvent.h>
#include <jcpp.h>

using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $RawChannel$RawEvent = ::jdk::internal::net::http::websocket::RawChannel$RawEvent;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {

$Class* RawChannel::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
		{"initialByteBuffer", "()Ljava/nio/ByteBuffer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RawChannel, initialByteBuffer, $ByteBuffer*), "java.lang.IllegalStateException"},
		{"read", "()Ljava/nio/ByteBuffer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RawChannel, read, $ByteBuffer*), "java.io.IOException"},
		{"registerEvent", "(Ljdk/internal/net/http/websocket/RawChannel$RawEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RawChannel, registerEvent, void, $RawChannel$RawEvent*), "java.io.IOException"},
		{"shutdownInput", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RawChannel, shutdownInput, void), "java.io.IOException"},
		{"shutdownOutput", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RawChannel, shutdownOutput, void), "java.io.IOException"},
		{"write", "([Ljava/nio/ByteBuffer;II)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RawChannel, write, int64_t, $ByteBufferArray*, int32_t, int32_t), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.websocket.RawChannel$RawEvent", "jdk.internal.net.http.websocket.RawChannel", "RawEvent", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"jdk.internal.net.http.websocket.RawChannel$Provider", "jdk.internal.net.http.websocket.RawChannel", "Provider", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.net.http.websocket.RawChannel",
		nullptr,
		"java.io.Closeable",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.internal.net.http.websocket.RawChannel$RawEvent,jdk.internal.net.http.websocket.RawChannel$Provider"
	};
	$loadClass(RawChannel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RawChannel);
	});
	return class$;
}

$Class* RawChannel::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk