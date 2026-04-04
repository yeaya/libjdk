#include <java/awt/peer/CheckboxMenuItemPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$Class* CheckboxMenuItemPeer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"setState", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CheckboxMenuItemPeer, setState, void, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.peer.CheckboxMenuItemPeer",
		nullptr,
		"java.awt.peer.MenuItemPeer",
		nullptr,
		methodInfos$$
	};
	$loadClass(CheckboxMenuItemPeer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CheckboxMenuItemPeer);
	});
	return class$;
}

$Class* CheckboxMenuItemPeer::class$ = nullptr;

		} // peer
	} // awt
} // java