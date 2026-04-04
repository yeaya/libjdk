#include <javax/swing/event/PopupMenuListener.h>
#include <javax/swing/event/PopupMenuEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PopupMenuEvent = ::javax::swing::event::PopupMenuEvent;

namespace javax {
	namespace swing {
		namespace event {

$Class* PopupMenuListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"popupMenuCanceled", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PopupMenuListener, popupMenuCanceled, void, $PopupMenuEvent*)},
		{"popupMenuWillBecomeInvisible", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PopupMenuListener, popupMenuWillBecomeInvisible, void, $PopupMenuEvent*)},
		{"popupMenuWillBecomeVisible", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PopupMenuListener, popupMenuWillBecomeVisible, void, $PopupMenuEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.event.PopupMenuListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(PopupMenuListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PopupMenuListener);
	});
	return class$;
}

$Class* PopupMenuListener::class$ = nullptr;

		} // event
	} // swing
} // javax