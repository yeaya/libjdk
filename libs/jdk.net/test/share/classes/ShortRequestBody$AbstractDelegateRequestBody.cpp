#include <ShortRequestBody$AbstractDelegateRequestBody.h>
#include <ShortRequestBody.h>
#include <java/net/http/HttpRequest$BodyPublisher.h>
#include <java/util/concurrent/Flow$Publisher.h>
#include <java/util/concurrent/Flow$Subscriber.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpRequest$BodyPublisher = ::java::net::http::HttpRequest$BodyPublisher;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;

void ShortRequestBody$AbstractDelegateRequestBody::init$($HttpRequest$BodyPublisher* delegate, int64_t contentLength) {
	$set(this, delegate, delegate);
	this->contentLength$ = contentLength;
}

void ShortRequestBody$AbstractDelegateRequestBody::subscribe($Flow$Subscriber* subscriber) {
	$nc(this->delegate)->subscribe(subscriber);
}

int64_t ShortRequestBody$AbstractDelegateRequestBody::contentLength() {
	return this->contentLength$;
}

ShortRequestBody$AbstractDelegateRequestBody::ShortRequestBody$AbstractDelegateRequestBody() {
}

$Class* ShortRequestBody$AbstractDelegateRequestBody::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"delegate", "Ljava/net/http/HttpRequest$BodyPublisher;", nullptr, $FINAL, $field(ShortRequestBody$AbstractDelegateRequestBody, delegate)},
		{"contentLength", "J", nullptr, $FINAL, $field(ShortRequestBody$AbstractDelegateRequestBody, contentLength$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/http/HttpRequest$BodyPublisher;J)V", nullptr, 0, $method(ShortRequestBody$AbstractDelegateRequestBody, init$, void, $HttpRequest$BodyPublisher*, int64_t)},
		{"contentLength", "()J", nullptr, $PUBLIC, $virtualMethod(ShortRequestBody$AbstractDelegateRequestBody, contentLength, int64_t)},
		{"subscribe", "(Ljava/util/concurrent/Flow$Subscriber;)V", "(Ljava/util/concurrent/Flow$Subscriber<-Ljava/nio/ByteBuffer;>;)V", $PUBLIC, $virtualMethod(ShortRequestBody$AbstractDelegateRequestBody, subscribe, void, $Flow$Subscriber*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ShortRequestBody$AbstractDelegateRequestBody", "ShortRequestBody", "AbstractDelegateRequestBody", $STATIC | $ABSTRACT},
		{"java.net.http.HttpRequest$BodyPublisher", "java.net.http.HttpRequest", "BodyPublisher", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"ShortRequestBody$AbstractDelegateRequestBody",
		"java.lang.Object",
		"java.net.http.HttpRequest$BodyPublisher",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ShortRequestBody"
	};
	$loadClass(ShortRequestBody$AbstractDelegateRequestBody, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ShortRequestBody$AbstractDelegateRequestBody);
	});
	return class$;
}

$Class* ShortRequestBody$AbstractDelegateRequestBody::class$ = nullptr;