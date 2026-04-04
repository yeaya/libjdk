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

$Class* EventTarget::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"addEventListener", "(Ljava/lang/String;Lorg/w3c/dom/events/EventListener;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EventTarget, addEventListener, void, $String*, $EventListener*, bool)},
		{"dispatchEvent", "(Lorg/w3c/dom/events/Event;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EventTarget, dispatchEvent, bool, $Event*), "org.w3c.dom.events.EventException"},
		{"removeEventListener", "(Ljava/lang/String;Lorg/w3c/dom/events/EventListener;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EventTarget, removeEventListener, void, $String*, $EventListener*, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.w3c.dom.events.EventTarget",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(EventTarget, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EventTarget);
	});
	return class$;
}

$Class* EventTarget::class$ = nullptr;

			} // events
		} // dom
	} // w3c
} // org