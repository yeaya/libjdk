#include <sun/lwawt/PlatformWindow.h>

#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/Insets.h>
#include <java/awt/MenuBar.h>
#include <java/awt/Point.h>
#include <java/awt/Window.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <jcpp.h>

using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $Insets = ::java::awt::Insets;
using $MenuBar = ::java::awt::MenuBar;
using $Point = ::java::awt::Point;
using $Window = ::java::awt::Window;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $LWWindowPeer = ::sun::lwawt::LWWindowPeer;

namespace sun {
	namespace lwawt {

$MethodInfo _PlatformWindow_MethodInfo_[] = {
	{"dispose", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformWindow, dispose, void)},
	{"enterFullScreenMode", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformWindow, enterFullScreenMode, void)},
	{"exitFullScreenMode", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformWindow, exitFullScreenMode, void)},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformWindow, getFontMetrics, $FontMetrics*, $Font*)},
	{"getGraphicsDevice", "()Ljava/awt/GraphicsDevice;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformWindow, getGraphicsDevice, $GraphicsDevice*)},
	{"getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformWindow, getInsets, $Insets*)},
	{"getLayerPtr", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformWindow, getLayerPtr, int64_t)},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformWindow, getLocationOnScreen, $Point*)},
	{"getPeer", "()Lsun/lwawt/LWWindowPeer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformWindow, getPeer, $LWWindowPeer*)},
	{"getScreenSurface", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformWindow, getScreenSurface, $SurfaceData*)},
	{"initialize", "(Ljava/awt/Window;Lsun/lwawt/LWWindowPeer;Lsun/lwawt/PlatformWindow;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformWindow, initialize, void, $Window*, $LWWindowPeer*, PlatformWindow*)},
	{"isActive", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformWindow, isActive, bool)},
	{"isFullScreenMode", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformWindow, isFullScreenMode, bool)},
	{"isUnderMouse", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformWindow, isUnderMouse, bool)},
	{"rejectFocusRequest", "(Ljava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformWindow, rejectFocusRequest, bool, $FocusEvent$Cause*)},
	{"replaceSurfaceData", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformWindow, replaceSurfaceData, $SurfaceData*)},
	{"requestWindowFocus", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformWindow, requestWindowFocus, bool)},
	{"setAlwaysOnTop", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformWindow, setAlwaysOnTop, void, bool)},
	{"setBounds", "(IIII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformWindow, setBounds, void, int32_t, int32_t, int32_t, int32_t)},
	{"setMaximizedBounds", "(IIII)V", nullptr, $PUBLIC, $virtualMethod(PlatformWindow, setMaximizedBounds, void, int32_t, int32_t, int32_t, int32_t)},
	{"setMenuBar", "(Ljava/awt/MenuBar;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformWindow, setMenuBar, void, $MenuBar*)},
	{"setModalBlocked", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformWindow, setModalBlocked, void, bool)},
	{"setOpacity", "(F)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformWindow, setOpacity, void, float)},
	{"setOpaque", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformWindow, setOpaque, void, bool)},
	{"setResizable", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformWindow, setResizable, void, bool)},
	{"setSizeConstraints", "(IIII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformWindow, setSizeConstraints, void, int32_t, int32_t, int32_t, int32_t)},
	{"setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformWindow, setTitle, void, $String*)},
	{"setVisible", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformWindow, setVisible, void, bool)},
	{"setWindowState", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformWindow, setWindowState, void, int32_t)},
	{"toBack", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformWindow, toBack, void)},
	{"toFront", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformWindow, toFront, void)},
	{"updateFocusableWindowState", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformWindow, updateFocusableWindowState, void)},
	{"updateIconImages", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformWindow, updateIconImages, void)},
	{}
};

$ClassInfo _PlatformWindow_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.lwawt.PlatformWindow",
	nullptr,
	nullptr,
	nullptr,
	_PlatformWindow_MethodInfo_
};

$Object* allocate$PlatformWindow($Class* clazz) {
	return $of($alloc(PlatformWindow));
}

void PlatformWindow::setMaximizedBounds(int32_t x, int32_t y, int32_t w, int32_t h) {
}

$Class* PlatformWindow::load$($String* name, bool initialize) {
	$loadClass(PlatformWindow, name, initialize, &_PlatformWindow_ClassInfo_, allocate$PlatformWindow);
	return class$;
}

$Class* PlatformWindow::class$ = nullptr;

	} // lwawt
} // sun