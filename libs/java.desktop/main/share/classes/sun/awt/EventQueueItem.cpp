#include <sun/awt/EventQueueItem.h>
#include <java/awt/AWTEvent.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

void EventQueueItem::init$($AWTEvent* evt) {
	$set(this, event, evt);
}

EventQueueItem::EventQueueItem() {
}

$Class* EventQueueItem::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"event", "Ljava/awt/AWTEvent;", nullptr, $PUBLIC, $field(EventQueueItem, event)},
		{"next", "Lsun/awt/EventQueueItem;", nullptr, $PUBLIC, $field(EventQueueItem, next)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC, $method(EventQueueItem, init$, void, $AWTEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.EventQueueItem",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(EventQueueItem, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EventQueueItem);
	});
	return class$;
}

$Class* EventQueueItem::class$ = nullptr;

	} // awt
} // sun