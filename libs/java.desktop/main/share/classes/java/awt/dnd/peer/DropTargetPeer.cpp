#include <java/awt/dnd/peer/DropTargetPeer.h>
#include <java/awt/dnd/DropTarget.h>
#include <jcpp.h>

using $DropTarget = ::java::awt::dnd::DropTarget;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace dnd {
			namespace peer {

$Class* DropTargetPeer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"addDropTarget", "(Ljava/awt/dnd/DropTarget;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DropTargetPeer, addDropTarget, void, $DropTarget*)},
		{"removeDropTarget", "(Ljava/awt/dnd/DropTarget;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DropTargetPeer, removeDropTarget, void, $DropTarget*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.dnd.peer.DropTargetPeer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DropTargetPeer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DropTargetPeer);
	});
	return class$;
}

$Class* DropTargetPeer::class$ = nullptr;

			} // peer
		} // dnd
	} // awt
} // java