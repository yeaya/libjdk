#include <java/net/http/HttpClient.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/net/http/HttpClient$Builder.h>
#include <java/net/http/HttpClient$Redirect.h>
#include <java/net/http/HttpClient$Version.h>
#include <java/net/http/HttpRequest.h>
#include <java/net/http/HttpResponse$BodyHandler.h>
#include <java/net/http/HttpResponse$PushPromiseHandler.h>
#include <java/net/http/HttpResponse.h>
#include <java/net/http/WebSocket$Builder.h>
#include <java/util/Optional.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <javax/net/ssl/SSLContext.h>
#include <javax/net/ssl/SSLParameters.h>
#include <jdk/internal/net/http/HttpClientBuilderImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $HttpClient$Builder = ::java::net::http::HttpClient$Builder;
using $HttpClient$Redirect = ::java::net::http::HttpClient$Redirect;
using $HttpClient$Version = ::java::net::http::HttpClient$Version;
using $HttpRequest = ::java::net::http::HttpRequest;
using $HttpResponse = ::java::net::http::HttpResponse;
using $HttpResponse$BodyHandler = ::java::net::http::HttpResponse$BodyHandler;
using $HttpResponse$PushPromiseHandler = ::java::net::http::HttpResponse$PushPromiseHandler;
using $WebSocket$Builder = ::java::net::http::WebSocket$Builder;
using $Optional = ::java::util::Optional;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $SSLContext = ::javax::net::ssl::SSLContext;
using $SSLParameters = ::javax::net::ssl::SSLParameters;
using $HttpClientBuilderImpl = ::jdk::internal::net::http::HttpClientBuilderImpl;

namespace java {
	namespace net {
		namespace http {

void HttpClient::init$() {
}

HttpClient* HttpClient::newHttpClient() {
	return $$nc(newBuilder())->build();
}

$HttpClient$Builder* HttpClient::newBuilder() {
	return $new($HttpClientBuilderImpl);
}

$WebSocket$Builder* HttpClient::newWebSocketBuilder() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

HttpClient::HttpClient() {
}

$Class* HttpClient::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(HttpClient, init$, void)},
		{"authenticator", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/Authenticator;>;", $PUBLIC | $ABSTRACT, $virtualMethod(HttpClient, authenticator, $Optional*)},
		{"connectTimeout", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/time/Duration;>;", $PUBLIC | $ABSTRACT, $virtualMethod(HttpClient, connectTimeout, $Optional*)},
		{"cookieHandler", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/CookieHandler;>;", $PUBLIC | $ABSTRACT, $virtualMethod(HttpClient, cookieHandler, $Optional*)},
		{"executor", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/util/concurrent/Executor;>;", $PUBLIC | $ABSTRACT, $virtualMethod(HttpClient, executor, $Optional*)},
		{"followRedirects", "()Ljava/net/http/HttpClient$Redirect;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpClient, followRedirects, $HttpClient$Redirect*)},
		{"newBuilder", "()Ljava/net/http/HttpClient$Builder;", nullptr, $PUBLIC | $STATIC, $staticMethod(HttpClient, newBuilder, $HttpClient$Builder*)},
		{"newHttpClient", "()Ljava/net/http/HttpClient;", nullptr, $PUBLIC | $STATIC, $staticMethod(HttpClient, newHttpClient, HttpClient*)},
		{"newWebSocketBuilder", "()Ljava/net/http/WebSocket$Builder;", nullptr, $PUBLIC, $virtualMethod(HttpClient, newWebSocketBuilder, $WebSocket$Builder*)},
		{"proxy", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/ProxySelector;>;", $PUBLIC | $ABSTRACT, $virtualMethod(HttpClient, proxy, $Optional*)},
		{"send", "(Ljava/net/http/HttpRequest;Ljava/net/http/HttpResponse$BodyHandler;)Ljava/net/http/HttpResponse;", "<T:Ljava/lang/Object;>(Ljava/net/http/HttpRequest;Ljava/net/http/HttpResponse$BodyHandler<TT;>;)Ljava/net/http/HttpResponse<TT;>;", $PUBLIC | $ABSTRACT, $virtualMethod(HttpClient, send, $HttpResponse*, $HttpRequest*, $HttpResponse$BodyHandler*), "java.io.IOException,java.lang.InterruptedException"},
		{"sendAsync", "(Ljava/net/http/HttpRequest;Ljava/net/http/HttpResponse$BodyHandler;)Ljava/util/concurrent/CompletableFuture;", "<T:Ljava/lang/Object;>(Ljava/net/http/HttpRequest;Ljava/net/http/HttpResponse$BodyHandler<TT;>;)Ljava/util/concurrent/CompletableFuture<Ljava/net/http/HttpResponse<TT;>;>;", $PUBLIC | $ABSTRACT, $virtualMethod(HttpClient, sendAsync, $CompletableFuture*, $HttpRequest*, $HttpResponse$BodyHandler*)},
		{"sendAsync", "(Ljava/net/http/HttpRequest;Ljava/net/http/HttpResponse$BodyHandler;Ljava/net/http/HttpResponse$PushPromiseHandler;)Ljava/util/concurrent/CompletableFuture;", "<T:Ljava/lang/Object;>(Ljava/net/http/HttpRequest;Ljava/net/http/HttpResponse$BodyHandler<TT;>;Ljava/net/http/HttpResponse$PushPromiseHandler<TT;>;)Ljava/util/concurrent/CompletableFuture<Ljava/net/http/HttpResponse<TT;>;>;", $PUBLIC | $ABSTRACT, $virtualMethod(HttpClient, sendAsync, $CompletableFuture*, $HttpRequest*, $HttpResponse$BodyHandler*, $HttpResponse$PushPromiseHandler*)},
		{"sslContext", "()Ljavax/net/ssl/SSLContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpClient, sslContext, $SSLContext*)},
		{"sslParameters", "()Ljavax/net/ssl/SSLParameters;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpClient, sslParameters, $SSLParameters*)},
		{"version", "()Ljava/net/http/HttpClient$Version;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpClient, version, $HttpClient$Version*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.http.HttpClient$Redirect", "java.net.http.HttpClient", "Redirect", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{"java.net.http.HttpClient$Version", "java.net.http.HttpClient", "Version", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{"java.net.http.HttpClient$Builder", "java.net.http.HttpClient", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.net.http.HttpClient",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.net.http.HttpClient$Redirect,java.net.http.HttpClient$Version,java.net.http.HttpClient$Builder"
	};
	$loadClass(HttpClient, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpClient);
	});
	return class$;
}

$Class* HttpClient::class$ = nullptr;

		} // http
	} // net
} // java