#include <java/awt/dnd/DropTargetAdapter.h>
#include <java/awt/dnd/DropTargetDragEvent.h>
#include <java/awt/dnd/DropTargetEvent.h>
#include <jcpp.h>

using $DropTargetDragEvent = ::java::awt::dnd::DropTargetDragEvent;
using $DropTargetEvent = ::java::awt::dnd::DropTargetEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace dnd {

void DropTargetAdapter::init$() {
}

void DropTargetAdapter::dragEnter($DropTargetDragEvent* dtde) {
}

void DropTargetAdapter::dragOver($DropTargetDragEvent* dtde) {
}

void DropTargetAdapter::dropActionChanged($DropTargetDragEvent* dtde) {
}

void DropTargetAdapter::dragExit($DropTargetEvent* dte) {
}

DropTargetAdapter::DropTargetAdapter() {
}

$Class* DropTargetAdapter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(DropTargetAdapter, init$, void)},
		{"dragEnter", "(Ljava/awt/dnd/DropTargetDragEvent;)V", nullptr, $PUBLIC, $virtualMethod(DropTargetAdapter, dragEnter, void, $DropTargetDragEvent*)},
		{"dragExit", "(Ljava/awt/dnd/DropTargetEvent;)V", nullptr, $PUBLIC, $virtualMethod(DropTargetAdapter, dragExit, void, $DropTargetEvent*)},
		{"dragOver", "(Ljava/awt/dnd/DropTargetDragEvent;)V", nullptr, $PUBLIC, $virtualMethod(DropTargetAdapter, dragOver, void, $DropTargetDragEvent*)},
		{"dropActionChanged", "(Ljava/awt/dnd/DropTargetDragEvent;)V", nullptr, $PUBLIC, $virtualMethod(DropTargetAdapter, dropActionChanged, void, $DropTargetDragEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.awt.dnd.DropTargetAdapter",
		"java.lang.Object",
		"java.awt.dnd.DropTargetListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(DropTargetAdapter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DropTargetAdapter);
	});
	return class$;
}

$Class* DropTargetAdapter::class$ = nullptr;

		} // dnd
	} // awt
} // java