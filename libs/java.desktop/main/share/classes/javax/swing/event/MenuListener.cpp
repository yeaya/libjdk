#include <javax/swing/event/MenuListener.h>
#include <javax/swing/event/MenuEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MenuEvent = ::javax::swing::event::MenuEvent;

namespace javax {
	namespace swing {
		namespace event {

$Class* MenuListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"menuCanceled", "(Ljavax/swing/event/MenuEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuListener, menuCanceled, void, $MenuEvent*)},
		{"menuDeselected", "(Ljavax/swing/event/MenuEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuListener, menuDeselected, void, $MenuEvent*)},
		{"menuSelected", "(Ljavax/swing/event/MenuEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuListener, menuSelected, void, $MenuEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.event.MenuListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(MenuListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MenuListener);
	});
	return class$;
}

$Class* MenuListener::class$ = nullptr;

		} // event
	} // swing
} // javax