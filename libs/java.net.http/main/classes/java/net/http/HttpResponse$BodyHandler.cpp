#include <java/net/http/HttpResponse$BodyHandler.h>
#include <java/net/http/HttpResponse$BodySubscriber.h>
#include <java/net/http/HttpResponse$ResponseInfo.h>
#include <java/net/http/HttpResponse.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpResponse$BodySubscriber = ::java::net::http::HttpResponse$BodySubscriber;
using $HttpResponse$ResponseInfo = ::java::net::http::HttpResponse$ResponseInfo;

namespace java {
	namespace net {
		namespace http {

$Class* HttpResponse$BodyHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"apply", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber<TT;>;", $PUBLIC | $ABSTRACT, $virtualMethod(HttpResponse$BodyHandler, apply, $HttpResponse$BodySubscriber*, $HttpResponse$ResponseInfo*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.http.HttpResponse$BodyHandler", "java.net.http.HttpResponse", "BodyHandler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.net.http.HttpResponse$BodyHandler",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"java.net.http.HttpResponse"
	};
	$loadClass(HttpResponse$BodyHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpResponse$BodyHandler);
	});
	return class$;
}

$Class* HttpResponse$BodyHandler::class$ = nullptr;

		} // http
	} // net
} // java