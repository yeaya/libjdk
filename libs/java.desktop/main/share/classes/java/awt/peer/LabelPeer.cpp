#include <java/awt/peer/LabelPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$Class* LabelPeer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"setAlignment", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LabelPeer, setAlignment, void, int32_t)},
		{"setText", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LabelPeer, setText, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.peer.LabelPeer",
		nullptr,
		"java.awt.peer.ComponentPeer",
		nullptr,
		methodInfos$$
	};
	$loadClass(LabelPeer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LabelPeer);
	});
	return class$;
}

$Class* LabelPeer::class$ = nullptr;

		} // peer
	} // awt
} // java