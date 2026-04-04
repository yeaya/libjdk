#include <java/awt/peer/ButtonPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$Class* ButtonPeer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ButtonPeer, setLabel, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.peer.ButtonPeer",
		nullptr,
		"java.awt.peer.ComponentPeer",
		nullptr,
		methodInfos$$
	};
	$loadClass(ButtonPeer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ButtonPeer);
	});
	return class$;
}

$Class* ButtonPeer::class$ = nullptr;

		} // peer
	} // awt
} // java