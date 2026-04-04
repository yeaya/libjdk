#include <javax/swing/event/ListSelectionListener.h>
#include <javax/swing/event/ListSelectionEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListSelectionEvent = ::javax::swing::event::ListSelectionEvent;

namespace javax {
	namespace swing {
		namespace event {

$Class* ListSelectionListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"valueChanged", "(Ljavax/swing/event/ListSelectionEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListSelectionListener, valueChanged, void, $ListSelectionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.event.ListSelectionListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(ListSelectionListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ListSelectionListener);
	});
	return class$;
}

$Class* ListSelectionListener::class$ = nullptr;

		} // event
	} // swing
} // javax