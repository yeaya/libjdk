#include <jdk/internal/net/http/AsyncEvent.h>

#include <java/io/IOException.h>
#include <java/nio/channels/SelectableChannel.h>
#include <jcpp.h>

#undef REPEATING

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

$FieldInfo _AsyncEvent_FieldInfo_[] = {
	{"REPEATING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AsyncEvent, REPEATING)},
	{"flags", "I", nullptr, $PROTECTED | $FINAL, $field(AsyncEvent, flags)},
	{}
};

$MethodInfo _AsyncEvent_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(AsyncEvent, init$, void)},
	{"<init>", "(I)V", nullptr, 0, $method(AsyncEvent, init$, void, int32_t)},
	{"abort", "(Ljava/io/IOException;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AsyncEvent, abort, void, $IOException*)},
	{"channel", "()Ljava/nio/channels/SelectableChannel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AsyncEvent, channel, $SelectableChannel*)},
	{"handle", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AsyncEvent, handle, void)},
	{"interestOps", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AsyncEvent, interestOps, int32_t)},
	{"repeating", "()Z", nullptr, $PUBLIC, $virtualMethod(AsyncEvent, repeating, bool)},
	{}
};

$ClassInfo _AsyncEvent_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"jdk.internal.net.http.AsyncEvent",
	"java.lang.Object",
	nullptr,
	_AsyncEvent_FieldInfo_,
	_AsyncEvent_MethodInfo_
};

$Object* allocate$AsyncEvent($Class* clazz) {
	return $of($alloc(AsyncEvent));
}

void AsyncEvent::init$() {
	AsyncEvent::init$(0);
}

void AsyncEvent::init$(int32_t flags) {
	this->flags = flags;
}

bool AsyncEvent::repeating() {
	return ((int32_t)(this->flags & (uint32_t)AsyncEvent::REPEATING)) != 0;
}

AsyncEvent::AsyncEvent() {
}

$Class* AsyncEvent::load$($String* name, bool initialize) {
	$loadClass(AsyncEvent, name, initialize, &_AsyncEvent_ClassInfo_, allocate$AsyncEvent);
	return class$;
}

$Class* AsyncEvent::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk