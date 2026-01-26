#include <jdk/internal/net/http/websocket/MessageStreamConsumer.h>

#include <java/lang/CharSequence.h>
#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {

$MethodInfo _MessageStreamConsumer_MethodInfo_[] = {
	{"onBinary", "(Ljava/nio/ByteBuffer;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MessageStreamConsumer, onBinary, void, $ByteBuffer*, bool)},
	{"onClose", "(ILjava/lang/CharSequence;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MessageStreamConsumer, onClose, void, int32_t, $CharSequence*)},
	{"onComplete", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MessageStreamConsumer, onComplete, void)},
	{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MessageStreamConsumer, onError, void, $Throwable*)},
	{"onPing", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MessageStreamConsumer, onPing, void, $ByteBuffer*)},
	{"onPong", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MessageStreamConsumer, onPong, void, $ByteBuffer*)},
	{"onText", "(Ljava/lang/CharSequence;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MessageStreamConsumer, onText, void, $CharSequence*, bool)},
	{}
};

$ClassInfo _MessageStreamConsumer_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"jdk.internal.net.http.websocket.MessageStreamConsumer",
	nullptr,
	nullptr,
	nullptr,
	_MessageStreamConsumer_MethodInfo_
};

$Object* allocate$MessageStreamConsumer($Class* clazz) {
	return $of($alloc(MessageStreamConsumer));
}

$Class* MessageStreamConsumer::load$($String* name, bool initialize) {
	$loadClass(MessageStreamConsumer, name, initialize, &_MessageStreamConsumer_ClassInfo_, allocate$MessageStreamConsumer);
	return class$;
}

$Class* MessageStreamConsumer::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk