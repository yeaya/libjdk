#include <java/awt/peer/FramePeer.h>
#include <java/awt/MenuBar.h>
#include <java/awt/Rectangle.h>
#include <jcpp.h>

using $MenuBar = ::java::awt::MenuBar;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$Class* FramePeer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"emulateActivation", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FramePeer, emulateActivation, void, bool)},
		{"getBoundsPrivate", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FramePeer, getBoundsPrivate, $Rectangle*)},
		{"getState", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FramePeer, getState, int32_t)},
		{"setBoundsPrivate", "(IIII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FramePeer, setBoundsPrivate, void, int32_t, int32_t, int32_t, int32_t)},
		{"setMaximizedBounds", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FramePeer, setMaximizedBounds, void, $Rectangle*)},
		{"setMenuBar", "(Ljava/awt/MenuBar;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FramePeer, setMenuBar, void, $MenuBar*)},
		{"setResizable", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FramePeer, setResizable, void, bool)},
		{"setState", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FramePeer, setState, void, int32_t)},
		{"setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FramePeer, setTitle, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.peer.FramePeer",
		nullptr,
		"java.awt.peer.WindowPeer",
		nullptr,
		methodInfos$$
	};
	$loadClass(FramePeer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FramePeer);
	});
	return class$;
}

$Class* FramePeer::class$ = nullptr;

		} // peer
	} // awt
} // java