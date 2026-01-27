#ifndef _org_w3c_dom_events_EventException_h_
#define _org_w3c_dom_events_EventException_h_
//$ class org.w3c.dom.events.EventException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

#pragma push_macro("UNSPECIFIED_EVENT_TYPE_ERR")
#undef UNSPECIFIED_EVENT_TYPE_ERR

namespace org {
	namespace w3c {
		namespace dom {
			namespace events {

class $import EventException : public ::java::lang::RuntimeException {
	$class(EventException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	EventException();
	void init$(int16_t code, $String* message);
	static const int64_t serialVersionUID = (int64_t)0x035E6EF04FAF7A5D;
	int16_t code = 0;
	static const int16_t UNSPECIFIED_EVENT_TYPE_ERR = 0;
	EventException(const EventException& e);
	virtual void throw$() override;
	inline EventException* operator ->() {
		return (EventException*)throwing$;
	}
};

			} // events
		} // dom
	} // w3c
} // org

#pragma pop_macro("UNSPECIFIED_EVENT_TYPE_ERR")

#endif // _org_w3c_dom_events_EventException_h_