#include <sun/net/httpserver/WriteFinishedEvent.h>
#include <java/lang/AssertionError.h>
#include <sun/net/httpserver/Event.h>
#include <sun/net/httpserver/ExchangeImpl.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Event = ::sun::net::httpserver::Event;
using $ExchangeImpl = ::sun::net::httpserver::ExchangeImpl;

namespace sun {
	namespace net {
		namespace httpserver {

bool WriteFinishedEvent::$assertionsDisabled = false;

void WriteFinishedEvent::init$($ExchangeImpl* t) {
	$Event::init$(t);
	if (!WriteFinishedEvent::$assertionsDisabled && ! !$nc(t)->writefinished) {
		$throwNew($AssertionError);
	}
	$nc(t)->writefinished = true;
}

void WriteFinishedEvent::clinit$($Class* clazz) {
	WriteFinishedEvent::$assertionsDisabled = !WriteFinishedEvent::class$->desiredAssertionStatus();
}

WriteFinishedEvent::WriteFinishedEvent() {
}

$Class* WriteFinishedEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WriteFinishedEvent, $assertionsDisabled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/net/httpserver/ExchangeImpl;)V", nullptr, 0, $method(WriteFinishedEvent, init$, void, $ExchangeImpl*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.httpserver.WriteFinishedEvent",
		"sun.net.httpserver.Event",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WriteFinishedEvent, name, initialize, &classInfo$$, WriteFinishedEvent::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(WriteFinishedEvent);
	});
	return class$;
}

$Class* WriteFinishedEvent::class$ = nullptr;

		} // httpserver
	} // net
} // sun