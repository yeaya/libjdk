#include <org/w3c/dom/events/EventListener.h>

#include <org/w3c/dom/events/Event.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Event = ::org::w3c::dom::events::Event;

namespace org {
	namespace w3c {
		namespace dom {
			namespace events {

$MethodInfo _EventListener_MethodInfo_[] = {
	{"handleEvent", "(Lorg/w3c/dom/events/Event;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EventListener, handleEvent, void, $Event*)},
	{}
};

$ClassInfo _EventListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.events.EventListener",
	nullptr,
	nullptr,
	nullptr,
	_EventListener_MethodInfo_
};

$Object* allocate$EventListener($Class* clazz) {
	return $of($alloc(EventListener));
}

$Class* EventListener::load$($String* name, bool initialize) {
	$loadClass(EventListener, name, initialize, &_EventListener_ClassInfo_, allocate$EventListener);
	return class$;
}

$Class* EventListener::class$ = nullptr;

			} // events
		} // dom
	} // w3c
} // org