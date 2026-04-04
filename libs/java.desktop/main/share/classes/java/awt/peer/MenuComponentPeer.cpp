#include <java/awt/peer/MenuComponentPeer.h>
#include <java/awt/Font.h>
#include <jcpp.h>

using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$Class* MenuComponentPeer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"dispose", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuComponentPeer, dispose, void)},
		{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuComponentPeer, setFont, void, $Font*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.peer.MenuComponentPeer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MenuComponentPeer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MenuComponentPeer);
	});
	return class$;
}

$Class* MenuComponentPeer::class$ = nullptr;

		} // peer
	} // awt
} // java