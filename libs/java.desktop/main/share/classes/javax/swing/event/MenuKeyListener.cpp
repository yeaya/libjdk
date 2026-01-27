#include <javax/swing/event/MenuKeyListener.h>

#include <javax/swing/event/MenuKeyEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MenuKeyEvent = ::javax::swing::event::MenuKeyEvent;

namespace javax {
	namespace swing {
		namespace event {

$MethodInfo _MenuKeyListener_MethodInfo_[] = {
	{"menuKeyPressed", "(Ljavax/swing/event/MenuKeyEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuKeyListener, menuKeyPressed, void, $MenuKeyEvent*)},
	{"menuKeyReleased", "(Ljavax/swing/event/MenuKeyEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuKeyListener, menuKeyReleased, void, $MenuKeyEvent*)},
	{"menuKeyTyped", "(Ljavax/swing/event/MenuKeyEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuKeyListener, menuKeyTyped, void, $MenuKeyEvent*)},
	{}
};

$ClassInfo _MenuKeyListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.event.MenuKeyListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_MenuKeyListener_MethodInfo_
};

$Object* allocate$MenuKeyListener($Class* clazz) {
	return $of($alloc(MenuKeyListener));
}

$Class* MenuKeyListener::load$($String* name, bool initialize) {
	$loadClass(MenuKeyListener, name, initialize, &_MenuKeyListener_ClassInfo_, allocate$MenuKeyListener);
	return class$;
}

$Class* MenuKeyListener::class$ = nullptr;

		} // event
	} // swing
} // javax