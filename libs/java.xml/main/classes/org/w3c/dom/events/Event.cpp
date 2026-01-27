#include <org/w3c/dom/events/Event.h>

#include <org/w3c/dom/events/EventTarget.h>
#include <jcpp.h>

#undef AT_TARGET
#undef BUBBLING_PHASE
#undef CAPTURING_PHASE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventTarget = ::org::w3c::dom::events::EventTarget;

namespace org {
	namespace w3c {
		namespace dom {
			namespace events {

$FieldInfo _Event_FieldInfo_[] = {
	{"CAPTURING_PHASE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, CAPTURING_PHASE)},
	{"AT_TARGET", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, AT_TARGET)},
	{"BUBBLING_PHASE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, BUBBLING_PHASE)},
	{}
};

$MethodInfo _Event_MethodInfo_[] = {
	{"getBubbles", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Event, getBubbles, bool)},
	{"getCancelable", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Event, getCancelable, bool)},
	{"getCurrentTarget", "()Lorg/w3c/dom/events/EventTarget;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Event, getCurrentTarget, $EventTarget*)},
	{"getEventPhase", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Event, getEventPhase, int16_t)},
	{"getTarget", "()Lorg/w3c/dom/events/EventTarget;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Event, getTarget, $EventTarget*)},
	{"getTimeStamp", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Event, getTimeStamp, int64_t)},
	{"getType", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Event, getType, $String*)},
	{"initEvent", "(Ljava/lang/String;ZZ)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Event, initEvent, void, $String*, bool, bool)},
	{"preventDefault", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Event, preventDefault, void)},
	{"stopPropagation", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Event, stopPropagation, void)},
	{}
};

$ClassInfo _Event_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.events.Event",
	nullptr,
	nullptr,
	_Event_FieldInfo_,
	_Event_MethodInfo_
};

$Object* allocate$Event($Class* clazz) {
	return $of($alloc(Event));
}

$Class* Event::load$($String* name, bool initialize) {
	$loadClass(Event, name, initialize, &_Event_ClassInfo_, allocate$Event);
	return class$;
}

$Class* Event::class$ = nullptr;

			} // events
		} // dom
	} // w3c
} // org