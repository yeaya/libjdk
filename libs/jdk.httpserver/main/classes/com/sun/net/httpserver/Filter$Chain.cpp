#include <com/sun/net/httpserver/Filter$Chain.h>

#include <com/sun/net/httpserver/Filter.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <com/sun/net/httpserver/HttpHandler.h>
#include <java/util/List.h>
#include <java/util/ListIterator.h>
#include <jcpp.h>

using $Filter = ::com::sun::net::httpserver::Filter;
using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $HttpHandler = ::com::sun::net::httpserver::HttpHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $ListIterator = ::java::util::ListIterator;

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

$FieldInfo _Filter$Chain_FieldInfo_[] = {
	{"iter", "Ljava/util/ListIterator;", "Ljava/util/ListIterator<Lcom/sun/net/httpserver/Filter;>;", $PRIVATE, $field(Filter$Chain, iter)},
	{"handler", "Lcom/sun/net/httpserver/HttpHandler;", nullptr, $PRIVATE, $field(Filter$Chain, handler)},
	{}
};

$MethodInfo _Filter$Chain_MethodInfo_[] = {
	{"<init>", "(Ljava/util/List;Lcom/sun/net/httpserver/HttpHandler;)V", "(Ljava/util/List<Lcom/sun/net/httpserver/Filter;>;Lcom/sun/net/httpserver/HttpHandler;)V", $PUBLIC, $method(static_cast<void(Filter$Chain::*)($List*,$HttpHandler*)>(&Filter$Chain::init$))},
	{"doFilter", "(Lcom/sun/net/httpserver/HttpExchange;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Filter$Chain_InnerClassesInfo_[] = {
	{"com.sun.net.httpserver.Filter$Chain", "com.sun.net.httpserver.Filter", "Chain", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Filter$Chain_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.net.httpserver.Filter$Chain",
	"java.lang.Object",
	nullptr,
	_Filter$Chain_FieldInfo_,
	_Filter$Chain_MethodInfo_,
	nullptr,
	nullptr,
	_Filter$Chain_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.net.httpserver.Filter"
};

$Object* allocate$Filter$Chain($Class* clazz) {
	return $of($alloc(Filter$Chain));
}

void Filter$Chain::init$($List* filters, $HttpHandler* handler) {
	$set(this, iter, $nc(filters)->listIterator());
	$set(this, handler, handler);
}

void Filter$Chain::doFilter($HttpExchange* exchange) {
	if (!$nc(this->iter)->hasNext()) {
		$nc(this->handler)->handle(exchange);
	} else {
		$var($Filter, f, $cast($Filter, $nc(this->iter)->next()));
		$nc(f)->doFilter(exchange, this);
	}
}

Filter$Chain::Filter$Chain() {
}

$Class* Filter$Chain::load$($String* name, bool initialize) {
	$loadClass(Filter$Chain, name, initialize, &_Filter$Chain_ClassInfo_, allocate$Filter$Chain);
	return class$;
}

$Class* Filter$Chain::class$ = nullptr;

			} // httpserver
		} // net
	} // sun
} // com