#include <java/awt/dnd/DragGestureListener.h>
#include <java/awt/dnd/DragGestureEvent.h>
#include <jcpp.h>

using $DragGestureEvent = ::java::awt::dnd::DragGestureEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace dnd {

$Class* DragGestureListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"dragGestureRecognized", "(Ljava/awt/dnd/DragGestureEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DragGestureListener, dragGestureRecognized, void, $DragGestureEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.dnd.DragGestureListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(DragGestureListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DragGestureListener);
	});
	return class$;
}

$Class* DragGestureListener::class$ = nullptr;

		} // dnd
	} // awt
} // java