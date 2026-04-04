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

void AsyncEvent::init$() {
	AsyncEvent::init$(0);
}

void AsyncEvent::init$(int32_t flags) {
	this->flags = flags;
}

bool AsyncEvent::repeating() {
	return (this->flags & AsyncEvent::REPEATING) != 0;
}

AsyncEvent::AsyncEvent() {
}

$Class* AsyncEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"REPEATING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AsyncEvent, REPEATING)},
		{"flags", "I", nullptr, $PROTECTED | $FINAL, $field(AsyncEvent, flags)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AsyncEvent, init$, void)},
		{"<init>", "(I)V", nullptr, 0, $method(AsyncEvent, init$, void, int32_t)},
		{"abort", "(Ljava/io/IOException;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AsyncEvent, abort, void, $IOException*)},
		{"channel", "()Ljava/nio/channels/SelectableChannel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AsyncEvent, channel, $SelectableChannel*)},
		{"handle", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AsyncEvent, handle, void)},
		{"interestOps", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AsyncEvent, interestOps, int32_t)},
		{"repeating", "()Z", nullptr, $PUBLIC, $virtualMethod(AsyncEvent, repeating, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"jdk.internal.net.http.AsyncEvent",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AsyncEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AsyncEvent);
	});
	return class$;
}

$Class* AsyncEvent::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk