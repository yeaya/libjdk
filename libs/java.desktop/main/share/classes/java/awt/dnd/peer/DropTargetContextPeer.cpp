#include <java/awt/dnd/peer/DropTargetContextPeer.h>

#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/dnd/DropTarget.h>
#include <jcpp.h>

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $DropTarget = ::java::awt::dnd::DropTarget;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace dnd {
			namespace peer {

$MethodInfo _DropTargetContextPeer_MethodInfo_[] = {
	{"acceptDrag", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DropTargetContextPeer, acceptDrag, void, int32_t)},
	{"acceptDrop", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DropTargetContextPeer, acceptDrop, void, int32_t)},
	{"dropComplete", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DropTargetContextPeer, dropComplete, void, bool)},
	{"getDropTarget", "()Ljava/awt/dnd/DropTarget;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DropTargetContextPeer, getDropTarget, $DropTarget*)},
	{"getTargetActions", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DropTargetContextPeer, getTargetActions, int32_t)},
	{"getTransferDataFlavors", "()[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DropTargetContextPeer, getTransferDataFlavors, $DataFlavorArray*)},
	{"getTransferable", "()Ljava/awt/datatransfer/Transferable;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DropTargetContextPeer, getTransferable, $Transferable*), "java.awt.dnd.InvalidDnDOperationException"},
	{"isTransferableJVMLocal", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DropTargetContextPeer, isTransferableJVMLocal, bool)},
	{"rejectDrag", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DropTargetContextPeer, rejectDrag, void)},
	{"rejectDrop", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DropTargetContextPeer, rejectDrop, void)},
	{"setTargetActions", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DropTargetContextPeer, setTargetActions, void, int32_t)},
	{}
};

$ClassInfo _DropTargetContextPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.dnd.peer.DropTargetContextPeer",
	nullptr,
	nullptr,
	nullptr,
	_DropTargetContextPeer_MethodInfo_
};

$Object* allocate$DropTargetContextPeer($Class* clazz) {
	return $of($alloc(DropTargetContextPeer));
}

$Class* DropTargetContextPeer::load$($String* name, bool initialize) {
	$loadClass(DropTargetContextPeer, name, initialize, &_DropTargetContextPeer_ClassInfo_, allocate$DropTargetContextPeer);
	return class$;
}

$Class* DropTargetContextPeer::class$ = nullptr;

			} // peer
		} // dnd
	} // awt
} // java