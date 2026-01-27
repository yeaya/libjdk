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

$MethodInfo _DocumentEvent_MethodInfo_[] = {
	{"createEvent", "(Ljava/lang/String;)Lorg/w3c/dom/events/Event;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentEvent, createEvent, $Event*, $String*), "org.w3c.dom.DOMException"},
	{}
};

$ClassInfo _DocumentEvent_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.events.DocumentEvent",
	nullptr,
	nullptr,
	nullptr,
	_DocumentEvent_MethodInfo_
};

$Object* allocate$DocumentEvent($Class* clazz) {
	return $of($alloc(DocumentEvent));
}

$Class* DocumentEvent::load$($String* name, bool initialize) {
	$loadClass(DocumentEvent, name, initialize, &_DocumentEvent_ClassInfo_, allocate$DocumentEvent);
	return class$;
}

$Class* DocumentEvent::class$ = nullptr;

			} // events
		} // dom
	} // w3c
} // org