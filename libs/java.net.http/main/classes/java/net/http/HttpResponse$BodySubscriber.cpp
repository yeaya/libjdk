#include <java/net/http/HttpResponse$BodySubscriber.h>
#include <java/net/http/HttpResponse.h>
#include <java/util/concurrent/CompletionStage.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompletionStage = ::java::util::concurrent::CompletionStage;

namespace java {
	namespace net {
		namespace http {

$Class* HttpResponse$BodySubscriber::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getBody", "()Ljava/util/concurrent/CompletionStage;", "()Ljava/util/concurrent/CompletionStage<TT;>;", $PUBLIC | $ABSTRACT, $virtualMethod(HttpResponse$BodySubscriber, getBody, $CompletionStage*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.http.HttpResponse$BodySubscriber", "java.net.http.HttpResponse", "BodySubscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.util.concurrent.Flow$Subscriber", "java.util.concurrent.Flow", "Subscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.net.http.HttpResponse$BodySubscriber",
		nullptr,
		"java.util.concurrent.Flow$Subscriber",
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/concurrent/Flow$Subscriber<Ljava/util/List<Ljava/nio/ByteBuffer;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.http.HttpResponse"
	};
	$loadClass(HttpResponse$BodySubscriber, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpResponse$BodySubscriber);
	});
	return class$;
}

$Class* HttpResponse$BodySubscriber::class$ = nullptr;

		} // http
	} // net
} // java