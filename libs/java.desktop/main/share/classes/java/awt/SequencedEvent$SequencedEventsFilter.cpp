#include <java/awt/SequencedEvent$SequencedEventsFilter.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/EventFilter$FilterAction.h>
#include <java/awt/SentEvent.h>
#include <java/awt/SequencedEvent.h>
#include <java/util/AbstractSequentialList.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <jcpp.h>

#undef ACCEPT
#undef ID
#undef REJECT

using $AWTEvent = ::java::awt::AWTEvent;
using $EventFilter$FilterAction = ::java::awt::EventFilter$FilterAction;
using $SentEvent = ::java::awt::SentEvent;
using $SequencedEvent = ::java::awt::SequencedEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace awt {

void SequencedEvent$SequencedEventsFilter::init$($SequencedEvent* currentSequencedEvent) {
	$set(this, currentSequencedEvent, currentSequencedEvent);
}

$EventFilter$FilterAction* SequencedEvent$SequencedEventsFilter::acceptEvent($AWTEvent* ev) {
	$useLocalObjectStack();
	if ($nc(ev)->getID() == 1006) {
		$load($SequencedEvent);
		$synchronized($SequencedEvent::class$) {
			$init($SequencedEvent);
			$var($Iterator, i$, $nc($SequencedEvent::list)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($SequencedEvent, iev, $cast($SequencedEvent, i$->next()));
				if ($nc(iev)->equals(this->currentSequencedEvent)) {
					break;
				} else if (iev->equals(ev)) {
					$init($EventFilter$FilterAction);
					return $EventFilter$FilterAction::ACCEPT;
				}
			}
		}
	} else if (ev->getID() == $SentEvent::ID) {
		$init($EventFilter$FilterAction);
		return $EventFilter$FilterAction::ACCEPT;
	}
	$nc($nc(this->currentSequencedEvent)->pendingEvents)->add(ev);
	$init($EventFilter$FilterAction);
	return $EventFilter$FilterAction::REJECT;
}

SequencedEvent$SequencedEventsFilter::SequencedEvent$SequencedEventsFilter() {
}

$Class* SequencedEvent$SequencedEventsFilter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"currentSequencedEvent", "Ljava/awt/SequencedEvent;", nullptr, $PRIVATE | $FINAL, $field(SequencedEvent$SequencedEventsFilter, currentSequencedEvent)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/SequencedEvent;)V", nullptr, $PRIVATE, $method(SequencedEvent$SequencedEventsFilter, init$, void, $SequencedEvent*)},
		{"acceptEvent", "(Ljava/awt/AWTEvent;)Ljava/awt/EventFilter$FilterAction;", nullptr, $PUBLIC, $virtualMethod(SequencedEvent$SequencedEventsFilter, acceptEvent, $EventFilter$FilterAction*, $AWTEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.SequencedEvent$SequencedEventsFilter", "java.awt.SequencedEvent", "SequencedEventsFilter", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.awt.SequencedEvent$SequencedEventsFilter",
		"java.lang.Object",
		"java.awt.EventFilter",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.SequencedEvent"
	};
	$loadClass(SequencedEvent$SequencedEventsFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SequencedEvent$SequencedEventsFilter);
	});
	return class$;
}

$Class* SequencedEvent$SequencedEventsFilter::class$ = nullptr;

	} // awt
} // java