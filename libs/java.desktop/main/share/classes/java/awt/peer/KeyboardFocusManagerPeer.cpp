#include <java/awt/peer/KeyboardFocusManagerPeer.h>
#include <java/awt/Component.h>
#include <java/awt/Window.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$Class* KeyboardFocusManagerPeer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"clearGlobalFocusOwner", "(Ljava/awt/Window;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(KeyboardFocusManagerPeer, clearGlobalFocusOwner, void, $Window*)},
		{"getCurrentFocusOwner", "()Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(KeyboardFocusManagerPeer, getCurrentFocusOwner, $Component*)},
		{"getCurrentFocusedWindow", "()Ljava/awt/Window;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(KeyboardFocusManagerPeer, getCurrentFocusedWindow, $Window*)},
		{"setCurrentFocusOwner", "(Ljava/awt/Component;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(KeyboardFocusManagerPeer, setCurrentFocusOwner, void, $Component*)},
		{"setCurrentFocusedWindow", "(Ljava/awt/Window;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(KeyboardFocusManagerPeer, setCurrentFocusedWindow, void, $Window*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.peer.KeyboardFocusManagerPeer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(KeyboardFocusManagerPeer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyboardFocusManagerPeer);
	});
	return class$;
}

$Class* KeyboardFocusManagerPeer::class$ = nullptr;

		} // peer
	} // awt
} // java