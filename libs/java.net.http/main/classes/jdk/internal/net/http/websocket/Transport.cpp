#include <jdk/internal/net/http/websocket/Transport.h>

#include <java/lang/CharSequence.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/Supplier.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $BiConsumer = ::java::util::function::BiConsumer;
using $Supplier = ::java::util::function::Supplier;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {

$MethodInfo _Transport_MethodInfo_[] = {
	{"acknowledgeReception", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Transport, acknowledgeReception, void)},
	{"closeInput", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Transport, closeInput, void), "java.io.IOException"},
	{"closeOutput", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Transport, closeOutput, void), "java.io.IOException"},
	{"request", "(J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Transport, request, void, int64_t)},
	{"sendBinary", "(Ljava/nio/ByteBuffer;ZLjava/lang/Object;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;", "<T:Ljava/lang/Object;>(Ljava/nio/ByteBuffer;ZTT;Ljava/util/function/BiConsumer<-TT;-Ljava/lang/Throwable;>;)Ljava/util/concurrent/CompletableFuture<TT;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Transport, sendBinary, $CompletableFuture*, $ByteBuffer*, bool, Object$*, $BiConsumer*)},
	{"sendClose", "(ILjava/lang/String;Ljava/lang/Object;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;", "<T:Ljava/lang/Object;>(ILjava/lang/String;TT;Ljava/util/function/BiConsumer<-TT;-Ljava/lang/Throwable;>;)Ljava/util/concurrent/CompletableFuture<TT;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Transport, sendClose, $CompletableFuture*, int32_t, $String*, Object$*, $BiConsumer*)},
	{"sendPing", "(Ljava/nio/ByteBuffer;Ljava/lang/Object;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;", "<T:Ljava/lang/Object;>(Ljava/nio/ByteBuffer;TT;Ljava/util/function/BiConsumer<-TT;-Ljava/lang/Throwable;>;)Ljava/util/concurrent/CompletableFuture<TT;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Transport, sendPing, $CompletableFuture*, $ByteBuffer*, Object$*, $BiConsumer*)},
	{"sendPong", "(Ljava/nio/ByteBuffer;Ljava/lang/Object;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;", "<T:Ljava/lang/Object;>(Ljava/nio/ByteBuffer;TT;Ljava/util/function/BiConsumer<-TT;-Ljava/lang/Throwable;>;)Ljava/util/concurrent/CompletableFuture<TT;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Transport, sendPong, $CompletableFuture*, $ByteBuffer*, Object$*, $BiConsumer*)},
	{"sendPong", "(Ljava/util/function/Supplier;Ljava/lang/Object;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;", "<T:Ljava/lang/Object;>(Ljava/util/function/Supplier<+Ljava/nio/ByteBuffer;>;TT;Ljava/util/function/BiConsumer<-TT;-Ljava/lang/Throwable;>;)Ljava/util/concurrent/CompletableFuture<TT;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Transport, sendPong, $CompletableFuture*, $Supplier*, Object$*, $BiConsumer*)},
	{"sendText", "(Ljava/lang/CharSequence;ZLjava/lang/Object;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;", "<T:Ljava/lang/Object;>(Ljava/lang/CharSequence;ZTT;Ljava/util/function/BiConsumer<-TT;-Ljava/lang/Throwable;>;)Ljava/util/concurrent/CompletableFuture<TT;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Transport, sendText, $CompletableFuture*, $CharSequence*, bool, Object$*, $BiConsumer*)},
	{}
};

$ClassInfo _Transport_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.net.http.websocket.Transport",
	nullptr,
	nullptr,
	nullptr,
	_Transport_MethodInfo_
};

$Object* allocate$Transport($Class* clazz) {
	return $of($alloc(Transport));
}

$Class* Transport::load$($String* name, bool initialize) {
	$loadClass(Transport, name, initialize, &_Transport_ClassInfo_, allocate$Transport);
	return class$;
}

$Class* Transport::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk