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

$Class* EventListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"handleEvent", "(Lorg/w3c/dom/events/Event;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EventListener, handleEvent, void, $Event*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.w3c.dom.events.EventListener",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(EventListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EventListener);
	});
	return class$;
}

$Class* EventListener::class$ = nullptr;

			} // events
		} // dom
	} // w3c
} // org