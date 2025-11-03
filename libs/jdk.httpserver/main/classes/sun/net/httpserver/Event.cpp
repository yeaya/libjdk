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

$FieldInfo _Event_FieldInfo_[] = {
	{"exchange", "Lsun/net/httpserver/ExchangeImpl;", nullptr, 0, $field(Event, exchange)},
	{}
};

$MethodInfo _Event_MethodInfo_[] = {
	{"<init>", "(Lsun/net/httpserver/ExchangeImpl;)V", nullptr, $PROTECTED, $method(static_cast<void(Event::*)($ExchangeImpl*)>(&Event::init$))},
	{}
};

$ClassInfo _Event_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.httpserver.Event",
	"java.lang.Object",
	nullptr,
	_Event_FieldInfo_,
	_Event_MethodInfo_
};

$Object* allocate$Event($Class* clazz) {
	return $of($alloc(Event));
}

void Event::init$($ExchangeImpl* t) {
	$set(this, exchange, t);
}

Event::Event() {
}

$Class* Event::load$($String* name, bool initialize) {
	$loadClass(Event, name, initialize, &_Event_ClassInfo_, allocate$Event);
	return class$;
}

$Class* Event::class$ = nullptr;

		} // httpserver
	} // net
} // sun