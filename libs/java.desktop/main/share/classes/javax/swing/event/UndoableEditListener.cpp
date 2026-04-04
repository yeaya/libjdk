#include <javax/swing/event/UndoableEditListener.h>
#include <javax/swing/event/UndoableEditEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UndoableEditEvent = ::javax::swing::event::UndoableEditEvent;

namespace javax {
	namespace swing {
		namespace event {

$Class* UndoableEditListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"undoableEditHappened", "(Ljavax/swing/event/UndoableEditEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UndoableEditListener, undoableEditHappened, void, $UndoableEditEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.event.UndoableEditListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(UndoableEditListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UndoableEditListener);
	});
	return class$;
}

$Class* UndoableEditListener::class$ = nullptr;

		} // event
	} // swing
} // javax