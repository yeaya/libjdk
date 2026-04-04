#include <javax/swing/event/AncestorListener.h>
#include <javax/swing/event/AncestorEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AncestorEvent = ::javax::swing::event::AncestorEvent;

namespace javax {
	namespace swing {
		namespace event {

$Class* AncestorListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"ancestorAdded", "(Ljavax/swing/event/AncestorEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AncestorListener, ancestorAdded, void, $AncestorEvent*)},
		{"ancestorMoved", "(Ljavax/swing/event/AncestorEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AncestorListener, ancestorMoved, void, $AncestorEvent*)},
		{"ancestorRemoved", "(Ljavax/swing/event/AncestorEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AncestorListener, ancestorRemoved, void, $AncestorEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.event.AncestorListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(AncestorListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AncestorListener);
	});
	return class$;
}

$Class* AncestorListener::class$ = nullptr;

		} // event
	} // swing
} // javax