#include <sun/awt/dnd/SunDropTargetEvent.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <sun/awt/dnd/SunDropTargetContextPeer$EventDispatcher.h>
#include <jcpp.h>

#undef MOUSE_DROPPED
#undef NOBUTTON

using $Component = ::java::awt::Component;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunDropTargetContextPeer$EventDispatcher = ::sun::awt::dnd::SunDropTargetContextPeer$EventDispatcher;

namespace sun {
	namespace awt {
		namespace dnd {

void SunDropTargetEvent::init$($Component* source, int32_t id, int32_t x, int32_t y, $SunDropTargetContextPeer$EventDispatcher* d) {
	$MouseEvent::init$(source, id, $System::currentTimeMillis(), 0, x, y, 0, 0, 0, false, $MouseEvent::NOBUTTON);
	$set(this, dispatcher, d);
	$nc(this->dispatcher)->registerEvent(this);
}

void SunDropTargetEvent::dispatch() {
	$var($Throwable, var$0, nullptr);
	try {
		$nc(this->dispatcher)->dispatchEvent(this);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		dispose();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void SunDropTargetEvent::consume() {
	bool was_consumed = isConsumed();
	$MouseEvent::consume();
	if (!was_consumed && isConsumed()) {
		dispose();
	}
}

void SunDropTargetEvent::dispose() {
	$nc(this->dispatcher)->unregisterEvent(this);
}

$SunDropTargetContextPeer$EventDispatcher* SunDropTargetEvent::getDispatcher() {
	return this->dispatcher;
}

$String* SunDropTargetEvent::paramString() {
	$useLocalObjectStack();
	$var($String, typeStr, nullptr);
	switch (this->id) {
	case SunDropTargetEvent::MOUSE_DROPPED:
		$assign(typeStr, "MOUSE_DROPPED"_s);
		break;
	default:
		return $MouseEvent::paramString();
	}
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append(typeStr);
	var$0->append(",("_s);
	var$0->append(getX());
	var$0->append(","_s);
	var$0->append(getY());
	var$0->append(")"_s);
	return $str(var$0);
}

SunDropTargetEvent::SunDropTargetEvent() {
}

$Class* SunDropTargetEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"MOUSE_DROPPED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunDropTargetEvent, MOUSE_DROPPED)},
		{"dispatcher", "Lsun/awt/dnd/SunDropTargetContextPeer$EventDispatcher;", nullptr, $PRIVATE | $FINAL, $field(SunDropTargetEvent, dispatcher)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Component;IIILsun/awt/dnd/SunDropTargetContextPeer$EventDispatcher;)V", nullptr, $PUBLIC, $method(SunDropTargetEvent, init$, void, $Component*, int32_t, int32_t, int32_t, $SunDropTargetContextPeer$EventDispatcher*)},
		{"consume", "()V", nullptr, $PUBLIC, $virtualMethod(SunDropTargetEvent, consume, void)},
		{"dispatch", "()V", nullptr, $PUBLIC, $method(SunDropTargetEvent, dispatch, void)},
		{"dispose", "()V", nullptr, $PUBLIC, $method(SunDropTargetEvent, dispose, void)},
		{"getDispatcher", "()Lsun/awt/dnd/SunDropTargetContextPeer$EventDispatcher;", nullptr, $PUBLIC, $method(SunDropTargetEvent, getDispatcher, $SunDropTargetContextPeer$EventDispatcher*)},
		{"paramString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SunDropTargetEvent, paramString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.awt.dnd.SunDropTargetEvent",
		"java.awt.event.MouseEvent",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SunDropTargetEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SunDropTargetEvent);
	});
	return class$;
}

$Class* SunDropTargetEvent::class$ = nullptr;

		} // dnd
	} // awt
} // sun