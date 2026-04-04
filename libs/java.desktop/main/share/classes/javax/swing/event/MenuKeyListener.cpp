#include <javax/swing/event/MenuKeyListener.h>
#include <javax/swing/event/MenuKeyEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MenuKeyEvent = ::javax::swing::event::MenuKeyEvent;

namespace javax {
	namespace swing {
		namespace event {

$Class* MenuKeyListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"menuKeyPressed", "(Ljavax/swing/event/MenuKeyEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuKeyListener, menuKeyPressed, void, $MenuKeyEvent*)},
		{"menuKeyReleased", "(Ljavax/swing/event/MenuKeyEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuKeyListener, menuKeyReleased, void, $MenuKeyEvent*)},
		{"menuKeyTyped", "(Ljavax/swing/event/MenuKeyEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuKeyListener, menuKeyTyped, void, $MenuKeyEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.event.MenuKeyListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(MenuKeyListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MenuKeyListener);
	});
	return class$;
}

$Class* MenuKeyListener::class$ = nullptr;

		} // event
	} // swing
} // javax