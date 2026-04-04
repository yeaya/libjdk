#include <java/net/http/HttpResponse$PushPromiseHandler.h>
#include <java/net/http/HttpRequest.h>
#include <java/net/http/HttpResponse.h>
#include <java/util/concurrent/ConcurrentMap.h>
#include <java/util/function/Function.h>
#include <jdk/internal/net/http/ResponseBodyHandlers$PushPromisesHandlerWithMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpRequest = ::java::net::http::HttpRequest;
using $ConcurrentMap = ::java::util::concurrent::ConcurrentMap;
using $Function = ::java::util::function::Function;
using $ResponseBodyHandlers$PushPromisesHandlerWithMap = ::jdk::internal::net::http::ResponseBodyHandlers$PushPromisesHandlerWithMap;

namespace java {
	namespace net {
		namespace http {

HttpResponse$PushPromiseHandler* HttpResponse$PushPromiseHandler::of($Function* pushPromiseHandler, $ConcurrentMap* pushPromisesMap) {
	return $new($ResponseBodyHandlers$PushPromisesHandlerWithMap, pushPromiseHandler, pushPromisesMap);
}

$Class* HttpResponse$PushPromiseHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"applyPushPromise", "(Ljava/net/http/HttpRequest;Ljava/net/http/HttpRequest;Ljava/util/function/Function;)V", "(Ljava/net/http/HttpRequest;Ljava/net/http/HttpRequest;Ljava/util/function/Function<Ljava/net/http/HttpResponse$BodyHandler<TT;>;Ljava/util/concurrent/CompletableFuture<Ljava/net/http/HttpResponse<TT;>;>;>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(HttpResponse$PushPromiseHandler, applyPushPromise, void, $HttpRequest*, $HttpRequest*, $Function*)},
		{"of", "(Ljava/util/function/Function;Ljava/util/concurrent/ConcurrentMap;)Ljava/net/http/HttpResponse$PushPromiseHandler;", "<T:Ljava/lang/Object;>(Ljava/util/function/Function<Ljava/net/http/HttpRequest;Ljava/net/http/HttpResponse$BodyHandler<TT;>;>;Ljava/util/concurrent/ConcurrentMap<Ljava/net/http/HttpRequest;Ljava/util/concurrent/CompletableFuture<Ljava/net/http/HttpResponse<TT;>;>;>;)Ljava/net/http/HttpResponse$PushPromiseHandler<TT;>;", $PUBLIC | $STATIC, $staticMethod(HttpResponse$PushPromiseHandler, of, HttpResponse$PushPromiseHandler*, $Function*, $ConcurrentMap*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.http.HttpResponse$PushPromiseHandler", "java.net.http.HttpResponse", "PushPromiseHandler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.net.http.HttpResponse$PushPromiseHandler",
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
		"java.net.http.HttpResponse"
	};
	$loadClass(HttpResponse$PushPromiseHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpResponse$PushPromiseHandler);
	});
	return class$;
}

$Class* HttpResponse$PushPromiseHandler::class$ = nullptr;

		} // http
	} // net
} // java