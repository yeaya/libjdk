#include <jdk/internal/net/http/PushGroup$Acceptor.h>
#include <java/net/http/HttpResponse$BodyHandler.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <jdk/internal/net/http/PushGroup.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpResponse$BodyHandler = ::java::net::http::HttpResponse$BodyHandler;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

$Class* PushGroup$Acceptor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"accepted", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PushGroup$Acceptor, accepted, bool)},
		{"bodyHandler", "()Ljava/net/http/HttpResponse$BodyHandler;", "()Ljava/net/http/HttpResponse$BodyHandler<TT;>;", $PUBLIC | $ABSTRACT, $virtualMethod(PushGroup$Acceptor, bodyHandler, $HttpResponse$BodyHandler*)},
		{"cf", "()Ljava/util/concurrent/CompletableFuture;", "()Ljava/util/concurrent/CompletableFuture<Ljava/net/http/HttpResponse<TT;>;>;", $PUBLIC | $ABSTRACT, $virtualMethod(PushGroup$Acceptor, cf, $CompletableFuture*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.PushGroup$Acceptor", "jdk.internal.net.http.PushGroup", "Acceptor", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"jdk.internal.net.http.PushGroup$Acceptor",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.PushGroup"
	};
	$loadClass(PushGroup$Acceptor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PushGroup$Acceptor);
	});
	return class$;
}

$Class* PushGroup$Acceptor::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk