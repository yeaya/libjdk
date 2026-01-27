#ifndef _org_w3c_dom_events_DocumentEvent_h_
#define _org_w3c_dom_events_DocumentEvent_h_
//$ interface org.w3c.dom.events.DocumentEvent
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

class $export DocumentEvent : public ::java::lang::Object {
	$interface(DocumentEvent, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::org::w3c::dom::events::Event* createEvent($String* eventType) {return nullptr;}
};

			} // events
		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_events_DocumentEvent_h_