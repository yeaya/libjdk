#include <javax/swing/event/TreeSelectionListener.h>
#include <javax/swing/event/TreeSelectionEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TreeSelectionEvent = ::javax::swing::event::TreeSelectionEvent;

namespace javax {
	namespace swing {
		namespace event {

$Class* TreeSelectionListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"valueChanged", "(Ljavax/swing/event/TreeSelectionEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeSelectionListener, valueChanged, void, $TreeSelectionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.event.TreeSelectionListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(TreeSelectionListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TreeSelectionListener);
	});
	return class$;
}

$Class* TreeSelectionListener::class$ = nullptr;

		} // event
	} // swing
} // javax