#include <java/awt/peer/DialogPeer.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace java {
	namespace awt {
		namespace peer {

$Class* DialogPeer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"blockWindows", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/awt/Window;>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(DialogPeer, blockWindows, void, $List*)},
		{"setResizable", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DialogPeer, setResizable, void, bool)},
		{"setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DialogPeer, setTitle, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.peer.DialogPeer",
		nullptr,
		"java.awt.peer.WindowPeer",
		nullptr,
		methodInfos$$
	};
	$loadClass(DialogPeer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DialogPeer);
	});
	return class$;
}

$Class* DialogPeer::class$ = nullptr;

		} // peer
	} // awt
} // java