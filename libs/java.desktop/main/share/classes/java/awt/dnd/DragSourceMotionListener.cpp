#include <java/awt/dnd/DragSourceMotionListener.h>
#include <java/awt/dnd/DragSourceDragEvent.h>
#include <jcpp.h>

using $DragSourceDragEvent = ::java::awt::dnd::DragSourceDragEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace dnd {

$Class* DragSourceMotionListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"dragMouseMoved", "(Ljava/awt/dnd/DragSourceDragEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DragSourceMotionListener, dragMouseMoved, void, $DragSourceDragEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.dnd.DragSourceMotionListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(DragSourceMotionListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DragSourceMotionListener);
	});
	return class$;
}

$Class* DragSourceMotionListener::class$ = nullptr;

		} // dnd
	} // awt
} // java