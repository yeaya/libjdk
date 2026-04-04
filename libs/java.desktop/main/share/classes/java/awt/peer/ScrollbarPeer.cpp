#include <java/awt/peer/ScrollbarPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$Class* ScrollbarPeer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"setLineIncrement", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScrollbarPeer, setLineIncrement, void, int32_t)},
		{"setPageIncrement", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScrollbarPeer, setPageIncrement, void, int32_t)},
		{"setValues", "(IIII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScrollbarPeer, setValues, void, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.peer.ScrollbarPeer",
		nullptr,
		"java.awt.peer.ComponentPeer",
		nullptr,
		methodInfos$$
	};
	$loadClass(ScrollbarPeer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ScrollbarPeer);
	});
	return class$;
}

$Class* ScrollbarPeer::class$ = nullptr;

		} // peer
	} // awt
} // java