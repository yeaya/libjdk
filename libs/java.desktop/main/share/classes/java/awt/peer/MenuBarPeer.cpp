#include <java/awt/peer/MenuBarPeer.h>

#include <java/awt/Menu.h>
#include <jcpp.h>

using $Menu = ::java::awt::Menu;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _MenuBarPeer_MethodInfo_[] = {
	{"addHelpMenu", "(Ljava/awt/Menu;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuBarPeer, addHelpMenu, void, $Menu*)},
	{"addMenu", "(Ljava/awt/Menu;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuBarPeer, addMenu, void, $Menu*)},
	{"delMenu", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuBarPeer, delMenu, void, int32_t)},
	{}
};

$ClassInfo _MenuBarPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.MenuBarPeer",
	nullptr,
	"java.awt.peer.MenuComponentPeer",
	nullptr,
	_MenuBarPeer_MethodInfo_
};

$Object* allocate$MenuBarPeer($Class* clazz) {
	return $of($alloc(MenuBarPeer));
}

$Class* MenuBarPeer::load$($String* name, bool initialize) {
	$loadClass(MenuBarPeer, name, initialize, &_MenuBarPeer_ClassInfo_, allocate$MenuBarPeer);
	return class$;
}

$Class* MenuBarPeer::class$ = nullptr;

		} // peer
	} // awt
} // java