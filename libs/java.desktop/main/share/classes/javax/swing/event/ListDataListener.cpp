#include <javax/swing/event/ListDataListener.h>
#include <javax/swing/event/ListDataEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListDataEvent = ::javax::swing::event::ListDataEvent;

namespace javax {
	namespace swing {
		namespace event {

$Class* ListDataListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"contentsChanged", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListDataListener, contentsChanged, void, $ListDataEvent*)},
		{"intervalAdded", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListDataListener, intervalAdded, void, $ListDataEvent*)},
		{"intervalRemoved", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListDataListener, intervalRemoved, void, $ListDataEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.event.ListDataListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(ListDataListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ListDataListener);
	});
	return class$;
}

$Class* ListDataListener::class$ = nullptr;

		} // event
	} // swing
} // javax