#include <java/awt/peer/PopupMenuPeer.h>
#include <java/awt/Event.h>
#include <jcpp.h>

using $Event = ::java::awt::Event;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$Class* PopupMenuPeer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"show", "(Ljava/awt/Event;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PopupMenuPeer, show, void, $Event*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.peer.PopupMenuPeer",
		nullptr,
		"java.awt.peer.MenuPeer",
		nullptr,
		methodInfos$$
	};
	$loadClass(PopupMenuPeer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PopupMenuPeer);
	});
	return class$;
}

$Class* PopupMenuPeer::class$ = nullptr;

		} // peer
	} // awt
} // java