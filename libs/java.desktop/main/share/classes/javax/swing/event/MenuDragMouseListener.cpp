#include <javax/swing/event/MenuDragMouseListener.h>

#include <javax/swing/event/MenuDragMouseEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MenuDragMouseEvent = ::javax::swing::event::MenuDragMouseEvent;

namespace javax {
	namespace swing {
		namespace event {

$MethodInfo _MenuDragMouseListener_MethodInfo_[] = {
	{"menuDragMouseDragged", "(Ljavax/swing/event/MenuDragMouseEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuDragMouseListener, menuDragMouseDragged, void, $MenuDragMouseEvent*)},
	{"menuDragMouseEntered", "(Ljavax/swing/event/MenuDragMouseEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuDragMouseListener, menuDragMouseEntered, void, $MenuDragMouseEvent*)},
	{"menuDragMouseExited", "(Ljavax/swing/event/MenuDragMouseEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuDragMouseListener, menuDragMouseExited, void, $MenuDragMouseEvent*)},
	{"menuDragMouseReleased", "(Ljavax/swing/event/MenuDragMouseEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuDragMouseListener, menuDragMouseReleased, void, $MenuDragMouseEvent*)},
	{}
};

$ClassInfo _MenuDragMouseListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.event.MenuDragMouseListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_MenuDragMouseListener_MethodInfo_
};

$Object* allocate$MenuDragMouseListener($Class* clazz) {
	return $of($alloc(MenuDragMouseListener));
}

$Class* MenuDragMouseListener::load$($String* name, bool initialize) {
	$loadClass(MenuDragMouseListener, name, initialize, &_MenuDragMouseListener_ClassInfo_, allocate$MenuDragMouseListener);
	return class$;
}

$Class* MenuDragMouseListener::class$ = nullptr;

		} // event
	} // swing
} // javax