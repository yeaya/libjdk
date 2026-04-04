#include <java/awt/event/ComponentEvent.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Rectangle.h>
#include <java/util/EventObject.h>
#include <jcpp.h>

#undef COMPONENT_FIRST
#undef COMPONENT_HIDDEN
#undef COMPONENT_LAST
#undef COMPONENT_MOVED
#undef COMPONENT_RESIZED
#undef COMPONENT_SHOWN

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

void ComponentEvent::init$($Component* source, int32_t id) {
	$AWTEvent::init$(source, id);
}

$Component* ComponentEvent::getComponent() {
	return ($instanceOf($Component, this->source)) ? $cast($Component, this->source) : ($Component*)nullptr;
}

$String* ComponentEvent::paramString() {
	$useLocalObjectStack();
	$var($String, typeStr, nullptr);
	$var($Rectangle, b, this->source != nullptr ? $cast($Component, this->source)->getBounds() : ($Rectangle*)nullptr);
	switch (this->id) {
	case ComponentEvent::COMPONENT_SHOWN:
		$assign(typeStr, "COMPONENT_SHOWN"_s);
		break;
	case ComponentEvent::COMPONENT_HIDDEN:
		$assign(typeStr, "COMPONENT_HIDDEN"_s);
		break;
	case ComponentEvent::COMPONENT_MOVED:
		$assign(typeStr, $str({"COMPONENT_MOVED ("_s, $$str($nc(b)->x), ","_s, $$str($nc(b)->y), " "_s, $$str($nc(b)->width), "x"_s, $$str($nc(b)->height), ")"_s}));
		break;
	case ComponentEvent::COMPONENT_RESIZED:
		$assign(typeStr, $str({"COMPONENT_RESIZED ("_s, $$str($nc(b)->x), ","_s, $$str($nc(b)->y), " "_s, $$str($nc(b)->width), "x"_s, $$str($nc(b)->height), ")"_s}));
		break;
	default:
		$assign(typeStr, "unknown type"_s);
	}
	return typeStr;
}

ComponentEvent::ComponentEvent() {
}

$Class* ComponentEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"COMPONENT_FIRST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ComponentEvent, COMPONENT_FIRST)},
		{"COMPONENT_LAST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ComponentEvent, COMPONENT_LAST)},
		{"COMPONENT_MOVED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ComponentEvent, COMPONENT_MOVED)},
		{"COMPONENT_RESIZED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ComponentEvent, COMPONENT_RESIZED)},
		{"COMPONENT_SHOWN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ComponentEvent, COMPONENT_SHOWN)},
		{"COMPONENT_HIDDEN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ComponentEvent, COMPONENT_HIDDEN)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ComponentEvent, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Component;I)V", nullptr, $PUBLIC, $method(ComponentEvent, init$, void, $Component*, int32_t)},
		{"getComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(ComponentEvent, getComponent, $Component*)},
		{"paramString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ComponentEvent, paramString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.event.ComponentEvent",
		"java.awt.AWTEvent",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ComponentEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ComponentEvent);
	});
	return class$;
}

$Class* ComponentEvent::class$ = nullptr;

		} // event
	} // awt
} // java