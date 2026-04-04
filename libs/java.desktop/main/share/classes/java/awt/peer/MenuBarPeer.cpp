#include <java/awt/peer/MenuBarPeer.h>
#include <java/awt/Menu.h>
#include <jcpp.h>

using $Menu = ::java::awt::Menu;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$Class* MenuBarPeer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"addHelpMenu", "(Ljava/awt/Menu;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuBarPeer, addHelpMenu, void, $Menu*)},
		{"addMenu", "(Ljava/awt/Menu;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuBarPeer, addMenu, void, $Menu*)},
		{"delMenu", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuBarPeer, delMenu, void, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.peer.MenuBarPeer",
		nullptr,
		"java.awt.peer.MenuComponentPeer",
		nullptr,
		methodInfos$$
	};
	$loadClass(MenuBarPeer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MenuBarPeer);
	});
	return class$;
}

$Class* MenuBarPeer::class$ = nullptr;

		} // peer
	} // awt
} // java