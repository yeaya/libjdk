#include <org/w3c/dom/events/MouseEvent.h>

#include <org/w3c/dom/events/EventTarget.h>
#include <org/w3c/dom/views/AbstractView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventTarget = ::org::w3c::dom::events::EventTarget;
using $AbstractView = ::org::w3c::dom::views::AbstractView;

namespace org {
	namespace w3c {
		namespace dom {
			namespace events {

$MethodInfo _MouseEvent_MethodInfo_[] = {
	{"getAltKey", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MouseEvent, getAltKey, bool)},
	{"getButton", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MouseEvent, getButton, int16_t)},
	{"getClientX", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MouseEvent, getClientX, int32_t)},
	{"getClientY", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MouseEvent, getClientY, int32_t)},
	{"getCtrlKey", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MouseEvent, getCtrlKey, bool)},
	{"getMetaKey", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MouseEvent, getMetaKey, bool)},
	{"getRelatedTarget", "()Lorg/w3c/dom/events/EventTarget;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MouseEvent, getRelatedTarget, $EventTarget*)},
	{"getScreenX", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MouseEvent, getScreenX, int32_t)},
	{"getScreenY", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MouseEvent, getScreenY, int32_t)},
	{"getShiftKey", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MouseEvent, getShiftKey, bool)},
	{"initMouseEvent", "(Ljava/lang/String;ZZLorg/w3c/dom/views/AbstractView;IIIIIZZZZSLorg/w3c/dom/events/EventTarget;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MouseEvent, initMouseEvent, void, $String*, bool, bool, $AbstractView*, int32_t, int32_t, int32_t, int32_t, int32_t, bool, bool, bool, bool, int16_t, $EventTarget*)},
	{}
};

$ClassInfo _MouseEvent_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.events.MouseEvent",
	nullptr,
	"org.w3c.dom.events.UIEvent",
	nullptr,
	_MouseEvent_MethodInfo_
};

$Object* allocate$MouseEvent($Class* clazz) {
	return $of($alloc(MouseEvent));
}

$Class* MouseEvent::load$($String* name, bool initialize) {
	$loadClass(MouseEvent, name, initialize, &_MouseEvent_ClassInfo_, allocate$MouseEvent);
	return class$;
}

$Class* MouseEvent::class$ = nullptr;

			} // events
		} // dom
	} // w3c
} // org