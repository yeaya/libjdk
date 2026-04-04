#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/event/ChangeEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;

namespace javax {
	namespace swing {
		namespace event {

$Class* ChangeListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ChangeListener, stateChanged, void, $ChangeEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.event.ChangeListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(ChangeListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ChangeListener);
	});
	return class$;
}

$Class* ChangeListener::class$ = nullptr;

		} // event
	} // swing
} // javax