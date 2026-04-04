#include <java/awt/peer/PanelPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace java {
	namespace awt {
		namespace peer {

$Class* PanelPeer::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.peer.PanelPeer",
		nullptr,
		"java.awt.peer.ContainerPeer"
	};
	$loadClass(PanelPeer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PanelPeer);
	});
	return class$;
}

$Class* PanelPeer::class$ = nullptr;

		} // peer
	} // awt
} // java