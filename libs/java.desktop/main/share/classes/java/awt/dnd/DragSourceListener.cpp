#include <java/awt/dnd/DragSourceListener.h>
#include <java/awt/dnd/DragSourceDragEvent.h>
#include <java/awt/dnd/DragSourceDropEvent.h>
#include <java/awt/dnd/DragSourceEvent.h>
#include <jcpp.h>

using $DragSourceDragEvent = ::java::awt::dnd::DragSourceDragEvent;
using $DragSourceDropEvent = ::java::awt::dnd::DragSourceDropEvent;
using $DragSourceEvent = ::java::awt::dnd::DragSourceEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace dnd {

$Class* DragSourceListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"dragDropEnd", "(Ljava/awt/dnd/DragSourceDropEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DragSourceListener, dragDropEnd, void, $DragSourceDropEvent*)},
		{"dragEnter", "(Ljava/awt/dnd/DragSourceDragEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DragSourceListener, dragEnter, void, $DragSourceDragEvent*)},
		{"dragExit", "(Ljava/awt/dnd/DragSourceEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DragSourceListener, dragExit, void, $DragSourceEvent*)},
		{"dragOver", "(Ljava/awt/dnd/DragSourceDragEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DragSourceListener, dragOver, void, $DragSourceDragEvent*)},
		{"dropActionChanged", "(Ljava/awt/dnd/DragSourceDragEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DragSourceListener, dropActionChanged, void, $DragSourceDragEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.dnd.DragSourceListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(DragSourceListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DragSourceListener);
	});
	return class$;
}

$Class* DragSourceListener::class$ = nullptr;

		} // dnd
	} // awt
} // java