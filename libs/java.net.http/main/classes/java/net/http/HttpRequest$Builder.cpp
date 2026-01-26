#include <java/net/http/HttpRequest$Builder.h>

#include <java/net/URI.h>
#include <java/net/http/HttpClient$Version.h>
#include <java/net/http/HttpRequest$BodyPublisher.h>
#include <java/net/http/HttpRequest.h>
#include <java/time/Duration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $HttpClient$Version = ::java::net::http::HttpClient$Version;
using $HttpRequest = ::java::net::http::HttpRequest;
using $HttpRequest$BodyPublisher = ::java::net::http::HttpRequest$BodyPublisher;
using $Duration = ::java::time::Duration;

namespace java {
	namespace net {
		namespace http {

$MethodInfo _HttpRequest$Builder_MethodInfo_[] = {
	{"DELETE", "()Ljava/net/http/HttpRequest$Builder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpRequest$Builder, DELETE, HttpRequest$Builder*)},
	{"GET", "()Ljava/net/http/HttpRequest$Builder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpRequest$Builder, GET, HttpRequest$Builder*)},
	{"POST", "(Ljava/net/http/HttpRequest$BodyPublisher;)Ljava/net/http/HttpRequest$Builder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpRequest$Builder, POST, HttpRequest$Builder*, $HttpRequest$BodyPublisher*)},
	{"PUT", "(Ljava/net/http/HttpRequest$BodyPublisher;)Ljava/net/http/HttpRequest$Builder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpRequest$Builder, PUT, HttpRequest$Builder*, $HttpRequest$BodyPublisher*)},
	{"build", "()Ljava/net/http/HttpRequest;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpRequest$Builder, build, $HttpRequest*)},
	{"copy", "()Ljava/net/http/HttpRequest$Builder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpRequest$Builder, copy, HttpRequest$Builder*)},
	{"expectContinue", "(Z)Ljava/net/http/HttpRequest$Builder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpRequest$Builder, expectContinue, HttpRequest$Builder*, bool)},
	{"header", "(Ljava/lang/String;Ljava/lang/String;)Ljava/net/http/HttpRequest$Builder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpRequest$Builder, header, HttpRequest$Builder*, $String*, $String*)},
	{"headers", "([Ljava/lang/String;)Ljava/net/http/HttpRequest$Builder;", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT, $virtualMethod(HttpRequest$Builder, headers, HttpRequest$Builder*, $StringArray*)},
	{"method", "(Ljava/lang/String;Ljava/net/http/HttpRequest$BodyPublisher;)Ljava/net/http/HttpRequest$Builder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpRequest$Builder, method, HttpRequest$Builder*, $String*, $HttpRequest$BodyPublisher*)},
	{"setHeader", "(Ljava/lang/String;Ljava/lang/String;)Ljava/net/http/HttpRequest$Builder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpRequest$Builder, setHeader, HttpRequest$Builder*, $String*, $String*)},
	{"timeout", "(Ljava/time/Duration;)Ljava/net/http/HttpRequest$Builder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpRequest$Builder, timeout, HttpRequest$Builder*, $Duration*)},
	{"uri", "(Ljava/net/URI;)Ljava/net/http/HttpRequest$Builder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpRequest$Builder, uri, HttpRequest$Builder*, $URI*)},
	{"version", "(Ljava/net/http/HttpClient$Version;)Ljava/net/http/HttpRequest$Builder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpRequest$Builder, version, HttpRequest$Builder*, $HttpClient$Version*)},
	{}
};

$InnerClassInfo _HttpRequest$Builder_InnerClassesInfo_[] = {
	{"java.net.http.HttpRequest$Builder", "java.net.http.HttpRequest", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _HttpRequest$Builder_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.net.http.HttpRequest$Builder",
	nullptr,
	nullptr,
	nullptr,
	_HttpRequest$Builder_MethodInfo_,
	nullptr,
	nullptr,
	_HttpRequest$Builder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.http.HttpRequest"
};

$Object* allocate$HttpRequest$Builder($Class* clazz) {
	return $of($alloc(HttpRequest$Builder));
}

$Class* HttpRequest$Builder::load$($String* name, bool initialize) {
	$loadClass(HttpRequest$Builder, name, initialize, &_HttpRequest$Builder_ClassInfo_, allocate$HttpRequest$Builder);
	return class$;
}

$Class* HttpRequest$Builder::class$ = nullptr;

		} // http
	} // net
} // java