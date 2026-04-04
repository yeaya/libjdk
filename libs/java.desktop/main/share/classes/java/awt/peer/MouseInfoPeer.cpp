#include <java/awt/peer/MouseInfoPeer.h>
#include <java/awt/Point.h>
#include <java/awt/Window.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$Class* MouseInfoPeer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"fillPointWithCoords", "(Ljava/awt/Point;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MouseInfoPeer, fillPointWithCoords, int32_t, $Point*)},
		{"isWindowUnderMouse", "(Ljava/awt/Window;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MouseInfoPeer, isWindowUnderMouse, bool, $Window*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.peer.MouseInfoPeer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MouseInfoPeer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MouseInfoPeer);
	});
	return class$;
}

$Class* MouseInfoPeer::class$ = nullptr;

		} // peer
	} // awt
} // java