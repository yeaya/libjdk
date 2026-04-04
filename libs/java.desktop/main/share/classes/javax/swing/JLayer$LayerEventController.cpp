#include <javax/swing/JLayer$LayerEventController.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/ContainerEvent.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/HierarchyEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/InputMethodEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/security/AccessController.h>
#include <java/util/ArrayList.h>
#include <java/util/EventObject.h>
#include <java/util/Iterator.h>
#include <javax/swing/JLayer$LayerEventController$1.h>
#include <javax/swing/JLayer$LayerEventController$2.h>
#include <javax/swing/JLayer.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/LayerUI.h>
#include <jcpp.h>

#undef ACCEPTED_EVENTS
#undef ANCESTOR_MOVED
#undef ANCESTOR_RESIZED
#undef COMPONENT_EVENT_MASK
#undef COMPONENT_FIRST
#undef COMPONENT_LAST
#undef CONTAINER_EVENT_MASK
#undef CONTAINER_FIRST
#undef CONTAINER_LAST
#undef FOCUS_EVENT_MASK
#undef FOCUS_FIRST
#undef FOCUS_LAST
#undef HIERARCHY_BOUNDS_EVENT_MASK
#undef HIERARCHY_CHANGED
#undef HIERARCHY_EVENT_MASK
#undef INPUT_METHOD_EVENT_MASK
#undef INPUT_METHOD_FIRST
#undef INPUT_METHOD_LAST
#undef KEY_EVENT_MASK
#undef KEY_FIRST
#undef KEY_LAST
#undef MOUSE_DRAGGED
#undef MOUSE_EVENT_MASK
#undef MOUSE_FIRST
#undef MOUSE_LAST
#undef MOUSE_MOTION_EVENT_MASK
#undef MOUSE_MOVED
#undef MOUSE_WHEEL
#undef MOUSE_WHEEL_EVENT_MASK

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ContainerEvent = ::java::awt::event::ContainerEvent;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $HierarchyEvent = ::java::awt::event::HierarchyEvent;
using $InputEvent = ::java::awt::event::InputEvent;
using $InputMethodEvent = ::java::awt::event::InputMethodEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $JLayer = ::javax::swing::JLayer;
using $JLayer$LayerEventController$1 = ::javax::swing::JLayer$LayerEventController$1;
using $JLayer$LayerEventController$2 = ::javax::swing::JLayer$LayerEventController$2;
using $LayerUI = ::javax::swing::plaf::LayerUI;

namespace javax {
	namespace swing {

void JLayer$LayerEventController::init$() {
	$set(this, layerMaskList, $new($ArrayList));
}

void JLayer$LayerEventController::eventDispatched($AWTEvent* event) {
	$useLocalObjectStack();
	$var($Object, source, $nc(event)->getSource());
	if ($instanceOf($Component, source)) {
		$var($Component, component, $cast($Component, source));
		while (component != nullptr) {
			if ($instanceOf($JLayer, component)) {
				$var($JLayer, l, $cast($JLayer, component));
				$var($LayerUI, ui, $cast($LayerUI, l->getUI()));
				bool var$1 = ui != nullptr;
				if (var$1) {
					int64_t var$2 = l->getLayerEventMask();
					var$1 = isEventEnabled(var$2, event->getID());
				}
				bool var$0 = var$1;
				if (var$0 && (!($instanceOf($InputEvent, event)) || !$cast($InputEvent, event)->isConsumed())) {
					$nc(ui)->eventDispatched(event, l);
				}
			}
			$assign(component, component->getParent());
		}
	}
}

void JLayer$LayerEventController::updateAWTEventListener(int64_t oldEventMask, int64_t newEventMask) {
	$useLocalObjectStack();
	if (oldEventMask != 0) {
		$nc(this->layerMaskList)->remove($($Long::valueOf(oldEventMask)));
	}
	if (newEventMask != 0) {
		$nc(this->layerMaskList)->add($($Long::valueOf(newEventMask)));
	}
	int64_t combinedMask = 0;
	{
		$var($Iterator, i$, $nc(this->layerMaskList)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Long, mask, $cast($Long, i$->next()));
			{
				combinedMask |= $nc(mask)->longValue();
			}
		}
	}
	combinedMask &= (uint64_t)JLayer$LayerEventController::ACCEPTED_EVENTS;
	if (combinedMask == 0) {
		removeAWTEventListener();
	} else if (getCurrentEventMask() != combinedMask) {
		removeAWTEventListener();
		addAWTEventListener(combinedMask);
	}
	this->currentEventMask = combinedMask;
}

int64_t JLayer$LayerEventController::getCurrentEventMask() {
	return this->currentEventMask;
}

void JLayer$LayerEventController::addAWTEventListener(int64_t eventMask) {
	$beforeCallerSensitive();
	$AccessController::doPrivileged($$new($JLayer$LayerEventController$1, this, eventMask));
}

void JLayer$LayerEventController::removeAWTEventListener() {
	$beforeCallerSensitive();
	$AccessController::doPrivileged($$new($JLayer$LayerEventController$2, this));
}

bool JLayer$LayerEventController::isEventEnabled(int64_t eventMask, int32_t id) {
	return (((eventMask & $AWTEvent::COMPONENT_EVENT_MASK) != 0 && id >= $ComponentEvent::COMPONENT_FIRST && id <= $ComponentEvent::COMPONENT_LAST) || ((eventMask & $AWTEvent::CONTAINER_EVENT_MASK) != 0 && id >= $ContainerEvent::CONTAINER_FIRST && id <= $ContainerEvent::CONTAINER_LAST) || ((eventMask & $AWTEvent::FOCUS_EVENT_MASK) != 0 && id >= $FocusEvent::FOCUS_FIRST && id <= $FocusEvent::FOCUS_LAST) || ((eventMask & $AWTEvent::KEY_EVENT_MASK) != 0 && id >= $KeyEvent::KEY_FIRST && id <= $KeyEvent::KEY_LAST) || ((eventMask & $AWTEvent::MOUSE_WHEEL_EVENT_MASK) != 0 && id == $MouseEvent::MOUSE_WHEEL) || ((eventMask & $AWTEvent::MOUSE_MOTION_EVENT_MASK) != 0 && (id == $MouseEvent::MOUSE_MOVED || id == $MouseEvent::MOUSE_DRAGGED)) || ((eventMask & $AWTEvent::MOUSE_EVENT_MASK) != 0 && id != $MouseEvent::MOUSE_MOVED && id != $MouseEvent::MOUSE_DRAGGED && id != $MouseEvent::MOUSE_WHEEL && id >= $MouseEvent::MOUSE_FIRST && id <= $MouseEvent::MOUSE_LAST) || ((eventMask & $AWTEvent::INPUT_METHOD_EVENT_MASK) != 0 && id >= $InputMethodEvent::INPUT_METHOD_FIRST && id <= $InputMethodEvent::INPUT_METHOD_LAST) || ((eventMask & $AWTEvent::HIERARCHY_EVENT_MASK) != 0 && id == $HierarchyEvent::HIERARCHY_CHANGED) || ((eventMask & $AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK) != 0 && (id == $HierarchyEvent::ANCESTOR_MOVED || id == $HierarchyEvent::ANCESTOR_RESIZED)));
}

JLayer$LayerEventController::JLayer$LayerEventController() {
}

$Class* JLayer$LayerEventController::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"layerMaskList", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/Long;>;", $PRIVATE, $field(JLayer$LayerEventController, layerMaskList)},
		{"currentEventMask", "J", nullptr, $PRIVATE, $field(JLayer$LayerEventController, currentEventMask)},
		{"ACCEPTED_EVENTS", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JLayer$LayerEventController, ACCEPTED_EVENTS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(JLayer$LayerEventController, init$, void)},
		{"addAWTEventListener", "(J)V", nullptr, $PRIVATE, $method(JLayer$LayerEventController, addAWTEventListener, void, int64_t)},
		{"eventDispatched", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC, $virtualMethod(JLayer$LayerEventController, eventDispatched, void, $AWTEvent*)},
		{"getCurrentEventMask", "()J", nullptr, $PRIVATE, $method(JLayer$LayerEventController, getCurrentEventMask, int64_t)},
		{"isEventEnabled", "(JI)Z", nullptr, $PRIVATE, $method(JLayer$LayerEventController, isEventEnabled, bool, int64_t, int32_t)},
		{"removeAWTEventListener", "()V", nullptr, $PRIVATE, $method(JLayer$LayerEventController, removeAWTEventListener, void)},
		{"updateAWTEventListener", "(JJ)V", nullptr, $PRIVATE, $method(JLayer$LayerEventController, updateAWTEventListener, void, int64_t, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JLayer$LayerEventController", "javax.swing.JLayer", "LayerEventController", $PRIVATE | $STATIC},
		{"javax.swing.JLayer$LayerEventController$2", nullptr, nullptr, 0},
		{"javax.swing.JLayer$LayerEventController$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JLayer$LayerEventController",
		"java.lang.Object",
		"java.awt.event.AWTEventListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JLayer"
	};
	$loadClass(JLayer$LayerEventController, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JLayer$LayerEventController);
	});
	return class$;
}

$Class* JLayer$LayerEventController::class$ = nullptr;

	} // swing
} // javax