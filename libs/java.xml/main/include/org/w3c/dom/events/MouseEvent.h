#ifndef _org_w3c_dom_events_MouseEvent_h_
#define _org_w3c_dom_events_MouseEvent_h_
//$ interface org.w3c.dom.events.MouseEvent
//$ extends org.w3c.dom.events.UIEvent

#include <org/w3c/dom/events/UIEvent.h>

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

class $import MouseEvent : public ::org::w3c::dom::events::UIEvent {
	$interface(MouseEvent, $NO_CLASS_INIT, ::org::w3c::dom::events::UIEvent)
public:
	virtual bool getAltKey() {return false;}
	virtual int16_t getButton() {return 0;}
	virtual int32_t getClientX() {return 0;}
	virtual int32_t getClientY() {return 0;}
	virtual bool getCtrlKey() {return false;}
	virtual bool getMetaKey() {return false;}
	virtual ::org::w3c::dom::events::EventTarget* getRelatedTarget() {return nullptr;}
	virtual int32_t getScreenX() {return 0;}
	virtual int32_t getScreenY() {return 0;}
	virtual bool getShiftKey() {return false;}
	virtual void initMouseEvent($String* typeArg, bool canBubbleArg, bool cancelableArg, ::org::w3c::dom::views::AbstractView* viewArg, int32_t detailArg, int32_t screenXArg, int32_t screenYArg, int32_t clientXArg, int32_t clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg, int16_t buttonArg, ::org::w3c::dom::events::EventTarget* relatedTargetArg) {}
};

			} // events
		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_events_MouseEvent_h_