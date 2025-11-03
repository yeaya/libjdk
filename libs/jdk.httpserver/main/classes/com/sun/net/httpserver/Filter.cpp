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

$MethodInfo _Filter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Filter::*)()>(&Filter::init$))},
	{"afterHandler", "(Ljava/lang/String;Ljava/util/function/Consumer;)Lcom/sun/net/httpserver/Filter;", "(Ljava/lang/String;Ljava/util/function/Consumer<Lcom/sun/net/httpserver/HttpExchange;>;)Lcom/sun/net/httpserver/Filter;", $PUBLIC | $STATIC, $method(static_cast<Filter*(*)($String*,$Consumer*)>(&Filter::afterHandler))},
	{"beforeHandler", "(Ljava/lang/String;Ljava/util/function/Consumer;)Lcom/sun/net/httpserver/Filter;", "(Ljava/lang/String;Ljava/util/function/Consumer<Lcom/sun/net/httpserver/HttpExchange;>;)Lcom/sun/net/httpserver/Filter;", $PUBLIC | $STATIC, $method(static_cast<Filter*(*)($String*,$Consumer*)>(&Filter::beforeHandler))},
	{"description", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"doFilter", "(Lcom/sun/net/httpserver/HttpExchange;Lcom/sun/net/httpserver/Filter$Chain;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Filter_InnerClassesInfo_[] = {
	{"com.sun.net.httpserver.Filter$Chain", "com.sun.net.httpserver.Filter", "Chain", $PUBLIC | $STATIC},
	{"com.sun.net.httpserver.Filter$2", nullptr, nullptr, 0},
	{"com.sun.net.httpserver.Filter$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Filter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.net.httpserver.Filter",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Filter_MethodInfo_,
	nullptr,
	nullptr,
	_Filter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.net.httpserver.Filter$Chain,com.sun.net.httpserver.Filter$2,com.sun.net.httpserver.Filter$1"
};

$Object* allocate$Filter($Class* clazz) {
	return $of($alloc(Filter));
}

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
	$loadClass(Filter, name, initialize, &_Filter_ClassInfo_, allocate$Filter);
	return class$;
}

$Class* Filter::class$ = nullptr;

			} // httpserver
		} // net
	} // sun
} // com