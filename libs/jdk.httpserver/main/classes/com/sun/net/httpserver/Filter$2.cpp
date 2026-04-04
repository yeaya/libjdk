#include <com/sun/net/httpserver/Filter$2.h>
#include <com/sun/net/httpserver/Filter$Chain.h>
#include <com/sun/net/httpserver/Filter.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $Filter = ::com::sun::net::httpserver::Filter;
using $Filter$Chain = ::com::sun::net::httpserver::Filter$Chain;
using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Consumer = ::java::util::function::Consumer;

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

void Filter$2::init$($Consumer* val$operation, $String* val$description) {
	$set(this, val$operation, val$operation);
	$set(this, val$description, val$description);
	$Filter::init$();
}

void Filter$2::doFilter($HttpExchange* exchange, $Filter$Chain* chain) {
	$nc(chain)->doFilter(exchange);
	$nc(this->val$operation)->accept(exchange);
}

$String* Filter$2::description() {
	return this->val$description;
}

Filter$2::Filter$2() {
}

$Class* Filter$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$description", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(Filter$2, val$description)},
		{"val$operation", "Ljava/util/function/Consumer;", nullptr, $FINAL | $SYNTHETIC, $field(Filter$2, val$operation)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/Consumer;Ljava/lang/String;)V", nullptr, 0, $method(Filter$2, init$, void, $Consumer*, $String*)},
		{"description", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Filter$2, description, $String*)},
		{"doFilter", "(Lcom/sun/net/httpserver/HttpExchange;Lcom/sun/net/httpserver/Filter$Chain;)V", nullptr, $PUBLIC, $virtualMethod(Filter$2, doFilter, void, $HttpExchange*, $Filter$Chain*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.net.httpserver.Filter",
		"afterHandler",
		"(Ljava/lang/String;Ljava/util/function/Consumer;)Lcom/sun/net/httpserver/Filter;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.net.httpserver.Filter$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.net.httpserver.Filter$2",
		"com.sun.net.httpserver.Filter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.net.httpserver.Filter"
	};
	$loadClass(Filter$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Filter$2);
	});
	return class$;
}

$Class* Filter$2::class$ = nullptr;

			} // httpserver
		} // net
	} // sun
} // com