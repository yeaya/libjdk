#include <java/awt/event/TextEvent.h>
#include <java/awt/AWTEvent.h>
#include <jcpp.h>

#undef TEXT_FIRST
#undef TEXT_LAST
#undef TEXT_VALUE_CHANGED

using $AWTEvent = ::java::awt::AWTEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

void TextEvent::init$(Object$* source, int32_t id) {
	$AWTEvent::init$(source, id);
}

$String* TextEvent::paramString() {
	$var($String, typeStr, nullptr);
	switch (this->id) {
	case TextEvent::TEXT_VALUE_CHANGED:
		$assign(typeStr, "TEXT_VALUE_CHANGED"_s);
		break;
	default:
		$assign(typeStr, "unknown type"_s);
	}
	return typeStr;
}

TextEvent::TextEvent() {
}

$Class* TextEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"TEXT_FIRST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TextEvent, TEXT_FIRST)},
		{"TEXT_LAST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TextEvent, TEXT_LAST)},
		{"TEXT_VALUE_CHANGED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TextEvent, TEXT_VALUE_CHANGED)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TextEvent, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC, $method(TextEvent, init$, void, Object$*, int32_t)},
		{"paramString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TextEvent, paramString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.event.TextEvent",
		"java.awt.AWTEvent",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TextEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TextEvent);
	});
	return class$;
}

$Class* TextEvent::class$ = nullptr;

		} // event
	} // awt
} // java