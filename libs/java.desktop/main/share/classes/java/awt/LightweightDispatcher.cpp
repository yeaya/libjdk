#include <java/awt/LightweightDispatcher.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/LightweightDispatcher$1.h>
#include <java/awt/LightweightDispatcher$2.h>
#include <java/awt/LightweightDispatcher$3.h>
#include <java/awt/Point.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseWheelEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Runnable.h>
#include <java/lang/ref/WeakReference.h>
#include <java/security/AccessController.h>
#include <java/util/EventObject.h>
#include <sun/awt/AWTAccessor$InputEventAccessor.h>
#include <sun/awt/AWTAccessor$MouseEventAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/dnd/SunDropTargetContextPeer$EventDispatcher.h>
#include <sun/awt/dnd/SunDropTargetEvent.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef BUTTONS_DOWN_MASK
#undef FINEST
#undef INCLUDE_SELF
#undef LWD_MOUSE_DRAGGED_OVER
#undef MOUSE_CLICKED
#undef MOUSE_DRAGGED
#undef MOUSE_ENTERED
#undef MOUSE_EXITED
#undef MOUSE_MASK
#undef MOUSE_MOVED
#undef MOUSE_PRESSED
#undef MOUSE_RELEASED
#undef MOUSE_WHEEL
#undef PROXY_EVENT_MASK

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $LightweightDispatcher$1 = ::java::awt::LightweightDispatcher$1;
using $LightweightDispatcher$2 = ::java::awt::LightweightDispatcher$2;
using $LightweightDispatcher$3 = ::java::awt::LightweightDispatcher$3;
using $Point = ::java::awt::Point;
using $Window = ::java::awt::Window;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseWheelEvent = ::java::awt::event::MouseWheelEvent;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AccessController = ::java::security::AccessController;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$MouseEventAccessor = ::sun::awt::AWTAccessor$MouseEventAccessor;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;
using $SunDropTargetEvent = ::sun::awt::dnd::SunDropTargetEvent;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace java {
	namespace awt {

int32_t LightweightDispatcher::hashCode() {
	 return this->$Serializable::hashCode();
}

bool LightweightDispatcher::equals(Object$* arg0) {
	 return this->$Serializable::equals(arg0);
}

$Object* LightweightDispatcher::clone() {
	 return this->$Serializable::clone();
}

$String* LightweightDispatcher::toString() {
	 return this->$Serializable::toString();
}

void LightweightDispatcher::finalize() {
	this->$Serializable::finalize();
}

bool LightweightDispatcher::$assertionsDisabled = false;
$PlatformLogger* LightweightDispatcher::eventLog = nullptr;
int32_t LightweightDispatcher::BUTTONS_DOWN_MASK = 0;

void LightweightDispatcher::init$($Container* nativeContainer) {
	this->isMouseInNativeContainer = false;
	this->isMouseDTInNativeContainer = false;
	$set(this, nativeContainer, nativeContainer);
	$set(this, mouseEventTarget, $new($WeakReference, nullptr));
	$set(this, targetLastEntered, $new($WeakReference, nullptr));
	$set(this, targetLastEnteredDT, $new($WeakReference, nullptr));
	this->eventMask = 0;
}

void LightweightDispatcher::dispose() {
	stopListeningForOtherDrags();
	$nc(this->mouseEventTarget)->clear();
	$nc(this->targetLastEntered)->clear();
	$nc(this->targetLastEnteredDT)->clear();
}

void LightweightDispatcher::enableEvents(int64_t events) {
	this->eventMask |= events;
}

bool LightweightDispatcher::dispatchEvent($AWTEvent* e) {
	$useLocalObjectStack();
	bool ret = false;
	if ($instanceOf($SunDropTargetEvent, e)) {
		$var($SunDropTargetEvent, sdde, $cast($SunDropTargetEvent, e));
		ret = processDropTargetEvent(sdde);
	} else {
		if ($instanceOf($MouseEvent, e) && (this->eventMask & LightweightDispatcher::MOUSE_MASK) != 0) {
			$var($MouseEvent, me, $cast($MouseEvent, e));
			ret = processMouseEvent(me);
		}
		if ($nc(e)->getID() == $MouseEvent::MOUSE_MOVED) {
			$nc(this->nativeContainer)->updateCursorImmediately();
		}
	}
	return ret;
}

bool LightweightDispatcher::isMouseGrab($MouseEvent* e) {
	int32_t modifiers = $nc(e)->getModifiersEx();
	bool var$0 = e->getID() == $MouseEvent::MOUSE_PRESSED;
	if (var$0 || e->getID() == $MouseEvent::MOUSE_RELEASED) {
		modifiers ^= $InputEvent::getMaskForButton(e->getButton());
	}
	return ((modifiers & LightweightDispatcher::BUTTONS_DOWN_MASK) != 0);
}

bool LightweightDispatcher::processMouseEvent($MouseEvent* e) {
	$useLocalObjectStack();
	int32_t id = $nc(e)->getID();
	int32_t var$0 = e->getX();
	$var($Component, mouseOver, $nc(this->nativeContainer)->getMouseEventTarget(var$0, e->getY(), $Container::INCLUDE_SELF));
	trackMouseEnterExit(mouseOver, e);
	$var($Component, met, $cast($Component, $nc(this->mouseEventTarget)->get()));
	if (!isMouseGrab(e) && id != $MouseEvent::MOUSE_CLICKED) {
		$assign(met, (!$equals(mouseOver, this->nativeContainer)) ? mouseOver : ($Component*)nullptr);
		$set(this, mouseEventTarget, $new($WeakReference, met));
	}
	if (met != nullptr) {
		switch (id) {
		case $MouseEvent::MOUSE_ENTERED:
		case $MouseEvent::MOUSE_EXITED:
			break;
		case $MouseEvent::MOUSE_PRESSED:
			retargetMouseEvent(met, id, e);
			break;
		case $MouseEvent::MOUSE_RELEASED:
			retargetMouseEvent(met, id, e);
			break;
		case $MouseEvent::MOUSE_CLICKED:
			if (mouseOver == met) {
				retargetMouseEvent(mouseOver, id, e);
			}
			break;
		case $MouseEvent::MOUSE_MOVED:
			retargetMouseEvent(met, id, e);
			break;
		case $MouseEvent::MOUSE_DRAGGED:
			if (isMouseGrab(e)) {
				retargetMouseEvent(met, id, e);
			}
			break;
		case $MouseEvent::MOUSE_WHEEL:
			$init($PlatformLogger$Level);
			if ($nc(LightweightDispatcher::eventLog)->isLoggable($PlatformLogger$Level::FINEST) && (mouseOver != nullptr)) {
				$var($StringBuilder, var$1, $new($StringBuilder));
				var$1->append("retargeting mouse wheel to "_s);
				var$1->append($(mouseOver->getName()));
				var$1->append(", "_s);
				var$1->append($of(mouseOver)->getClass());
				LightweightDispatcher::eventLog->finest($$str(var$1));
			}
			retargetMouseEvent(mouseOver, id, e);
			break;
		}
		if (id != $MouseEvent::MOUSE_WHEEL) {
			e->consume();
		}
	}
	return e->isConsumed();
}

bool LightweightDispatcher::processDropTargetEvent($SunDropTargetEvent* e) {
	$useLocalObjectStack();
	int32_t id = $nc(e)->getID();
	int32_t x = e->getX();
	int32_t y = e->getY();
	if (!$nc(this->nativeContainer)->contains(x, y)) {
		$var($Dimension, d, $nc(this->nativeContainer)->getSize());
		if ($nc(d)->width <= x) {
			x = d->width - 1;
		} else if (x < 0) {
			x = 0;
		}
		if (d->height <= y) {
			y = d->height - 1;
		} else if (y < 0) {
			y = 0;
		}
	}
	$var($Component, mouseOver, $nc(this->nativeContainer)->getDropTargetEventTarget(x, y, $Container::INCLUDE_SELF));
	trackMouseEnterExit(mouseOver, e);
	if (!$equals(mouseOver, this->nativeContainer) && mouseOver != nullptr) {
		switch (id) {
		case $SunDropTargetEvent::MOUSE_ENTERED:
		case $SunDropTargetEvent::MOUSE_EXITED:
			break;
		default:
			retargetMouseEvent(mouseOver, id, e);
			e->consume();
			break;
		}
	}
	return e->isConsumed();
}

void LightweightDispatcher::trackDropTargetEnterExit($Component* targetOver, $MouseEvent* e) {
	$useLocalObjectStack();
	int32_t id = $nc(e)->getID();
	if (id == $MouseEvent::MOUSE_ENTERED && this->isMouseDTInNativeContainer) {
		$nc(this->targetLastEnteredDT)->clear();
	} else if (id == $MouseEvent::MOUSE_ENTERED) {
		this->isMouseDTInNativeContainer = true;
	} else if (id == $MouseEvent::MOUSE_EXITED) {
		this->isMouseDTInNativeContainer = false;
	}
	$var($Component, tle, retargetMouseEnterExit(targetOver, e, $$cast($Component, $nc(this->targetLastEnteredDT)->get()), this->isMouseDTInNativeContainer));
	$set(this, targetLastEnteredDT, $new($WeakReference, tle));
}

void LightweightDispatcher::trackMouseEnterExit($Component* targetOver, $MouseEvent* e) {
	$useLocalObjectStack();
	if ($instanceOf($SunDropTargetEvent, e)) {
		trackDropTargetEnterExit(targetOver, e);
		return;
	}
	int32_t id = $nc(e)->getID();
	if (id != $MouseEvent::MOUSE_EXITED && id != $MouseEvent::MOUSE_DRAGGED && id != LightweightDispatcher::LWD_MOUSE_DRAGGED_OVER && !this->isMouseInNativeContainer) {
		this->isMouseInNativeContainer = true;
		startListeningForOtherDrags();
	} else if (id == $MouseEvent::MOUSE_EXITED) {
		this->isMouseInNativeContainer = false;
		stopListeningForOtherDrags();
	}
	$var($Component, tle, retargetMouseEnterExit(targetOver, e, $$cast($Component, $nc(this->targetLastEntered)->get()), this->isMouseInNativeContainer));
	$set(this, targetLastEntered, $new($WeakReference, tle));
}

$Component* LightweightDispatcher::retargetMouseEnterExit($Component* targetOver, $MouseEvent* e, $Component* lastEntered, bool inNativeContainer) {
	int32_t id = $nc(e)->getID();
	$var($Component, targetEnter, inNativeContainer ? targetOver : ($Component*)nullptr);
	if (lastEntered != targetEnter) {
		if (lastEntered != nullptr) {
			retargetMouseEvent(lastEntered, $MouseEvent::MOUSE_EXITED, e);
		}
		if (id == $MouseEvent::MOUSE_EXITED) {
			e->consume();
		}
		if (targetEnter != nullptr) {
			retargetMouseEvent(targetEnter, $MouseEvent::MOUSE_ENTERED, e);
		}
		if (id == $MouseEvent::MOUSE_ENTERED) {
			e->consume();
		}
	}
	return targetEnter;
}

void LightweightDispatcher::startListeningForOtherDrags() {
	$beforeCallerSensitive();
	$AccessController::doPrivileged($$new($LightweightDispatcher$1, this));
}

void LightweightDispatcher::stopListeningForOtherDrags() {
	$beforeCallerSensitive();
	$AccessController::doPrivileged($$new($LightweightDispatcher$2, this));
}

void LightweightDispatcher::eventDispatched($AWTEvent* e) {
	$useLocalObjectStack();
	bool isForeignDrag = ($instanceOf($MouseEvent, e)) && !($instanceOf($SunDropTargetEvent, e)) && (e->id == $MouseEvent::MOUSE_DRAGGED) && (!$equals(e->getSource(), this->nativeContainer));
	if (!isForeignDrag) {
		return;
	}
	$var($MouseEvent, srcEvent, $cast($MouseEvent, e));
	$var($MouseEvent, me, nullptr);
	$synchronized($nc(this->nativeContainer)->getTreeLock()) {
		$var($Component, srcComponent, $nc(srcEvent)->getComponent());
		if (!$nc(srcComponent)->isShowing()) {
			return;
		}
		$var($Component, c, this->nativeContainer);
		while ((c != nullptr) && !($instanceOf($Window, c))) {
			$assign(c, c->getParent_NoClientCode());
		}
		if ((c == nullptr) || $cast($Window, c)->isModalBlocked()) {
			return;
		}
		$var($Component, var$0, this->nativeContainer);
		int64_t var$1 = srcEvent->getWhen();
		int32_t var$3 = srcEvent->getModifiersEx();
		int32_t var$2 = var$3 | srcEvent->getModifiers();
		int32_t var$4 = srcEvent->getX();
		int32_t var$5 = srcEvent->getY();
		int32_t var$6 = srcEvent->getXOnScreen();
		int32_t var$7 = srcEvent->getYOnScreen();
		int32_t var$8 = srcEvent->getClickCount();
		bool var$9 = srcEvent->isPopupTrigger();
		$assign(me, $new($MouseEvent, var$0, LightweightDispatcher::LWD_MOUSE_DRAGGED_OVER, var$1, var$2, var$4, var$5, var$6, var$7, var$8, var$9, srcEvent->getButton()));
		$var($AWTAccessor$MouseEventAccessor, meAccessor, $AWTAccessor::getMouseEventAccessor());
		$nc(meAccessor)->setCausedByTouchEvent(me, $nc(meAccessor)->isCausedByTouchEvent(srcEvent));
		$cast($AWTEvent, srcEvent)->copyPrivateDataInto(me);
		$var($Point, ptSrcOrigin, srcComponent->getLocationOnScreen());
		if ($AppContext::getAppContext() != $nc(this->nativeContainer)->appContext) {
			$var($MouseEvent, mouseEvent, me);
			$var($Runnable, r, $new($LightweightDispatcher$3, this, mouseEvent, ptSrcOrigin));
			$SunToolkit::executeOnEventHandlerThread(this->nativeContainer, r);
			return;
		} else {
			if (!$nc(this->nativeContainer)->isShowing()) {
				return;
			}
			$var($Point, ptDstOrigin, $nc(this->nativeContainer)->getLocationOnScreen());
			me->translatePoint($nc(ptSrcOrigin)->x - $nc(ptDstOrigin)->x, $nc(ptSrcOrigin)->y - $nc(ptDstOrigin)->y);
		}
	}
	int32_t var$10 = me->getX();
	$var($Component, targetOver, $nc(this->nativeContainer)->getMouseEventTarget(var$10, me->getY(), $Container::INCLUDE_SELF));
	trackMouseEnterExit(targetOver, me);
}

void LightweightDispatcher::retargetMouseEvent($Component* target, int32_t id, $MouseEvent* e) {
	$useLocalObjectStack();
	if (target == nullptr) {
		return;
	}
	int32_t x = $nc(e)->getX();
	int32_t y = e->getY();
	$var($Component, component, nullptr);
	for ($assign(component, target); component != nullptr && !$equals(component, this->nativeContainer); $assign(component, component->getParent())) {
		x -= component->x;
		y -= component->y;
	}
	$var($MouseEvent, retargeted, nullptr);
	if (component != nullptr) {
		if ($instanceOf($SunDropTargetEvent, e)) {
			$assign(retargeted, $new($SunDropTargetEvent, target, id, x, y, $($cast($SunDropTargetEvent, e)->getDispatcher())));
		} else if (id == $MouseEvent::MOUSE_WHEEL) {
			int64_t var$0 = e->getWhen();
			int32_t var$2 = e->getModifiersEx();
			int32_t var$1 = var$2 | e->getModifiers();
			int32_t var$3 = e->getXOnScreen();
			int32_t var$4 = e->getYOnScreen();
			int32_t var$5 = e->getClickCount();
			bool var$6 = e->isPopupTrigger();
			int32_t var$7 = $cast($MouseWheelEvent, e)->getScrollType();
			int32_t var$8 = $cast($MouseWheelEvent, e)->getScrollAmount();
			int32_t var$9 = $cast($MouseWheelEvent, e)->getWheelRotation();
			$assign(retargeted, $new($MouseWheelEvent, target, id, var$0, var$1, x, y, var$3, var$4, var$5, var$6, var$7, var$8, var$9, $cast($MouseWheelEvent, e)->getPreciseWheelRotation()));
		} else {
			int64_t var$10 = e->getWhen();
			int32_t var$12 = e->getModifiersEx();
			int32_t var$11 = var$12 | e->getModifiers();
			int32_t var$13 = e->getXOnScreen();
			int32_t var$14 = e->getYOnScreen();
			int32_t var$15 = e->getClickCount();
			bool var$16 = e->isPopupTrigger();
			$assign(retargeted, $new($MouseEvent, target, id, var$10, var$11, x, y, var$13, var$14, var$15, var$16, e->getButton()));
			$var($AWTAccessor$MouseEventAccessor, meAccessor, $AWTAccessor::getMouseEventAccessor());
			$nc(meAccessor)->setCausedByTouchEvent(retargeted, $nc(meAccessor)->isCausedByTouchEvent(e));
		}
		$cast($AWTEvent, e)->copyPrivateDataInto(retargeted);
		if ($equals(target, this->nativeContainer)) {
			$nc($cast($Container, target))->dispatchEventToSelf(retargeted);
		} else {
			if (!LightweightDispatcher::$assertionsDisabled && !($AppContext::getAppContext() == $nc(target)->appContext)) {
				$throwNew($AssertionError);
			}
			if ($nc(this->nativeContainer)->modalComp != nullptr) {
				if ($cast($Container, this->nativeContainer->modalComp)->isAncestorOf(target)) {
					$nc(target)->dispatchEvent(retargeted);
				} else {
					e->consume();
				}
			} else {
				$nc(target)->dispatchEvent(retargeted);
			}
		}
		if (id == $MouseEvent::MOUSE_WHEEL && $nc(retargeted)->isConsumed()) {
			e->consume();
		}
	}
}

void LightweightDispatcher::clinit$($Class* clazz) {
	$useLocalObjectStack();
	LightweightDispatcher::$assertionsDisabled = !LightweightDispatcher::class$->desiredAssertionStatus();
	$assignStatic(LightweightDispatcher::eventLog, $PlatformLogger::getLogger("java.awt.event.LightweightDispatcher"_s));
	{
		$var($ints, buttonsDownMask, $$nc($AWTAccessor::getInputEventAccessor())->getButtonDownMasks());
		int32_t mask = 0;
		{
			$var($ints, arr$, buttonsDownMask);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				int32_t buttonDownMask = arr$->get(i$);
				{
					mask |= buttonDownMask;
				}
			}
		}
		LightweightDispatcher::BUTTONS_DOWN_MASK = mask;
	}
}

LightweightDispatcher::LightweightDispatcher() {
}

$Class* LightweightDispatcher::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LightweightDispatcher, $assertionsDisabled)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LightweightDispatcher, serialVersionUID)},
		{"LWD_MOUSE_DRAGGED_OVER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LightweightDispatcher, LWD_MOUSE_DRAGGED_OVER)},
		{"eventLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LightweightDispatcher, eventLog)},
		{"BUTTONS_DOWN_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LightweightDispatcher, BUTTONS_DOWN_MASK)},
		{"nativeContainer", "Ljava/awt/Container;", nullptr, $PRIVATE, $field(LightweightDispatcher, nativeContainer)},
		{"focus", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(LightweightDispatcher, focus)},
		{"mouseEventTarget", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/awt/Component;>;", $PRIVATE | $TRANSIENT, $field(LightweightDispatcher, mouseEventTarget)},
		{"targetLastEntered", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/awt/Component;>;", $PRIVATE | $TRANSIENT, $field(LightweightDispatcher, targetLastEntered)},
		{"targetLastEnteredDT", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/awt/Component;>;", $PRIVATE | $TRANSIENT, $field(LightweightDispatcher, targetLastEnteredDT)},
		{"isMouseInNativeContainer", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(LightweightDispatcher, isMouseInNativeContainer)},
		{"isMouseDTInNativeContainer", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(LightweightDispatcher, isMouseDTInNativeContainer)},
		{"nativeCursor", "Ljava/awt/Cursor;", nullptr, $PRIVATE, $field(LightweightDispatcher, nativeCursor)},
		{"eventMask", "J", nullptr, $PRIVATE, $field(LightweightDispatcher, eventMask)},
		{"PROXY_EVENT_MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LightweightDispatcher, PROXY_EVENT_MASK)},
		{"MOUSE_MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LightweightDispatcher, MOUSE_MASK)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/awt/Container;)V", nullptr, 0, $method(LightweightDispatcher, init$, void, $Container*)},
		{"dispatchEvent", "(Ljava/awt/AWTEvent;)Z", nullptr, 0, $virtualMethod(LightweightDispatcher, dispatchEvent, bool, $AWTEvent*)},
		{"dispose", "()V", nullptr, 0, $virtualMethod(LightweightDispatcher, dispose, void)},
		{"enableEvents", "(J)V", nullptr, 0, $virtualMethod(LightweightDispatcher, enableEvents, void, int64_t)},
		{"eventDispatched", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC, $virtualMethod(LightweightDispatcher, eventDispatched, void, $AWTEvent*)},
		{"isMouseGrab", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $PRIVATE, $method(LightweightDispatcher, isMouseGrab, bool, $MouseEvent*)},
		{"processDropTargetEvent", "(Lsun/awt/dnd/SunDropTargetEvent;)Z", nullptr, $PRIVATE, $method(LightweightDispatcher, processDropTargetEvent, bool, $SunDropTargetEvent*)},
		{"processMouseEvent", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $PRIVATE, $method(LightweightDispatcher, processMouseEvent, bool, $MouseEvent*)},
		{"retargetMouseEnterExit", "(Ljava/awt/Component;Ljava/awt/event/MouseEvent;Ljava/awt/Component;Z)Ljava/awt/Component;", nullptr, $PRIVATE, $method(LightweightDispatcher, retargetMouseEnterExit, $Component*, $Component*, $MouseEvent*, $Component*, bool)},
		{"retargetMouseEvent", "(Ljava/awt/Component;ILjava/awt/event/MouseEvent;)V", nullptr, 0, $virtualMethod(LightweightDispatcher, retargetMouseEvent, void, $Component*, int32_t, $MouseEvent*)},
		{"startListeningForOtherDrags", "()V", nullptr, $PRIVATE, $method(LightweightDispatcher, startListeningForOtherDrags, void)},
		{"stopListeningForOtherDrags", "()V", nullptr, $PRIVATE, $method(LightweightDispatcher, stopListeningForOtherDrags, void)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"trackDropTargetEnterExit", "(Ljava/awt/Component;Ljava/awt/event/MouseEvent;)V", nullptr, $PRIVATE, $method(LightweightDispatcher, trackDropTargetEnterExit, void, $Component*, $MouseEvent*)},
		{"trackMouseEnterExit", "(Ljava/awt/Component;Ljava/awt/event/MouseEvent;)V", nullptr, $PRIVATE, $method(LightweightDispatcher, trackMouseEnterExit, void, $Component*, $MouseEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.LightweightDispatcher$3", nullptr, nullptr, 0},
		{"java.awt.LightweightDispatcher$2", nullptr, nullptr, 0},
		{"java.awt.LightweightDispatcher$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.LightweightDispatcher",
		"java.lang.Object",
		"java.io.Serializable,java.awt.event.AWTEventListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.awt.LightweightDispatcher$3,java.awt.LightweightDispatcher$2,java.awt.LightweightDispatcher$1"
	};
	$loadClass(LightweightDispatcher, name, initialize, &classInfo$$, LightweightDispatcher::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(LightweightDispatcher));
	});
	return class$;
}

$Class* LightweightDispatcher::class$ = nullptr;

	} // awt
} // java