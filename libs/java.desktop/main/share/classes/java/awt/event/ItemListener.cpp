#include <java/awt/event/ItemListener.h>
#include <java/awt/event/ItemEvent.h>
#include <jcpp.h>

using $ItemEvent = ::java::awt::event::ItemEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$Class* ItemListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"itemStateChanged", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ItemListener, itemStateChanged, void, $ItemEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.event.ItemListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(ItemListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ItemListener);
	});
	return class$;
}

$Class* ItemListener::class$ = nullptr;

		} // event
	} // awt
} // java