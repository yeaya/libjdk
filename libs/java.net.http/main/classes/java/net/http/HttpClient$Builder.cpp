#include <java/net/http/HttpClient$Builder.h>
#include <java/net/Authenticator.h>
#include <java/net/CookieHandler.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ProxySelector.h>
#include <java/net/http/HttpClient$Redirect.h>
#include <java/net/http/HttpClient$Version.h>
#include <java/net/http/HttpClient.h>
#include <java/time/Duration.h>
#include <java/util/concurrent/Executor.h>
#include <javax/net/ssl/SSLContext.h>
#include <javax/net/ssl/SSLParameters.h>
#include <jcpp.h>

#undef NO_PROXY

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Authenticator = ::java::net::Authenticator;
using $CookieHandler = ::java::net::CookieHandler;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ProxySelector = ::java::net::ProxySelector;
using $HttpClient = ::java::net::http::HttpClient;
using $HttpClient$Redirect = ::java::net::http::HttpClient$Redirect;
using $HttpClient$Version = ::java::net::http::HttpClient$Version;
using $Duration = ::java::time::Duration;
using $Executor = ::java::util::concurrent::Executor;
using $SSLContext = ::javax::net::ssl::SSLContext;
using $SSLParameters = ::javax::net::ssl::SSLParameters;

namespace java {
	namespace net {
		namespace http {

$ProxySelector* HttpClient$Builder::NO_PROXY = nullptr;

void HttpClient$Builder::clinit$($Class* clazz) {
	$assignStatic(HttpClient$Builder::NO_PROXY, $ProxySelector::of(nullptr));
}

$Class* HttpClient$Builder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NO_PROXY", "Ljava/net/ProxySelector;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HttpClient$Builder, NO_PROXY)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"authenticator", "(Ljava/net/Authenticator;)Ljava/net/http/HttpClient$Builder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpClient$Builder, authenticator, HttpClient$Builder*, $Authenticator*)},
		{"build", "()Ljava/net/http/HttpClient;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpClient$Builder, build, $HttpClient*)},
		{"connectTimeout", "(Ljava/time/Duration;)Ljava/net/http/HttpClient$Builder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpClient$Builder, connectTimeout, HttpClient$Builder*, $Duration*)},
		{"cookieHandler", "(Ljava/net/CookieHandler;)Ljava/net/http/HttpClient$Builder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpClient$Builder, cookieHandler, HttpClient$Builder*, $CookieHandler*)},
		{"executor", "(Ljava/util/concurrent/Executor;)Ljava/net/http/HttpClient$Builder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpClient$Builder, executor, HttpClient$Builder*, $Executor*)},
		{"followRedirects", "(Ljava/net/http/HttpClient$Redirect;)Ljava/net/http/HttpClient$Builder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpClient$Builder, followRedirects, HttpClient$Builder*, $HttpClient$Redirect*)},
		{"priority", "(I)Ljava/net/http/HttpClient$Builder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpClient$Builder, priority, HttpClient$Builder*, int32_t)},
		{"proxy", "(Ljava/net/ProxySelector;)Ljava/net/http/HttpClient$Builder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpClient$Builder, proxy, HttpClient$Builder*, $ProxySelector*)},
		{"sslContext", "(Ljavax/net/ssl/SSLContext;)Ljava/net/http/HttpClient$Builder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpClient$Builder, sslContext, HttpClient$Builder*, $SSLContext*)},
		{"sslParameters", "(Ljavax/net/ssl/SSLParameters;)Ljava/net/http/HttpClient$Builder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpClient$Builder, sslParameters, HttpClient$Builder*, $SSLParameters*)},
		{"version", "(Ljava/net/http/HttpClient$Version;)Ljava/net/http/HttpClient$Builder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpClient$Builder, version, HttpClient$Builder*, $HttpClient$Version*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.http.HttpClient$Builder", "java.net.http.HttpClient", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.net.http.HttpClient$Builder",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.http.HttpClient"
	};
	$loadClass(HttpClient$Builder, name, initialize, &classInfo$$, HttpClient$Builder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(HttpClient$Builder);
	});
	return class$;
}

$Class* HttpClient$Builder::class$ = nullptr;

		} // http
	} // net
} // java