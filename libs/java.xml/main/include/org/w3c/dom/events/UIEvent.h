#ifndef _org_w3c_dom_events_UIEvent_h_
#define _org_w3c_dom_events_UIEvent_h_
//$ interface org.w3c.dom.events.UIEvent
//$ extends org.w3c.dom.events.Event

#include <org/w3c/dom/events/Event.h>

namespace org {
	namespace w3c {
		namespace dom {
			namespace views {
				class AbstractView;
			}
		}
	}
}

namespace org {
	namespace w3c {
		namespace dom {
			namespace events {

class $import UIEvent : public ::org::w3c::dom::events::Event {
	$interface(UIEvent, $NO_CLASS_INIT, ::org::w3c::dom::events::Event)
public:
	virtual int32_t getDetail() {return 0;}
	virtual ::org::w3c::dom::views::AbstractView* getView() {return nullptr;}
	virtual void initUIEvent($String* typeArg, bool canBubbleArg, bool cancelableArg, ::org::w3c::dom::views::AbstractView* viewArg, int32_t detailArg) {}
};

			} // events
		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_events_UIEvent_h_