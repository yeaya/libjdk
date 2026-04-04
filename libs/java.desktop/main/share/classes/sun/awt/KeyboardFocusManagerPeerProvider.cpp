#include <sun/awt/KeyboardFocusManagerPeerProvider.h>
#include <java/awt/peer/KeyboardFocusManagerPeer.h>
#include <jcpp.h>

using $KeyboardFocusManagerPeer = ::java::awt::peer::KeyboardFocusManagerPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$Class* KeyboardFocusManagerPeerProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getKeyboardFocusManagerPeer", "()Ljava/awt/peer/KeyboardFocusManagerPeer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(KeyboardFocusManagerPeerProvider, getKeyboardFocusManagerPeer, $KeyboardFocusManagerPeer*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.KeyboardFocusManagerPeerProvider",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(KeyboardFocusManagerPeerProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyboardFocusManagerPeerProvider);
	});
	return class$;
}

$Class* KeyboardFocusManagerPeerProvider::class$ = nullptr;

	} // awt
} // sun