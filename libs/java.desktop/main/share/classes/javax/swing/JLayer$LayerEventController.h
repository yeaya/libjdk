#ifndef _javax_swing_JLayer$LayerEventController_h_
#define _javax_swing_JLayer$LayerEventController_h_
//$ class javax.swing.JLayer$LayerEventController
//$ extends java.awt.event.AWTEventListener

#include <java/awt/event/AWTEventListener.h>

#pragma push_macro("ACCEPTED_EVENTS")
#undef ACCEPTED_EVENTS

namespace java {
	namespace awt {
		class AWTEvent;
	}
}
namespace java {
	namespace util {
		class ArrayList;
	}
}

namespace javax {
	namespace swing {

class JLayer$LayerEventController : public ::java::awt::event::AWTEventListener {
	$class(JLayer$LayerEventController, $NO_CLASS_INIT, ::java::awt::event::AWTEventListener)
public:
	JLayer$LayerEventController();
	void init$();
	void addAWTEventListener(int64_t eventMask);
	virtual void eventDispatched(::java::awt::AWTEvent* event) override;
	int64_t getCurrentEventMask();
	bool isEventEnabled(int64_t eventMask, int32_t id);
	void removeAWTEventListener();
	void updateAWTEventListener(int64_t oldEventMask, int64_t newEventMask);
	::java::util::ArrayList* layerMaskList = nullptr;
	int64_t currentEventMask = 0;
	static const int64_t ACCEPTED_EVENTS = 231487; // AWTEvent.COMPONENT_EVENT_MASK | AWTEvent.CONTAINER_EVENT_MASK | AWTEvent.FOCUS_EVENT_MASK | AWTEvent.KEY_EVENT_MASK | AWTEvent.MOUSE_WHEEL_EVENT_MASK | AWTEvent.MOUSE_MOTION_EVENT_MASK | AWTEvent.MOUSE_EVENT_MASK | AWTEvent.INPUT_METHOD_EVENT_MASK | AWTEvent.HIERARCHY_EVENT_MASK | AWTEvent.HIERARCHY_BOUNDS_EVENT_MASK
};

	} // swing
} // javax

#pragma pop_macro("ACCEPTED_EVENTS")

#endif // _javax_swing_JLayer$LayerEventController_h_