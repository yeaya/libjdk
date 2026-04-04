#include <java/awt/event/ActionListener.h>
#include <java/awt/event/ActionEvent.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$Class* ActionListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ActionListener, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.event.ActionListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(ActionListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ActionListener);
	});
	return class$;
}

$Class* ActionListener::class$ = nullptr;

		} // event
	} // awt
} // java