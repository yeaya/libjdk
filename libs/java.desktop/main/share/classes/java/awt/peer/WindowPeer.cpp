#include <java/awt/peer/WindowPeer.h>
#include <java/awt/Dialog.h>
#include <jcpp.h>

using $Dialog = ::java::awt::Dialog;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$Class* WindowPeer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"repositionSecurityWarning", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WindowPeer, repositionSecurityWarning, void)},
		{"setModalBlocked", "(Ljava/awt/Dialog;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WindowPeer, setModalBlocked, void, $Dialog*, bool)},
		{"setOpacity", "(F)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WindowPeer, setOpacity, void, float)},
		{"setOpaque", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WindowPeer, setOpaque, void, bool)},
		{"toBack", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WindowPeer, toBack, void)},
		{"toFront", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WindowPeer, toFront, void)},
		{"updateAlwaysOnTopState", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WindowPeer, updateAlwaysOnTopState, void)},
		{"updateFocusableWindowState", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WindowPeer, updateFocusableWindowState, void)},
		{"updateIconImages", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WindowPeer, updateIconImages, void)},
		{"updateMinimumSize", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WindowPeer, updateMinimumSize, void)},
		{"updateWindow", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WindowPeer, updateWindow, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.peer.WindowPeer",
		nullptr,
		"java.awt.peer.ContainerPeer",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowPeer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowPeer);
	});
	return class$;
}

$Class* WindowPeer::class$ = nullptr;

		} // peer
	} // awt
} // java