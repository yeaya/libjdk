#ifndef _org_w3c_dom_events_MutationEvent_h_
#define _org_w3c_dom_events_MutationEvent_h_
//$ interface org.w3c.dom.events.MutationEvent
//$ extends org.w3c.dom.events.Event

#include <org/w3c/dom/events/Event.h>

#pragma push_macro("ADDITION")
#undef ADDITION
#pragma push_macro("MODIFICATION")
#undef MODIFICATION
#pragma push_macro("REMOVAL")
#undef REMOVAL

namespace org {
	namespace w3c {
		namespace dom {
			class Node;
		}
	}
}

namespace org {
	namespace w3c {
		namespace dom {
			namespace events {

class $import MutationEvent : public ::org::w3c::dom::events::Event {
	$interface(MutationEvent, $NO_CLASS_INIT, ::org::w3c::dom::events::Event)
public:
	virtual int16_t getAttrChange() {return 0;}
	virtual $String* getAttrName() {return nullptr;}
	virtual $String* getNewValue() {return nullptr;}
	virtual $String* getPrevValue() {return nullptr;}
	virtual ::org::w3c::dom::Node* getRelatedNode() {return nullptr;}
	virtual void initMutationEvent($String* typeArg, bool canBubbleArg, bool cancelableArg, ::org::w3c::dom::Node* relatedNodeArg, $String* prevValueArg, $String* newValueArg, $String* attrNameArg, int16_t attrChangeArg) {}
	static const int16_t MODIFICATION = 1;
	static const int16_t ADDITION = 2;
	static const int16_t REMOVAL = 3;
};

			} // events
		} // dom
	} // w3c
} // org

#pragma pop_macro("ADDITION")
#pragma pop_macro("MODIFICATION")
#pragma pop_macro("REMOVAL")

#endif // _org_w3c_dom_events_MutationEvent_h_