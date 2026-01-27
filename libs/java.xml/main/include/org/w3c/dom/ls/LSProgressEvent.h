#ifndef _org_w3c_dom_ls_LSProgressEvent_h_
#define _org_w3c_dom_ls_LSProgressEvent_h_
//$ interface org.w3c.dom.ls.LSProgressEvent
//$ extends org.w3c.dom.events.Event

#include <org/w3c/dom/events/Event.h>

namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {
				class LSInput;
			}
		}
	}
}

namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {

class $import LSProgressEvent : public ::org::w3c::dom::events::Event {
	$interface(LSProgressEvent, $NO_CLASS_INIT, ::org::w3c::dom::events::Event)
public:
	virtual ::org::w3c::dom::ls::LSInput* getInput() {return nullptr;}
	virtual int32_t getPosition() {return 0;}
	virtual int32_t getTotalSize() {return 0;}
};

			} // ls
		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_ls_LSProgressEvent_h_