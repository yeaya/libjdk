#include <HttpInputStreamTest$HttpInputStreamHandler.h>
#include <HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream.h>
#include <HttpInputStreamTest.h>
#include <java/net/http/HttpResponse$BodySubscriber.h>
#include <java/net/http/HttpResponse$ResponseInfo.h>
#include <jcpp.h>

#undef MAX_BUFFERS_IN_QUEUE

using $HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream = ::HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpResponse$BodySubscriber = ::java::net::http::HttpResponse$BodySubscriber;
using $HttpResponse$ResponseInfo = ::java::net::http::HttpResponse$ResponseInfo;

void HttpInputStreamTest$HttpInputStreamHandler::init$() {
	HttpInputStreamTest$HttpInputStreamHandler::init$(HttpInputStreamTest$HttpInputStreamHandler::MAX_BUFFERS_IN_QUEUE);
}

void HttpInputStreamTest$HttpInputStreamHandler::init$(int32_t maxBuffers) {
	this->maxBuffers = maxBuffers <= 0 ? HttpInputStreamTest$HttpInputStreamHandler::MAX_BUFFERS_IN_QUEUE : maxBuffers;
}

$HttpResponse$BodySubscriber* HttpInputStreamTest$HttpInputStreamHandler::apply($HttpResponse$ResponseInfo* rinfo) {
	return $new($HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream, this->maxBuffers);
}

HttpInputStreamTest$HttpInputStreamHandler::HttpInputStreamTest$HttpInputStreamHandler() {
}

$Class* HttpInputStreamTest$HttpInputStreamHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"MAX_BUFFERS_IN_QUEUE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(HttpInputStreamTest$HttpInputStreamHandler, MAX_BUFFERS_IN_QUEUE)},
		{"maxBuffers", "I", nullptr, $PRIVATE | $FINAL, $field(HttpInputStreamTest$HttpInputStreamHandler, maxBuffers)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HttpInputStreamTest$HttpInputStreamHandler, init$, void)},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(HttpInputStreamTest$HttpInputStreamHandler, init$, void, int32_t)},
		{"apply", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber<Ljava/io/InputStream;>;", $PUBLIC, $virtualMethod(HttpInputStreamTest$HttpInputStreamHandler, apply, $HttpResponse$BodySubscriber*, $HttpResponse$ResponseInfo*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HttpInputStreamTest$HttpInputStreamHandler", "HttpInputStreamTest", "HttpInputStreamHandler", $PUBLIC | $STATIC},
		{"java.net.http.HttpResponse$BodyHandler", "java.net.http.HttpResponse", "BodyHandler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream", "HttpInputStreamTest$HttpInputStreamHandler", "HttpResponseInputStream", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"HttpInputStreamTest$HttpInputStreamHandler",
		"java.lang.Object",
		"java.net.http.HttpResponse$BodyHandler",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/net/http/HttpResponse$BodyHandler<Ljava/io/InputStream;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"HttpInputStreamTest"
	};
	$loadClass(HttpInputStreamTest$HttpInputStreamHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpInputStreamTest$HttpInputStreamHandler);
	});
	return class$;
}

$Class* HttpInputStreamTest$HttpInputStreamHandler::class$ = nullptr;