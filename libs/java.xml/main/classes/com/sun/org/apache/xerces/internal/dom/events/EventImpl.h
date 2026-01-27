#ifndef _com_sun_org_apache_xerces_internal_dom_events_EventImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_events_EventImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.events.EventImpl
//$ extends org.w3c.dom.events.Event

#include <org/w3c/dom/events/Event.h>

namespace org {
	namespace w3c {
		namespace dom {
			namespace events {
				class EventTarget;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {
							namespace events {

class EventImpl : public ::org::w3c::dom::events::Event {
	$class(EventImpl, $NO_CLASS_INIT, ::org::w3c::dom::events::Event)
public:
	EventImpl();
	void init$();
	virtual bool getBubbles() override;
	virtual bool getCancelable() override;
	virtual ::org::w3c::dom::events::EventTarget* getCurrentTarget() override;
	virtual int16_t getEventPhase() override;
	virtual ::org::w3c::dom::events::EventTarget* getTarget() override;
	virtual int64_t getTimeStamp() override;
	virtual $String* getType() override;
	virtual void initEvent($String* eventTypeArg, bool canBubbleArg, bool cancelableArg) override;
	virtual void preventDefault() override;
	virtual void stopPropagation() override;
	$String* type = nullptr;
	::org::w3c::dom::events::EventTarget* target = nullptr;
	::org::w3c::dom::events::EventTarget* currentTarget = nullptr;
	int16_t eventPhase = 0;
	bool initialized = false;
	bool bubbles = false;
	bool cancelable = false;
	bool stopPropagation$ = false;
	bool preventDefault$ = false;
	int64_t timeStamp = 0;
};

							} // events
						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_events_EventImpl_h_