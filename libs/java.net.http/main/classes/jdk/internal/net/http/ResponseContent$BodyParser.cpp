#include <jdk/internal/net/http/ResponseContent$BodyParser.h>
#include <jdk/internal/net/http/AbstractSubscription.h>
#include <jdk/internal/net/http/ResponseContent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSubscription = ::jdk::internal::net::http::AbstractSubscription;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

$Class* ResponseContent$BodyParser::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"currentStateMessage", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResponseContent$BodyParser, currentStateMessage, $String*)},
		{"onSubscribe", "(Ljdk/internal/net/http/AbstractSubscription;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResponseContent$BodyParser, onSubscribe, void, $AbstractSubscription*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.ResponseContent$BodyParser", "jdk.internal.net.http.ResponseContent", "BodyParser", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"jdk.internal.net.http.ResponseContent$BodyParser",
		nullptr,
		"java.util.function.Consumer",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/function/Consumer<Ljava/nio/ByteBuffer;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.ResponseContent"
	};
	$loadClass(ResponseContent$BodyParser, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResponseContent$BodyParser);
	});
	return class$;
}

$Class* ResponseContent$BodyParser::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk