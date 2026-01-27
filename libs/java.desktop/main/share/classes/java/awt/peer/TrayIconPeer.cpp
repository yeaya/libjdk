#include <java/awt/peer/TrayIconPeer.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _TrayIconPeer_MethodInfo_[] = {
	{"displayMessage", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TrayIconPeer, displayMessage, void, $String*, $String*, $String*)},
	{"dispose", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TrayIconPeer, dispose, void)},
	{"setToolTip", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TrayIconPeer, setToolTip, void, $String*)},
	{"showPopupMenu", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TrayIconPeer, showPopupMenu, void, int32_t, int32_t)},
	{"updateImage", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TrayIconPeer, updateImage, void)},
	{}
};

$ClassInfo _TrayIconPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.TrayIconPeer",
	nullptr,
	nullptr,
	nullptr,
	_TrayIconPeer_MethodInfo_
};

$Object* allocate$TrayIconPeer($Class* clazz) {
	return $of($alloc(TrayIconPeer));
}

$Class* TrayIconPeer::load$($String* name, bool initialize) {
	$loadClass(TrayIconPeer, name, initialize, &_TrayIconPeer_ClassInfo_, allocate$TrayIconPeer);
	return class$;
}

$Class* TrayIconPeer::class$ = nullptr;

		} // peer
	} // awt
} // java