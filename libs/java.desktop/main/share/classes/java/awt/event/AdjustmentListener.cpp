#include <java/awt/event/AdjustmentListener.h>
#include <java/awt/event/AdjustmentEvent.h>
#include <jcpp.h>

using $AdjustmentEvent = ::java::awt::event::AdjustmentEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$Class* AdjustmentListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"adjustmentValueChanged", "(Ljava/awt/event/AdjustmentEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AdjustmentListener, adjustmentValueChanged, void, $AdjustmentEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.event.AdjustmentListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(AdjustmentListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AdjustmentListener);
	});
	return class$;
}

$Class* AdjustmentListener::class$ = nullptr;

		} // event
	} // awt
} // java