#include <java/awt/peer/TrayIconPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$Class* TrayIconPeer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"displayMessage", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TrayIconPeer, displayMessage, void, $String*, $String*, $String*)},
		{"dispose", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TrayIconPeer, dispose, void)},
		{"setToolTip", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TrayIconPeer, setToolTip, void, $String*)},
		{"showPopupMenu", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TrayIconPeer, showPopupMenu, void, int32_t, int32_t)},
		{"updateImage", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TrayIconPeer, updateImage, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.peer.TrayIconPeer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TrayIconPeer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TrayIconPeer);
	});
	return class$;
}

$Class* TrayIconPeer::class$ = nullptr;

		} // peer
	} // awt
} // java