#include <java/awt/peer/ScrollPanePeer.h>
#include <java/awt/Adjustable.h>
#include <jcpp.h>

using $Adjustable = ::java::awt::Adjustable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$Class* ScrollPanePeer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"childResized", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScrollPanePeer, childResized, void, int32_t, int32_t)},
		{"getHScrollbarHeight", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScrollPanePeer, getHScrollbarHeight, int32_t)},
		{"getVScrollbarWidth", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScrollPanePeer, getVScrollbarWidth, int32_t)},
		{"setScrollPosition", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScrollPanePeer, setScrollPosition, void, int32_t, int32_t)},
		{"setUnitIncrement", "(Ljava/awt/Adjustable;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScrollPanePeer, setUnitIncrement, void, $Adjustable*, int32_t)},
		{"setValue", "(Ljava/awt/Adjustable;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScrollPanePeer, setValue, void, $Adjustable*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.peer.ScrollPanePeer",
		nullptr,
		"java.awt.peer.ContainerPeer",
		nullptr,
		methodInfos$$
	};
	$loadClass(ScrollPanePeer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ScrollPanePeer);
	});
	return class$;
}

$Class* ScrollPanePeer::class$ = nullptr;

		} // peer
	} // awt
} // java