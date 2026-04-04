#include <org/w3c/dom/events/DocumentEvent.h>
#include <org/w3c/dom/events/Event.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Event = ::org::w3c::dom::events::Event;

namespace org {
	namespace w3c {
		namespace dom {
			namespace events {

$Class* DocumentEvent::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createEvent", "(Ljava/lang/String;)Lorg/w3c/dom/events/Event;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentEvent, createEvent, $Event*, $String*), "org.w3c.dom.DOMException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.w3c.dom.events.DocumentEvent",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DocumentEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DocumentEvent);
	});
	return class$;
}

$Class* DocumentEvent::class$ = nullptr;

			} // events
		} // dom
	} // w3c
} // org