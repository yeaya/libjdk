#include <java/awt/peer/MenuItemPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$Class* MenuItemPeer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"setEnabled", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuItemPeer, setEnabled, void, bool)},
		{"setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuItemPeer, setLabel, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.peer.MenuItemPeer",
		nullptr,
		"java.awt.peer.MenuComponentPeer",
		nullptr,
		methodInfos$$
	};
	$loadClass(MenuItemPeer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MenuItemPeer);
	});
	return class$;
}

$Class* MenuItemPeer::class$ = nullptr;

		} // peer
	} // awt
} // java