#include <sun/awt/windows/WSystemTrayPeer.h>

#include <java/awt/Dimension.h>
#include <java/awt/SystemTray.h>
#include <java/awt/Toolkit.h>
#include <sun/awt/windows/WObjectPeer.h>
#include <sun/awt/windows/WToolkit.h>
#include <sun/awt/windows/WTrayIconPeer.h>
#include <jcpp.h>

#undef TRAY_ICON_HEIGHT
#undef TRAY_ICON_WIDTH

using $Dimension = ::java::awt::Dimension;
using $SystemTray = ::java::awt::SystemTray;
using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;
using $WToolkit = ::sun::awt::windows::WToolkit;
using $WTrayIconPeer = ::sun::awt::windows::WTrayIconPeer;

namespace sun {
	namespace awt {
		namespace windows {

$MethodInfo _WSystemTrayPeer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/SystemTray;)V", nullptr, 0, $method(WSystemTrayPeer, init$, void, $SystemTray*)},
	{"disposeImpl", "()V", nullptr, $PROTECTED, $virtualMethod(WSystemTrayPeer, disposeImpl, void)},
	{"getTrayIconSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(WSystemTrayPeer, getTrayIconSize, $Dimension*)},
	{"isSupported", "()Z", nullptr, $PUBLIC, $method(WSystemTrayPeer, isSupported, bool)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _WSystemTrayPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WSystemTrayPeer",
	"sun.awt.windows.WObjectPeer",
	"java.awt.peer.SystemTrayPeer",
	nullptr,
	_WSystemTrayPeer_MethodInfo_
};

$Object* allocate$WSystemTrayPeer($Class* clazz) {
	return $of($alloc(WSystemTrayPeer));
}

int32_t WSystemTrayPeer::hashCode() {
	 return this->$WObjectPeer::hashCode();
}

bool WSystemTrayPeer::equals(Object$* arg0) {
	 return this->$WObjectPeer::equals(arg0);
}

$Object* WSystemTrayPeer::clone() {
	 return this->$WObjectPeer::clone();
}

$String* WSystemTrayPeer::toString() {
	 return this->$WObjectPeer::toString();
}

void WSystemTrayPeer::finalize() {
	this->$WObjectPeer::finalize();
}

void WSystemTrayPeer::init$($SystemTray* target) {
	$WObjectPeer::init$();
	$set(this, target, target);
}

$Dimension* WSystemTrayPeer::getTrayIconSize() {
	return $new($Dimension, $WTrayIconPeer::TRAY_ICON_WIDTH, $WTrayIconPeer::TRAY_ICON_HEIGHT);
}

bool WSystemTrayPeer::isSupported() {
	return $nc(($cast($WToolkit, $($Toolkit::getDefaultToolkit()))))->isTraySupported();
}

void WSystemTrayPeer::disposeImpl() {
}

WSystemTrayPeer::WSystemTrayPeer() {
}

$Class* WSystemTrayPeer::load$($String* name, bool initialize) {
	$loadClass(WSystemTrayPeer, name, initialize, &_WSystemTrayPeer_ClassInfo_, allocate$WSystemTrayPeer);
	return class$;
}

$Class* WSystemTrayPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun