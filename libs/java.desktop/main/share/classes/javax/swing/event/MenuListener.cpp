#include <javax/swing/event/MenuListener.h>

#include <javax/swing/event/MenuEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MenuEvent = ::javax::swing::event::MenuEvent;

namespace javax {
	namespace swing {
		namespace event {

$MethodInfo _MenuListener_MethodInfo_[] = {
	{"menuCanceled", "(Ljavax/swing/event/MenuEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuListener, menuCanceled, void, $MenuEvent*)},
	{"menuDeselected", "(Ljavax/swing/event/MenuEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuListener, menuDeselected, void, $MenuEvent*)},
	{"menuSelected", "(Ljavax/swing/event/MenuEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuListener, menuSelected, void, $MenuEvent*)},
	{}
};

$ClassInfo _MenuListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.event.MenuListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_MenuListener_MethodInfo_
};

$Object* allocate$MenuListener($Class* clazz) {
	return $of($alloc(MenuListener));
}

$Class* MenuListener::load$($String* name, bool initialize) {
	$loadClass(MenuListener, name, initialize, &_MenuListener_ClassInfo_, allocate$MenuListener);
	return class$;
}

$Class* MenuListener::class$ = nullptr;

		} // event
	} // swing
} // javax