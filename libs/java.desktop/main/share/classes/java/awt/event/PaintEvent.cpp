#include <java/awt/event/PaintEvent.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ComponentEvent.h>
#include <jcpp.h>

#undef PAINT
#undef PAINT_FIRST
#undef PAINT_LAST
#undef UPDATE

using $Component = ::java::awt::Component;
using $Rectangle = ::java::awt::Rectangle;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

void PaintEvent::init$($Component* source, int32_t id, $Rectangle* updateRect) {
	$ComponentEvent::init$(source, id);
	$set(this, updateRect, updateRect);
}

$Rectangle* PaintEvent::getUpdateRect() {
	return this->updateRect;
}

void PaintEvent::setUpdateRect($Rectangle* updateRect) {
	$set(this, updateRect, updateRect);
}

$String* PaintEvent::paramString() {
	$useLocalObjectStack();
	$var($String, typeStr, nullptr);
	switch (this->id) {
	case PaintEvent::PAINT:
		$assign(typeStr, "PAINT"_s);
		break;
	case PaintEvent::UPDATE:
		$assign(typeStr, "UPDATE"_s);
		break;
	default:
		$assign(typeStr, "unknown type"_s);
	}
	return $str({typeStr, ",updateRect="_s, (this->updateRect != nullptr ? $(this->updateRect->toString()) : "null"_s)});
}

PaintEvent::PaintEvent() {
}

$Class* PaintEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"PAINT_FIRST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PaintEvent, PAINT_FIRST)},
		{"PAINT_LAST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PaintEvent, PAINT_LAST)},
		{"PAINT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PaintEvent, PAINT)},
		{"UPDATE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PaintEvent, UPDATE)},
		{"updateRect", "Ljava/awt/Rectangle;", nullptr, 0, $field(PaintEvent, updateRect)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PaintEvent, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Component;ILjava/awt/Rectangle;)V", nullptr, $PUBLIC, $method(PaintEvent, init$, void, $Component*, int32_t, $Rectangle*)},
		{"getUpdateRect", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC, $virtualMethod(PaintEvent, getUpdateRect, $Rectangle*)},
		{"paramString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PaintEvent, paramString, $String*)},
		{"setUpdateRect", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC, $virtualMethod(PaintEvent, setUpdateRect, void, $Rectangle*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.event.PaintEvent",
		"java.awt.event.ComponentEvent",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PaintEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PaintEvent);
	});
	return class$;
}

$Class* PaintEvent::class$ = nullptr;

		} // event
	} // awt
} // java