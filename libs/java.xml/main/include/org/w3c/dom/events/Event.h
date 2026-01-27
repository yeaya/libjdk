#ifndef _org_w3c_dom_events_Event_h_
#define _org_w3c_dom_events_Event_h_
//$ interface org.w3c.dom.events.Event
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("AT_TARGET")
#undef AT_TARGET
#pragma push_macro("BUBBLING_PHASE")
#undef BUBBLING_PHASE
#pragma push_macro("CAPTURING_PHASE")
#undef CAPTURING_PHASE

namespace org {
	namespace w3c {
		namespace dom {
			namespace events {
				class EventTarget;
			}
		}
	}
}

namespace org {
	namespace w3c {
		namespace dom {
			namespace events {

class $import Event : public ::java::lang::Object {
	$interface(Event, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool getBubbles() {return false;}
	virtual bool getCancelable() {return false;}
	virtual ::org::w3c::dom::events::EventTarget* getCurrentTarget() {return nullptr;}
	virtual int16_t getEventPhase() {return 0;}
	virtual ::org::w3c::dom::events::EventTarget* getTarget() {return nullptr;}
	virtual int64_t getTimeStamp() {return 0;}
	virtual $String* getType() {return nullptr;}
	virtual void initEvent($String* eventTypeArg, bool canBubbleArg, bool cancelableArg) {}
	virtual void preventDefault() {}
	virtual void stopPropagation() {}
	static const int16_t CAPTURING_PHASE = 1;
	static const int16_t AT_TARGET = 2;
	static const int16_t BUBBLING_PHASE = 3;
};

			} // events
		} // dom
	} // w3c
} // org

#pragma pop_macro("AT_TARGET")
#pragma pop_macro("BUBBLING_PHASE")
#pragma pop_macro("CAPTURING_PHASE")

#endif // _org_w3c_dom_events_Event_h_