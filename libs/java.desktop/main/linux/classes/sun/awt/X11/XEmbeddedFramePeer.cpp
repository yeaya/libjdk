#include <sun/awt/X11/XEmbeddedFramePeer.h>

#include <java/awt/AWTKeyStroke.h>
#include <java/awt/Component.h>
#include <java/awt/Dialog.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/MenuBar.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/lang/AssertionError.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <java/util/Vector.h>
#include <sun/awt/EmbeddedFrame.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/PropMwmHints.h>
#include <sun/awt/X11/ToplevelStateListener.h>
#include <sun/awt/X11/WindowDimensions.h>
#include <sun/awt/X11/XAtomList.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XConfigureEvent.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XCreateWindowParams.h>
#include <sun/awt/X11/XDecoratedPeer.h>
#include <sun/awt/X11/XEmbedClientHelper.h>
#include <sun/awt/X11/XEmbeddedFrame.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XFocusChangeEvent.h>
#include <sun/awt/X11/XFocusProxyWindow.h>
#include <sun/awt/X11/XFramePeer.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11/XWindowAttributes.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <sun/awt/X11/XlibUtil.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef EMBEDDED
#undef FINE
#undef NO_EMBEDDED_CHECK
#undef SET_BOUNDS
#undef TARGET
#undef TRUE
#undef VISIBLE

using $AWTKeyStroke = ::java::awt::AWTKeyStroke;
using $Dialog = ::java::awt::Dialog;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $MenuBar = ::java::awt::MenuBar;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Window = ::java::awt::Window;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $Vector = ::java::util::Vector;
using $EmbeddedFrame = ::sun::awt::EmbeddedFrame;
using $SunToolkit = ::sun::awt::SunToolkit;
using $PropMwmHints = ::sun::awt::X11::PropMwmHints;
using $ToplevelStateListener = ::sun::awt::X11::ToplevelStateListener;
using $WindowDimensions = ::sun::awt::X11::WindowDimensions;
using $XAtomList = ::sun::awt::X11::XAtomList;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XConfigureEvent = ::sun::awt::X11::XConfigureEvent;
using $XConstants = ::sun::awt::X11::XConstants;
using $XCreateWindowParams = ::sun::awt::X11::XCreateWindowParams;
using $XEmbedClientHelper = ::sun::awt::X11::XEmbedClientHelper;
using $XEmbeddedFrame = ::sun::awt::X11::XEmbeddedFrame;
using $XEvent = ::sun::awt::X11::XEvent;
using $XFocusChangeEvent = ::sun::awt::X11::XFocusChangeEvent;
using $XFocusProxyWindow = ::sun::awt::X11::XFocusProxyWindow;
using $XFramePeer = ::sun::awt::X11::XFramePeer;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWindow = ::sun::awt::X11::XWindow;
using $XWindowAttributes = ::sun::awt::X11::XWindowAttributes;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;
using $XlibUtil = ::sun::awt::X11::XlibUtil;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XEmbeddedFramePeer_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(XEmbeddedFramePeer, $assertionsDisabled)},
	{"xembedLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XEmbeddedFramePeer, xembedLog)},
	{"strokes", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Ljava/awt/AWTKeyStroke;>;", 0, $field(XEmbeddedFramePeer, strokes)},
	{"embedder", "Lsun/awt/X11/XEmbedClientHelper;", nullptr, 0, $field(XEmbeddedFramePeer, embedder)},
	{}
};

$MethodInfo _XEmbeddedFramePeer_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/EmbeddedFrame;)V", nullptr, $PUBLIC, $method(XEmbeddedFramePeer, init$, void, $EmbeddedFrame*)},
	{"addDropTarget", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, addDropTarget, void)},
	{"addToplevelStateListener", "(Lsun/awt/X11/ToplevelStateListener;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, addToplevelStateListener, void, $ToplevelStateListener*)},
	{"checkIfOnNewScreen", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, checkIfOnNewScreen, void, $Rectangle*)},
	{"displayChanged", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, displayChanged, void)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbeddedFramePeer, dispose, void)},
	{"emulateActivation", "(Z)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, emulateActivation, void, bool)},
	{"getAbsoluteX", "()I", nullptr, $PUBLIC, $virtualMethod(XEmbeddedFramePeer, getAbsoluteX, int32_t)},
	{"getAbsoluteY", "()I", nullptr, $PUBLIC, $virtualMethod(XEmbeddedFramePeer, getAbsoluteY, int32_t)},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC, $virtualMethod(XEmbeddedFramePeer, getBounds, $Rectangle*)},
	{"getBoundsPrivate", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC, $virtualMethod(XEmbeddedFramePeer, getBoundsPrivate, $Rectangle*)},
	{"getContentWindow", "()J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, getContentWindow, int64_t)},
	{"getFocusTargetWindow", "()J", nullptr, 0, $virtualMethod(XEmbeddedFramePeer, getFocusTargetWindow, int64_t)},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, getGraphics, $Graphics*)},
	{"getHeight", "()I", nullptr, $PUBLIC, $virtualMethod(XEmbeddedFramePeer, getHeight, int32_t)},
	{"getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, getInsets, $Insets*)},
	{"getLocation", "()Ljava/awt/Point;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, getLocation, $Point*)},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC, $virtualMethod(XEmbeddedFramePeer, getLocationOnScreen, $Point*)},
	{"getMWMHints", "()Lsun/awt/X11/PropMwmHints;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, getMWMHints, $PropMwmHints*)},
	{"getNETWMState", "()Lsun/awt/X11/XAtomList;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, getNETWMState, $XAtomList*)},
	{"getOwnerPeer", "()Lsun/awt/X11/XWindowPeer;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, getOwnerPeer, $XWindowPeer*)},
	{"getParentWindowHandle", "()J", nullptr, $FINAL, $method(XEmbeddedFramePeer, getParentWindowHandle, int64_t)},
	{"getShell", "()J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, getShell, int64_t)},
	{"getSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(XEmbeddedFramePeer, getSize, $Dimension*)},
	{"getState", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, getState, int32_t)},
	{"getTargetMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, getTargetMinimumSize, $Dimension*)},
	{"getWMName", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(XEmbeddedFramePeer, getWMName, $String*)},
	{"getWidth", "()I", nullptr, $PUBLIC, $virtualMethod(XEmbeddedFramePeer, getWidth, int32_t)},
	{"getX", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, getX, int32_t)},
	{"getY", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, getY, int32_t)},
	{"handleButtonPressRelease", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, handleButtonPressRelease, void, $XEvent*)},
	{"handleClientMessage", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, handleClientMessage, void, $XEvent*)},
	{"handleConfigureNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC, $virtualMethod(XEmbeddedFramePeer, handleConfigureNotifyEvent, void, $XEvent*)},
	{"handleDeiconify", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, handleDeiconify, void)},
	{"handleFocusEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, handleFocusEvent, void, $XEvent*)},
	{"handleIconify", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, handleIconify, void)},
	{"handleMapNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, handleMapNotifyEvent, void, $XEvent*)},
	{"handleMotionNotify", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, handleMotionNotify, void, $XEvent*)},
	{"handlePropertyNotify", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, handlePropertyNotify, void, $XEvent*)},
	{"handleReparentNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, handleReparentNotifyEvent, void, $XEvent*)},
	{"handleStateChange", "(II)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, handleStateChange, void, int32_t, int32_t)},
	{"handleUnmapNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, handleUnmapNotifyEvent, void, $XEvent*)},
	{"handleVisibilityEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, handleVisibilityEvent, void, $XEvent*)},
	{"handleWindowFocusIn", "(J)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, handleWindowFocusIn, void, int64_t)},
	{"handleWindowFocusInSync", "(J)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, handleWindowFocusInSync, void, int64_t)},
	{"handleWindowFocusIn_Dispatch", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, handleWindowFocusIn_Dispatch, void)},
	{"handleWindowFocusOut", "(Ljava/awt/Window;J)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, handleWindowFocusOut, void, $Window*, int64_t)},
	{"handleWindowFocusOutSync", "(Ljava/awt/Window;J)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, handleWindowFocusOutSync, void, $Window*, int64_t)},
	{"handleXCrossingEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, handleXCrossingEvent, void, $XEvent*)},
	{"isEventDisabled", "(Lsun/awt/X11/XEvent;)Z", nullptr, $PROTECTED, $virtualMethod(XEmbeddedFramePeer, isEventDisabled, bool, $XEvent*)},
	{"isGrabbed", "()Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, isGrabbed, bool)},
	{"isXEmbedActive", "()Z", nullptr, 0, $virtualMethod(XEmbeddedFramePeer, isXEmbedActive, bool)},
	{"notifyStarted", "()V", nullptr, 0, $virtualMethod(XEmbeddedFramePeer, notifyStarted, void)},
	{"notifyStopped", "()V", nullptr, 0, $virtualMethod(XEmbeddedFramePeer, notifyStopped, void)},
	{"paletteChanged", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, paletteChanged, void)},
	{"postInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, 0, $virtualMethod(XEmbeddedFramePeer, postInit, void, $XCreateWindowParams*)},
	{"preInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, $PUBLIC, $virtualMethod(XEmbeddedFramePeer, preInit, void, $XCreateWindowParams*)},
	{"print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, print, void, $Graphics*)},
	{"recursivelySetIcon", "(Ljava/util/List;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, recursivelySetIcon, void, $List*)},
	{"registerAccelerator", "(Ljava/awt/AWTKeyStroke;)V", nullptr, 0, $virtualMethod(XEmbeddedFramePeer, registerAccelerator, void, $AWTKeyStroke*)},
	{"removeDropTarget", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, removeDropTarget, void)},
	{"removeToplevelStateListener", "(Lsun/awt/X11/ToplevelStateListener;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, removeToplevelStateListener, void, $ToplevelStateListener*)},
	{"repositionSecurityWarning", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, repositionSecurityWarning, void)},
	{"requestInitialFocus", "()V", nullptr, $PROTECTED, $virtualMethod(XEmbeddedFramePeer, requestInitialFocus, void)},
	{"requestWindowFocus", "(JZ)Z", nullptr, $PUBLIC, $virtualMethod(XEmbeddedFramePeer, requestWindowFocus, bool, int64_t, bool)},
	{"requestWindowFocus", "()Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, requestWindowFocus, bool)},
	{"requestWindowFocus", "(Lsun/awt/X11/XWindowPeer;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, requestWindowFocus, bool, $XWindowPeer*)},
	{"setBounds", "(IIIII)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, setBounds, void, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"setBoundsPrivate", "(IIII)V", nullptr, $PUBLIC, $virtualMethod(XEmbeddedFramePeer, setBoundsPrivate, void, int32_t, int32_t, int32_t, int32_t)},
	{"setFullScreenExclusiveModeState", "(Z)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, setFullScreenExclusiveModeState, void, bool)},
	{"setGrab", "(Z)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, setGrab, void, bool)},
	{"setMWMHints", "(Lsun/awt/X11/PropMwmHints;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, setMWMHints, void, $PropMwmHints*)},
	{"setMaximizedBounds", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, setMaximizedBounds, void, $Rectangle*)},
	{"setMenuBar", "(Ljava/awt/MenuBar;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, setMenuBar, void, $MenuBar*)},
	{"setModalBlocked", "(Ljava/awt/Dialog;Z)V", nullptr, $PUBLIC, $virtualMethod(XEmbeddedFramePeer, setModalBlocked, void, $Dialog*, bool)},
	{"setModalBlocked", "(Ljava/awt/Dialog;ZLjava/util/Vector;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, setModalBlocked, void, $Dialog*, bool, $Vector*)},
	{"setNETWMState", "(Lsun/awt/X11/XAtomList;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, setNETWMState, void, $XAtomList*)},
	{"setOpacity", "(F)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, setOpacity, void, float)},
	{"setOpaque", "(Z)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, setOpaque, void, bool)},
	{"setResizable", "(Z)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, setResizable, void, bool)},
	{"setState", "(I)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, setState, void, int32_t)},
	{"setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, setTitle, void, $String*)},
	{"setVisible", "(Z)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, setVisible, void, bool)},
	{"supportsXEmbed", "()Z", nullptr, 0, $virtualMethod(XEmbeddedFramePeer, supportsXEmbed, bool)},
	{"synthesizeFocusInOut", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XEmbeddedFramePeer, synthesizeFocusInOut, void, bool)},
	{"toBack", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, toBack, void)},
	{"toFront", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, toFront, void)},
	{"traverseOutBackward", "()V", nullptr, $PROTECTED, $virtualMethod(XEmbeddedFramePeer, traverseOutBackward, void)},
	{"traverseOutForward", "()V", nullptr, $PROTECTED, $virtualMethod(XEmbeddedFramePeer, traverseOutForward, void)},
	{"unregisterAccelerator", "(Ljava/awt/AWTKeyStroke;)V", nullptr, 0, $virtualMethod(XEmbeddedFramePeer, unregisterAccelerator, void, $AWTKeyStroke*)},
	{"updateAlwaysOnTopState", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, updateAlwaysOnTopState, void)},
	{"updateFocusableWindowState", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, updateFocusableWindowState, void)},
	{"updateIconImages", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, updateIconImages, void)},
	{"updateMinimumSize", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbeddedFramePeer, updateMinimumSize, void)},
	{"updateSecurityWarningVisibility", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, updateSecurityWarningVisibility, void)},
	{"updateWindow", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, updateWindow, void)},
	{"xSetVisible", "(Z)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XEmbeddedFramePeer, xSetVisible, void, bool)},
	{}
};

$ClassInfo _XEmbeddedFramePeer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XEmbeddedFramePeer",
	"sun.awt.X11.XFramePeer",
	nullptr,
	_XEmbeddedFramePeer_FieldInfo_,
	_XEmbeddedFramePeer_MethodInfo_
};

$Object* allocate$XEmbeddedFramePeer($Class* clazz) {
	return $of($alloc(XEmbeddedFramePeer));
}

bool XEmbeddedFramePeer::$assertionsDisabled = false;
$PlatformLogger* XEmbeddedFramePeer::xembedLog = nullptr;

void XEmbeddedFramePeer::init$($EmbeddedFrame* target) {
	$useLocalCurrentObjectStackCache();
	$init($XWindow);
	$init($XBaseWindow);
	$init($Boolean);
	$XFramePeer::init$($$new($XCreateWindowParams, $$new($ObjectArray, {
		$of($XWindow::TARGET),
		$of(target),
		$of($XBaseWindow::VISIBLE),
		$of($Boolean::TRUE),
		$of($XBaseWindow::EMBEDDED),
		$of($Boolean::TRUE)
	})));
}

void XEmbeddedFramePeer::preInit($XCreateWindowParams* params) {
	$XFramePeer::preInit(params);
	$set(this, strokes, $new($LinkedList));
	if (supportsXEmbed()) {
		$set(this, embedder, $new($XEmbedClientHelper));
	}
}

void XEmbeddedFramePeer::postInit($XCreateWindowParams* params) {
	$XFramePeer::postInit(params);
	if (this->embedder != nullptr) {
		$nc(this->embedder)->setClient(this);
		$nc(this->embedder)->install();
	} else if (getParentWindowHandle() != 0) {
		$XToolkit::awtLock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				int64_t var$1 = $XToolkit::getDisplay();
				int64_t var$2 = getWindow();
				$XlibWrapper::XReparentWindow(var$1, var$2, getParentWindowHandle(), 0, 0);
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} /*finally*/ {
				$XToolkit::awtUnlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void XEmbeddedFramePeer::dispose() {
	if (this->embedder != nullptr) {
		$nc(this->embedder)->setClient(nullptr);
	}
	$XFramePeer::dispose();
}

void XEmbeddedFramePeer::updateMinimumSize() {
}

$String* XEmbeddedFramePeer::getWMName() {
	return "JavaEmbeddedFrame"_s;
}

int64_t XEmbeddedFramePeer::getParentWindowHandle() {
	return $nc(($cast($XEmbeddedFrame, this->target)))->handle;
}

bool XEmbeddedFramePeer::supportsXEmbed() {
	return $nc(($cast($EmbeddedFrame, this->target)))->supportsXEmbed();
}

bool XEmbeddedFramePeer::requestWindowFocus(int64_t time, bool timeProvided) {
	if (this->embedder != nullptr && $nc(this->embedder)->isActive()) {
		$nc(XEmbeddedFramePeer::xembedLog)->fine("Requesting focus from embedding host"_s);
		return $nc(this->embedder)->requestFocus();
	} else {
		$nc(XEmbeddedFramePeer::xembedLog)->fine("Requesting focus from X"_s);
		return $XFramePeer::requestWindowFocus(time, timeProvided);
	}
}

void XEmbeddedFramePeer::requestInitialFocus() {
	if (this->embedder != nullptr && supportsXEmbed()) {
		$nc(this->embedder)->requestFocus();
	} else {
		$XFramePeer::requestInitialFocus();
	}
}

bool XEmbeddedFramePeer::isEventDisabled($XEvent* e) {
	if (this->embedder != nullptr && $nc(this->embedder)->isActive()) {
		switch ($nc(e)->get_type()) {
		case $XConstants::FocusIn:
			{}
		case $XConstants::FocusOut:
			{
				return true;
			}
		}
	}
	return $XFramePeer::isEventDisabled(e);
}

void XEmbeddedFramePeer::handleConfigureNotifyEvent($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	if (!XEmbeddedFramePeer::$assertionsDisabled && !($SunToolkit::isAWTLockHeldByCurrentThread())) {
		$throwNew($AssertionError);
	}
	$var($XConfigureEvent, xe, $nc(xev)->get_xconfigure());
	$init($PlatformLogger$Level);
	if ($nc(XEmbeddedFramePeer::xembedLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XEmbeddedFramePeer::xembedLog)->fine($($nc(xe)->toString()));
	}
	int32_t var$0 = scaleDown($nc(xe)->get_x());
	int32_t var$1 = scaleDown($nc(xe)->get_y());
	int32_t var$2 = scaleDown($nc(xe)->get_width());
	checkIfOnNewScreen($(toGlobal($$new($Rectangle, var$0, var$1, var$2, scaleDown($nc(xe)->get_height())))));
	$var($Rectangle, oldBounds, getBounds());
	$synchronized(getStateLock()) {
		this->x = scaleDown($nc(xe)->get_x());
		this->y = scaleDown($nc(xe)->get_y());
		this->width = scaleDown($nc(xe)->get_width());
		this->height = scaleDown($nc(xe)->get_height());
		$nc(this->dimensions)->setClientSize(this->width, this->height);
		$nc(this->dimensions)->setLocation(this->x, this->y);
	}
	if (!$nc($(getLocation()))->equals($($nc(oldBounds)->getLocation()))) {
		handleMoved(this->dimensions);
	}
	reconfigureContentWindow(this->dimensions);
}

void XEmbeddedFramePeer::traverseOutForward() {
	if (this->embedder != nullptr && $nc(this->embedder)->isActive()) {
		if ($nc(this->embedder)->isApplicationActive()) {
			$nc(XEmbeddedFramePeer::xembedLog)->fine("Traversing out Forward"_s);
			$nc(this->embedder)->traverseOutForward();
		}
	}
}

void XEmbeddedFramePeer::traverseOutBackward() {
	if (this->embedder != nullptr && $nc(this->embedder)->isActive()) {
		if ($nc(this->embedder)->isApplicationActive()) {
			$nc(XEmbeddedFramePeer::xembedLog)->fine("Traversing out Backward"_s);
			$nc(this->embedder)->traverseOutBackward();
		}
	}
}

$Point* XEmbeddedFramePeer::getLocationOnScreen() {
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		$var($Point, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, toGlobal(0, 0));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Rectangle* XEmbeddedFramePeer::getBounds() {
	return $new($Rectangle, this->x, this->y, this->width, this->height);
}

void XEmbeddedFramePeer::setBoundsPrivate(int32_t x, int32_t y, int32_t width, int32_t height) {
	setBounds(x, y, width, height, $ComponentPeer::SET_BOUNDS | $ComponentPeer::NO_EMBEDDED_CHECK);
}

$Rectangle* XEmbeddedFramePeer::getBoundsPrivate() {
	$useLocalCurrentObjectStackCache();
	int32_t x = 0;
	int32_t y = 0;
	int32_t w = 0;
	int32_t h = 0;
	$var($XWindowAttributes, attr, $new($XWindowAttributes));
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t var$1 = $XToolkit::getDisplay();
			$XlibWrapper::XGetWindowAttributes(var$1, getWindow(), attr->pData);
			x = scaleDown(attr->get_x());
			y = scaleDown(attr->get_y());
			w = scaleDown(attr->get_width());
			h = scaleDown(attr->get_height());
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	attr->dispose();
	return $new($Rectangle, x, y, w, h);
}

void XEmbeddedFramePeer::registerAccelerator($AWTKeyStroke* stroke) {
	if (stroke == nullptr) {
		return;
	}
	$nc(this->strokes)->add(stroke);
	if (this->embedder != nullptr && $nc(this->embedder)->isActive()) {
		$nc(this->embedder)->registerAccelerator(stroke, $nc(this->strokes)->size() - 1);
	}
}

void XEmbeddedFramePeer::unregisterAccelerator($AWTKeyStroke* stroke) {
	if (stroke == nullptr) {
		return;
	}
	if (this->embedder != nullptr && $nc(this->embedder)->isActive()) {
		int32_t index = $nc(this->strokes)->indexOf(stroke);
		$nc(this->embedder)->unregisterAccelerator(index);
	}
}

void XEmbeddedFramePeer::notifyStarted() {
	$useLocalCurrentObjectStackCache();
	if (this->embedder != nullptr && $nc(this->embedder)->isActive()) {
		int32_t i = 0;
		$var($Iterator, iter, $nc(this->strokes)->iterator());
		while ($nc(iter)->hasNext()) {
			$nc(this->embedder)->registerAccelerator($cast($AWTKeyStroke, $(iter->next())), i++);
		}
	}
	updateDropTarget();
}

void XEmbeddedFramePeer::notifyStopped() {
	if (this->embedder != nullptr && $nc(this->embedder)->isActive()) {
		for (int32_t i = $nc(this->strokes)->size() - 1; i >= 0; --i) {
			$nc(this->embedder)->unregisterAccelerator(i);
		}
	}
}

int64_t XEmbeddedFramePeer::getFocusTargetWindow() {
	return getWindow();
}

bool XEmbeddedFramePeer::isXEmbedActive() {
	return this->embedder != nullptr && $nc(this->embedder)->isActive();
}

int32_t XEmbeddedFramePeer::getAbsoluteX() {
	$useLocalCurrentObjectStackCache();
	int64_t var$0 = getWindow();
	int64_t var$1 = $XToolkit::getDefaultRootWindow();
	$var($Point, var$2, $new($Point, 0, 0));
	$var($Point, absoluteLoc, $XlibUtil::translateCoordinates(var$0, var$1, var$2, getScale()));
	return absoluteLoc != nullptr ? $nc(absoluteLoc)->x : 0;
}

int32_t XEmbeddedFramePeer::getAbsoluteY() {
	$useLocalCurrentObjectStackCache();
	int64_t var$0 = getWindow();
	int64_t var$1 = $XToolkit::getDefaultRootWindow();
	$var($Point, var$2, $new($Point, 0, 0));
	$var($Point, absoluteLoc, $XlibUtil::translateCoordinates(var$0, var$1, var$2, getScale()));
	return absoluteLoc != nullptr ? $nc(absoluteLoc)->y : 0;
}

int32_t XEmbeddedFramePeer::getWidth() {
	return this->width;
}

int32_t XEmbeddedFramePeer::getHeight() {
	return this->height;
}

$Dimension* XEmbeddedFramePeer::getSize() {
	return $new($Dimension, this->width, this->height);
}

void XEmbeddedFramePeer::setModalBlocked($Dialog* blocker, bool blocked) {
	$XFramePeer::setModalBlocked(blocker, blocked);
	$var($EmbeddedFrame, frame, $cast($EmbeddedFrame, this->target));
	$nc(frame)->notifyModalBlocked(blocker, blocked);
}

void XEmbeddedFramePeer::synthesizeFocusInOut(bool doFocus) {
	$useLocalCurrentObjectStackCache();
	$var($XFocusChangeEvent, xev, $new($XFocusChangeEvent));
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			xev->set_type(doFocus ? 9 : 10);
			xev->set_window($nc($(getFocusProxy()))->getWindow());
			xev->set_mode(0);
			int64_t var$1 = $XToolkit::getDisplay();
			$XlibWrapper::XSendEvent(var$1, $nc($(getFocusProxy()))->getWindow(), false, 0, xev->pData);
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			$XToolkit::awtUnlock();
			xev->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XEmbeddedFramePeer::emulateActivation(bool doActivate) {
	$XFramePeer::emulateActivation(doActivate);
}

void XEmbeddedFramePeer::print($Graphics* g) {
	$XFramePeer::print(g);
}

void XEmbeddedFramePeer::setVisible(bool vis) {
	$XFramePeer::setVisible(vis);
}

void XEmbeddedFramePeer::handleStateChange(int32_t oldState, int32_t newState) {
	$XFramePeer::handleStateChange(oldState, newState);
}

void XEmbeddedFramePeer::handlePropertyNotify($XEvent* xev) {
	$XFramePeer::handlePropertyNotify(xev);
}

void XEmbeddedFramePeer::setState(int32_t newState) {
	$XFramePeer::setState(newState);
}

int32_t XEmbeddedFramePeer::getState() {
	return $XFramePeer::getState();
}

void XEmbeddedFramePeer::setMaximizedBounds($Rectangle* b) {
	$XFramePeer::setMaximizedBounds(b);
}

void XEmbeddedFramePeer::setMenuBar($MenuBar* mb) {
	$XFramePeer::setMenuBar(mb);
}

void XEmbeddedFramePeer::handleWindowFocusOut($Window* oppositeWindow, int64_t serial) {
	$XFramePeer::handleWindowFocusOut(oppositeWindow, serial);
}

void XEmbeddedFramePeer::handleWindowFocusIn(int64_t serial) {
	$XFramePeer::handleWindowFocusIn(serial);
}

void XEmbeddedFramePeer::handleClientMessage($XEvent* xev) {
	$XFramePeer::handleClientMessage(xev);
}

$Point* XEmbeddedFramePeer::getLocation() {
	return $XFramePeer::getLocation();
}

int32_t XEmbeddedFramePeer::getY() {
	return $XFramePeer::getY();
}

int32_t XEmbeddedFramePeer::getX() {
	return $XFramePeer::getX();
}

void XEmbeddedFramePeer::setResizable(bool resizable) {
	$XFramePeer::setResizable(resizable);
}

void XEmbeddedFramePeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	$XFramePeer::setBounds(x, y, width, height, op);
}

$Insets* XEmbeddedFramePeer::getInsets() {
	return $XFramePeer::getInsets();
}

void XEmbeddedFramePeer::handleReparentNotifyEvent($XEvent* xev) {
	$XFramePeer::handleReparentNotifyEvent(xev);
}

void XEmbeddedFramePeer::handleFocusEvent($XEvent* xev) {
	$XFramePeer::handleFocusEvent(xev);
}

void XEmbeddedFramePeer::handleDeiconify() {
	$XFramePeer::handleDeiconify();
}

void XEmbeddedFramePeer::handleIconify() {
	$XFramePeer::handleIconify();
}

void XEmbeddedFramePeer::setTitle($String* title) {
	$XFramePeer::setTitle(title);
}

$Graphics* XEmbeddedFramePeer::getGraphics() {
	return $XFramePeer::getGraphics();
}

int64_t XEmbeddedFramePeer::getContentWindow() {
	return $XFramePeer::getContentWindow();
}

int64_t XEmbeddedFramePeer::getShell() {
	return $XFramePeer::getShell();
}

void XEmbeddedFramePeer::updateWindow() {
	$XFramePeer::updateWindow();
}

void XEmbeddedFramePeer::setOpaque(bool isOpaque) {
	$XFramePeer::setOpaque(isOpaque);
}

void XEmbeddedFramePeer::setOpacity(float opacity) {
	$XFramePeer::setOpacity(opacity);
}

void XEmbeddedFramePeer::handleButtonPressRelease($XEvent* xev) {
	$XFramePeer::handleButtonPressRelease(xev);
}

void XEmbeddedFramePeer::handleMotionNotify($XEvent* xev) {
	$XFramePeer::handleMotionNotify(xev);
}

void XEmbeddedFramePeer::handleXCrossingEvent($XEvent* xev) {
	$XFramePeer::handleXCrossingEvent(xev);
}

bool XEmbeddedFramePeer::isGrabbed() {
	return $XFramePeer::isGrabbed();
}

void XEmbeddedFramePeer::setGrab(bool grab) {
	$XFramePeer::setGrab(grab);
}

void XEmbeddedFramePeer::setMWMHints($PropMwmHints* hints) {
	$XFramePeer::setMWMHints(hints);
}

$PropMwmHints* XEmbeddedFramePeer::getMWMHints() {
	return $XFramePeer::getMWMHints();
}

void XEmbeddedFramePeer::setNETWMState($XAtomList* state) {
	$XFramePeer::setNETWMState(state);
}

$XAtomList* XEmbeddedFramePeer::getNETWMState() {
	return $XFramePeer::getNETWMState();
}

void XEmbeddedFramePeer::updateFocusableWindowState() {
	$XFramePeer::updateFocusableWindowState();
}

void XEmbeddedFramePeer::removeDropTarget() {
	$XFramePeer::removeDropTarget();
}

void XEmbeddedFramePeer::addDropTarget() {
	$XFramePeer::addDropTarget();
}

void XEmbeddedFramePeer::xSetVisible(bool visible) {
	$XFramePeer::xSetVisible(visible);
}

bool XEmbeddedFramePeer::requestWindowFocus() {
	return $XFramePeer::requestWindowFocus();
}

bool XEmbeddedFramePeer::requestWindowFocus($XWindowPeer* actualFocusedWindow) {
	return $XFramePeer::requestWindowFocus(actualFocusedWindow);
}

void XEmbeddedFramePeer::setModalBlocked($Dialog* d, bool blocked, $Vector* javaToplevels) {
	$XFramePeer::setModalBlocked(d, blocked, javaToplevels);
}

void XEmbeddedFramePeer::removeToplevelStateListener($ToplevelStateListener* l) {
	$XFramePeer::removeToplevelStateListener(l);
}

void XEmbeddedFramePeer::addToplevelStateListener($ToplevelStateListener* l) {
	$XFramePeer::addToplevelStateListener(l);
}

void XEmbeddedFramePeer::handleUnmapNotifyEvent($XEvent* xev) {
	$XFramePeer::handleUnmapNotifyEvent(xev);
}

void XEmbeddedFramePeer::handleMapNotifyEvent($XEvent* xev) {
	$XFramePeer::handleMapNotifyEvent(xev);
}

void XEmbeddedFramePeer::handleVisibilityEvent($XEvent* xev) {
	$XFramePeer::handleVisibilityEvent(xev);
}

void XEmbeddedFramePeer::updateSecurityWarningVisibility() {
	$XFramePeer::updateSecurityWarningVisibility();
}

void XEmbeddedFramePeer::setFullScreenExclusiveModeState(bool state) {
	$XFramePeer::setFullScreenExclusiveModeState(state);
}

void XEmbeddedFramePeer::repositionSecurityWarning() {
	$XFramePeer::repositionSecurityWarning();
}

void XEmbeddedFramePeer::updateAlwaysOnTopState() {
	$XFramePeer::updateAlwaysOnTopState();
}

void XEmbeddedFramePeer::toBack() {
	$XFramePeer::toBack();
}

void XEmbeddedFramePeer::toFront() {
	$XFramePeer::toFront();
}

void XEmbeddedFramePeer::paletteChanged() {
	$XFramePeer::paletteChanged();
}

void XEmbeddedFramePeer::displayChanged() {
	$XFramePeer::displayChanged();
}

void XEmbeddedFramePeer::checkIfOnNewScreen($Rectangle* newBounds) {
	$XFramePeer::checkIfOnNewScreen(newBounds);
}

void XEmbeddedFramePeer::handleWindowFocusOutSync($Window* oppositeWindow, int64_t serial) {
	$XFramePeer::handleWindowFocusOutSync(oppositeWindow, serial);
}

void XEmbeddedFramePeer::handleWindowFocusInSync(int64_t serial) {
	$XFramePeer::handleWindowFocusInSync(serial);
}

void XEmbeddedFramePeer::handleWindowFocusIn_Dispatch() {
	$XFramePeer::handleWindowFocusIn_Dispatch();
}

$XWindowPeer* XEmbeddedFramePeer::getOwnerPeer() {
	return $XFramePeer::getOwnerPeer();
}

$Dimension* XEmbeddedFramePeer::getTargetMinimumSize() {
	return $XFramePeer::getTargetMinimumSize();
}

void XEmbeddedFramePeer::recursivelySetIcon($List* icons) {
	$XFramePeer::recursivelySetIcon(icons);
}

void XEmbeddedFramePeer::updateIconImages() {
	$XFramePeer::updateIconImages();
}

void clinit$XEmbeddedFramePeer($Class* class$) {
	XEmbeddedFramePeer::$assertionsDisabled = !XEmbeddedFramePeer::class$->desiredAssertionStatus();
	$assignStatic(XEmbeddedFramePeer::xembedLog, $PlatformLogger::getLogger("sun.awt.X11.xembed.XEmbeddedFramePeer"_s));
}

XEmbeddedFramePeer::XEmbeddedFramePeer() {
}

$Class* XEmbeddedFramePeer::load$($String* name, bool initialize) {
	$loadClass(XEmbeddedFramePeer, name, initialize, &_XEmbeddedFramePeer_ClassInfo_, clinit$XEmbeddedFramePeer, allocate$XEmbeddedFramePeer);
	return class$;
}

$Class* XEmbeddedFramePeer::class$ = nullptr;

		} // X11
	} // awt
} // sun