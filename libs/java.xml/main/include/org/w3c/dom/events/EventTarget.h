#ifndef _org_w3c_dom_events_EventTarget_h_
#define _org_w3c_dom_events_EventTarget_h_
//$ interface org.w3c.dom.events.EventTarget
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace w3c {
		namespace dom {
			namespace events {
				class Event;
				class EventListener;
			}
		}
	}
}

namespace org {
	namespace w3c {
		namespace dom {
			namespace events {

class $import EventTarget : public ::java::lang::Object {
	$interface(EventTarget, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addEventListener($String* type, ::org::w3c::dom::events::EventListener* listener, bool useCapture) {}
	virtual bool dispatchEvent(::org::w3c::dom::events::Event* evt) {return false;}
	virtual void removeEventListener($String* type, ::org::w3c::dom::events::EventListener* listener, bool useCapture) {}
};

			} // events
		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_events_EventTarget_h_