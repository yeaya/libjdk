#ifndef _org_w3c_dom_events_EventListener_h_
#define _org_w3c_dom_events_EventListener_h_
//$ interface org.w3c.dom.events.EventListener
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace w3c {
		namespace dom {
			namespace events {
				class Event;
			}
		}
	}
}

namespace org {
	namespace w3c {
		namespace dom {
			namespace events {

class $export EventListener : public ::java::lang::Object {
	$interface(EventListener, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void handleEvent(::org::w3c::dom::events::Event* evt) {}
};

			} // events
		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_events_EventListener_h_