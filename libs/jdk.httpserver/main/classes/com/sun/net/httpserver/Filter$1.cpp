#include <com/sun/net/httpserver/Filter$1.h>
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

void Filter$1::init$($Consumer* val$operation, $String* val$description) {
	$set(this, val$operation, val$operation);
	$set(this, val$description, val$description);
	$Filter::init$();
}

void Filter$1::doFilter($HttpExchange* exchange, $Filter$Chain* chain) {
	$nc(this->val$operation)->accept(exchange);
	$nc(chain)->doFilter(exchange);
}

$String* Filter$1::description() {
	return this->val$description;
}

Filter$1::Filter$1() {
}

$Class* Filter$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$description", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(Filter$1, val$description)},
		{"val$operation", "Ljava/util/function/Consumer;", nullptr, $FINAL | $SYNTHETIC, $field(Filter$1, val$operation)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/Consumer;Ljava/lang/String;)V", nullptr, 0, $method(Filter$1, init$, void, $Consumer*, $String*)},
		{"description", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Filter$1, description, $String*)},
		{"doFilter", "(Lcom/sun/net/httpserver/HttpExchange;Lcom/sun/net/httpserver/Filter$Chain;)V", nullptr, $PUBLIC, $virtualMethod(Filter$1, doFilter, void, $HttpExchange*, $Filter$Chain*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.net.httpserver.Filter",
		"beforeHandler",
		"(Ljava/lang/String;Ljava/util/function/Consumer;)Lcom/sun/net/httpserver/Filter;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.net.httpserver.Filter$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.net.httpserver.Filter$1",
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
	$loadClass(Filter$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Filter$1);
	});
	return class$;
}

$Class* Filter$1::class$ = nullptr;

			} // httpserver
		} // net
	} // sun
} // com