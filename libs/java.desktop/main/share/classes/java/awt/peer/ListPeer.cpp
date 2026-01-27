#include <java/awt/peer/ListPeer.h>

#include <java/awt/Dimension.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _ListPeer_MethodInfo_[] = {
	{"add", "(Ljava/lang/String;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListPeer, add, void, $String*, int32_t)},
	{"delItems", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListPeer, delItems, void, int32_t, int32_t)},
	{"deselect", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListPeer, deselect, void, int32_t)},
	{"getMinimumSize", "(I)Ljava/awt/Dimension;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListPeer, getMinimumSize, $Dimension*, int32_t)},
	{"getPreferredSize", "(I)Ljava/awt/Dimension;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListPeer, getPreferredSize, $Dimension*, int32_t)},
	{"getSelectedIndexes", "()[I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListPeer, getSelectedIndexes, $ints*)},
	{"makeVisible", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListPeer, makeVisible, void, int32_t)},
	{"removeAll", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListPeer, removeAll, void)},
	{"select", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListPeer, select, void, int32_t)},
	{"setMultipleMode", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListPeer, setMultipleMode, void, bool)},
	{}
};

$ClassInfo _ListPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.ListPeer",
	nullptr,
	"java.awt.peer.ComponentPeer",
	nullptr,
	_ListPeer_MethodInfo_
};

$Object* allocate$ListPeer($Class* clazz) {
	return $of($alloc(ListPeer));
}

$Class* ListPeer::load$($String* name, bool initialize) {
	$loadClass(ListPeer, name, initialize, &_ListPeer_ClassInfo_, allocate$ListPeer);
	return class$;
}

$Class* ListPeer::class$ = nullptr;

		} // peer
	} // awt
} // java