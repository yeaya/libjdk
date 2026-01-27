#include <java/awt/dnd/DropTargetListener.h>

#include <java/awt/dnd/DropTargetDragEvent.h>
#include <java/awt/dnd/DropTargetDropEvent.h>
#include <java/awt/dnd/DropTargetEvent.h>
#include <jcpp.h>

using $DropTargetDragEvent = ::java::awt::dnd::DropTargetDragEvent;
using $DropTargetDropEvent = ::java::awt::dnd::DropTargetDropEvent;
using $DropTargetEvent = ::java::awt::dnd::DropTargetEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace dnd {

$MethodInfo _DropTargetListener_MethodInfo_[] = {
	{"dragEnter", "(Ljava/awt/dnd/DropTargetDragEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DropTargetListener, dragEnter, void, $DropTargetDragEvent*)},
	{"dragExit", "(Ljava/awt/dnd/DropTargetEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DropTargetListener, dragExit, void, $DropTargetEvent*)},
	{"dragOver", "(Ljava/awt/dnd/DropTargetDragEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DropTargetListener, dragOver, void, $DropTargetDragEvent*)},
	{"drop", "(Ljava/awt/dnd/DropTargetDropEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DropTargetListener, drop, void, $DropTargetDropEvent*)},
	{"dropActionChanged", "(Ljava/awt/dnd/DropTargetDragEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DropTargetListener, dropActionChanged, void, $DropTargetDragEvent*)},
	{}
};

$ClassInfo _DropTargetListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.dnd.DropTargetListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_DropTargetListener_MethodInfo_
};

$Object* allocate$DropTargetListener($Class* clazz) {
	return $of($alloc(DropTargetListener));
}

$Class* DropTargetListener::load$($String* name, bool initialize) {
	$loadClass(DropTargetListener, name, initialize, &_DropTargetListener_ClassInfo_, allocate$DropTargetListener);
	return class$;
}

$Class* DropTargetListener::class$ = nullptr;

		} // dnd
	} // awt
} // java