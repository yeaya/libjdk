#include <org/w3c/dom/events/EventTarget.h>

#include <org/w3c/dom/events/Event.h>
#include <org/w3c/dom/events/EventListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Event = ::org::w3c::dom::events::Event;
using $EventListener = ::org::w3c::dom::events::EventListener;

namespace org {
	namespace w3c {
		namespace dom {
			namespace events {

$MethodInfo _EventTarget_MethodInfo_[] = {
	{"addEventListener", "(Ljava/lang/String;Lorg/w3c/dom/events/EventListener;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EventTarget, addEventListener, void, $String*, $EventListener*, bool)},
	{"dispatchEvent", "(Lorg/w3c/dom/events/Event;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EventTarget, dispatchEvent, bool, $Event*), "org.w3c.dom.events.EventException"},
	{"removeEventListener", "(Ljava/lang/String;Lorg/w3c/dom/events/EventListener;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EventTarget, removeEventListener, void, $String*, $EventListener*, bool)},
	{}
};

$ClassInfo _EventTarget_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.events.EventTarget",
	nullptr,
	nullptr,
	nullptr,
	_EventTarget_MethodInfo_
};

$Object* allocate$EventTarget($Class* clazz) {
	return $of($alloc(EventTarget));
}

$Class* EventTarget::load$($String* name, bool initialize) {
	$loadClass(EventTarget, name, initialize, &_EventTarget_ClassInfo_, allocate$EventTarget);
	return class$;
}

$Class* EventTarget::class$ = nullptr;

			} // events
		} // dom
	} // w3c
} // org