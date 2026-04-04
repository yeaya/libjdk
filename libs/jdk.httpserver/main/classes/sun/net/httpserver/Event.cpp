#include <sun/net/httpserver/Event.h>
#include <sun/net/httpserver/ExchangeImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExchangeImpl = ::sun::net::httpserver::ExchangeImpl;

namespace sun {
	namespace net {
		namespace httpserver {

void Event::init$($ExchangeImpl* t) {
	$set(this, exchange, t);
}

Event::Event() {
}

$Class* Event::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"exchange", "Lsun/net/httpserver/ExchangeImpl;", nullptr, 0, $field(Event, exchange)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/net/httpserver/ExchangeImpl;)V", nullptr, $PROTECTED, $method(Event, init$, void, $ExchangeImpl*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.httpserver.Event",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Event, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Event);
	});
	return class$;
}

$Class* Event::class$ = nullptr;

		} // httpserver
	} // net
} // sun