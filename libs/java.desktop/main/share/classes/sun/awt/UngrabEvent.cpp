#include <sun/awt/UngrabEvent.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/util/EventObject.h>
#include <jcpp.h>

#undef UNGRAB_EVENT_ID

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

void UngrabEvent::init$($Component* source) {
	$AWTEvent::init$(source, UngrabEvent::UNGRAB_EVENT_ID);
}

$String* UngrabEvent::toString() {
	return $str({"sun.awt.UngrabEvent["_s, $(getSource()), "]"_s});
}

UngrabEvent::UngrabEvent() {
}

$Class* UngrabEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"UNGRAB_EVENT_ID", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UngrabEvent, UNGRAB_EVENT_ID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $method(UngrabEvent, init$, void, $Component*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UngrabEvent, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.UngrabEvent",
		"java.awt.AWTEvent",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UngrabEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UngrabEvent);
	});
	return class$;
}

$Class* UngrabEvent::class$ = nullptr;

	} // awt
} // sun