#include <java/awt/peer/ScrollbarPeer.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _ScrollbarPeer_MethodInfo_[] = {
	{"setLineIncrement", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScrollbarPeer, setLineIncrement, void, int32_t)},
	{"setPageIncrement", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScrollbarPeer, setPageIncrement, void, int32_t)},
	{"setValues", "(IIII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScrollbarPeer, setValues, void, int32_t, int32_t, int32_t, int32_t)},
	{}
};

$ClassInfo _ScrollbarPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.ScrollbarPeer",
	nullptr,
	"java.awt.peer.ComponentPeer",
	nullptr,
	_ScrollbarPeer_MethodInfo_
};

$Object* allocate$ScrollbarPeer($Class* clazz) {
	return $of($alloc(ScrollbarPeer));
}

$Class* ScrollbarPeer::load$($String* name, bool initialize) {
	$loadClass(ScrollbarPeer, name, initialize, &_ScrollbarPeer_ClassInfo_, allocate$ScrollbarPeer);
	return class$;
}

$Class* ScrollbarPeer::class$ = nullptr;

		} // peer
	} // awt
} // java