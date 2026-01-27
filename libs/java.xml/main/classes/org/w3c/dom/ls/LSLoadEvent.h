#ifndef _org_w3c_dom_ls_LSLoadEvent_h_
#define _org_w3c_dom_ls_LSLoadEvent_h_
//$ interface org.w3c.dom.ls.LSLoadEvent
//$ extends org.w3c.dom.events.Event

#include <org/w3c/dom/events/Event.h>

namespace org {
	namespace w3c {
		namespace dom {
			class Document;
		}
	}
}
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

class $export LSLoadEvent : public ::org::w3c::dom::events::Event {
	$interface(LSLoadEvent, $NO_CLASS_INIT, ::org::w3c::dom::events::Event)
public:
	virtual ::org::w3c::dom::ls::LSInput* getInput() {return nullptr;}
	virtual ::org::w3c::dom::Document* getNewDocument() {return nullptr;}
};

			} // ls
		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_ls_LSLoadEvent_h_