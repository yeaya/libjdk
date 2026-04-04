#include <javax/swing/event/MenuDragMouseListener.h>
#include <javax/swing/event/MenuDragMouseEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MenuDragMouseEvent = ::javax::swing::event::MenuDragMouseEvent;

namespace javax {
	namespace swing {
		namespace event {

$Class* MenuDragMouseListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"menuDragMouseDragged", "(Ljavax/swing/event/MenuDragMouseEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuDragMouseListener, menuDragMouseDragged, void, $MenuDragMouseEvent*)},
		{"menuDragMouseEntered", "(Ljavax/swing/event/MenuDragMouseEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuDragMouseListener, menuDragMouseEntered, void, $MenuDragMouseEvent*)},
		{"menuDragMouseExited", "(Ljavax/swing/event/MenuDragMouseEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuDragMouseListener, menuDragMouseExited, void, $MenuDragMouseEvent*)},
		{"menuDragMouseReleased", "(Ljavax/swing/event/MenuDragMouseEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuDragMouseListener, menuDragMouseReleased, void, $MenuDragMouseEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.event.MenuDragMouseListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(MenuDragMouseListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MenuDragMouseListener);
	});
	return class$;
}

$Class* MenuDragMouseListener::class$ = nullptr;

		} // event
	} // swing
} // javax