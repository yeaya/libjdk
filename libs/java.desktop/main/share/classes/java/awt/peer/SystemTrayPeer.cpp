#include <java/awt/peer/SystemTrayPeer.h>
#include <java/awt/Dimension.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$Class* SystemTrayPeer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getTrayIconSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SystemTrayPeer, getTrayIconSize, $Dimension*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.peer.SystemTrayPeer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SystemTrayPeer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SystemTrayPeer);
	});
	return class$;
}

$Class* SystemTrayPeer::class$ = nullptr;

		} // peer
	} // awt
} // java