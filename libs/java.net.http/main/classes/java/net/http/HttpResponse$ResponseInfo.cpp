#include <java/net/http/HttpResponse$ResponseInfo.h>
#include <java/net/http/HttpClient$Version.h>
#include <java/net/http/HttpHeaders.h>
#include <java/net/http/HttpResponse.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpClient$Version = ::java::net::http::HttpClient$Version;
using $HttpHeaders = ::java::net::http::HttpHeaders;

namespace java {
	namespace net {
		namespace http {

$Class* HttpResponse$ResponseInfo::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"headers", "()Ljava/net/http/HttpHeaders;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpResponse$ResponseInfo, headers, $HttpHeaders*)},
		{"statusCode", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpResponse$ResponseInfo, statusCode, int32_t)},
		{"version", "()Ljava/net/http/HttpClient$Version;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpResponse$ResponseInfo, version, $HttpClient$Version*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.http.HttpResponse$ResponseInfo", "java.net.http.HttpResponse", "ResponseInfo", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.net.http.HttpResponse$ResponseInfo",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.http.HttpResponse"
	};
	$loadClass(HttpResponse$ResponseInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpResponse$ResponseInfo);
	});
	return class$;
}

$Class* HttpResponse$ResponseInfo::class$ = nullptr;

		} // http
	} // net
} // java