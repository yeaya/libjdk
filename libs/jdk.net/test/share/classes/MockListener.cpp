#include <MockListener.h>
#include <MockListener$Invocation.h>
#include <MockListener$OnBinary.h>
#include <MockListener$OnClose.h>
#include <MockListener$OnError.h>
#include <MockListener$OnOpen.h>
#include <MockListener$OnPing.h>
#include <MockListener$OnPong.h>
#include <MockListener$OnText.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/http/WebSocket.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/CompletionStage.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

using $MockListener$Invocation = ::MockListener$Invocation;
using $MockListener$OnBinary = ::MockListener$OnBinary;
using $MockListener$OnClose = ::MockListener$OnClose;
using $MockListener$OnError = ::MockListener$OnError;
using $MockListener$OnOpen = ::MockListener$OnOpen;
using $MockListener$OnPing = ::MockListener$OnPing;
using $MockListener$OnPong = ::MockListener$OnPong;
using $MockListener$OnText = ::MockListener$OnText;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $WebSocket = ::java::net::http::WebSocket;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $CompletionStage = ::java::util::concurrent::CompletionStage;
using $Predicate = ::java::util::function::Predicate;

class MockListener$$Lambda$closeOrError : public $Predicate {
	$class(MockListener$$Lambda$closeOrError, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* i) override {
		 return MockListener::closeOrError($cast($MockListener$Invocation, i));
	}
};
$Class* MockListener$$Lambda$closeOrError::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MockListener$$Lambda$closeOrError, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(MockListener$$Lambda$closeOrError, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"MockListener$$Lambda$closeOrError",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(MockListener$$Lambda$closeOrError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MockListener$$Lambda$closeOrError);
	});
	return class$;
}
$Class* MockListener$$Lambda$closeOrError::class$ = nullptr;

void MockListener::init$() {
	MockListener::init$(1, $$new(MockListener$$Lambda$closeOrError));
}

void MockListener::init$(int64_t bufferSize) {
	MockListener::init$(bufferSize, $$new(MockListener$$Lambda$closeOrError));
}

void MockListener::init$($Predicate* collectUntil) {
	MockListener::init$(1, collectUntil);
}

void MockListener::init$(int64_t bufferSize, $Predicate* collectUntil) {
	$set(this, invocations$, $new($ArrayList));
	$set(this, lastCall, $new($CompletableFuture));
	if (bufferSize < 1) {
		$throwNew($IllegalArgumentException);
	}
	$Objects::requireNonNull(collectUntil);
	this->bufferSize = bufferSize;
	$set(this, collectUntil, collectUntil);
}

bool MockListener::closeOrError($MockListener$Invocation* i) {
	$init(MockListener);
	return $instanceOf($MockListener$OnClose, i) || $instanceOf($MockListener$OnError, i);
}

void MockListener::onOpen($WebSocket* webSocket) {
	$useLocalObjectStack();
	$nc($System::out)->printf("onOpen(%s)%n"_s, $$new($ObjectArray, {webSocket}));
	$var($MockListener$OnOpen, inv, $new($MockListener$OnOpen, webSocket));
	$synchronized(this->invocations$) {
		this->invocations$->add(inv);
	}
	if ($nc(this->collectUntil)->test(inv)) {
		$nc(this->lastCall)->complete(nullptr);
	}
	onOpen0(webSocket);
}

void MockListener::onOpen0($WebSocket* webSocket) {
	$useLocalObjectStack();
	this->count = this->bufferSize - this->bufferSize / 2;
	$nc($System::out)->printf("request(%d)%n"_s, $$new($ObjectArray, {$($Long::valueOf(this->bufferSize))}));
	$nc(webSocket)->request(this->bufferSize);
}

$CompletionStage* MockListener::onText($WebSocket* webSocket, $CharSequence* message, bool last) {
	$useLocalObjectStack();
	$nc($System::out)->printf("onText(%s, message.length=%s, %s)%n"_s, $$new($ObjectArray, {
		webSocket,
		$($Integer::valueOf($nc(message)->length())),
		$($Boolean::valueOf(last))
	}));
	$var($MockListener$OnText, inv, $new($MockListener$OnText, webSocket, $(message->toString()), last));
	$synchronized(this->invocations$) {
		this->invocations$->add(inv);
	}
	if ($nc(this->collectUntil)->test(inv)) {
		$nc(this->lastCall)->complete(nullptr);
	}
	return onText0(webSocket, message, last);
}

$CompletionStage* MockListener::onText0($WebSocket* webSocket, $CharSequence* message, bool last) {
	replenish(webSocket);
	return nullptr;
}

$CompletionStage* MockListener::onBinary($WebSocket* webSocket, $ByteBuffer* message, bool last) {
	$useLocalObjectStack();
	$nc($System::out)->printf("onBinary(%s, %s, %s)%n"_s, $$new($ObjectArray, {
		webSocket,
		message,
		$($Boolean::valueOf(last))
	}));
	$var($MockListener$OnBinary, inv, $new($MockListener$OnBinary, webSocket, $(fullCopy(message)), last));
	$synchronized(this->invocations$) {
		this->invocations$->add(inv);
	}
	if ($nc(this->collectUntil)->test(inv)) {
		$nc(this->lastCall)->complete(nullptr);
	}
	return onBinary0(webSocket, message, last);
}

$CompletionStage* MockListener::onBinary0($WebSocket* webSocket, $ByteBuffer* message, bool last) {
	replenish(webSocket);
	return nullptr;
}

$CompletionStage* MockListener::onPing($WebSocket* webSocket, $ByteBuffer* message) {
	$useLocalObjectStack();
	$nc($System::out)->printf("onPing(%s, %s)%n"_s, $$new($ObjectArray, {
		webSocket,
		message
	}));
	$var($MockListener$OnPing, inv, $new($MockListener$OnPing, webSocket, $(fullCopy(message))));
	$synchronized(this->invocations$) {
		this->invocations$->add(inv);
	}
	if ($nc(this->collectUntil)->test(inv)) {
		$nc(this->lastCall)->complete(nullptr);
	}
	return onPing0(webSocket, message);
}

$CompletionStage* MockListener::onPing0($WebSocket* webSocket, $ByteBuffer* message) {
	replenish(webSocket);
	return nullptr;
}

$CompletionStage* MockListener::onPong($WebSocket* webSocket, $ByteBuffer* message) {
	$useLocalObjectStack();
	$nc($System::out)->printf("onPong(%s, %s)%n"_s, $$new($ObjectArray, {
		webSocket,
		message
	}));
	$var($MockListener$OnPong, inv, $new($MockListener$OnPong, webSocket, $(fullCopy(message))));
	$synchronized(this->invocations$) {
		this->invocations$->add(inv);
	}
	if ($nc(this->collectUntil)->test(inv)) {
		$nc(this->lastCall)->complete(nullptr);
	}
	return onPong0(webSocket, message);
}

$CompletionStage* MockListener::onPong0($WebSocket* webSocket, $ByteBuffer* message) {
	replenish(webSocket);
	return nullptr;
}

$CompletionStage* MockListener::onClose($WebSocket* webSocket, int32_t statusCode, $String* reason) {
	$useLocalObjectStack();
	$nc($System::out)->printf("onClose(%s, %s, %s)%n"_s, $$new($ObjectArray, {
		webSocket,
		$($Integer::valueOf(statusCode)),
		reason
	}));
	$var($MockListener$OnClose, inv, $new($MockListener$OnClose, webSocket, statusCode, reason));
	$synchronized(this->invocations$) {
		this->invocations$->add(inv);
	}
	if ($nc(this->collectUntil)->test(inv)) {
		$nc(this->lastCall)->complete(nullptr);
	}
	return onClose0(webSocket, statusCode, reason);
}

$CompletionStage* MockListener::onClose0($WebSocket* webSocket, int32_t statusCode, $String* reason) {
	return nullptr;
}

void MockListener::onError($WebSocket* webSocket, $Throwable* error) {
	$useLocalObjectStack();
	$nc($System::out)->printf("onError(%s, %s)%n"_s, $$new($ObjectArray, {
		webSocket,
		error
	}));
	$nc(error)->printStackTrace($System::out);
	$var($MockListener$OnError, inv, $new($MockListener$OnError, webSocket, error == nullptr ? ($Class*)nullptr : $of(error)->getClass()));
	$synchronized(this->invocations$) {
		this->invocations$->add(inv);
	}
	if ($nc(this->collectUntil)->test(inv)) {
		$nc(this->lastCall)->complete(nullptr);
	}
	onError0(webSocket, error);
}

void MockListener::onError0($WebSocket* webSocket, $Throwable* error) {
}

$List* MockListener::invocationsSoFar() {
	$synchronized(this->invocations$) {
		return $new($ArrayList, this->invocations$);
	}
}

$List* MockListener::invocations() {
	$nc(this->lastCall)->join();
	$synchronized(this->invocations$) {
		return $new($ArrayList, this->invocations$);
	}
}

void MockListener::replenish($WebSocket* webSocket) {
	$useLocalObjectStack();
	if (--this->count <= 0) {
		this->count = this->bufferSize - this->bufferSize / 2;
		$nc(webSocket)->request(this->count);
		$nc($System::out)->printf("request(%d)%n"_s, $$new($ObjectArray, {$($Long::valueOf(this->count))}));
	}
}

$ByteBuffer* MockListener::fullCopy($ByteBuffer* src) {
	$init(MockListener);
	$useLocalObjectStack();
	$var($ByteBuffer, copy, $ByteBuffer::allocate($nc(src)->capacity()));
	int32_t p = src->position();
	int32_t l = src->limit();
	src->clear();
	$$nc($$nc($nc(copy)->put(src))->position(p))->limit(l);
	$$nc(src->position(p))->limit(l);
	return copy;
}

MockListener::MockListener() {
}

$Class* MockListener::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("MockListener$$Lambda$closeOrError")) {
			return MockListener$$Lambda$closeOrError::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"bufferSize", "J", nullptr, $PRIVATE | $FINAL, $field(MockListener, bufferSize)},
		{"count", "J", nullptr, $PRIVATE, $field(MockListener, count)},
		{"invocations", "Ljava/util/List;", "Ljava/util/List<LMockListener$Invocation;>;", $PRIVATE | $FINAL, $field(MockListener, invocations$)},
		{"lastCall", "Ljava/util/concurrent/CompletableFuture;", "Ljava/util/concurrent/CompletableFuture<*>;", $PRIVATE | $FINAL, $field(MockListener, lastCall)},
		{"collectUntil", "Ljava/util/function/Predicate;", "Ljava/util/function/Predicate<-LMockListener$Invocation;>;", $PRIVATE | $FINAL, $field(MockListener, collectUntil)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MockListener, init$, void)},
		{"<init>", "(J)V", nullptr, $PUBLIC, $method(MockListener, init$, void, int64_t)},
		{"<init>", "(Ljava/util/function/Predicate;)V", "(Ljava/util/function/Predicate<-LMockListener$Invocation;>;)V", $PUBLIC, $method(MockListener, init$, void, $Predicate*)},
		{"<init>", "(JLjava/util/function/Predicate;)V", "(JLjava/util/function/Predicate<-LMockListener$Invocation;>;)V", $PUBLIC, $method(MockListener, init$, void, int64_t, $Predicate*)},
		{"closeOrError", "(LMockListener$Invocation;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(MockListener, closeOrError, bool, $MockListener$Invocation*)},
		{"fullCopy", "(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;", nullptr, $PRIVATE | $STATIC, $staticMethod(MockListener, fullCopy, $ByteBuffer*, $ByteBuffer*)},
		{"invocations", "()Ljava/util/List;", "()Ljava/util/List<LMockListener$Invocation;>;", $PUBLIC, $virtualMethod(MockListener, invocations, $List*)},
		{"invocationsSoFar", "()Ljava/util/List;", "()Ljava/util/List<LMockListener$Invocation;>;", $PUBLIC, $virtualMethod(MockListener, invocationsSoFar, $List*)},
		{"onBinary", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;Z)Ljava/util/concurrent/CompletionStage;", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;Z)Ljava/util/concurrent/CompletionStage<*>;", $PUBLIC, $virtualMethod(MockListener, onBinary, $CompletionStage*, $WebSocket*, $ByteBuffer*, bool)},
		{"onBinary0", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;Z)Ljava/util/concurrent/CompletionStage;", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;Z)Ljava/util/concurrent/CompletionStage<*>;", $PROTECTED, $virtualMethod(MockListener, onBinary0, $CompletionStage*, $WebSocket*, $ByteBuffer*, bool)},
		{"onClose", "(Ljava/net/http/WebSocket;ILjava/lang/String;)Ljava/util/concurrent/CompletionStage;", "(Ljava/net/http/WebSocket;ILjava/lang/String;)Ljava/util/concurrent/CompletionStage<*>;", $PUBLIC, $virtualMethod(MockListener, onClose, $CompletionStage*, $WebSocket*, int32_t, $String*)},
		{"onClose0", "(Ljava/net/http/WebSocket;ILjava/lang/String;)Ljava/util/concurrent/CompletionStage;", "(Ljava/net/http/WebSocket;ILjava/lang/String;)Ljava/util/concurrent/CompletionStage<*>;", $PROTECTED, $virtualMethod(MockListener, onClose0, $CompletionStage*, $WebSocket*, int32_t, $String*)},
		{"onError", "(Ljava/net/http/WebSocket;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(MockListener, onError, void, $WebSocket*, $Throwable*)},
		{"onError0", "(Ljava/net/http/WebSocket;Ljava/lang/Throwable;)V", nullptr, $PROTECTED, $virtualMethod(MockListener, onError0, void, $WebSocket*, $Throwable*)},
		{"onOpen", "(Ljava/net/http/WebSocket;)V", nullptr, $PUBLIC, $virtualMethod(MockListener, onOpen, void, $WebSocket*)},
		{"onOpen0", "(Ljava/net/http/WebSocket;)V", nullptr, $PROTECTED, $virtualMethod(MockListener, onOpen0, void, $WebSocket*)},
		{"onPing", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;)Ljava/util/concurrent/CompletionStage;", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;)Ljava/util/concurrent/CompletionStage<*>;", $PUBLIC, $virtualMethod(MockListener, onPing, $CompletionStage*, $WebSocket*, $ByteBuffer*)},
		{"onPing0", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;)Ljava/util/concurrent/CompletionStage;", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;)Ljava/util/concurrent/CompletionStage<*>;", $PROTECTED, $virtualMethod(MockListener, onPing0, $CompletionStage*, $WebSocket*, $ByteBuffer*)},
		{"onPong", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;)Ljava/util/concurrent/CompletionStage;", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;)Ljava/util/concurrent/CompletionStage<*>;", $PUBLIC, $virtualMethod(MockListener, onPong, $CompletionStage*, $WebSocket*, $ByteBuffer*)},
		{"onPong0", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;)Ljava/util/concurrent/CompletionStage;", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;)Ljava/util/concurrent/CompletionStage<*>;", $PROTECTED, $virtualMethod(MockListener, onPong0, $CompletionStage*, $WebSocket*, $ByteBuffer*)},
		{"onText", "(Ljava/net/http/WebSocket;Ljava/lang/CharSequence;Z)Ljava/util/concurrent/CompletionStage;", "(Ljava/net/http/WebSocket;Ljava/lang/CharSequence;Z)Ljava/util/concurrent/CompletionStage<*>;", $PUBLIC, $virtualMethod(MockListener, onText, $CompletionStage*, $WebSocket*, $CharSequence*, bool)},
		{"onText0", "(Ljava/net/http/WebSocket;Ljava/lang/CharSequence;Z)Ljava/util/concurrent/CompletionStage;", "(Ljava/net/http/WebSocket;Ljava/lang/CharSequence;Z)Ljava/util/concurrent/CompletionStage<*>;", $PROTECTED, $virtualMethod(MockListener, onText0, $CompletionStage*, $WebSocket*, $CharSequence*, bool)},
		{"replenish", "(Ljava/net/http/WebSocket;)V", nullptr, $PROTECTED, $virtualMethod(MockListener, replenish, void, $WebSocket*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.http.WebSocket$Listener", "java.net.http.WebSocket", "Listener", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"MockListener$OnError", "MockListener", "OnError", $PUBLIC | $STATIC | $FINAL},
		{"MockListener$OnClose", "MockListener", "OnClose", $PUBLIC | $STATIC | $FINAL},
		{"MockListener$OnPong", "MockListener", "OnPong", $PUBLIC | $STATIC | $FINAL},
		{"MockListener$OnPing", "MockListener", "OnPing", $PUBLIC | $STATIC | $FINAL},
		{"MockListener$OnBinary", "MockListener", "OnBinary", $PUBLIC | $STATIC | $FINAL},
		{"MockListener$OnText", "MockListener", "OnText", $PUBLIC | $STATIC | $FINAL},
		{"MockListener$OnOpen", "MockListener", "OnOpen", $PUBLIC | $STATIC | $FINAL},
		{"MockListener$Invocation", "MockListener", "Invocation", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"MockListener",
		"java.lang.Object",
		"java.net.http.WebSocket$Listener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"MockListener$OnError,MockListener$OnClose,MockListener$OnPong,MockListener$OnPing,MockListener$OnBinary,MockListener$OnText,MockListener$OnOpen,MockListener$Invocation"
	};
	$loadClass(MockListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MockListener);
	});
	return class$;
}

$Class* MockListener::class$ = nullptr;