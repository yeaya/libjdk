#include <java/awt/peer/LightweightPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace java {
	namespace awt {
		namespace peer {

$Class* LightweightPeer::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.peer.LightweightPeer",
		nullptr,
		"java.awt.peer.ComponentPeer"
	};
	$loadClass(LightweightPeer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LightweightPeer);
	});
	return class$;
}

$Class* LightweightPeer::class$ = nullptr;

		} // peer
	} // awt
} // java