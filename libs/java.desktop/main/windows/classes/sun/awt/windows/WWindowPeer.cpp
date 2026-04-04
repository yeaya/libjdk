#include <sun/awt/windows/WWindowPeer.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/AWTEventMulticaster.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/SystemColor.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window$Type.h>
#include <java/awt/Window.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/event/WindowEvent.h>
#include <java/awt/event/WindowListener.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor$FrameAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/TimedWindowEvent.h>
#include <sun/awt/Win32GraphicsConfig.h>
#include <sun/awt/Win32GraphicsDevice.h>
#include <sun/awt/Win32GraphicsEnvironment.h>
#include <sun/awt/windows/TranslucentWindowPainter.h>
#include <sun/awt/windows/WCanvasPeer.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WFileDialogPeer.h>
#include <sun/awt/windows/WPanelPeer.h>
#include <sun/awt/windows/WPrintDialogPeer.h>
#include <sun/awt/windows/WToolkit.h>
#include <sun/awt/windows/WWindowPeer$ActiveWindowListener.h>
#include <sun/awt/windows/WWindowPeer$GuiDisposedListener.h>
#include <sun/java2d/SunGraphicsEnvironment.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef ACTIVE_WINDOWS_KEY
#undef FINE
#undef FINER
#undef GUI_DISPOSED
#undef ICONIFIED
#undef MOUSE_EVENT
#undef NORMAL
#undef WINDOW_CLOSING
#undef WINDOW_DEICONIFIED
#undef WINDOW_ICONIFIED
#undef WINDOW_STATE_CHANGED

using $ComponentArray = $Array<::java::awt::Component>;
using $GraphicsDeviceArray = $Array<::java::awt::GraphicsDevice>;
using $AWTEvent = ::java::awt::AWTEvent;
using $AWTEventMulticaster = ::java::awt::AWTEventMulticaster;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Frame = ::java::awt::Frame;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $SystemColor = ::java::awt::SystemColor;
using $Window = ::java::awt::Window;
using $Window$Type = ::java::awt::Window$Type;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $WindowListener = ::java::awt::event::WindowListener;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ColorModel = ::java::awt::image::ColorModel;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $StringBuffer = ::java::lang::StringBuffer;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;
using $TimedWindowEvent = ::sun::awt::TimedWindowEvent;
using $Win32GraphicsConfig = ::sun::awt::Win32GraphicsConfig;
using $Win32GraphicsDevice = ::sun::awt::Win32GraphicsDevice;
using $Win32GraphicsEnvironment = ::sun::awt::Win32GraphicsEnvironment;
using $TranslucentWindowPainter = ::sun::awt::windows::TranslucentWindowPainter;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WFileDialogPeer = ::sun::awt::windows::WFileDialogPeer;
using $WPanelPeer = ::sun::awt::windows::WPanelPeer;
using $WPrintDialogPeer = ::sun::awt::windows::WPrintDialogPeer;
using $WToolkit = ::sun::awt::windows::WToolkit;
using $WWindowPeer$ActiveWindowListener = ::sun::awt::windows::WWindowPeer$ActiveWindowListener;
using $WWindowPeer$GuiDisposedListener = ::sun::awt::windows::WWindowPeer$GuiDisposedListener;
using $SunGraphicsEnvironment = ::sun::java2d::SunGraphicsEnvironment;
using $Region = ::sun::java2d::pipe::Region;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace windows {

class WWindowPeer$$Lambda$updateGC : public $Runnable {
	$class(WWindowPeer$$Lambda$updateGC, $NO_CLASS_INIT, $Runnable)
public:
	void init$(WWindowPeer* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->updateGC();
	}
	WWindowPeer* inst$ = nullptr;
};
$Class* WWindowPeer$$Lambda$updateGC::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(WWindowPeer$$Lambda$updateGC, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WWindowPeer;)V", nullptr, $PUBLIC, $method(WWindowPeer$$Lambda$updateGC, init$, void, WWindowPeer*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WWindowPeer$$Lambda$updateGC, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.awt.windows.WWindowPeer$$Lambda$updateGC",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WWindowPeer$$Lambda$updateGC, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WWindowPeer$$Lambda$updateGC);
	});
	return class$;
}
$Class* WWindowPeer$$Lambda$updateGC::class$ = nullptr;

bool WWindowPeer::isObscured() {
	 return this->$WPanelPeer::isObscured();
}

bool WWindowPeer::canDetermineObscurity() {
	 return this->$WPanelPeer::canDetermineObscurity();
}

$Point* WWindowPeer::getLocationOnScreen() {
	 return this->$WPanelPeer::getLocationOnScreen();
}

void WWindowPeer::setVisible(bool b) {
	this->$WPanelPeer::setVisible(b);
}

void WWindowPeer::setEnabled(bool b) {
	this->$WPanelPeer::setEnabled(b);
}

void WWindowPeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	this->$WPanelPeer::setBounds(x, y, width, height, op);
}

void WWindowPeer::coalescePaintEvent($PaintEvent* e) {
	this->$WPanelPeer::coalescePaintEvent(e);
}

void WWindowPeer::handleEvent($AWTEvent* e) {
	this->$WPanelPeer::handleEvent(e);
}

$Dimension* WWindowPeer::getMinimumSize() {
	 return this->$WPanelPeer::getMinimumSize();
}

$Dimension* WWindowPeer::getPreferredSize() {
	 return this->$WPanelPeer::getPreferredSize();
}

void WWindowPeer::layout() {
	this->$WPanelPeer::layout();
}

bool WWindowPeer::isFocusable() {
	 return this->$WPanelPeer::isFocusable();
}

$GraphicsConfiguration* WWindowPeer::getGraphicsConfiguration() {
	 return this->$WPanelPeer::getGraphicsConfiguration();
}

bool WWindowPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$WPanelPeer::updateGraphicsData(gc);
}

$ColorModel* WWindowPeer::getColorModel() {
	 return this->$WPanelPeer::getColorModel();
}

$Graphics* WWindowPeer::getGraphics() {
	 return this->$WPanelPeer::getGraphics();
}

$FontMetrics* WWindowPeer::getFontMetrics($Font* font) {
	 return this->$WPanelPeer::getFontMetrics(font);
}

void WWindowPeer::setForeground($Color* c) {
	this->$WPanelPeer::setForeground(c);
}

void WWindowPeer::setFont($Font* f) {
	this->$WPanelPeer::setFont(f);
}

void WWindowPeer::updateCursorImmediately() {
	this->$WPanelPeer::updateCursorImmediately();
}

bool WWindowPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$WPanelPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

$Image* WWindowPeer::createImage(int32_t width, int32_t height) {
	 return this->$WPanelPeer::createImage(width, height);
}

$VolatileImage* WWindowPeer::createVolatileImage(int32_t width, int32_t height) {
	 return this->$WPanelPeer::createVolatileImage(width, height);
}

$String* WWindowPeer::toString() {
	 return this->$WPanelPeer::toString();
}

void WWindowPeer::beginLayout() {
	this->$WPanelPeer::beginLayout();
}

void WWindowPeer::endLayout() {
	this->$WPanelPeer::endLayout();
}

void WWindowPeer::beginValidate() {
	this->$WPanelPeer::beginValidate();
}

void WWindowPeer::endValidate() {
	this->$WPanelPeer::endValidate();
}

bool WWindowPeer::handlesWheelScrolling() {
	 return this->$WPanelPeer::handlesWheelScrolling();
}

void WWindowPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$WPanelPeer::createBuffers(numBuffers, caps);
}

void WWindowPeer::destroyBuffers() {
	this->$WPanelPeer::destroyBuffers();
}

void WWindowPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$WPanelPeer::flip(x1, y1, x2, y2, flipAction);
}

$Image* WWindowPeer::getBackBuffer() {
	 return this->$WPanelPeer::getBackBuffer();
}

void WWindowPeer::reparent($ContainerPeer* newNativeParent) {
	this->$WPanelPeer::reparent(newNativeParent);
}

bool WWindowPeer::isReparentSupported() {
	 return this->$WPanelPeer::isReparentSupported();
}

void WWindowPeer::applyShape($Region* shape) {
	this->$WPanelPeer::applyShape(shape);
}

void WWindowPeer::setZOrder($ComponentPeer* above) {
	this->$WPanelPeer::setZOrder(above);
}

void WWindowPeer::dispose() {
	this->$WPanelPeer::dispose();
}

int32_t WWindowPeer::hashCode() {
	 return this->$WPanelPeer::hashCode();
}

bool WWindowPeer::equals(Object$* arg0) {
	 return this->$WPanelPeer::equals(arg0);
}

$Object* WWindowPeer::clone() {
	 return this->$WPanelPeer::clone();
}

void WWindowPeer::finalize() {
	this->$WPanelPeer::finalize();
}

$PlatformLogger* WWindowPeer::log = nullptr;
$PlatformLogger* WWindowPeer::screenLog = nullptr;
$StringBuffer* WWindowPeer::ACTIVE_WINDOWS_KEY = nullptr;
$PropertyChangeListener* WWindowPeer::activeWindowListener = nullptr;
$PropertyChangeListener* WWindowPeer::guiDisposedListener = nullptr;

void WWindowPeer::initIDs() {
	$init(WWindowPeer);
	$prepareNativeStatic(initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void WWindowPeer::disposeImpl() {
	$useLocalObjectStack();
	$var($AppContext, appContext, $SunToolkit::targetToAppContext(this->target));
	$synchronized(appContext) {
		$var($List, l, $cast($List, appContext->get(WWindowPeer::ACTIVE_WINDOWS_KEY)));
		if (l != nullptr) {
			l->remove(this);
		}
	}
	$var($GraphicsConfiguration, gc, getGraphicsConfiguration());
	$$sure($Win32GraphicsDevice, $nc(gc)->getDevice())->removeDisplayChangedListener(this);
	$synchronized(getStateLock()) {
		$var($TranslucentWindowPainter, currentPainter, this->painter);
		if (currentPainter != nullptr) {
			currentPainter->flush();
		}
	}
	$WPanelPeer::disposeImpl();
}

void WWindowPeer::toFront() {
	updateFocusableWindowState();
	_toFront();
}

void WWindowPeer::_toFront() {
	$prepareNative(_toFront, void);
	$invokeNative();
	$finishNative();
}

void WWindowPeer::toBack() {
	$prepareNative(toBack, void);
	$invokeNative();
	$finishNative();
}

void WWindowPeer::setAlwaysOnTopNative(bool value) {
	$prepareNative(setAlwaysOnTopNative, void, bool value);
	$invokeNative(value);
	$finishNative();
}

void WWindowPeer::setAlwaysOnTop(bool value) {
	if ((value && $nc($cast($Window, this->target))->isVisible()) || !value) {
		setAlwaysOnTopNative(value);
	}
}

void WWindowPeer::updateAlwaysOnTopState() {
	setAlwaysOnTop($nc($cast($Window, this->target))->isAlwaysOnTop());
}

void WWindowPeer::updateFocusableWindowState() {
	setFocusableWindow($nc($cast($Window, this->target))->isFocusableWindow());
}

void WWindowPeer::setFocusableWindow(bool value) {
	$prepareNative(setFocusableWindow, void, bool value);
	$invokeNative(value);
	$finishNative();
}

void WWindowPeer::setTitle($String* title$renamed) {
	$var($String, title, title$renamed);
	if (title == nullptr) {
		$assign(title, ""_s);
	}
	_setTitle(title);
}

void WWindowPeer::_setTitle($String* title) {
	$prepareNative(_setTitle, void, $String* title);
	$invokeNative(title);
	$finishNative();
}

void WWindowPeer::setResizable(bool resizable) {
	_setResizable(resizable);
}

void WWindowPeer::_setResizable(bool resizable) {
	$prepareNative(_setResizable, void, bool resizable);
	$invokeNative(resizable);
	$finishNative();
}

void WWindowPeer::init$($Window* target) {
	$WPanelPeer::init$(target);
	$set(this, modalBlocker, nullptr);
	$init($Window$Type);
	$set(this, windowType, $Window$Type::NORMAL);
	this->opacity = 1.0f;
}

void WWindowPeer::initialize() {
	$useLocalObjectStack();
	$WPanelPeer::initialize();
	updateInsets(this->insets_);
	if (!$nc($cast($Window, this->target))->isFontSet()) {
		$init($WComponentPeer);
		$nc($cast($Window, this->target))->setFont($WComponentPeer::defaultFont);
		setFont($WComponentPeer::defaultFont);
	}
	if (!$nc($cast($Window, this->target))->isForegroundSet()) {
		$init($SystemColor);
		$nc($cast($Window, this->target))->setForeground($SystemColor::windowText);
	}
	if (!$nc($cast($Window, this->target))->isBackgroundSet()) {
		$init($SystemColor);
		$nc($cast($Window, this->target))->setBackground($SystemColor::window);
	}
	$var($GraphicsConfiguration, gc, getGraphicsConfiguration());
	$var($Win32GraphicsDevice, gd, $cast($Win32GraphicsDevice, $nc(gc)->getDevice()));
	$nc(gd)->addDisplayChangedListener(this);
	initActiveWindowsTracking($cast($Window, this->target));
	updateIconImages();
	$var($Shape, shape, $nc($cast($Window, this->target))->getShape());
	if (shape != nullptr) {
		applyShape($($Region::getInstance(shape, nullptr)));
	}
	float opacity = $nc($cast($Window, this->target))->getOpacity();
	if (opacity < 1.0f) {
		setOpacity(opacity);
	}
	$synchronized(getStateLock()) {
		this->isOpaque = true;
		setOpaque($nc($cast($Window, this->target))->isOpaque());
	}
}

void WWindowPeer::createAwtWindow($WComponentPeer* parent) {
	$prepareNative(createAwtWindow, void, $WComponentPeer* parent);
	$invokeNative(parent);
	$finishNative();
}

void WWindowPeer::preCreate($WComponentPeer* parent) {
	$set(this, windowType, $nc($cast($Window, this->target))->getType());
}

void WWindowPeer::create($WComponentPeer* parent) {
	preCreate(parent);
	createAwtWindow(parent);
}

$WComponentPeer* WWindowPeer::getNativeParent() {
	$var($Container, owner, $nc($cast($Window, this->target))->getOwner());
	return $cast($WComponentPeer, $WToolkit::targetToPeer(owner));
}

void WWindowPeer::realShow() {
	$WPanelPeer::show();
}

void WWindowPeer::show() {
	$useLocalObjectStack();
	updateFocusableWindowState();
	bool alwaysOnTop = $nc($cast($Window, this->target))->isAlwaysOnTop();
	updateGC();
	realShow();
	updateMinimumSize();
	if ($nc($cast($Window, this->target))->isAlwaysOnTopSupported() && alwaysOnTop) {
		setAlwaysOnTop(alwaysOnTop);
	}
	$synchronized(getStateLock()) {
		if (!this->isOpaque) {
			updateWindow(true);
		}
	}
	$var($WComponentPeer, owner, getNativeParent());
	if (owner != nullptr && owner->isLightweightFramePeer()) {
		$var($Rectangle, b, getBounds());
		handleExpose(0, 0, $nc(b)->width, $nc(b)->height);
	}
}

void WWindowPeer::syncBounds() {
}

void WWindowPeer::updateInsets($Insets* i) {
	$prepareNative(updateInsets, void, $Insets* i);
	$invokeNative(i);
	$finishNative();
}

int32_t WWindowPeer::getSysMinWidth() {
	$init(WWindowPeer);
	$prepareNativeStatic(getSysMinWidth, int32_t);
	int32_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int32_t WWindowPeer::getSysMinHeight() {
	$init(WWindowPeer);
	$prepareNativeStatic(getSysMinHeight, int32_t);
	int32_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int32_t WWindowPeer::getSysIconWidth() {
	$init(WWindowPeer);
	$prepareNativeStatic(getSysIconWidth, int32_t);
	int32_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int32_t WWindowPeer::getSysIconHeight() {
	$init(WWindowPeer);
	$prepareNativeStatic(getSysIconHeight, int32_t);
	int32_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int32_t WWindowPeer::getSysSmIconWidth() {
	$init(WWindowPeer);
	$prepareNativeStatic(getSysSmIconWidth, int32_t);
	int32_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int32_t WWindowPeer::getSysSmIconHeight() {
	$init(WWindowPeer);
	$prepareNativeStatic(getSysSmIconHeight, int32_t);
	int32_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

void WWindowPeer::setIconImagesData($ints* iconRaster, int32_t w, int32_t h, $ints* smallIconRaster, int32_t smw, int32_t smh) {
	$prepareNative(setIconImagesData, void, $ints* iconRaster, int32_t w, int32_t h, $ints* smallIconRaster, int32_t smw, int32_t smh);
	$invokeNative(iconRaster, w, h, smallIconRaster, smw, smh);
	$finishNative();
}

void WWindowPeer::reshapeFrame(int32_t x, int32_t y, int32_t width, int32_t height) {
	$prepareNative(reshapeFrame, void, int32_t x, int32_t y, int32_t width, int32_t height);
	$invokeNative(x, y, width, height);
	$finishNative();
}

$Dimension* WWindowPeer::getNativeWindowSize() {
	$prepareNative(getNativeWindowSize, $Dimension*);
	$var($Dimension, $ret, $invokeNativeObject());
	$finishNative();
	return $ret;
}

$Dimension* WWindowPeer::getScaledWindowSize() {
	return getNativeWindowSize();
}

bool WWindowPeer::requestWindowFocus($FocusEvent$Cause* cause) {
	if (!focusAllowedFor()) {
		return false;
	}
	$init($FocusEvent$Cause);
	return requestWindowFocus(cause == $FocusEvent$Cause::MOUSE_EVENT);
}

bool WWindowPeer::requestWindowFocus(bool isMouseEventCause) {
	$prepareNative(requestWindowFocus, bool, bool isMouseEventCause);
	bool $ret = $invokeNative(isMouseEventCause);
	$finishNative();
	return $ret;
}

bool WWindowPeer::focusAllowedFor() {
	$var($Window, window, $cast($Window, this->target));
	bool var$1 = !$nc(window)->isVisible();
	bool var$0 = var$1 || !window->isEnabled();
	if (var$0 || !window->isFocusableWindow()) {
		return false;
	}
	if (isModalBlocked()) {
		return false;
	}
	return true;
}

void WWindowPeer::hide() {
	$useLocalObjectStack();
	$var($WindowListener, listener, this->windowListener);
	if (listener != nullptr) {
		listener->windowClosing($$new($WindowEvent, $cast($Window, this->target), $WindowEvent::WINDOW_CLOSING));
	}
	$WPanelPeer::hide();
}

void WWindowPeer::preprocessPostEvent($AWTEvent* event) {
	if ($instanceOf($WindowEvent, event)) {
		$var($WindowListener, listener, this->windowListener);
		if (listener != nullptr) {
			switch (event->getID()) {
			case $WindowEvent::WINDOW_CLOSING:
				listener->windowClosing($cast($WindowEvent, event));
				break;
			case $WindowEvent::WINDOW_ICONIFIED:
				listener->windowIconified($cast($WindowEvent, event));
				break;
			}
		}
	}
}

void WWindowPeer::notifyWindowStateChanged(int32_t oldState, int32_t newState) {
	$useLocalObjectStack();
	int32_t changed = oldState ^ newState;
	if (changed == 0) {
		return;
	}
	$init($PlatformLogger$Level);
	if ($nc(WWindowPeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
		WWindowPeer::log->fine("Reporting state change %x -> %x"_s, $$new($ObjectArray, {
			$($Integer::valueOf(oldState)),
			$($Integer::valueOf(newState))
		}));
	}
	if ($instanceOf($Frame, this->target)) {
		$$nc($AWTAccessor::getFrameAccessor())->setExtendedState($cast($Frame, this->target), newState);
	}
	if ((changed & $Frame::ICONIFIED) > 0) {
		if ((newState & $Frame::ICONIFIED) > 0) {
			postEvent($$new($TimedWindowEvent, $cast($Window, this->target), $WindowEvent::WINDOW_ICONIFIED, nullptr, 0, 0, $System::currentTimeMillis()));
		} else {
			postEvent($$new($TimedWindowEvent, $cast($Window, this->target), $WindowEvent::WINDOW_DEICONIFIED, nullptr, 0, 0, $System::currentTimeMillis()));
		}
	}
	postEvent($$new($TimedWindowEvent, $cast($Window, this->target), $WindowEvent::WINDOW_STATE_CHANGED, nullptr, oldState, newState, $System::currentTimeMillis()));
}

void WWindowPeer::addWindowListener($WindowListener* l) {
	$synchronized(this) {
		$set(this, windowListener, $AWTEventMulticaster::add(this->windowListener, l));
	}
}

void WWindowPeer::removeWindowListener($WindowListener* l) {
	$synchronized(this) {
		$set(this, windowListener, $AWTEventMulticaster::remove(this->windowListener, l));
	}
}

void WWindowPeer::updateMinimumSize() {
	$useLocalObjectStack();
	$var($Dimension, minimumSize, nullptr);
	if ($nc($cast($Component, this->target))->isMinimumSizeSet()) {
		$assign(minimumSize, $nc($cast($Component, this->target))->getMinimumSize());
	}
	if (minimumSize != nullptr) {
		$var($GraphicsConfiguration, var$0, getGraphicsConfiguration());
		int32_t var$1 = getSysMinWidth();
		$var($Dimension, sysMin, $SunGraphicsEnvironment::toUserSpace(var$0, var$1, getSysMinHeight()));
		int32_t var$2 = $Math::max(minimumSize->width, $nc(sysMin)->width);
		setMinSize(var$2, $Math::max(minimumSize->height, sysMin->height));
	} else {
		setMinSize(0, 0);
	}
}

void WWindowPeer::updateIconImages() {
	$useLocalObjectStack();
	$var($List, imageList, $nc($cast($Window, this->target))->getIconImages());
	if (imageList == nullptr || imageList->size() == 0) {
		setIconImagesData(nullptr, 0, 0, nullptr, 0, 0);
	} else {
		int32_t w = getSysIconWidth();
		int32_t h = getSysIconHeight();
		int32_t smw = getSysSmIconWidth();
		int32_t smh = getSysSmIconHeight();
		$var($AffineTransform, tx, $$nc(getGraphicsConfiguration())->getDefaultTransform());
		w = $Region::clipScale(w, $nc(tx)->getScaleX());
		h = $Region::clipScale(h, tx->getScaleY());
		smw = $Region::clipScale(smw, tx->getScaleX());
		smh = $Region::clipScale(smh, tx->getScaleY());
		$var($DataBufferInt, iconData, $SunToolkit::getScaledIconData(imageList, w, h));
		$var($DataBufferInt, iconSmData, $SunToolkit::getScaledIconData(imageList, smw, smh));
		if (iconData != nullptr && iconSmData != nullptr) {
			$var($ints, var$0, iconData->getData());
			setIconImagesData(var$0, w, h, $(iconSmData->getData()), smw, smh);
		} else {
			setIconImagesData(nullptr, 0, 0, nullptr, 0, 0);
		}
	}
}

void WWindowPeer::setMinSize(int32_t width, int32_t height) {
	$prepareNative(setMinSize, void, int32_t width, int32_t height);
	$invokeNative(width, height);
	$finishNative();
}

bool WWindowPeer::isModalBlocked() {
	return this->modalBlocker != nullptr;
}

void WWindowPeer::setModalBlocked($Dialog* dialog, bool blocked) {
	$useLocalObjectStack();
	$synchronized($$sure($Component, getTarget())->getTreeLock()) {
		$var(WWindowPeer, blockerPeer, $cast(WWindowPeer, $$nc($AWTAccessor::getComponentAccessor())->getPeer(dialog)));
		if (blocked) {
			$set(this, modalBlocker, blockerPeer);
			if ($instanceOf($WFileDialogPeer, blockerPeer)) {
				$cast($WFileDialogPeer, blockerPeer)->blockWindow(this);
			} else if ($instanceOf($WPrintDialogPeer, blockerPeer)) {
				$cast($WPrintDialogPeer, blockerPeer)->blockWindow(this);
			} else {
				modalDisable(dialog, $nc(blockerPeer)->getHWnd());
			}
		} else {
			$set(this, modalBlocker, nullptr);
			if ($instanceOf($WFileDialogPeer, blockerPeer)) {
				$cast($WFileDialogPeer, blockerPeer)->unblockWindow(this);
			} else if ($instanceOf($WPrintDialogPeer, blockerPeer)) {
				$cast($WPrintDialogPeer, blockerPeer)->unblockWindow(this);
			} else {
				modalEnable(dialog);
			}
		}
	}
}

void WWindowPeer::modalDisable($Dialog* blocker, int64_t blockerHWnd) {
	$prepareNative(modalDisable, void, $Dialog* blocker, int64_t blockerHWnd);
	$invokeNative(blocker, blockerHWnd);
	$finishNative();
}

void WWindowPeer::modalEnable($Dialog* blocker) {
	$prepareNative(modalEnable, void, $Dialog* blocker);
	$invokeNative(blocker);
	$finishNative();
}

$longs* WWindowPeer::getActiveWindowHandles($Component* target) {
	$init(WWindowPeer);
	$useLocalObjectStack();
	$var($AppContext, appContext, $SunToolkit::targetToAppContext(target));
	if (appContext == nullptr) {
		return nullptr;
	}
	$synchronized(appContext) {
		$var($List, l, $cast($List, appContext->get(WWindowPeer::ACTIVE_WINDOWS_KEY)));
		if (l == nullptr) {
			return nullptr;
		}
		$var($longs, result, $new($longs, $nc(l)->size()));
		for (int32_t j = 0; j < l->size(); ++j) {
			result->set(j, $$sure(WWindowPeer, l->get(j))->getHWnd());
		}
		return result;
	}
}

void WWindowPeer::draggedToNewScreen() {
	displayChanged();
}

void WWindowPeer::updateGC() {
	$useLocalObjectStack();
	int32_t scrn = getScreenImOn();
	$init($PlatformLogger$Level);
	if ($nc(WWindowPeer::screenLog)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(WWindowPeer::log)->finer($$str({"Screen number: "_s, $$str(scrn)}));
	}
	$var($Win32GraphicsDevice, oldDev, $cast($Win32GraphicsDevice, $nc(this->winGraphicsConfig)->getDevice()));
	$var($Win32GraphicsDevice, newDev, nullptr);
	$var($GraphicsDeviceArray, devs, $$nc($GraphicsEnvironment::getLocalGraphicsEnvironment())->getScreenDevices());
	if (scrn >= $nc(devs)->length) {
		$assign(newDev, $cast($Win32GraphicsDevice, $$nc($GraphicsEnvironment::getLocalGraphicsEnvironment())->getDefaultScreenDevice()));
	} else {
		$assign(newDev, $cast($Win32GraphicsDevice, devs->get(scrn)));
	}
	$set(this, winGraphicsConfig, $cast($Win32GraphicsConfig, $nc(newDev)->getDefaultConfiguration()));
	if (WWindowPeer::screenLog->isLoggable($PlatformLogger$Level::FINE)) {
		if (this->winGraphicsConfig == nullptr) {
			WWindowPeer::screenLog->fine("Assertion (winGraphicsConfig != null) failed"_s);
		}
	}
	if (oldDev != newDev) {
		$nc(oldDev)->removeDisplayChangedListener(this);
		newDev->addDisplayChangedListener(this);
	}
	$$nc($AWTAccessor::getComponentAccessor())->setGraphicsConfiguration($cast($Component, this->target), this->winGraphicsConfig);
}

void WWindowPeer::displayChanged() {
	$SunToolkit::executeOnEventHandlerThread(this->target, $$new(WWindowPeer$$Lambda$updateGC, this));
}

void WWindowPeer::paletteChanged() {
}

int32_t WWindowPeer::getScreenImOn() {
	$prepareNative(getScreenImOn, int32_t);
	int32_t $ret = $invokeNative();
	$finishNative();
	return $ret;
}

void WWindowPeer::setFullScreenExclusiveModeState(bool state) {
	$prepareNative(setFullScreenExclusiveModeState, void, bool state);
	$invokeNative(state);
	$finishNative();
}

void WWindowPeer::grab() {
	nativeGrab();
}

void WWindowPeer::ungrab() {
	nativeUngrab();
}

void WWindowPeer::nativeGrab() {
	$prepareNative(nativeGrab, void);
	$invokeNative();
	$finishNative();
}

void WWindowPeer::nativeUngrab() {
	$prepareNative(nativeUngrab, void);
	$invokeNative();
	$finishNative();
}

bool WWindowPeer::hasWarningWindow() {
	return $nc($cast($Window, this->target))->getWarningString() != nullptr;
}

bool WWindowPeer::isTargetUndecorated() {
	return true;
}

void WWindowPeer::repositionSecurityWarning() {
	$prepareNative(repositionSecurityWarning, void);
	$invokeNative();
	$finishNative();
}

void WWindowPeer::print($Graphics* g) {
	$var($Shape, shape, $nc($cast($Window, this->target))->getShape());
	if (shape != nullptr) {
		$nc(g)->setClip(shape);
	}
	$WPanelPeer::print(g);
}

void WWindowPeer::replaceSurfaceDataRecursively($Component* c) {
	$useLocalObjectStack();
	if ($instanceOf($Container, c)) {
		$var($ComponentArray, arr$, $cast($Container, c)->getComponents());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Component, child, arr$->get(i$));
			{
				replaceSurfaceDataRecursively(child);
			}
		}
	}
	$var($Object, cp, $$nc($AWTAccessor::getComponentAccessor())->getPeer(c));
	if ($instanceOf($WComponentPeer, cp)) {
		$cast($WComponentPeer, cp)->replaceSurfaceDataLater();
	}
}

$Graphics* WWindowPeer::getTranslucentGraphics() {
	$synchronized(getStateLock()) {
		return this->isOpaque ? ($Graphics*)nullptr : $nc(this->painter)->getGraphics(false);
	}
}

void WWindowPeer::setBackground($Color* c) {
	$WPanelPeer::setBackground(c);
	$synchronized(getStateLock()) {
		if (!this->isOpaque && $nc($cast($Window, this->target))->isVisible()) {
			updateWindow(true);
		}
	}
}

void WWindowPeer::setOpacity(int32_t iOpacity) {
	$prepareNative(setOpacity, void, int32_t iOpacity);
	$invokeNative(iOpacity);
	$finishNative();
}

void WWindowPeer::setOpacity(float opacity) {
	$useLocalObjectStack();
	if (!$$sure($SunToolkit, $nc($cast($Window, this->target))->getToolkit())->isWindowOpacitySupported()) {
		return;
	}
	if (opacity < 0.0f || opacity > 1.0f) {
		$throwNew($IllegalArgumentException, "The value of opacity should be in the range [0.0f .. 1.0f]."_s);
	}
	if (((this->opacity == 1.0f && opacity < 1.0f) || (this->opacity < 1.0f && opacity == 1.0f)) && !$Win32GraphicsEnvironment::isVistaOS()) {
		replaceSurfaceDataRecursively($$cast($Component, getTarget()));
	}
	this->opacity = opacity;
	int32_t maxOpacity = 255;
	int32_t iOpacity = $cast(int32_t, (opacity * maxOpacity));
	if (iOpacity < 0) {
		iOpacity = 0;
	}
	if (iOpacity > maxOpacity) {
		iOpacity = maxOpacity;
	}
	setOpacity(iOpacity);
	$synchronized(getStateLock()) {
		if (!this->isOpaque && $nc($cast($Window, this->target))->isVisible()) {
			updateWindow(true);
		}
	}
}

void WWindowPeer::setOpaqueImpl(bool isOpaque) {
	$prepareNative(setOpaqueImpl, void, bool isOpaque);
	$invokeNative(isOpaque);
	$finishNative();
}

void WWindowPeer::setOpaque(bool isOpaque) {
	$useLocalObjectStack();
	$synchronized(getStateLock()) {
		if (this->isOpaque == isOpaque) {
			return;
		}
	}
	$var($Window, target, $cast($Window, getTarget()));
	if (!isOpaque) {
		$var($SunToolkit, sunToolkit, $cast($SunToolkit, $nc(target)->getToolkit()));
		bool var$0 = !$nc(sunToolkit)->isWindowTranslucencySupported();
		if (var$0 || !sunToolkit->isTranslucencyCapable($(target->getGraphicsConfiguration()))) {
			return;
		}
	}
	bool isVistaOS = $Win32GraphicsEnvironment::isVistaOS();
	if (this->isOpaque != isOpaque && !isVistaOS) {
		replaceSurfaceDataRecursively(target);
	}
	$synchronized(getStateLock()) {
		this->isOpaque = isOpaque;
		setOpaqueImpl(isOpaque);
		if (isOpaque) {
			$var($TranslucentWindowPainter, currentPainter, this->painter);
			if (currentPainter != nullptr) {
				currentPainter->flush();
				$set(this, painter, nullptr);
			}
		} else {
			$set(this, painter, $TranslucentWindowPainter::createInstance(this));
		}
	}
	if (isVistaOS) {
		$var($Shape, shape, $nc(target)->getShape());
		if (shape != nullptr) {
			target->setShape(shape);
		}
	}
	if ($nc(target)->isVisible()) {
		updateWindow(true);
	}
}

void WWindowPeer::updateWindowImpl($ints* data, int32_t width, int32_t height) {
	$prepareNative(updateWindowImpl, void, $ints* data, int32_t width, int32_t height);
	$invokeNative(data, width, height);
	$finishNative();
}

void WWindowPeer::updateWindow() {
	updateWindow(false);
}

void WWindowPeer::updateWindow(bool repaint) {
	$useLocalObjectStack();
	$var($Window, w, $cast($Window, this->target));
	$synchronized(getStateLock()) {
		bool var$1 = this->isOpaque || !$nc(w)->isVisible();
		bool var$0 = var$1 || ($nc(w)->getWidth() <= 0);
		if (var$0 || ($nc(w)->getHeight() <= 0)) {
			return;
		}
		$var($TranslucentWindowPainter, currentPainter, this->painter);
		if (currentPainter != nullptr) {
			currentPainter->updateWindow(repaint);
		} else {
			$init($PlatformLogger$Level);
			if ($nc(WWindowPeer::log)->isLoggable($PlatformLogger$Level::FINER)) {
				WWindowPeer::log->finer("Translucent window painter is null in updateWindow"_s);
			}
		}
	}
}

void WWindowPeer::initActiveWindowsTracking($Window* w) {
	$init(WWindowPeer);
	$useLocalObjectStack();
	$var($AppContext, appContext, $AppContext::getAppContext());
	$synchronized(appContext) {
		$var($List, l, $cast($List, appContext->get(WWindowPeer::ACTIVE_WINDOWS_KEY)));
		if (l == nullptr) {
			$assign(l, $new($LinkedList));
			appContext->put(WWindowPeer::ACTIVE_WINDOWS_KEY, l);
			appContext->addPropertyChangeListener($AppContext::GUI_DISPOSED, WWindowPeer::guiDisposedListener);
			$var($KeyboardFocusManager, kfm, $KeyboardFocusManager::getCurrentKeyboardFocusManager());
			$nc(kfm)->addPropertyChangeListener("activeWindow"_s, WWindowPeer::activeWindowListener);
		}
	}
}

$Insets* WWindowPeer::getInsets() {
	return $WPanelPeer::getInsets();
}

void WWindowPeer::paint($Graphics* g) {
	$WPanelPeer::paint(g);
}

$GraphicsConfiguration* WWindowPeer::getAppropriateGraphicsConfiguration($GraphicsConfiguration* gc) {
	return $WPanelPeer::getAppropriateGraphicsConfiguration(gc);
}

bool WWindowPeer::shouldClearRectBeforePaint() {
	return $WPanelPeer::shouldClearRectBeforePaint();
}

void WWindowPeer::clinit$($Class* clazz) {
	$assignStatic(WWindowPeer::log, $PlatformLogger::getLogger("sun.awt.windows.WWindowPeer"_s));
	$assignStatic(WWindowPeer::screenLog, $PlatformLogger::getLogger("sun.awt.windows.screen.WWindowPeer"_s));
	$assignStatic(WWindowPeer::ACTIVE_WINDOWS_KEY, $new($StringBuffer, "active_windows_list"_s));
	$assignStatic(WWindowPeer::activeWindowListener, $new($WWindowPeer$ActiveWindowListener));
	$assignStatic(WWindowPeer::guiDisposedListener, $new($WWindowPeer$GuiDisposedListener));
	{
		WWindowPeer::initIDs();
	}
}

WWindowPeer::WWindowPeer() {
}

$Class* WWindowPeer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.awt.windows.WWindowPeer$$Lambda$updateGC")) {
			return WWindowPeer$$Lambda$updateGC::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WWindowPeer, log)},
		{"screenLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WWindowPeer, screenLog)},
		{"modalBlocker", "Lsun/awt/windows/WWindowPeer;", nullptr, $PRIVATE, $field(WWindowPeer, modalBlocker)},
		{"isOpaque", "Z", nullptr, $PRIVATE, $field(WWindowPeer, isOpaque)},
		{"painter", "Lsun/awt/windows/TranslucentWindowPainter;", nullptr, $PRIVATE, $field(WWindowPeer, painter)},
		{"ACTIVE_WINDOWS_KEY", "Ljava/lang/StringBuffer;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WWindowPeer, ACTIVE_WINDOWS_KEY)},
		{"activeWindowListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE | $STATIC, $staticField(WWindowPeer, activeWindowListener)},
		{"guiDisposedListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WWindowPeer, guiDisposedListener)},
		{"windowListener", "Ljava/awt/event/WindowListener;", nullptr, $PRIVATE, $field(WWindowPeer, windowListener)},
		{"windowType", "Ljava/awt/Window$Type;", nullptr, $PRIVATE | $VOLATILE, $field(WWindowPeer, windowType)},
		{"opacity", "F", nullptr, $PRIVATE, $field(WWindowPeer, opacity)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*applyShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC},
		{"*beginLayout", "()V", nullptr, $PUBLIC},
		{"*beginValidate", "()V", nullptr, $PUBLIC | $NATIVE},
		{"*canDetermineObscurity", "()Z", nullptr, $PUBLIC},
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*coalescePaintEvent", "(Ljava/awt/event/PaintEvent;)V", nullptr, $PUBLIC},
		{"*createBuffers", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC},
		{"*createImage", "(II)Ljava/awt/Image;", nullptr, $PUBLIC},
		{"*createVolatileImage", "(II)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC},
		{"*destroyBuffers", "()V", nullptr, $PUBLIC},
		{"*dispose", "()V", nullptr, $PUBLIC | $FINAL},
		{"*endLayout", "()V", nullptr, $PUBLIC},
		{"*endValidate", "()V", nullptr, $PUBLIC | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*flip", "(IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC},
		{"*getBackBuffer", "()Ljava/awt/Image;", nullptr, $PUBLIC | $SYNCHRONIZED},
		{"*getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
		{"*getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
		{"*getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
		{"*getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
		{"*getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC | $NATIVE},
		{"*getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
		{"*getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
		{"*handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
		{"*handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/awt/Window;)V", nullptr, 0, $method(WWindowPeer, init$, void, $Window*)},
		{"_setResizable", "(Z)V", nullptr, $PRIVATE | $NATIVE, $method(WWindowPeer, _setResizable, void, bool)},
		{"_setTitle", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $NATIVE, $method(WWindowPeer, _setTitle, void, $String*)},
		{"_toFront", "()V", nullptr, $PRIVATE | $NATIVE, $method(WWindowPeer, _toFront, void)},
		{"addWindowListener", "(Ljava/awt/event/WindowListener;)V", nullptr, $SYNCHRONIZED, $virtualMethod(WWindowPeer, addWindowListener, void, $WindowListener*)},
		{"create", "(Lsun/awt/windows/WComponentPeer;)V", nullptr, 0, $virtualMethod(WWindowPeer, create, void, $WComponentPeer*)},
		{"createAwtWindow", "(Lsun/awt/windows/WComponentPeer;)V", nullptr, $NATIVE, $virtualMethod(WWindowPeer, createAwtWindow, void, $WComponentPeer*)},
		{"displayChanged", "()V", nullptr, $PUBLIC, $virtualMethod(WWindowPeer, displayChanged, void)},
		{"disposeImpl", "()V", nullptr, $PROTECTED, $virtualMethod(WWindowPeer, disposeImpl, void)},
		{"draggedToNewScreen", "()V", nullptr, 0, $virtualMethod(WWindowPeer, draggedToNewScreen, void)},
		{"focusAllowedFor", "()Z", nullptr, $PUBLIC, $virtualMethod(WWindowPeer, focusAllowedFor, bool)},
		{"getActiveWindowHandles", "(Ljava/awt/Component;)[J", nullptr, $PUBLIC | $STATIC, $staticMethod(WWindowPeer, getActiveWindowHandles, $longs*, $Component*)},
		{"getAppropriateGraphicsConfiguration", "(Ljava/awt/GraphicsConfiguration;)Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(WWindowPeer, getAppropriateGraphicsConfiguration, $GraphicsConfiguration*, $GraphicsConfiguration*)},
		{"getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(WWindowPeer, getInsets, $Insets*)},
		{"getNativeParent", "()Lsun/awt/windows/WComponentPeer;", nullptr, $FINAL, $virtualMethod(WWindowPeer, getNativeParent, $WComponentPeer*)},
		{"getNativeWindowSize", "()Ljava/awt/Dimension;", nullptr, $NATIVE, $virtualMethod(WWindowPeer, getNativeWindowSize, $Dimension*)},
		{"getScaledWindowSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(WWindowPeer, getScaledWindowSize, $Dimension*)},
		{"getScreenImOn", "()I", nullptr, $PRIVATE | $NATIVE, $method(WWindowPeer, getScreenImOn, int32_t)},
		{"getSysIconHeight", "()I", nullptr, $STATIC | $NATIVE, $staticMethod(WWindowPeer, getSysIconHeight, int32_t)},
		{"getSysIconWidth", "()I", nullptr, $STATIC | $NATIVE, $staticMethod(WWindowPeer, getSysIconWidth, int32_t)},
		{"getSysMinHeight", "()I", nullptr, $STATIC | $NATIVE, $staticMethod(WWindowPeer, getSysMinHeight, int32_t)},
		{"getSysMinWidth", "()I", nullptr, $STATIC | $NATIVE, $staticMethod(WWindowPeer, getSysMinWidth, int32_t)},
		{"getSysSmIconHeight", "()I", nullptr, $STATIC | $NATIVE, $staticMethod(WWindowPeer, getSysSmIconHeight, int32_t)},
		{"getSysSmIconWidth", "()I", nullptr, $STATIC | $NATIVE, $staticMethod(WWindowPeer, getSysSmIconWidth, int32_t)},
		{"getTranslucentGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC | $FINAL, $method(WWindowPeer, getTranslucentGraphics, $Graphics*)},
		{"grab", "()V", nullptr, $PUBLIC, $virtualMethod(WWindowPeer, grab, void)},
		{"hasWarningWindow", "()Z", nullptr, $PRIVATE, $method(WWindowPeer, hasWarningWindow, bool)},
		{"hide", "()V", nullptr, 0, $virtualMethod(WWindowPeer, hide, void)},
		{"initActiveWindowsTracking", "(Ljava/awt/Window;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(WWindowPeer, initActiveWindowsTracking, void, $Window*)},
		{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(WWindowPeer, initIDs, void)},
		{"initialize", "()V", nullptr, 0, $virtualMethod(WWindowPeer, initialize, void)},
		{"*isFocusable", "()Z", nullptr, $PUBLIC},
		{"isModalBlocked", "()Z", nullptr, $PUBLIC, $virtualMethod(WWindowPeer, isModalBlocked, bool)},
		{"*isObscured", "()Z", nullptr, $PUBLIC | $NATIVE},
		{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
		{"isTargetUndecorated", "()Z", nullptr, 0, $virtualMethod(WWindowPeer, isTargetUndecorated, bool)},
		{"*layout", "()V", nullptr, $PUBLIC},
		{"modalDisable", "(Ljava/awt/Dialog;J)V", nullptr, $NATIVE, $virtualMethod(WWindowPeer, modalDisable, void, $Dialog*, int64_t)},
		{"modalEnable", "(Ljava/awt/Dialog;)V", nullptr, $NATIVE, $virtualMethod(WWindowPeer, modalEnable, void, $Dialog*)},
		{"nativeGrab", "()V", nullptr, $PRIVATE | $NATIVE, $method(WWindowPeer, nativeGrab, void)},
		{"nativeUngrab", "()V", nullptr, $PRIVATE | $NATIVE, $method(WWindowPeer, nativeUngrab, void)},
		{"notifyWindowStateChanged", "(II)V", nullptr, $PRIVATE, $method(WWindowPeer, notifyWindowStateChanged, void, int32_t, int32_t)},
		{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(WWindowPeer, paint, void, $Graphics*)},
		{"paletteChanged", "()V", nullptr, $PUBLIC, $virtualMethod(WWindowPeer, paletteChanged, void)},
		{"preCreate", "(Lsun/awt/windows/WComponentPeer;)V", nullptr, 0, $virtualMethod(WWindowPeer, preCreate, void, $WComponentPeer*)},
		{"preprocessPostEvent", "(Ljava/awt/AWTEvent;)V", nullptr, 0, $virtualMethod(WWindowPeer, preprocessPostEvent, void, $AWTEvent*)},
		{"print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(WWindowPeer, print, void, $Graphics*)},
		{"realShow", "()V", nullptr, $PROTECTED, $virtualMethod(WWindowPeer, realShow, void)},
		{"removeWindowListener", "(Ljava/awt/event/WindowListener;)V", nullptr, $SYNCHRONIZED, $virtualMethod(WWindowPeer, removeWindowListener, void, $WindowListener*)},
		{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
		{"replaceSurfaceDataRecursively", "(Ljava/awt/Component;)V", nullptr, $PRIVATE, $method(WWindowPeer, replaceSurfaceDataRecursively, void, $Component*)},
		{"repositionSecurityWarning", "()V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(WWindowPeer, repositionSecurityWarning, void)},
		{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
		{"requestWindowFocus", "(Ljava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC, $virtualMethod(WWindowPeer, requestWindowFocus, bool, $FocusEvent$Cause*)},
		{"requestWindowFocus", "(Z)Z", nullptr, $PRIVATE | $NATIVE, $method(WWindowPeer, requestWindowFocus, bool, bool)},
		{"reshapeFrame", "(IIII)V", nullptr, $SYNCHRONIZED | $NATIVE, $virtualMethod(WWindowPeer, reshapeFrame, void, int32_t, int32_t, int32_t, int32_t)},
		{"setAlwaysOnTop", "(Z)V", nullptr, $PUBLIC, $virtualMethod(WWindowPeer, setAlwaysOnTop, void, bool)},
		{"setAlwaysOnTopNative", "(Z)V", nullptr, $PRIVATE | $NATIVE, $method(WWindowPeer, setAlwaysOnTopNative, void, bool)},
		{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $virtualMethod(WWindowPeer, setBackground, void, $Color*)},
		{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
		{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
		{"setFocusableWindow", "(Z)V", nullptr, $NATIVE, $virtualMethod(WWindowPeer, setFocusableWindow, void, bool)},
		{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
		{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
		{"setFullScreenExclusiveModeState", "(Z)V", nullptr, $PUBLIC | $FINAL | $NATIVE, $method(WWindowPeer, setFullScreenExclusiveModeState, void, bool)},
		{"setIconImagesData", "([III[III)V", nullptr, $NATIVE, $virtualMethod(WWindowPeer, setIconImagesData, void, $ints*, int32_t, int32_t, $ints*, int32_t, int32_t)},
		{"setMinSize", "(II)V", nullptr, $NATIVE, $virtualMethod(WWindowPeer, setMinSize, void, int32_t, int32_t)},
		{"setModalBlocked", "(Ljava/awt/Dialog;Z)V", nullptr, $PUBLIC, $virtualMethod(WWindowPeer, setModalBlocked, void, $Dialog*, bool)},
		{"setOpacity", "(I)V", nullptr, $PRIVATE | $NATIVE, $method(WWindowPeer, setOpacity, void, int32_t)},
		{"setOpacity", "(F)V", nullptr, $PUBLIC, $virtualMethod(WWindowPeer, setOpacity, void, float)},
		{"setOpaque", "(Z)V", nullptr, $PUBLIC, $virtualMethod(WWindowPeer, setOpaque, void, bool)},
		{"setOpaqueImpl", "(Z)V", nullptr, $PRIVATE | $NATIVE, $method(WWindowPeer, setOpaqueImpl, void, bool)},
		{"setResizable", "(Z)V", nullptr, $PUBLIC, $virtualMethod(WWindowPeer, setResizable, void, bool)},
		{"setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(WWindowPeer, setTitle, void, $String*)},
		{"*setVisible", "(Z)V", nullptr, $PUBLIC},
		{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
		{"shouldClearRectBeforePaint", "()Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(WWindowPeer, shouldClearRectBeforePaint, bool)},
		{"show", "()V", nullptr, $PUBLIC, $virtualMethod(WWindowPeer, show, void)},
		{"syncBounds", "()V", nullptr, $FINAL, $virtualMethod(WWindowPeer, syncBounds, void)},
		{"toBack", "()V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(WWindowPeer, toBack, void)},
		{"toFront", "()V", nullptr, $PUBLIC, $virtualMethod(WWindowPeer, toFront, void)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"ungrab", "()V", nullptr, $PUBLIC, $virtualMethod(WWindowPeer, ungrab, void)},
		{"updateAlwaysOnTopState", "()V", nullptr, $PUBLIC, $virtualMethod(WWindowPeer, updateAlwaysOnTopState, void)},
		{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
		{"updateFocusableWindowState", "()V", nullptr, $PUBLIC, $virtualMethod(WWindowPeer, updateFocusableWindowState, void)},
		{"updateGC", "()V", nullptr, $PUBLIC, $virtualMethod(WWindowPeer, updateGC, void)},
		{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
		{"updateIconImages", "()V", nullptr, $PUBLIC, $virtualMethod(WWindowPeer, updateIconImages, void)},
		{"updateInsets", "(Ljava/awt/Insets;)V", nullptr, $NATIVE, $virtualMethod(WWindowPeer, updateInsets, void, $Insets*)},
		{"updateMinimumSize", "()V", nullptr, $PUBLIC, $virtualMethod(WWindowPeer, updateMinimumSize, void)},
		{"updateWindow", "()V", nullptr, $PUBLIC, $virtualMethod(WWindowPeer, updateWindow, void)},
		{"updateWindow", "(Z)V", nullptr, $PRIVATE, $method(WWindowPeer, updateWindow, void, bool)},
		{"updateWindowImpl", "([III)V", nullptr, $NATIVE, $virtualMethod(WWindowPeer, updateWindowImpl, void, $ints*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WWindowPeer$ActiveWindowListener", "sun.awt.windows.WWindowPeer", "ActiveWindowListener", $PRIVATE | $STATIC},
		{"sun.awt.windows.WWindowPeer$GuiDisposedListener", "sun.awt.windows.WWindowPeer", "GuiDisposedListener", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.windows.WWindowPeer",
		"sun.awt.windows.WPanelPeer",
		"java.awt.peer.WindowPeer,sun.awt.DisplayChangedListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.awt.windows.WWindowPeer$ActiveWindowListener,sun.awt.windows.WWindowPeer$GuiDisposedListener"
	};
	$loadClass(WWindowPeer, name, initialize, &classInfo$$, WWindowPeer::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(WWindowPeer));
	});
	return class$;
}

$Class* WWindowPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun