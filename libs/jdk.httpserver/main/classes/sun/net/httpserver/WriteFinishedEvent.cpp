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

$FieldInfo _WriteFinishedEvent_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WriteFinishedEvent, $assertionsDisabled)},
	{}
};

$MethodInfo _WriteFinishedEvent_MethodInfo_[] = {
	{"<init>", "(Lsun/net/httpserver/ExchangeImpl;)V", nullptr, 0, $method(static_cast<void(WriteFinishedEvent::*)($ExchangeImpl*)>(&WriteFinishedEvent::init$))},
	{}
};

$ClassInfo _WriteFinishedEvent_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.httpserver.WriteFinishedEvent",
	"sun.net.httpserver.Event",
	nullptr,
	_WriteFinishedEvent_FieldInfo_,
	_WriteFinishedEvent_MethodInfo_
};

$Object* allocate$WriteFinishedEvent($Class* clazz) {
	return $of($alloc(WriteFinishedEvent));
}

bool WriteFinishedEvent::$assertionsDisabled = false;

void WriteFinishedEvent::init$($ExchangeImpl* t) {
	$Event::init$(t);
	if (!WriteFinishedEvent::$assertionsDisabled && ! !$nc(t)->writefinished) {
		$throwNew($AssertionError);
	}
	$nc(t)->writefinished = true;
}

void clinit$WriteFinishedEvent($Class* class$) {
	WriteFinishedEvent::$assertionsDisabled = !WriteFinishedEvent::class$->desiredAssertionStatus();
}

WriteFinishedEvent::WriteFinishedEvent() {
}

$Class* WriteFinishedEvent::load$($String* name, bool initialize) {
	$loadClass(WriteFinishedEvent, name, initialize, &_WriteFinishedEvent_ClassInfo_, clinit$WriteFinishedEvent, allocate$WriteFinishedEvent);
	return class$;
}

$Class* WriteFinishedEvent::class$ = nullptr;

		} // httpserver
	} // net
} // sun