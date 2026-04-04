#include <java/awt/peer/FontPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace java {
	namespace awt {
		namespace peer {

$Class* FontPeer::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.peer.FontPeer"
	};
	$loadClass(FontPeer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FontPeer);
	});
	return class$;
}

$Class* FontPeer::class$ = nullptr;

		} // peer
	} // awt
} // java