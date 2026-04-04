#include <com/sun/net/httpserver/Filter.h>
#include <com/sun/net/httpserver/Filter$1.h>
#include <com/sun/net/httpserver/Filter$2.h>
#include <com/sun/net/httpserver/Filter$Chain.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <java/util/Objects.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $Filter$1 = ::com::sun::net::httpserver::Filter$1;
using $Filter$2 = ::com::sun::net::httpserver::Filter$2;
using $Filter$Chain = ::com::sun::net::httpserver::Filter$Chain;
using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $Consumer = ::java::util::function::Consumer;

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

void Filter::init$() {
}

Filter* Filter::beforeHandler($String* description, $Consumer* operation) {
	$Objects::requireNonNull(description);
	$Objects::requireNonNull(operation);
	return $new($Filter$1, operation, description);
}

Filter* Filter::afterHandler($String* description, $Consumer* operation) {
	$Objects::requireNonNull(description);
	$Objects::requireNonNull(operation);
	return $new($Filter$2, operation, description);
}

Filter::Filter() {
}

$Class* Filter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(Filter, init$, void)},
		{"afterHandler", "(Ljava/lang/String;Ljava/util/function/Consumer;)Lcom/sun/net/httpserver/Filter;", "(Ljava/lang/String;Ljava/util/function/Consumer<Lcom/sun/net/httpserver/HttpExchange;>;)Lcom/sun/net/httpserver/Filter;", $PUBLIC | $STATIC, $staticMethod(Filter, afterHandler, Filter*, $String*, $Consumer*)},
		{"beforeHandler", "(Ljava/lang/String;Ljava/util/function/Consumer;)Lcom/sun/net/httpserver/Filter;", "(Ljava/lang/String;Ljava/util/function/Consumer<Lcom/sun/net/httpserver/HttpExchange;>;)Lcom/sun/net/httpserver/Filter;", $PUBLIC | $STATIC, $staticMethod(Filter, beforeHandler, Filter*, $String*, $Consumer*)},
		{"description", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Filter, description, $String*)},
		{"doFilter", "(Lcom/sun/net/httpserver/HttpExchange;Lcom/sun/net/httpserver/Filter$Chain;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Filter, doFilter, void, $HttpExchange*, $Filter$Chain*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.net.httpserver.Filter$Chain", "com.sun.net.httpserver.Filter", "Chain", $PUBLIC | $STATIC},
		{"com.sun.net.httpserver.Filter$2", nullptr, nullptr, 0},
		{"com.sun.net.httpserver.Filter$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.net.httpserver.Filter",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.net.httpserver.Filter$Chain,com.sun.net.httpserver.Filter$2,com.sun.net.httpserver.Filter$1"
	};
	$loadClass(Filter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Filter);
	});
	return class$;
}

$Class* Filter::class$ = nullptr;

			} // httpserver
		} // net
	} // sun
} // com