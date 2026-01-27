#include <sun/awt/SunToolkit.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/AWTPermission.h>
#include <java/awt/Button.h>
#include <java/awt/Canvas.h>
#include <java/awt/Checkbox.h>
#include <java/awt/Choice.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/DefaultKeyboardFocusManager.h>
#include <java/awt/Dialog$ModalExclusionType.h>
#include <java/awt/Dialog$ModalityType.h>
#include <java/awt/Dialog.h>
#include <java/awt/Dimension.h>
#include <java/awt/EventQueue.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Image.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Label.h>
#include <java/awt/List.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/Panel.h>
#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/ScrollPane.h>
#include <java/awt/Scrollbar.h>
#include <java/awt/SystemTray.h>
#include <java/awt/TextArea.h>
#include <java/awt/TextField.h>
#include <java/awt/Toolkit.h>
#include <java/awt/TrayIcon.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/InvocationEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/WindowEvent.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/ImageProducer.h>
#include <java/awt/image/MultiResolutionImage.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <java/awt/peer/FramePeer.h>
#include <java/awt/peer/SystemTrayPeer.h>
#include <java/awt/peer/TrayIconPeer.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/Enum.h>
#include <java/lang/Error.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/net/URL.h>
#include <java/security/AccessController.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/WeakHashMap.h>
#include <java/util/concurrent/TimeUnit.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <java/util/concurrent/locks/Condition.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <sun/awt/AWTAccessor$AWTEventAccessor.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor$DefaultKeyboardFocusManagerAccessor.h>
#include <sun/awt/AWTAccessor$EventQueueAccessor.h>
#include <sun/awt/AWTAccessor$MenuComponentAccessor.h>
#include <sun/awt/AWTAccessor$SequencedEventAccessor.h>
#include <sun/awt/AWTAccessor$WindowAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AWTAutoShutdown.h>
#include <sun/awt/AWTPermissions.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/DebugSettings.h>
#include <sun/awt/LightweightFrame.h>
#include <sun/awt/ModalityEvent.h>
#include <sun/awt/ModalityListener.h>
#include <sun/awt/PeerEvent.h>
#include <sun/awt/PostEventQueue.h>
#include <sun/awt/SoftCache.h>
#include <sun/awt/SunToolkit$1.h>
#include <sun/awt/SunToolkit$1AWTInvocationLock.h>
#include <sun/awt/SunToolkit$2.h>
#include <sun/awt/SunToolkit$3.h>
#include <sun/awt/SunToolkit$IllegalThreadException.h>
#include <sun/awt/SunToolkit$ModalityListenerList.h>
#include <sun/awt/TimedWindowEvent.h>
#include <sun/awt/WeakIdentityHashMap.h>
#include <sun/awt/im/InputContext.h>
#include <sun/awt/im/SimpleInputMethodWindow.h>
#include <sun/awt/image/ByteArrayImageSource.h>
#include <sun/awt/image/FileImageSource.h>
#include <sun/awt/image/ImageRepresentation.h>
#include <sun/awt/image/InputStreamImageSource.h>
#include <sun/awt/image/MultiResolutionToolkitImage.h>
#include <sun/awt/image/ToolkitImage.h>
#include <sun/awt/image/URLImageSource.h>
#include <sun/font/FontDesignMetrics.h>
#include <sun/net/util/URLUtil.h>
#include <sun/security/action/GetBooleanAction.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef ABORT
#undef ALLBITS
#undef ALT_MASK
#undef APPLICATION_EXCLUDE
#undef APPLICATION_MODAL
#undef AWT_LOCK
#undef AWT_LOCK_COND
#undef CTRL_MASK
#undef DEACTIVATION_TIMES_MAP_KEY
#undef DEFAULT_MODAL_EXCLUSION_TYPE
#undef DEFAULT_WAIT_TIME
#undef DESKTOPFONTHINTS
#undef DIALOG
#undef DIALOG_INPUT
#undef ENGLISH
#undef ERROR
#undef EVENT_QUEUE_KEY
#undef GRAB_EVENT_MASK
#undef KEY_INTERPOLATION
#undef KEY_TEXT_ANTIALIASING
#undef LOW_PRIORITY_EVENT
#undef MAX_BUTTONS_SUPPORTED
#undef MAX_ITERS
#undef MILLISECONDS
#undef MINIMAL_DELAY
#undef MIN_ITERS
#undef MODALITY_POPPED
#undef MODALITY_PUSHED
#undef MODELESS
#undef MONOSPACED
#undef NANOSECONDS
#undef NO_EXCLUDE
#undef POST_EVENT_QUEUE_KEY
#undef PRIORITY_EVENT
#undef SANS_SERIF
#undef SERIF
#undef SET_WINDOW_ALWAYS_ON_TOP_PERMISSION
#undef TYPE_INT_ARGB
#undef ULTIMATE_PRIORITY_EVENT
#undef VALUE_INTERPOLATION_BILINEAR
#undef VALUE_TEXT_ANTIALIAS_GASP
#undef VALUE_TEXT_ANTIALIAS_LCD_HBGR
#undef VALUE_TEXT_ANTIALIAS_LCD_HRGB
#undef VALUE_TEXT_ANTIALIAS_LCD_VBGR
#undef VALUE_TEXT_ANTIALIAS_LCD_VRGB
#undef VALUE_TEXT_ANTIALIAS_ON
#undef WINDOW_LOST_FOCUS

using $AWTEvent = ::java::awt::AWTEvent;
using $Button = ::java::awt::Button;
using $Canvas = ::java::awt::Canvas;
using $Checkbox = ::java::awt::Checkbox;
using $Choice = ::java::awt::Choice;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $DefaultKeyboardFocusManager = ::java::awt::DefaultKeyboardFocusManager;
using $Dialog = ::java::awt::Dialog;
using $Dialog$ModalExclusionType = ::java::awt::Dialog$ModalExclusionType;
using $Dialog$ModalityType = ::java::awt::Dialog$ModalityType;
using $Dimension = ::java::awt::Dimension;
using $EventQueue = ::java::awt::EventQueue;
using $FocusTraversalPolicy = ::java::awt::FocusTraversalPolicy;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Frame = ::java::awt::Frame;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Image = ::java::awt::Image;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Label = ::java::awt::Label;
using $1List = ::java::awt::List;
using $MenuComponent = ::java::awt::MenuComponent;
using $Panel = ::java::awt::Panel;
using $Rectangle = ::java::awt::Rectangle;
using $RenderingHints = ::java::awt::RenderingHints;
using $ScrollPane = ::java::awt::ScrollPane;
using $Scrollbar = ::java::awt::Scrollbar;
using $SystemTray = ::java::awt::SystemTray;
using $TextArea = ::java::awt::TextArea;
using $TextField = ::java::awt::TextField;
using $Toolkit = ::java::awt::Toolkit;
using $TrayIcon = ::java::awt::TrayIcon;
using $Window = ::java::awt::Window;
using $InputEvent = ::java::awt::event::InputEvent;
using $InvocationEvent = ::java::awt::event::InvocationEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ImageProducer = ::java::awt::image::ImageProducer;
using $MultiResolutionImage = ::java::awt::image::MultiResolutionImage;
using $Raster = ::java::awt::image::Raster;
using $FramePeer = ::java::awt::peer::FramePeer;
using $SystemTrayPeer = ::java::awt::peer::SystemTrayPeer;
using $TrayIconPeer = ::java::awt::peer::TrayIconPeer;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Enum = ::java::lang::Enum;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $URL = ::java::net::URL;
using $AccessController = ::java::security::AccessController;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $WeakHashMap = ::java::util::WeakHashMap;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $Condition = ::java::util::concurrent::locks::Condition;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$AWTEventAccessor = ::sun::awt::AWTAccessor$AWTEventAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $AWTAccessor$DefaultKeyboardFocusManagerAccessor = ::sun::awt::AWTAccessor$DefaultKeyboardFocusManagerAccessor;
using $AWTAccessor$EventQueueAccessor = ::sun::awt::AWTAccessor$EventQueueAccessor;
using $AWTAccessor$MenuComponentAccessor = ::sun::awt::AWTAccessor$MenuComponentAccessor;
using $AWTAccessor$SequencedEventAccessor = ::sun::awt::AWTAccessor$SequencedEventAccessor;
using $AWTAccessor$WindowAccessor = ::sun::awt::AWTAccessor$WindowAccessor;
using $AWTAutoShutdown = ::sun::awt::AWTAutoShutdown;
using $AWTPermissions = ::sun::awt::AWTPermissions;
using $AppContext = ::sun::awt::AppContext;
using $DebugSettings = ::sun::awt::DebugSettings;
using $LightweightFrame = ::sun::awt::LightweightFrame;
using $ModalityEvent = ::sun::awt::ModalityEvent;
using $ModalityListener = ::sun::awt::ModalityListener;
using $PeerEvent = ::sun::awt::PeerEvent;
using $PostEventQueue = ::sun::awt::PostEventQueue;
using $SoftCache = ::sun::awt::SoftCache;
using $SunToolkit$1 = ::sun::awt::SunToolkit$1;
using $SunToolkit$1AWTInvocationLock = ::sun::awt::SunToolkit$1AWTInvocationLock;
using $SunToolkit$2 = ::sun::awt::SunToolkit$2;
using $SunToolkit$3 = ::sun::awt::SunToolkit$3;
using $SunToolkit$IllegalThreadException = ::sun::awt::SunToolkit$IllegalThreadException;
using $SunToolkit$ModalityListenerList = ::sun::awt::SunToolkit$ModalityListenerList;
using $TimedWindowEvent = ::sun::awt::TimedWindowEvent;
using $WeakIdentityHashMap = ::sun::awt::WeakIdentityHashMap;
using $InputContext = ::sun::awt::im::InputContext;
using $SimpleInputMethodWindow = ::sun::awt::im::SimpleInputMethodWindow;
using $ByteArrayImageSource = ::sun::awt::image::ByteArrayImageSource;
using $FileImageSource = ::sun::awt::image::FileImageSource;
using $ImageRepresentation = ::sun::awt::image::ImageRepresentation;
using $InputStreamImageSource = ::sun::awt::image::InputStreamImageSource;
using $MultiResolutionToolkitImage = ::sun::awt::image::MultiResolutionToolkitImage;
using $ToolkitImage = ::sun::awt::image::ToolkitImage;
using $URLImageSource = ::sun::awt::image::URLImageSource;
using $FontDesignMetrics = ::sun::font::FontDesignMetrics;
using $URLUtil = ::sun::net::util::URLUtil;
using $GetBooleanAction = ::sun::security::action::GetBooleanAction;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {

class SunToolkit$$Lambda$lambda$realSync$0 : public $Runnable {
	$class(SunToolkit$$Lambda$lambda$realSync$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		SunToolkit::lambda$realSync$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SunToolkit$$Lambda$lambda$realSync$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SunToolkit$$Lambda$lambda$realSync$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SunToolkit$$Lambda$lambda$realSync$0, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SunToolkit$$Lambda$lambda$realSync$0, run, void)},
	{}
};
$ClassInfo SunToolkit$$Lambda$lambda$realSync$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.SunToolkit$$Lambda$lambda$realSync$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* SunToolkit$$Lambda$lambda$realSync$0::load$($String* name, bool initialize) {
	$loadClass(SunToolkit$$Lambda$lambda$realSync$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SunToolkit$$Lambda$lambda$realSync$0::class$ = nullptr;

$FieldInfo _SunToolkit_FieldInfo_[] = {
	{"GRAB_EVENT_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunToolkit, GRAB_EVENT_MASK)},
	{"POST_EVENT_QUEUE_KEY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SunToolkit, POST_EVENT_QUEUE_KEY)},
	{"numberOfButtons", "I", nullptr, $PROTECTED | $STATIC, $staticField(SunToolkit, numberOfButtons)},
	{"MAX_BUTTONS_SUPPORTED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunToolkit, MAX_BUTTONS_SUPPORTED)},
	{"AWT_LOCK", "Ljava/util/concurrent/locks/ReentrantLock;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SunToolkit, AWT_LOCK)},
	{"AWT_LOCK_COND", "Ljava/util/concurrent/locks/Condition;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SunToolkit, AWT_LOCK_COND)},
	{"appContextMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Object;Lsun/awt/AppContext;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SunToolkit, appContextMap)},
	{"fileImgCache", "Lsun/awt/SoftCache;", nullptr, $STATIC | $FINAL, $staticField(SunToolkit, fileImgCache)},
	{"urlImgCache", "Lsun/awt/SoftCache;", nullptr, $STATIC | $FINAL, $staticField(SunToolkit, urlImgCache)},
	{"startupLocale", "Ljava/util/Locale;", nullptr, $PRIVATE | $STATIC, $staticField(SunToolkit, startupLocale)},
	{"DEFAULT_MODAL_EXCLUSION_TYPE", "Ljava/awt/Dialog$ModalExclusionType;", nullptr, $PRIVATE | $STATIC, $staticField(SunToolkit, DEFAULT_MODAL_EXCLUSION_TYPE)},
	{"modalityListeners", "Lsun/awt/SunToolkit$ModalityListenerList;", nullptr, $PRIVATE, $field(SunToolkit, modalityListeners)},
	{"DEFAULT_WAIT_TIME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunToolkit, DEFAULT_WAIT_TIME)},
	{"MAX_ITERS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SunToolkit, MAX_ITERS)},
	{"MIN_ITERS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SunToolkit, MIN_ITERS)},
	{"MINIMAL_DELAY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SunToolkit, MINIMAL_DELAY)},
	{"waitLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(SunToolkit, waitLock)},
	{"touchKeyboardAutoShowIsEnabled", "Z", nullptr, $PRIVATE | $STATIC, $staticField(SunToolkit, touchKeyboardAutoShowIsEnabled)},
	{"checkedSystemAAFontSettings", "Z", nullptr, $PRIVATE | $STATIC, $staticField(SunToolkit, checkedSystemAAFontSettings)},
	{"useSystemAAFontSettings", "Z", nullptr, $PRIVATE | $STATIC, $staticField(SunToolkit, useSystemAAFontSettings$)},
	{"lastExtraCondition", "Z", nullptr, $PRIVATE | $STATIC, $staticField(SunToolkit, lastExtraCondition)},
	{"desktopFontHints", "Ljava/awt/RenderingHints;", nullptr, $PRIVATE | $STATIC, $staticField(SunToolkit, desktopFontHints)},
	{"DESKTOPFONTHINTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunToolkit, DESKTOPFONTHINTS)},
	{"sunAwtDisableMixing", "Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC, $staticField(SunToolkit, sunAwtDisableMixing)},
	{"DEACTIVATION_TIMES_MAP_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SunToolkit, DEACTIVATION_TIMES_MAP_KEY)},
	{}
};

$MethodInfo _SunToolkit_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getKeyboardFocusManagerPeer", "()Ljava/awt/peer/KeyboardFocusManagerPeer;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(SunToolkit, init$, void)},
	{"addModalityListener", "(Lsun/awt/ModalityListener;)V", nullptr, $PUBLIC, $virtualMethod(SunToolkit, addModalityListener, void, $ModalityListener*)},
	{"awtLock", "()V", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(SunToolkit, awtLock, void)},
	{"awtLockNotify", "()V", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(SunToolkit, awtLockNotify, void)},
	{"awtLockNotifyAll", "()V", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(SunToolkit, awtLockNotifyAll, void)},
	{"awtLockWait", "()V", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(SunToolkit, awtLockWait, void), "java.lang.InterruptedException"},
	{"awtLockWait", "(J)V", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(SunToolkit, awtLockWait, void, int64_t), "java.lang.InterruptedException"},
	{"awtTryLock", "()Z", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(SunToolkit, awtTryLock, bool)},
	{"awtUnlock", "()V", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(SunToolkit, awtUnlock, void)},
	{"canPopupOverlapTaskBar", "()Z", nullptr, $PUBLIC, $virtualMethod(SunToolkit, canPopupOverlapTaskBar, bool)},
	{"checkAndSetPolicy", "(Ljava/awt/Container;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SunToolkit, checkAndSetPolicy, void, $Container*)},
	{"checkImage", "(Ljava/awt/Image;IILjava/awt/image/ImageObserver;)I", nullptr, $PUBLIC, $virtualMethod(SunToolkit, checkImage, int32_t, $Image*, int32_t, int32_t, $ImageObserver*)},
	{"checkPermissions", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(SunToolkit, checkPermissions, void, $String*)},
	{"checkPermissions", "(Ljava/net/URL;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(SunToolkit, checkPermissions, void, $URL*)},
	{"checkResolutionVariant", "(Ljava/awt/Image;IILjava/awt/image/ImageObserver;)I", nullptr, $PRIVATE, $method(SunToolkit, checkResolutionVariant, int32_t, $Image*, int32_t, int32_t, $ImageObserver*)},
	{"closeSplashScreen", "()V", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(SunToolkit, closeSplashScreen, void)},
	{"consumeNextKeyTyped", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(SunToolkit, consumeNextKeyTyped, void, $KeyEvent*)},
	{"createImage", "(Ljava/lang/String;)Ljava/awt/Image;", nullptr, $PUBLIC, $virtualMethod(SunToolkit, createImage, $Image*, $String*)},
	{"createImage", "(Ljava/net/URL;)Ljava/awt/Image;", nullptr, $PUBLIC, $virtualMethod(SunToolkit, createImage, $Image*, $URL*)},
	{"createImage", "([BII)Ljava/awt/Image;", nullptr, $PUBLIC, $virtualMethod(SunToolkit, createImage, $Image*, $bytes*, int32_t, int32_t)},
	{"createImage", "(Ljava/awt/image/ImageProducer;)Ljava/awt/Image;", nullptr, $PUBLIC, $virtualMethod(SunToolkit, createImage, $Image*, $ImageProducer*)},
	{"createImageWithResolutionVariant", "(Ljava/awt/Image;Ljava/awt/Image;)Ljava/awt/Image;", nullptr, $PUBLIC | $STATIC, $staticMethod(SunToolkit, createImageWithResolutionVariant, $Image*, $Image*, $Image*)},
	{"createInputMethodWindow", "(Ljava/lang/String;Lsun/awt/im/InputContext;)Ljava/awt/Window;", nullptr, $PUBLIC, $virtualMethod(SunToolkit, createInputMethodWindow, $Window*, $String*, $InputContext*)},
	{"createLightweightFrame", "(Lsun/awt/LightweightFrame;)Ljava/awt/peer/FramePeer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SunToolkit, createLightweightFrame, $FramePeer*, $LightweightFrame*), "java.awt.HeadlessException"},
	{"createNewAppContext", "()Lsun/awt/AppContext;", nullptr, $PUBLIC | $STATIC, $staticMethod(SunToolkit, createNewAppContext, $AppContext*)},
	{"createNewAppContext", "(Ljava/lang/ThreadGroup;)Lsun/awt/AppContext;", nullptr, $STATIC | $FINAL, $staticMethod(SunToolkit, createNewAppContext, $AppContext*, $ThreadGroup*)},
	{"createSystemTray", "(Ljava/awt/SystemTray;)Ljava/awt/peer/SystemTrayPeer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SunToolkit, createSystemTray, $SystemTrayPeer*, $SystemTray*)},
	{"createTrayIcon", "(Ljava/awt/TrayIcon;)Ljava/awt/peer/TrayIconPeer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SunToolkit, createTrayIcon, $TrayIconPeer*, $TrayIcon*), "java.awt.HeadlessException,java.awt.AWTException"},
	{"disableBackgroundErase", "(Ljava/awt/Canvas;)V", nullptr, $PUBLIC, $virtualMethod(SunToolkit, disableBackgroundErase, void, $Canvas*)},
	{"disableBackgroundErase", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(SunToolkit, disableBackgroundErase, void, $Component*)},
	{"disableBackgroundEraseImpl", "(Ljava/awt/Component;)V", nullptr, $PRIVATE, $method(SunToolkit, disableBackgroundEraseImpl, void, $Component*)},
	{"dumpPeers", "(Lsun/util/logging/PlatformLogger;)V", nullptr, $PROTECTED | $STATIC, $staticMethod(SunToolkit, dumpPeers, void, $PlatformLogger*)},
	{"enableInputMethodsForTextComponent", "()Z", nullptr, $PUBLIC, $virtualMethod(SunToolkit, enableInputMethodsForTextComponent, bool)},
	{"executeOnEDTAndWait", "(Ljava/lang/Object;Ljava/lang/Runnable;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SunToolkit, executeOnEDTAndWait, void, Object$*, $Runnable*), "java.lang.InterruptedException,java.lang.reflect.InvocationTargetException"},
	{"executeOnEventHandlerThread", "(Ljava/lang/Object;Ljava/lang/Runnable;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SunToolkit, executeOnEventHandlerThread, void, Object$*, $Runnable*)},
	{"executeOnEventHandlerThread", "(Ljava/lang/Object;Ljava/lang/Runnable;J)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SunToolkit, executeOnEventHandlerThread, void, Object$*, $Runnable*, int64_t)},
	{"executeOnEventHandlerThread", "(Lsun/awt/PeerEvent;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SunToolkit, executeOnEventHandlerThread, void, $PeerEvent*)},
	{"fireDesktopFontPropertyChanges", "()V", nullptr, $PRIVATE, $method(SunToolkit, fireDesktopFontPropertyChanges, void)},
	{"flushPendingEvents", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(SunToolkit, flushPendingEvents, void)},
	{"flushPendingEvents", "(Lsun/awt/AppContext;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SunToolkit, flushPendingEvents, void, $AppContext*)},
	{"getAppContext", "(Ljava/lang/Object;)Lsun/awt/AppContext;", nullptr, $PRIVATE | $STATIC, $staticMethod(SunToolkit, getAppContext, $AppContext*, Object$*)},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC, $virtualMethod(SunToolkit, getColorModel, $ColorModel*), "java.awt.HeadlessException"},
	{"getContainingWindow", "(Ljava/awt/Component;)Ljava/awt/Window;", nullptr, $PUBLIC | $STATIC, $staticMethod(SunToolkit, getContainingWindow, $Window*, $Component*)},
	{"getDefaultKeyboardLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(SunToolkit, getDefaultKeyboardLocale, $Locale*)},
	{"getDesktop", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SunToolkit, getDesktop, $String*)},
	{"getDesktopAAHints", "()Ljava/awt/RenderingHints;", nullptr, $PROTECTED, $virtualMethod(SunToolkit, getDesktopAAHints, $RenderingHints*)},
	{"getDesktopAAHintsByName", "(Ljava/lang/String;)Ljava/awt/RenderingHints;", nullptr, $PRIVATE | $STATIC, $staticMethod(SunToolkit, getDesktopAAHintsByName, $RenderingHints*, $String*)},
	{"getDesktopFontHints", "()Ljava/awt/RenderingHints;", nullptr, $PUBLIC | $STATIC, $staticMethod(SunToolkit, getDesktopFontHints, $RenderingHints*)},
	{"getFocusAcceleratorKeyMask", "()I", nullptr, $PUBLIC, $virtualMethod(SunToolkit, getFocusAcceleratorKeyMask, int32_t)},
	{"getFontList", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SunToolkit, getFontList, $StringArray*)},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC, $virtualMethod(SunToolkit, getFontMetrics, $FontMetrics*, $Font*)},
	{"getHeavyweightComponent", "(Ljava/awt/Component;)Ljava/awt/Component;", nullptr, $PUBLIC | $STATIC, $staticMethod(SunToolkit, getHeavyweightComponent, $Component*, $Component*)},
	{"getImage", "(Ljava/lang/String;)Ljava/awt/Image;", nullptr, $PUBLIC, $virtualMethod(SunToolkit, getImage, $Image*, $String*)},
	{"getImage", "(Ljava/net/URL;)Ljava/awt/Image;", nullptr, $PUBLIC, $virtualMethod(SunToolkit, getImage, $Image*, $URL*)},
	{"getImageFromHash", "(Ljava/awt/Toolkit;Ljava/net/URL;)Ljava/awt/Image;", nullptr, $STATIC, $staticMethod(SunToolkit, getImageFromHash, $Image*, $Toolkit*, $URL*)},
	{"getImageFromHash", "(Ljava/awt/Toolkit;Ljava/lang/String;)Ljava/awt/Image;", nullptr, $STATIC, $staticMethod(SunToolkit, getImageFromHash, $Image*, $Toolkit*, $String*)},
	{"getImageWithResolutionVariant", "(Ljava/lang/String;Ljava/lang/String;)Ljava/awt/Image;", nullptr, $PROTECTED, $virtualMethod(SunToolkit, getImageWithResolutionVariant, $Image*, $String*, $String*)},
	{"getImageWithResolutionVariant", "(Ljava/net/URL;Ljava/net/URL;)Ljava/awt/Image;", nullptr, $PROTECTED, $virtualMethod(SunToolkit, getImageWithResolutionVariant, $Image*, $URL*, $URL*)},
	{"getLightweightFrame", "(Ljava/awt/Component;)Lsun/awt/LightweightFrame;", nullptr, $PROTECTED | $STATIC, $staticMethod(SunToolkit, getLightweightFrame, $LightweightFrame*, $Component*)},
	{"getNativeContainer", "(Ljava/awt/Component;)Ljava/awt/Container;", nullptr, $PUBLIC | $STATIC, $staticMethod(SunToolkit, getNativeContainer, $Container*, $Component*)},
	{"getNumberOfButtons", "()I", nullptr, $PUBLIC, $virtualMethod(SunToolkit, getNumberOfButtons, int32_t)},
	{"getRVSize", "(I)I", nullptr, $PRIVATE | $STATIC, $staticMethod(SunToolkit, getRVSize, int32_t, int32_t)},
	{"getResolutionVariant", "(Ljava/awt/Image;)Lsun/awt/image/ToolkitImage;", nullptr, $PRIVATE | $STATIC, $staticMethod(SunToolkit, getResolutionVariant, $ToolkitImage*, $Image*)},
	{"getScaledIconData", "(Ljava/util/List;II)Ljava/awt/image/DataBufferInt;", "(Ljava/util/List<Ljava/awt/Image;>;II)Ljava/awt/image/DataBufferInt;", $PUBLIC | $STATIC, $staticMethod(SunToolkit, getScaledIconData, $DataBufferInt*, $List*, int32_t, int32_t)},
	{"getScaledIconImage", "(Ljava/util/List;II)Ljava/awt/image/BufferedImage;", "(Ljava/util/List<Ljava/awt/Image;>;II)Ljava/awt/image/BufferedImage;", $PUBLIC | $STATIC, $staticMethod(SunToolkit, getScaledIconImage, $BufferedImage*, $List*, int32_t, int32_t)},
	{"getScreenSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(SunToolkit, getScreenSize, $Dimension*)},
	{"getStartupLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC | $STATIC, $staticMethod(SunToolkit, getStartupLocale, $Locale*)},
	{"getSunAwtDisableMixing", "()Z", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(SunToolkit, getSunAwtDisableMixing, bool)},
	{"getSunAwtErasebackgroundonresize", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(SunToolkit, getSunAwtErasebackgroundonresize, bool)},
	{"getSunAwtNoerasebackground", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(SunToolkit, getSunAwtNoerasebackground, bool)},
	{"getSystemEventQueueImpl", "()Ljava/awt/EventQueue;", nullptr, $PROTECTED, $virtualMethod(SunToolkit, getSystemEventQueueImpl, $EventQueue*)},
	{"getSystemEventQueueImplPP", "()Ljava/awt/EventQueue;", nullptr, $STATIC, $staticMethod(SunToolkit, getSystemEventQueueImplPP, $EventQueue*)},
	{"getSystemEventQueueImplPP", "(Lsun/awt/AppContext;)Ljava/awt/EventQueue;", nullptr, $PUBLIC | $STATIC, $staticMethod(SunToolkit, getSystemEventQueueImplPP, $EventQueue*, $AppContext*)},
	{"getWindowDeactivationTime", "(Ljava/awt/Window;)J", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(SunToolkit, getWindowDeactivationTime, int64_t, $Window*)},
	{"grab", "(Ljava/awt/Window;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SunToolkit, grab, void, $Window*)},
	{"imageCached", "(Ljava/lang/String;)Z", nullptr, $PROTECTED | $STATIC, $staticMethod(SunToolkit, imageCached, bool, $String*)},
	{"imageCached", "(Ljava/net/URL;)Z", nullptr, $PROTECTED | $STATIC, $staticMethod(SunToolkit, imageCached, bool, $URL*)},
	{"imageExists", "(Ljava/lang/String;)Z", nullptr, $PROTECTED | $STATIC, $staticMethod(SunToolkit, imageExists, bool, $String*)},
	{"imageExists", "(Ljava/net/URL;)Z", nullptr, $PROTECTED | $STATIC, $staticMethod(SunToolkit, imageExists, bool, $URL*)},
	{"initEQ", "(Lsun/awt/AppContext;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(SunToolkit, initEQ, void, $AppContext*)},
	{"initStatic", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(SunToolkit, initStatic, void)},
	{"insertTargetMapping", "(Ljava/lang/Object;Lsun/awt/AppContext;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SunToolkit, insertTargetMapping, void, Object$*, $AppContext*)},
	{"invokeLaterOnAppContext", "(Lsun/awt/AppContext;Ljava/lang/Runnable;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SunToolkit, invokeLaterOnAppContext, void, $AppContext*, $Runnable*)},
	{"isAWTLockHeldByCurrentThread", "()Z", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(SunToolkit, isAWTLockHeldByCurrentThread, bool)},
	{"isContainingTopLevelOpaque", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(SunToolkit, isContainingTopLevelOpaque, bool, $Component*)},
	{"isContainingTopLevelTranslucent", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(SunToolkit, isContainingTopLevelTranslucent, bool, $Component*)},
	{"isDesktopSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SunToolkit, isDesktopSupported, bool)},
	{"isDispatchThreadForAppContext", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(SunToolkit, isDispatchThreadForAppContext, bool, Object$*)},
	{"isEQEmpty", "()Z", nullptr, $PRIVATE, $method(SunToolkit, isEQEmpty, bool)},
	{"isInstanceOf", "(Ljava/lang/Object;Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(SunToolkit, isInstanceOf, bool, Object$*, $String*)},
	{"isInstanceOf", "(Ljava/lang/Class;Ljava/lang/String;)Z", "(Ljava/lang/Class<*>;Ljava/lang/String;)Z", $PRIVATE | $STATIC, $staticMethod(SunToolkit, isInstanceOf, bool, $Class*, $String*)},
	{"isLightweightOrUnknown", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(SunToolkit, isLightweightOrUnknown, bool, $Component*)},
	{"isModalExcluded", "(Ljava/awt/Window;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(SunToolkit, isModalExcluded, bool, $Window*)},
	{"isModalExcludedSupported", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(SunToolkit, isModalExcludedSupported, bool)},
	{"isModalExcludedSupportedImpl", "()Z", nullptr, $PROTECTED, $virtualMethod(SunToolkit, isModalExcludedSupportedImpl, bool)},
	{"isModalExclusionTypeSupported", "(Ljava/awt/Dialog$ModalExclusionType;)Z", nullptr, $PUBLIC, $virtualMethod(SunToolkit, isModalExclusionTypeSupported, bool, $Dialog$ModalExclusionType*)},
	{"isModalityTypeSupported", "(Ljava/awt/Dialog$ModalityType;)Z", nullptr, $PUBLIC, $virtualMethod(SunToolkit, isModalityTypeSupported, bool, $Dialog$ModalityType*)},
	{"isNativeGTKAvailable", "()Z", nullptr, $PUBLIC, $virtualMethod(SunToolkit, isNativeGTKAvailable, bool)},
	{"isPrintableCharacterModifiersMask", "(I)Z", nullptr, $PUBLIC, $virtualMethod(SunToolkit, isPrintableCharacterModifiersMask, bool, int32_t)},
	{"isSwingBackbufferTranslucencySupported", "()Z", nullptr, $PUBLIC, $virtualMethod(SunToolkit, isSwingBackbufferTranslucencySupported, bool)},
	{"isSystemGenerated", "(Ljava/awt/AWTEvent;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(SunToolkit, isSystemGenerated, bool, $AWTEvent*)},
	{"isTaskbarSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SunToolkit, isTaskbarSupported, bool)},
	{"isTouchKeyboardAutoShowEnabled", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(SunToolkit, isTouchKeyboardAutoShowEnabled, bool)},
	{"isTranslucencyCapable", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC, $virtualMethod(SunToolkit, isTranslucencyCapable, bool, $GraphicsConfiguration*)},
	{"isTraySupported", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SunToolkit, isTraySupported, bool)},
	{"isWindowOpacitySupported", "()Z", nullptr, $PUBLIC, $virtualMethod(SunToolkit, isWindowOpacitySupported, bool)},
	{"isWindowShapingSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(SunToolkit, isWindowShapingSupported, bool)},
	{"isWindowTranslucencySupported", "()Z", nullptr, $PUBLIC, $virtualMethod(SunToolkit, isWindowTranslucencySupported, bool)},
	{"isXEmbedServerRequested", "()Z", nullptr, $PROTECTED | $FINAL, $method(SunToolkit, isXEmbedServerRequested, bool)},
	{"lambda$realSync$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SunToolkit, lambda$realSync$0, void)},
	{"needUpdateWindow", "()Z", nullptr, $PUBLIC, $virtualMethod(SunToolkit, needUpdateWindow, bool)},
	{"needsXEmbed", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(SunToolkit, needsXEmbed, bool)},
	{"needsXEmbedImpl", "()Z", nullptr, $PROTECTED, $virtualMethod(SunToolkit, needsXEmbedImpl, bool)},
	{"notifyModalityChange", "(ILjava/awt/Dialog;)V", nullptr, $FINAL, $method(SunToolkit, notifyModalityChange, void, int32_t, $Dialog*)},
	{"notifyModalityPopped", "(Ljava/awt/Dialog;)V", nullptr, $PUBLIC, $virtualMethod(SunToolkit, notifyModalityPopped, void, $Dialog*)},
	{"notifyModalityPushed", "(Ljava/awt/Dialog;)V", nullptr, $PUBLIC, $virtualMethod(SunToolkit, notifyModalityPushed, void, $Dialog*)},
	{"postEvent", "(Lsun/awt/AppContext;Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SunToolkit, postEvent, void, $AppContext*, $AWTEvent*)},
	{"postPriorityEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SunToolkit, postPriorityEvent, void, $AWTEvent*)},
	{"prepareImage", "(Ljava/awt/Image;IILjava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC, $virtualMethod(SunToolkit, prepareImage, bool, $Image*, int32_t, int32_t, $ImageObserver*)},
	{"prepareResolutionVariant", "(Ljava/awt/Image;IILjava/awt/image/ImageObserver;)Z", nullptr, $PRIVATE, $method(SunToolkit, prepareResolutionVariant, bool, $Image*, int32_t, int32_t, $ImageObserver*)},
	{"realSync", "()V", nullptr, $PUBLIC, $virtualMethod(SunToolkit, realSync, void)},
	{"realSync", "(J)V", nullptr, $PUBLIC, $virtualMethod(SunToolkit, realSync, void, int64_t)},
	{"removeModalityListener", "(Lsun/awt/ModalityListener;)V", nullptr, $PUBLIC, $virtualMethod(SunToolkit, removeModalityListener, void, $ModalityListener*)},
	{"setAAFontSettingsCondition", "(Z)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SunToolkit, setAAFontSettingsCondition, void, bool)},
	{"setAppContext", "(Ljava/lang/Object;Lsun/awt/AppContext;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(SunToolkit, setAppContext, bool, Object$*, $AppContext*)},
	{"setLWRequestStatus", "(Ljava/awt/Window;Z)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SunToolkit, setLWRequestStatus, void, $Window*, bool)},
	{"setModalExcluded", "(Ljava/awt/Window;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SunToolkit, setModalExcluded, void, $Window*)},
	{"setSystemGenerated", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SunToolkit, setSystemGenerated, void, $AWTEvent*)},
	{"setWindowDeactivationTime", "(Ljava/awt/Window;J)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(SunToolkit, setWindowDeactivationTime, void, $Window*, int64_t)},
	{"showOrHideTouchKeyboard", "(Ljava/awt/Component;Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC, $virtualMethod(SunToolkit, showOrHideTouchKeyboard, void, $Component*, $AWTEvent*)},
	{"syncNativeQueue", "(J)Z", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(SunToolkit, syncNativeQueue, bool, int64_t)},
	{"targetCreatedPeer", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PROTECTED | $STATIC, $staticMethod(SunToolkit, targetCreatedPeer, void, Object$*, Object$*)},
	{"targetDisposedPeer", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PROTECTED | $STATIC, $staticMethod(SunToolkit, targetDisposedPeer, void, Object$*, Object$*)},
	{"targetToAppContext", "(Ljava/lang/Object;)Lsun/awt/AppContext;", nullptr, $PUBLIC | $STATIC, $staticMethod(SunToolkit, targetToAppContext, $AppContext*, Object$*)},
	{"targetToPeer", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PROTECTED | $STATIC, $staticMethod(SunToolkit, targetToPeer, $Object*, Object$*)},
	{"timeout", "(J)J", nullptr, $PROTECTED, $virtualMethod(SunToolkit, timeout, int64_t, int64_t)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"ungrab", "(Ljava/awt/Window;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SunToolkit, ungrab, void, $Window*)},
	{"updateScreenMenuBarUI", "()V", nullptr, $PUBLIC, $virtualMethod(SunToolkit, updateScreenMenuBarUI, void)},
	{"useBufferPerWindow", "()Z", nullptr, $PUBLIC, $virtualMethod(SunToolkit, useBufferPerWindow, bool)},
	{"useSystemAAFontSettings", "()Z", nullptr, $PRIVATE | $STATIC, $staticMethod(SunToolkit, useSystemAAFontSettings, bool)},
	{"waitForIdle", "(J)Z", nullptr, $PRIVATE | $FINAL, $method(SunToolkit, waitForIdle, bool, int64_t)},
	{"wakeupEventQueue", "(Ljava/awt/EventQueue;Z)V", nullptr, $STATIC, $staticMethod(SunToolkit, wakeupEventQueue, void, $EventQueue*, bool)},
	{}
};

#define _METHOD_INDEX_closeSplashScreen 20

$InnerClassInfo _SunToolkit_InnerClassesInfo_[] = {
	{"sun.awt.SunToolkit$IllegalThreadException", "sun.awt.SunToolkit", "IllegalThreadException", $PUBLIC | $STATIC},
	{"sun.awt.SunToolkit$ModalityListenerList", "sun.awt.SunToolkit", "ModalityListenerList", $STATIC},
	{"sun.awt.SunToolkit$3", nullptr, nullptr, 0},
	{"sun.awt.SunToolkit$1AWTInvocationLock", nullptr, "AWTInvocationLock", 0},
	{"sun.awt.SunToolkit$2", nullptr, nullptr, 0},
	{"sun.awt.SunToolkit$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SunToolkit_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.SunToolkit",
	"java.awt.Toolkit",
	"sun.awt.ComponentFactory,sun.awt.InputMethodSupport,sun.awt.KeyboardFocusManagerPeerProvider",
	_SunToolkit_FieldInfo_,
	_SunToolkit_MethodInfo_,
	nullptr,
	nullptr,
	_SunToolkit_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.SunToolkit$IllegalThreadException,sun.awt.SunToolkit$ModalityListenerList,sun.awt.SunToolkit$3,sun.awt.SunToolkit$1AWTInvocationLock,sun.awt.SunToolkit$2,sun.awt.SunToolkit$1"
};

$Object* allocate$SunToolkit($Class* clazz) {
	return $of($alloc(SunToolkit));
}

int32_t SunToolkit::hashCode() {
	 return this->$Toolkit::hashCode();
}

bool SunToolkit::equals(Object$* arg0) {
	 return this->$Toolkit::equals(arg0);
}

$Object* SunToolkit::clone() {
	 return this->$Toolkit::clone();
}

$String* SunToolkit::toString() {
	 return this->$Toolkit::toString();
}

void SunToolkit::finalize() {
	this->$Toolkit::finalize();
}

$String* SunToolkit::POST_EVENT_QUEUE_KEY = nullptr;
int32_t SunToolkit::numberOfButtons = 0;
$ReentrantLock* SunToolkit::AWT_LOCK = nullptr;
$Condition* SunToolkit::AWT_LOCK_COND = nullptr;
$Map* SunToolkit::appContextMap = nullptr;
$SoftCache* SunToolkit::fileImgCache = nullptr;
$SoftCache* SunToolkit::urlImgCache = nullptr;
$Locale* SunToolkit::startupLocale = nullptr;
$Dialog$ModalExclusionType* SunToolkit::DEFAULT_MODAL_EXCLUSION_TYPE = nullptr;
bool SunToolkit::touchKeyboardAutoShowIsEnabled = false;
bool SunToolkit::checkedSystemAAFontSettings = false;
bool SunToolkit::useSystemAAFontSettings$ = false;
bool SunToolkit::lastExtraCondition = false;
$RenderingHints* SunToolkit::desktopFontHints = nullptr;
$String* SunToolkit::DESKTOPFONTHINTS = nullptr;
$Boolean* SunToolkit::sunAwtDisableMixing = nullptr;
$Object* SunToolkit::DEACTIVATION_TIMES_MAP_KEY = nullptr;

void SunToolkit::initStatic() {
	$init(SunToolkit);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if ($nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetBooleanAction, "sun.awt.nativedebug"_s)))))))->booleanValue()) {
		$DebugSettings::init();
	}
	SunToolkit::touchKeyboardAutoShowIsEnabled = $nc($($Boolean::valueOf($($GetPropertyAction::privilegedGetProperty("awt.touchKeyboardAutoShowIsEnabled"_s, "true"_s)))))->booleanValue();
}

void SunToolkit::initEQ($AppContext* appContext) {
	$init(SunToolkit);
	$useLocalCurrentObjectStackCache();
	$var($EventQueue, eventQueue, $new($EventQueue));
	$init($AppContext);
	$nc(appContext)->put($AppContext::EVENT_QUEUE_KEY, eventQueue);
	$var($PostEventQueue, postEventQueue, $new($PostEventQueue, eventQueue));
	appContext->put(SunToolkit::POST_EVENT_QUEUE_KEY, postEventQueue);
}

void SunToolkit::init$() {
	$Toolkit::init$();
	$set(this, modalityListeners, $new($SunToolkit$ModalityListenerList));
	$set(this, waitLock, $new($Object));
}

bool SunToolkit::useBufferPerWindow() {
	return false;
}

void SunToolkit::awtLock() {
	$init(SunToolkit);
	$nc(SunToolkit::AWT_LOCK)->lock();
}

bool SunToolkit::awtTryLock() {
	$init(SunToolkit);
	return $nc(SunToolkit::AWT_LOCK)->tryLock();
}

void SunToolkit::awtUnlock() {
	$init(SunToolkit);
	$nc(SunToolkit::AWT_LOCK)->unlock();
}

void SunToolkit::awtLockWait() {
	$init(SunToolkit);
	$nc(SunToolkit::AWT_LOCK_COND)->await();
}

void SunToolkit::awtLockWait(int64_t timeout) {
	$init(SunToolkit);
	$init($TimeUnit);
	$nc(SunToolkit::AWT_LOCK_COND)->await(timeout, $TimeUnit::MILLISECONDS);
}

void SunToolkit::awtLockNotify() {
	$init(SunToolkit);
	$nc(SunToolkit::AWT_LOCK_COND)->signal();
}

void SunToolkit::awtLockNotifyAll() {
	$init(SunToolkit);
	$nc(SunToolkit::AWT_LOCK_COND)->signalAll();
}

bool SunToolkit::isAWTLockHeldByCurrentThread() {
	$init(SunToolkit);
	return $nc(SunToolkit::AWT_LOCK)->isHeldByCurrentThread();
}

$AppContext* SunToolkit::createNewAppContext() {
	$init(SunToolkit);
	$useLocalCurrentObjectStackCache();
	$var($ThreadGroup, threadGroup, $($Thread::currentThread())->getThreadGroup());
	return createNewAppContext(threadGroup);
}

$AppContext* SunToolkit::createNewAppContext($ThreadGroup* threadGroup) {
	$init(SunToolkit);
	$var($AppContext, appContext, $new($AppContext, threadGroup));
	initEQ(appContext);
	return appContext;
}

void SunToolkit::wakeupEventQueue($EventQueue* q, bool isShutdown) {
	$init(SunToolkit);
	$nc($($AWTAccessor::getEventQueueAccessor()))->wakeup(q, isShutdown);
}

$Object* SunToolkit::targetToPeer(Object$* target) {
	$init(SunToolkit);
	if (target != nullptr && !$GraphicsEnvironment::isHeadless()) {
		return $of($nc($($AWTAutoShutdown::getInstance()))->getPeer(target));
	}
	return $of(nullptr);
}

void SunToolkit::targetCreatedPeer(Object$* target, Object$* peer) {
	$init(SunToolkit);
	if (target != nullptr && peer != nullptr && !$GraphicsEnvironment::isHeadless()) {
		$nc($($AWTAutoShutdown::getInstance()))->registerPeer(target, peer);
	}
}

void SunToolkit::targetDisposedPeer(Object$* target, Object$* peer) {
	$init(SunToolkit);
	if (target != nullptr && peer != nullptr && !$GraphicsEnvironment::isHeadless()) {
		$nc($($AWTAutoShutdown::getInstance()))->unregisterPeer(target, peer);
	}
}

bool SunToolkit::setAppContext(Object$* target, $AppContext* context) {
	$init(SunToolkit);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Component, target)) {
		$nc($($AWTAccessor::getComponentAccessor()))->setAppContext($cast($Component, target), context);
	} else if ($instanceOf($MenuComponent, target)) {
		$nc($($AWTAccessor::getMenuComponentAccessor()))->setAppContext($cast($MenuComponent, target), context);
	} else {
		return false;
	}
	return true;
}

$AppContext* SunToolkit::getAppContext(Object$* target) {
	$init(SunToolkit);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Component, target)) {
		return $nc($($AWTAccessor::getComponentAccessor()))->getAppContext($cast($Component, target));
	} else if ($instanceOf($MenuComponent, target)) {
		return $nc($($AWTAccessor::getMenuComponentAccessor()))->getAppContext($cast($MenuComponent, target));
	} else {
		return nullptr;
	}
}

$AppContext* SunToolkit::targetToAppContext(Object$* target) {
	$init(SunToolkit);
	if (target == nullptr) {
		return nullptr;
	}
	$var($AppContext, context, getAppContext(target));
	if (context == nullptr) {
		$assign(context, $cast($AppContext, $nc(SunToolkit::appContextMap)->get(target)));
	}
	return context;
}

void SunToolkit::setLWRequestStatus($Window* changed, bool status) {
	$init(SunToolkit);
	$nc($($AWTAccessor::getWindowAccessor()))->setLWRequestStatus(changed, status);
}

void SunToolkit::checkAndSetPolicy($Container* cont) {
	$init(SunToolkit);
	$useLocalCurrentObjectStackCache();
	$var($FocusTraversalPolicy, defaultPolicy, $nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getDefaultFocusTraversalPolicy());
	$nc(cont)->setFocusTraversalPolicy(defaultPolicy);
}

void SunToolkit::insertTargetMapping(Object$* target, $AppContext* appContext) {
	$init(SunToolkit);
	if (!setAppContext(target, appContext)) {
		$nc(SunToolkit::appContextMap)->put(target, appContext);
	}
}

void SunToolkit::postEvent($AppContext* appContext, $AWTEvent* event) {
	$init(SunToolkit);
	$useLocalCurrentObjectStackCache();
	if (event == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($AWTAccessor$SequencedEventAccessor, sea, $AWTAccessor::getSequencedEventAccessor());
	if (sea != nullptr && sea->isSequencedEvent(event)) {
		$var($AWTEvent, nested, sea->getNested(event));
		if ($nc(nested)->getID() == $WindowEvent::WINDOW_LOST_FOCUS && $instanceOf($TimedWindowEvent, nested)) {
			$var($TimedWindowEvent, twe, $cast($TimedWindowEvent, nested));
			$var($Window, var$0, $cast($Window, twe->getSource()));
			$nc(($cast(SunToolkit, $($Toolkit::getDefaultToolkit()))))->setWindowDeactivationTime(var$0, twe->getWhen());
		}
	}
	setSystemGenerated(event);
	$var($AppContext, eventContext, targetToAppContext($($nc(event)->getSource())));
	if (eventContext != nullptr && !$of(eventContext)->equals(appContext)) {
		$throwNew($RuntimeException, $$str({"Event posted on wrong app context : "_s, event}));
	}
	$var($PostEventQueue, postEventQueue, $cast($PostEventQueue, $nc(appContext)->get(SunToolkit::POST_EVENT_QUEUE_KEY)));
	if (postEventQueue != nullptr) {
		postEventQueue->postEvent(event);
	}
}

void SunToolkit::postPriorityEvent($AWTEvent* e) {
	$init(SunToolkit);
	$useLocalCurrentObjectStackCache();
	$var($Object, var$0, $of($Toolkit::getDefaultToolkit()));
	$var($PeerEvent, pe, $new($PeerEvent, var$0, $$new($SunToolkit$1, e), $PeerEvent::ULTIMATE_PRIORITY_EVENT));
	postEvent($(targetToAppContext($($nc(e)->getSource()))), pe);
}

void SunToolkit::flushPendingEvents() {
	$init(SunToolkit);
	$var($AppContext, appContext, $AppContext::getAppContext());
	flushPendingEvents(appContext);
}

void SunToolkit::flushPendingEvents($AppContext* appContext) {
	$init(SunToolkit);
	$var($PostEventQueue, postEventQueue, $cast($PostEventQueue, $nc(appContext)->get(SunToolkit::POST_EVENT_QUEUE_KEY)));
	if (postEventQueue != nullptr) {
		postEventQueue->flush();
	}
}

void SunToolkit::executeOnEventHandlerThread(Object$* target, $Runnable* runnable) {
	$init(SunToolkit);
	executeOnEventHandlerThread($$new($PeerEvent, target, runnable, $PeerEvent::PRIORITY_EVENT));
}

void SunToolkit::executeOnEventHandlerThread(Object$* target, $Runnable* runnable, int64_t when) {
	$init(SunToolkit);
	executeOnEventHandlerThread($$new($SunToolkit$2, target, runnable, $PeerEvent::PRIORITY_EVENT, when));
}

void SunToolkit::executeOnEventHandlerThread($PeerEvent* peerEvent) {
	$init(SunToolkit);
	$useLocalCurrentObjectStackCache();
	postEvent($(targetToAppContext($($nc(peerEvent)->getSource()))), peerEvent);
}

void SunToolkit::invokeLaterOnAppContext($AppContext* appContext, $Runnable* dispatcher) {
	$init(SunToolkit);
	$useLocalCurrentObjectStackCache();
	postEvent(appContext, $$new($PeerEvent, $($Toolkit::getDefaultToolkit()), dispatcher, $PeerEvent::PRIORITY_EVENT));
}

void SunToolkit::executeOnEDTAndWait(Object$* target, $Runnable* runnable) {
	$init(SunToolkit);
	$useLocalCurrentObjectStackCache();
	if ($EventQueue::isDispatchThread()) {
		$throwNew($Error, "Cannot call executeOnEDTAndWait from any event dispatcher thread"_s);
	}
	{
	}
	$var($Object, lock, $new($SunToolkit$1AWTInvocationLock));
	$var($PeerEvent, event, $new($PeerEvent, target, runnable, lock, true, $PeerEvent::PRIORITY_EVENT));
	$synchronized(lock) {
		executeOnEventHandlerThread(event);
		while (!event->isDispatched()) {
			$of(lock)->wait();
		}
	}
	$var($Throwable, eventThrowable, event->getThrowable());
	if (eventThrowable != nullptr) {
		$throwNew($InvocationTargetException, eventThrowable);
	}
}

bool SunToolkit::isDispatchThreadForAppContext(Object$* target) {
	$init(SunToolkit);
	$useLocalCurrentObjectStackCache();
	$var($AppContext, appContext, targetToAppContext(target));
	$init($AppContext);
	$var($EventQueue, eq, $cast($EventQueue, $nc(appContext)->get($AppContext::EVENT_QUEUE_KEY)));
	$var($AWTAccessor$EventQueueAccessor, accessor, $AWTAccessor::getEventQueueAccessor());
	return $nc(accessor)->isDispatchThreadImpl(eq);
}

$Dimension* SunToolkit::getScreenSize() {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($($nc($($nc($($GraphicsEnvironment::getLocalGraphicsEnvironment()))->getDefaultScreenDevice()))->getDefaultConfiguration()))->getBounds()))->getSize();
}

$ColorModel* SunToolkit::getColorModel() {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($($nc($($GraphicsEnvironment::getLocalGraphicsEnvironment()))->getDefaultScreenDevice()))->getDefaultConfiguration()))->getColorModel();
}

$FontMetrics* SunToolkit::getFontMetrics($Font* font) {
	return $FontDesignMetrics::getMetrics(font);
}

$StringArray* SunToolkit::getFontList() {
	$init($Font);
	$var($StringArray, hardwiredFontList, $new($StringArray, {
		$Font::DIALOG,
		$Font::SANS_SERIF,
		$Font::SERIF,
		$Font::MONOSPACED,
		$Font::DIALOG_INPUT
	}));
	return hardwiredFontList;
}

void SunToolkit::disableBackgroundErase($Canvas* canvas) {
	disableBackgroundEraseImpl(canvas);
}

void SunToolkit::disableBackgroundErase($Component* component) {
	disableBackgroundEraseImpl(component);
}

void SunToolkit::disableBackgroundEraseImpl($Component* component) {
	$nc($($AWTAccessor::getComponentAccessor()))->setBackgroundEraseDisabled(component, true);
}

bool SunToolkit::getSunAwtNoerasebackground() {
	$init(SunToolkit);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	return $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetBooleanAction, "sun.awt.noerasebackground"_s)))))))->booleanValue();
}

bool SunToolkit::getSunAwtErasebackgroundonresize() {
	$init(SunToolkit);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	return $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetBooleanAction, "sun.awt.erasebackgroundonresize"_s)))))))->booleanValue();
}

$Image* SunToolkit::getImageFromHash($Toolkit* tk, $URL* url) {
	$init(SunToolkit);
	$useLocalCurrentObjectStackCache();
	checkPermissions(url);
	$synchronized(SunToolkit::urlImgCache) {
		$var($String, key, $nc(url)->toString());
		$var($Image, img, $cast($Image, $nc(SunToolkit::urlImgCache)->get(key)));
		if (img == nullptr) {
			try {
				$assign(img, $nc(tk)->createImage(static_cast<$ImageProducer*>($$new($URLImageSource, url))));
				$nc(SunToolkit::urlImgCache)->put(key, img);
			} catch ($Exception& e) {
			}
		}
		return img;
	}
}

$Image* SunToolkit::getImageFromHash($Toolkit* tk, $String* filename) {
	$init(SunToolkit);
	$useLocalCurrentObjectStackCache();
	checkPermissions(filename);
	$synchronized(SunToolkit::fileImgCache) {
		$var($Image, img, $cast($Image, $nc(SunToolkit::fileImgCache)->get(filename)));
		if (img == nullptr) {
			try {
				$assign(img, $nc(tk)->createImage(static_cast<$ImageProducer*>($$new($FileImageSource, filename))));
				$nc(SunToolkit::fileImgCache)->put(filename, img);
			} catch ($Exception& e) {
			}
		}
		return img;
	}
}

$Image* SunToolkit::getImage($String* filename) {
	return getImageFromHash(static_cast<$Toolkit*>(this), filename);
}

$Image* SunToolkit::getImage($URL* url) {
	return getImageFromHash(static_cast<$Toolkit*>(this), url);
}

$Image* SunToolkit::getImageWithResolutionVariant($String* fileName, $String* resolutionVariantName) {
	$useLocalCurrentObjectStackCache();
	$synchronized(SunToolkit::fileImgCache) {
		$var($Image, image, getImageFromHash(static_cast<$Toolkit*>(this), fileName));
		if ($instanceOf($MultiResolutionImage, image)) {
			return image;
		}
		$var($Image, resolutionVariant, getImageFromHash(static_cast<$Toolkit*>(this), resolutionVariantName));
		$assign(image, createImageWithResolutionVariant(image, resolutionVariant));
		$nc(SunToolkit::fileImgCache)->put(fileName, image);
		return image;
	}
}

$Image* SunToolkit::getImageWithResolutionVariant($URL* url, $URL* resolutionVariantURL) {
	$useLocalCurrentObjectStackCache();
	$synchronized(SunToolkit::urlImgCache) {
		$var($Image, image, getImageFromHash(static_cast<$Toolkit*>(this), url));
		if ($instanceOf($MultiResolutionImage, image)) {
			return image;
		}
		$var($Image, resolutionVariant, getImageFromHash(static_cast<$Toolkit*>(this), resolutionVariantURL));
		$assign(image, createImageWithResolutionVariant(image, resolutionVariant));
		$var($String, key, $nc(url)->toString());
		$nc(SunToolkit::urlImgCache)->put(key, image);
		return image;
	}
}

$Image* SunToolkit::createImage($String* filename) {
	checkPermissions(filename);
	return createImage(static_cast<$ImageProducer*>($$new($FileImageSource, filename)));
}

$Image* SunToolkit::createImage($URL* url) {
	checkPermissions(url);
	return createImage(static_cast<$ImageProducer*>($$new($URLImageSource, url)));
}

$Image* SunToolkit::createImage($bytes* data, int32_t offset, int32_t length) {
	return createImage(static_cast<$ImageProducer*>($$new($ByteArrayImageSource, data, offset, length)));
}

$Image* SunToolkit::createImage($ImageProducer* producer) {
	return $new($ToolkitImage, producer);
}

$Image* SunToolkit::createImageWithResolutionVariant($Image* image, $Image* resolutionVariant) {
	$init(SunToolkit);
	return $new($MultiResolutionToolkitImage, image, resolutionVariant);
}

int32_t SunToolkit::checkImage($Image* img, int32_t w, int32_t h, $ImageObserver* o) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($ToolkitImage, img))) {
		return $ImageObserver::ALLBITS;
	}
	$var($ToolkitImage, tkimg, $cast($ToolkitImage, img));
	int32_t repbits = 0;
	if (w == 0 || h == 0) {
		repbits = $ImageObserver::ALLBITS;
	} else {
		repbits = $nc($($nc(tkimg)->getImageRep()))->check(o);
	}
	int32_t var$0 = ($nc(tkimg)->check(o) | repbits);
	return (int32_t)(var$0 & (uint32_t)checkResolutionVariant(img, w, h, o));
}

bool SunToolkit::prepareImage($Image* img, int32_t w, int32_t h, $ImageObserver* o) {
	$useLocalCurrentObjectStackCache();
	if (w == 0 || h == 0) {
		return true;
	}
	if (!($instanceOf($ToolkitImage, img))) {
		return true;
	}
	$var($ToolkitImage, tkimg, $cast($ToolkitImage, img));
	if ($nc(tkimg)->hasError()) {
		if (o != nullptr) {
			o->imageUpdate(img, $ImageObserver::ERROR | $ImageObserver::ABORT, -1, -1, -1, -1);
		}
		return false;
	}
	$var($ImageRepresentation, ir, $nc(tkimg)->getImageRep());
	bool var$0 = $nc(ir)->prepare(o);
	return var$0 & prepareResolutionVariant(img, w, h, o);
}

int32_t SunToolkit::checkResolutionVariant($Image* img, int32_t w, int32_t h, $ImageObserver* o) {
	$useLocalCurrentObjectStackCache();
	$var($ToolkitImage, rvImage, getResolutionVariant(img));
	int32_t rvw = getRVSize(w);
	int32_t rvh = getRVSize(h);
	return (rvImage == nullptr || $nc(rvImage)->hasError()) ? 0x0000FFFF : checkImage(rvImage, rvw, rvh, $($MultiResolutionToolkitImage::getResolutionVariantObserver(img, o, w, h, rvw, rvh, true)));
}

bool SunToolkit::prepareResolutionVariant($Image* img, int32_t w, int32_t h, $ImageObserver* o) {
	$useLocalCurrentObjectStackCache();
	$var($ToolkitImage, rvImage, getResolutionVariant(img));
	int32_t rvw = getRVSize(w);
	int32_t rvh = getRVSize(h);
	bool var$0 = rvImage == nullptr || $nc(rvImage)->hasError();
	return var$0 || prepareImage(rvImage, rvw, rvh, $($MultiResolutionToolkitImage::getResolutionVariantObserver(img, o, w, h, rvw, rvh, true)));
}

int32_t SunToolkit::getRVSize(int32_t size) {
	$init(SunToolkit);
	return size == -1 ? -1 : 2 * size;
}

$ToolkitImage* SunToolkit::getResolutionVariant($Image* image) {
	$init(SunToolkit);
	if ($instanceOf($MultiResolutionToolkitImage, image)) {
		$var($Image, resolutionVariant, $nc(($cast($MultiResolutionToolkitImage, image)))->getResolutionVariant());
		if ($instanceOf($ToolkitImage, resolutionVariant)) {
			return $cast($ToolkitImage, resolutionVariant);
		}
	}
	return nullptr;
}

bool SunToolkit::imageCached($String* fileName) {
	$init(SunToolkit);
	return $nc(SunToolkit::fileImgCache)->containsKey(fileName);
}

bool SunToolkit::imageCached($URL* url) {
	$init(SunToolkit);
	$var($String, key, $nc(url)->toString());
	return $nc(SunToolkit::urlImgCache)->containsKey(key);
}

bool SunToolkit::imageExists($String* filename) {
	$init(SunToolkit);
	if (filename != nullptr) {
		checkPermissions(filename);
		return $$new($File, filename)->exists();
	}
	return false;
}

bool SunToolkit::imageExists($URL* url) {
	$init(SunToolkit);
	$useLocalCurrentObjectStackCache();
	if (url != nullptr) {
		checkPermissions(url);
		try {
			$var($InputStream, is, url->openStream());
			{
				$var($Throwable, var$0, nullptr);
				bool var$2 = false;
				bool return$1 = false;
				try {
					try {
						var$2 = true;
						return$1 = true;
						goto $finally;
					} catch ($Throwable& t$) {
						if (is != nullptr) {
							try {
								is->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable& var$3) {
					$assign(var$0, var$3);
				} $finally: {
					if (is != nullptr) {
						is->close();
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
				if (return$1) {
					return var$2;
				}
			}
		} catch ($IOException& e) {
			return false;
		}
	}
	return false;
}

void SunToolkit::checkPermissions($String* filename) {
	$init(SunToolkit);
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkRead(filename);
	}
}

void SunToolkit::checkPermissions($URL* url) {
	$init(SunToolkit);
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		try {
			$var($Permission, perm, $URLUtil::getConnectPermission(url));
			if (perm != nullptr) {
				sm->checkPermission(perm);
			}
		} catch ($IOException& ioe) {
			$var($String, var$0, $nc(url)->getHost());
			sm->checkConnect(var$0, url->getPort());
		}
	}
}

$BufferedImage* SunToolkit::getScaledIconImage($List* imageList, int32_t width, int32_t height) {
	$init(SunToolkit);
	$useLocalCurrentObjectStackCache();
	if (width == 0 || height == 0) {
		return nullptr;
	}
	$var($List, multiResAndnormalImages, $new($ArrayList, $nc(imageList)->size()));
	{
		$var($Iterator, i$, $nc(imageList)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Image, image, $cast($Image, i$->next()));
			{
				if ($instanceOf($MultiResolutionImage, image)) {
					$var($Image, im, $nc(($cast($MultiResolutionImage, image)))->getResolutionVariant((double)width, (double)height));
					multiResAndnormalImages->add(im);
				} else {
					multiResAndnormalImages->add(image);
				}
			}
		}
	}
	$var($Image, bestImage, nullptr);
	int32_t bestWidth = 0;
	int32_t bestHeight = 0;
	double bestSimilarity = (double)3;
	double bestScaleFactor = (double)0;
	{
		$var($Iterator, i, multiResAndnormalImages->iterator());
		for (; $nc(i)->hasNext();) {
			$var($Image, im, $cast($Image, i->next()));
			if (im == nullptr) {
				continue;
			}
			if ($instanceOf($ToolkitImage, im)) {
				$var($ImageRepresentation, ir, $nc(($cast($ToolkitImage, im)))->getImageRep());
				$nc(ir)->reconstruct($ImageObserver::ALLBITS);
			}
			int32_t iw = 0;
			int32_t ih = 0;
			try {
				iw = $nc(im)->getWidth(nullptr);
				ih = im->getHeight(nullptr);
			} catch ($Exception& e) {
				continue;
			}
			if (iw > 0 && ih > 0) {
				double scaleFactor = $Math::min((double)width / (double)iw, (double)height / (double)ih);
				int32_t adjw = 0;
				int32_t adjh = 0;
				double scaleMeasure = (double)1;
				if (scaleFactor >= 2) {
					scaleFactor = $Math::floor(scaleFactor);
					adjw = iw * $cast(int32_t, scaleFactor);
					adjh = ih * $cast(int32_t, scaleFactor);
					scaleMeasure = 1.0 - 0.5 / scaleFactor;
				} else if (scaleFactor >= 1) {
					scaleFactor = 1.0;
					adjw = iw;
					adjh = ih;
					scaleMeasure = (double)0;
				} else if (scaleFactor >= 0.75) {
					scaleFactor = 0.75;
					adjw = iw * 3 / 4;
					adjh = ih * 3 / 4;
					scaleMeasure = 0.3;
				} else if (scaleFactor >= 0.6666) {
					scaleFactor = 0.6666;
					adjw = iw * 2 / 3;
					adjh = ih * 2 / 3;
					scaleMeasure = 0.33;
				} else {
					double scaleDivider = $Math::ceil(1.0 / scaleFactor);
					scaleFactor = 1.0 / scaleDivider;
					adjw = (int32_t)$Math::round((double)iw / scaleDivider);
					adjh = (int32_t)$Math::round((double)ih / scaleDivider);
					scaleMeasure = 1.0 - 1.0 / scaleDivider;
				}
				double similarity = ((double)width - (double)adjw) / (double)width + ((double)height - (double)adjh) / (double)height + scaleMeasure;
				if (similarity < bestSimilarity) {
					bestSimilarity = similarity;
					bestScaleFactor = scaleFactor;
					$assign(bestImage, im);
					bestWidth = adjw;
					bestHeight = adjh;
				}
				if (similarity == 0) {
					break;
				}
			}
		}
	}
	if (bestImage == nullptr) {
		return nullptr;
	}
	$var($BufferedImage, bimage, $new($BufferedImage, width, height, $BufferedImage::TYPE_INT_ARGB));
	$var($Graphics2D, g, bimage->createGraphics());
	$init($RenderingHints);
	$nc(g)->setRenderingHint($RenderingHints::KEY_INTERPOLATION, $RenderingHints::VALUE_INTERPOLATION_BILINEAR);
	{
		$var($Throwable, var$0, nullptr);
		try {
			int32_t x = (width - bestWidth) / 2;
			int32_t y = (height - bestHeight) / 2;
			g->drawImage(bestImage, x, y, bestWidth, bestHeight, nullptr);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			g->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return bimage;
}

$DataBufferInt* SunToolkit::getScaledIconData($List* imageList, int32_t width, int32_t height) {
	$init(SunToolkit);
	$useLocalCurrentObjectStackCache();
	$var($BufferedImage, bimage, getScaledIconImage(imageList, width, height));
	if (bimage == nullptr) {
		return nullptr;
	}
	$var($Raster, raster, $nc(bimage)->getRaster());
	$var($DataBuffer, buffer, $nc(raster)->getDataBuffer());
	return $cast($DataBufferInt, buffer);
}

$EventQueue* SunToolkit::getSystemEventQueueImpl() {
	return getSystemEventQueueImplPP();
}

$EventQueue* SunToolkit::getSystemEventQueueImplPP() {
	$init(SunToolkit);
	return getSystemEventQueueImplPP($($AppContext::getAppContext()));
}

$EventQueue* SunToolkit::getSystemEventQueueImplPP($AppContext* appContext) {
	$init(SunToolkit);
	$init($AppContext);
	$var($EventQueue, theEventQueue, $cast($EventQueue, $nc(appContext)->get($AppContext::EVENT_QUEUE_KEY)));
	return theEventQueue;
}

$Container* SunToolkit::getNativeContainer($Component* c) {
	$init(SunToolkit);
	return $Toolkit::getNativeContainer(c);
}

$Component* SunToolkit::getHeavyweightComponent($Component* c$renamed) {
	$init(SunToolkit);
	$useLocalCurrentObjectStackCache();
	$var($Component, c, c$renamed);
	while (c != nullptr && $nc($($AWTAccessor::getComponentAccessor()))->isLightweight(c)) {
		$assign(c, $nc($($AWTAccessor::getComponentAccessor()))->getParent(c));
	}
	return c;
}

int32_t SunToolkit::getFocusAcceleratorKeyMask() {
	return $InputEvent::ALT_MASK;
}

bool SunToolkit::isPrintableCharacterModifiersMask(int32_t mods) {
	return (((int32_t)(mods & (uint32_t)$InputEvent::ALT_MASK)) == ((int32_t)(mods & (uint32_t)$InputEvent::CTRL_MASK)));
}

bool SunToolkit::canPopupOverlapTaskBar() {
	bool result = true;
	try {
		$var($SecurityManager, sm, $System::getSecurityManager());
		if (sm != nullptr) {
			$init($AWTPermissions);
			sm->checkPermission($AWTPermissions::SET_WINDOW_ALWAYS_ON_TOP_PERMISSION);
		}
	} catch ($SecurityException& se) {
		result = false;
	}
	return result;
}

$Window* SunToolkit::createInputMethodWindow($String* title, $InputContext* context) {
	return $new($SimpleInputMethodWindow, title, context);
}

bool SunToolkit::enableInputMethodsForTextComponent() {
	return false;
}

$Locale* SunToolkit::getStartupLocale() {
	$init(SunToolkit);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (SunToolkit::startupLocale == nullptr) {
		$var($String, language, nullptr);
		$var($String, region, nullptr);
		$var($String, country, nullptr);
		$var($String, variant, nullptr);
		$assign(language, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "user.language"_s, "en"_s)))));
		$assign(region, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "user.region"_s)))));
		if (region != nullptr) {
			int32_t i = region->indexOf((int32_t)u'_');
			if (i >= 0) {
				$assign(country, region->substring(0, i));
				$assign(variant, region->substring(i + 1));
			} else {
				$assign(country, region);
				$assign(variant, ""_s);
			}
		} else {
			$assign(country, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "user.country"_s, ""_s)))));
			$assign(variant, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "user.variant"_s, ""_s)))));
		}
		$assignStatic(SunToolkit::startupLocale, $new($Locale, language, country, variant));
	}
	return SunToolkit::startupLocale;
}

$Locale* SunToolkit::getDefaultKeyboardLocale() {
	return getStartupLocale();
}

bool SunToolkit::needsXEmbed() {
	$init(SunToolkit);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, noxembed, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "sun.awt.noxembed"_s, "false"_s)))));
	if ("true"_s->equals(noxembed)) {
		return false;
	}
	$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
	if ($instanceOf(SunToolkit, tk)) {
		return $nc(($cast(SunToolkit, tk)))->needsXEmbedImpl();
	} else {
		return false;
	}
}

bool SunToolkit::needsXEmbedImpl() {
	return false;
}

bool SunToolkit::isXEmbedServerRequested() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	return $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetBooleanAction, "sun.awt.xembedserver"_s)))))))->booleanValue();
}

bool SunToolkit::isModalExcludedSupported() {
	$init(SunToolkit);
	$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
	return $nc(tk)->isModalExclusionTypeSupported(SunToolkit::DEFAULT_MODAL_EXCLUSION_TYPE);
}

bool SunToolkit::isModalExcludedSupportedImpl() {
	return false;
}

void SunToolkit::setModalExcluded($Window* window) {
	$init(SunToolkit);
	if (SunToolkit::DEFAULT_MODAL_EXCLUSION_TYPE == nullptr) {
		$init($Dialog$ModalExclusionType);
		$assignStatic(SunToolkit::DEFAULT_MODAL_EXCLUSION_TYPE, $Dialog$ModalExclusionType::APPLICATION_EXCLUDE);
	}
	$nc(window)->setModalExclusionType(SunToolkit::DEFAULT_MODAL_EXCLUSION_TYPE);
}

bool SunToolkit::isModalExcluded($Window* window) {
	$init(SunToolkit);
	if (SunToolkit::DEFAULT_MODAL_EXCLUSION_TYPE == nullptr) {
		$init($Dialog$ModalExclusionType);
		$assignStatic(SunToolkit::DEFAULT_MODAL_EXCLUSION_TYPE, $Dialog$ModalExclusionType::APPLICATION_EXCLUDE);
	}
	return $nc($($nc(window)->getModalExclusionType()))->compareTo(static_cast<$Enum*>(SunToolkit::DEFAULT_MODAL_EXCLUSION_TYPE)) >= 0;
}

bool SunToolkit::isModalityTypeSupported($Dialog$ModalityType* modalityType) {
	$init($Dialog$ModalityType);
	return (modalityType == $Dialog$ModalityType::MODELESS) || (modalityType == $Dialog$ModalityType::APPLICATION_MODAL);
}

bool SunToolkit::isModalExclusionTypeSupported($Dialog$ModalExclusionType* exclusionType) {
	$init($Dialog$ModalExclusionType);
	return (exclusionType == $Dialog$ModalExclusionType::NO_EXCLUDE);
}

void SunToolkit::addModalityListener($ModalityListener* listener) {
	$nc(this->modalityListeners)->add(listener);
}

void SunToolkit::removeModalityListener($ModalityListener* listener) {
	$nc(this->modalityListeners)->remove(listener);
}

void SunToolkit::notifyModalityPushed($Dialog* dialog) {
	notifyModalityChange($ModalityEvent::MODALITY_PUSHED, dialog);
}

void SunToolkit::notifyModalityPopped($Dialog* dialog) {
	notifyModalityChange($ModalityEvent::MODALITY_POPPED, dialog);
}

void SunToolkit::notifyModalityChange(int32_t id, $Dialog* source) {
	$var($ModalityEvent, ev, $new($ModalityEvent, source, this->modalityListeners, id));
	ev->dispatch();
}

bool SunToolkit::isLightweightOrUnknown($Component* comp) {
	$init(SunToolkit);
	bool var$0 = $nc(comp)->isLightweight();
	if (var$0 || !($instanceOf(SunToolkit, $(getDefaultToolkit())))) {
		return true;
	}
	return !($instanceOf($Button, comp) || $instanceOf($Canvas, comp) || $instanceOf($Checkbox, comp) || $instanceOf($Choice, comp) || $instanceOf($Label, comp) || $instanceOf($1List, comp) || $instanceOf($Panel, comp) || $instanceOf($Scrollbar, comp) || $instanceOf($ScrollPane, comp) || $instanceOf($TextArea, comp) || $instanceOf($TextField, comp) || $instanceOf($Window, comp));
}

void SunToolkit::realSync() {
	realSync(SunToolkit::DEFAULT_WAIT_TIME);
}

void SunToolkit::realSync(int64_t timeout) {
	if ($EventQueue::isDispatchThread()) {
		$throwNew($SunToolkit$IllegalThreadException, "The SunToolkit.realSync() method cannot be used on the event dispatch thread (EDT)."_s);
	}
	try {
		$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(SunToolkit$$Lambda$lambda$realSync$0)));
	} catch ($InterruptedException& ignored) {
	} catch ($InvocationTargetException& ignored) {
	}
	int32_t bigLoop = 0;
	$init($TimeUnit);
	int64_t end = $TimeUnit::NANOSECONDS->toMillis($System::nanoTime()) + timeout;
	bool var$0 = false;
	do {
		if (this->timeout(end) < 0) {
			return;
		}
		sync();
		int32_t iters = 0;
		while (iters < SunToolkit::MIN_ITERS) {
			syncNativeQueue(this->timeout(end));
			++iters;
		}
		while (syncNativeQueue(this->timeout(end)) && iters < SunToolkit::MAX_ITERS) {
			++iters;
		}
		iters = 0;
		while (iters < SunToolkit::MIN_ITERS) {
			waitForIdle(this->timeout(end));
			++iters;
		}
		while (waitForIdle(end) && iters < SunToolkit::MAX_ITERS) {
			++iters;
		}
		++bigLoop;
		var$0 = syncNativeQueue(this->timeout(end));
	} while ((var$0 || waitForIdle(end)) && bigLoop < SunToolkit::MAX_ITERS);
}

int64_t SunToolkit::timeout(int64_t end) {
	$init($TimeUnit);
	return end - $TimeUnit::NANOSECONDS->toMillis($System::nanoTime());
}

bool SunToolkit::isEQEmpty() {
	$useLocalCurrentObjectStackCache();
	$var($EventQueue, queue, getSystemEventQueueImpl());
	return $nc($($AWTAccessor::getEventQueueAccessor()))->noEvents(queue);
}

bool SunToolkit::waitForIdle(int64_t end) {
	$useLocalCurrentObjectStackCache();
	if (timeout(end) <= 0) {
		return false;
	}
	flushPendingEvents();
	bool queueWasEmpty = false;
	$var($AtomicBoolean, queueEmpty, $new($AtomicBoolean));
	$var($AtomicBoolean, eventDispatched, $new($AtomicBoolean));
	$synchronized(this->waitLock) {
		queueWasEmpty = isEQEmpty();
		$var($AppContext, var$0, $AppContext::getAppContext());
		postEvent(var$0, $$new($SunToolkit$3, this, $(getSystemEventQueueImpl()), nullptr, $PeerEvent::LOW_PRIORITY_EVENT, end, queueEmpty, eventDispatched));
		try {
			while (true) {
				bool var$1 = !eventDispatched->get();
				if (!(var$1 && timeout(end) > 0)) {
					break;
				}
				{
					$nc($of(this->waitLock))->wait(timeout(end));
				}
			}
		} catch ($InterruptedException& ie) {
			return false;
		}
	}
	try {
		$Thread::sleep(SunToolkit::MINIMAL_DELAY);
	} catch ($InterruptedException& ie) {
		$throwNew($RuntimeException, "Interrupted"_s);
	}
	flushPendingEvents();
	$synchronized(this->waitLock) {
		bool var$2 = queueEmpty->get();
		return !(var$2 && isEQEmpty() && queueWasEmpty);
	}
}

void SunToolkit::showOrHideTouchKeyboard($Component* comp, $AWTEvent* e) {
}

bool SunToolkit::isTouchKeyboardAutoShowEnabled() {
	$init(SunToolkit);
	return SunToolkit::touchKeyboardAutoShowIsEnabled;
}

void SunToolkit::closeSplashScreen() {
	$init(SunToolkit);
	$prepareNativeStatic(SunToolkit, closeSplashScreen, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void SunToolkit::fireDesktopFontPropertyChanges() {
	setDesktopProperty(SunToolkit::DESKTOPFONTHINTS, $(SunToolkit::getDesktopFontHints()));
}

void SunToolkit::setAAFontSettingsCondition(bool extraCondition) {
	$init(SunToolkit);
	if (extraCondition != SunToolkit::lastExtraCondition) {
		SunToolkit::lastExtraCondition = extraCondition;
		if (SunToolkit::checkedSystemAAFontSettings) {
			SunToolkit::checkedSystemAAFontSettings = false;
			$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
			if ($instanceOf(SunToolkit, tk)) {
				$nc(($cast(SunToolkit, tk)))->fireDesktopFontPropertyChanges();
			}
		}
	}
}

$RenderingHints* SunToolkit::getDesktopAAHintsByName($String* hintname$renamed) {
	$init(SunToolkit);
	$useLocalCurrentObjectStackCache();
	$var($String, hintname, hintname$renamed);
	$var($Object, aaHint, nullptr);
	$init($Locale);
	$assign(hintname, $nc(hintname)->toLowerCase($Locale::ENGLISH));
	if (hintname->equals("on"_s)) {
		$init($RenderingHints);
		$assign(aaHint, $RenderingHints::VALUE_TEXT_ANTIALIAS_ON);
	} else if (hintname->equals("gasp"_s)) {
		$init($RenderingHints);
		$assign(aaHint, $RenderingHints::VALUE_TEXT_ANTIALIAS_GASP);
	} else {
		bool var$1 = hintname->equals("lcd"_s);
		if (var$1 || hintname->equals("lcd_hrgb"_s)) {
			$init($RenderingHints);
			$assign(aaHint, $RenderingHints::VALUE_TEXT_ANTIALIAS_LCD_HRGB);
		} else if (hintname->equals("lcd_hbgr"_s)) {
			$init($RenderingHints);
			$assign(aaHint, $RenderingHints::VALUE_TEXT_ANTIALIAS_LCD_HBGR);
		} else if (hintname->equals("lcd_vrgb"_s)) {
			$init($RenderingHints);
			$assign(aaHint, $RenderingHints::VALUE_TEXT_ANTIALIAS_LCD_VRGB);
		} else if (hintname->equals("lcd_vbgr"_s)) {
			$init($RenderingHints);
			$assign(aaHint, $RenderingHints::VALUE_TEXT_ANTIALIAS_LCD_VBGR);
		}
	}
	if (aaHint != nullptr) {
		$var($RenderingHints, map, $new($RenderingHints, nullptr));
		$init($RenderingHints);
		map->put($RenderingHints::KEY_TEXT_ANTIALIASING, aaHint);
		return map;
	} else {
		return nullptr;
	}
}

bool SunToolkit::useSystemAAFontSettings() {
	$init(SunToolkit);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (!SunToolkit::checkedSystemAAFontSettings) {
		SunToolkit::useSystemAAFontSettings$ = true;
		$var($String, systemAAFonts, nullptr);
		$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
		if ($instanceOf(SunToolkit, tk)) {
			$assign(systemAAFonts, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "awt.useSystemAAFontSettings"_s)))));
		}
		if (systemAAFonts != nullptr) {
			SunToolkit::useSystemAAFontSettings$ = $nc($($Boolean::valueOf(systemAAFonts)))->booleanValue();
			if (!SunToolkit::useSystemAAFontSettings$) {
				$assignStatic(SunToolkit::desktopFontHints, getDesktopAAHintsByName(systemAAFonts));
			}
		}
		if (SunToolkit::useSystemAAFontSettings$) {
			SunToolkit::useSystemAAFontSettings$ = SunToolkit::lastExtraCondition;
		}
		SunToolkit::checkedSystemAAFontSettings = true;
	}
	return SunToolkit::useSystemAAFontSettings$;
}

$RenderingHints* SunToolkit::getDesktopAAHints() {
	return nullptr;
}

$RenderingHints* SunToolkit::getDesktopFontHints() {
	$init(SunToolkit);
	$useLocalCurrentObjectStackCache();
	if (useSystemAAFontSettings()) {
		$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
		if ($instanceOf(SunToolkit, tk)) {
			$var($Object, map, $nc(($cast(SunToolkit, tk)))->getDesktopAAHints());
			return $cast($RenderingHints, map);
		} else {
			return nullptr;
		}
	} else {
		if (SunToolkit::desktopFontHints != nullptr) {
			return ($cast($RenderingHints, $nc(SunToolkit::desktopFontHints)->clone()));
		} else {
			return nullptr;
		}
	}
}

void SunToolkit::consumeNextKeyTyped($KeyEvent* keyEvent) {
	$load(SunToolkit);
	$synchronized(class$) {
		$init(SunToolkit);
		$useLocalCurrentObjectStackCache();
		try {
			$nc($($AWTAccessor::getDefaultKeyboardFocusManagerAccessor()))->consumeNextKeyTyped($cast($DefaultKeyboardFocusManager, $($KeyboardFocusManager::getCurrentKeyboardFocusManager())), keyEvent);
		} catch ($ClassCastException& cce) {
			cce->printStackTrace();
		}
	}
}

void SunToolkit::dumpPeers($PlatformLogger* aLog) {
	$init(SunToolkit);
	$nc($($AWTAutoShutdown::getInstance()))->dumpPeers(aLog);
}

$Window* SunToolkit::getContainingWindow($Component* comp$renamed) {
	$init(SunToolkit);
	$var($Component, comp, comp$renamed);
	while (comp != nullptr && !($instanceOf($Window, comp))) {
		$assign(comp, comp->getParent());
	}
	return $cast($Window, comp);
}

bool SunToolkit::getSunAwtDisableMixing() {
	$load(SunToolkit);
	$synchronized(class$) {
		$init(SunToolkit);
		$beforeCallerSensitive();
		if (SunToolkit::sunAwtDisableMixing == nullptr) {
			$assignStatic(SunToolkit::sunAwtDisableMixing, $cast($Boolean, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetBooleanAction, "sun.awt.disableMixing"_s)))));
		}
		return $nc(SunToolkit::sunAwtDisableMixing)->booleanValue();
	}
}

$String* SunToolkit::getDesktop() {
	return nullptr;
}

bool SunToolkit::isNativeGTKAvailable() {
	return false;
}

void SunToolkit::setWindowDeactivationTime($Window* w, int64_t time) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($AppContext, ctx, getAppContext(w));
		if (ctx == nullptr) {
			return;
		}
		$var($WeakHashMap, map, $cast($WeakHashMap, $nc(ctx)->get(SunToolkit::DEACTIVATION_TIMES_MAP_KEY)));
		if (map == nullptr) {
			$assign(map, $new($WeakHashMap));
			ctx->put(SunToolkit::DEACTIVATION_TIMES_MAP_KEY, map);
		}
		$nc(map)->put(w, $($Long::valueOf(time)));
	}
}

int64_t SunToolkit::getWindowDeactivationTime($Window* w) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($AppContext, ctx, getAppContext(w));
		if (ctx == nullptr) {
			return -1;
		}
		$var($WeakHashMap, map, $cast($WeakHashMap, $nc(ctx)->get(SunToolkit::DEACTIVATION_TIMES_MAP_KEY)));
		if (map == nullptr) {
			return -1;
		}
		$var($Long, time, $cast($Long, $nc(map)->get(w)));
		return time == nullptr ? (int64_t)-1 : $nc(time)->longValue();
	}
}

void SunToolkit::updateScreenMenuBarUI() {
}

bool SunToolkit::isWindowOpacitySupported() {
	return false;
}

bool SunToolkit::isWindowShapingSupported() {
	return false;
}

bool SunToolkit::isWindowTranslucencySupported() {
	return false;
}

bool SunToolkit::isTranslucencyCapable($GraphicsConfiguration* gc) {
	return false;
}

bool SunToolkit::isSwingBackbufferTranslucencySupported() {
	return false;
}

bool SunToolkit::isContainingTopLevelOpaque($Component* c) {
	$init(SunToolkit);
	$var($Window, w, getContainingWindow(c));
	return w != nullptr && w->isOpaque();
}

bool SunToolkit::isContainingTopLevelTranslucent($Component* c) {
	$init(SunToolkit);
	$var($Window, w, getContainingWindow(c));
	return w != nullptr && w->getOpacity() < 1.0f;
}

bool SunToolkit::needUpdateWindow() {
	return false;
}

int32_t SunToolkit::getNumberOfButtons() {
	return 3;
}

bool SunToolkit::isInstanceOf(Object$* obj, $String* type) {
	$init(SunToolkit);
	if (obj == nullptr) {
		return false;
	}
	if (type == nullptr) {
		return false;
	}
	return isInstanceOf($nc($of(obj))->getClass(), type);
}

bool SunToolkit::isInstanceOf($Class* cls, $String* type) {
	$init(SunToolkit);
	$useLocalCurrentObjectStackCache();
	if (cls == nullptr) {
		return false;
	}
	if ($nc($($nc(cls)->getName()))->equals(type)) {
		return true;
	}
	{
		$var($ClassArray, arr$, $nc(cls)->getInterfaces());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Class* c = arr$->get(i$);
			{
				if ($nc($($nc(c)->getName()))->equals(type)) {
					return true;
				}
			}
		}
	}
	return isInstanceOf(cls->getSuperclass(), type);
}

$LightweightFrame* SunToolkit::getLightweightFrame($Component* c$renamed) {
	$init(SunToolkit);
	$var($Component, c, c$renamed);
	for (; c != nullptr; $assign(c, $nc(c)->getParent())) {
		if ($instanceOf($LightweightFrame, c)) {
			return $cast($LightweightFrame, c);
		}
		if ($instanceOf($Window, c)) {
			return nullptr;
		}
	}
	return nullptr;
}

void SunToolkit::setSystemGenerated($AWTEvent* e) {
	$init(SunToolkit);
	$nc($($AWTAccessor::getAWTEventAccessor()))->setSystemGenerated(e);
}

bool SunToolkit::isSystemGenerated($AWTEvent* e) {
	$init(SunToolkit);
	return $nc($($AWTAccessor::getAWTEventAccessor()))->isSystemGenerated(e);
}

void SunToolkit::lambda$realSync$0() {
	$init(SunToolkit);
}

void clinit$SunToolkit($Class* class$) {
	$assignStatic(SunToolkit::POST_EVENT_QUEUE_KEY, "PostEventQueue"_s);
	$assignStatic(SunToolkit::DESKTOPFONTHINTS, "awt.font.desktophints"_s);
	{
		SunToolkit::initStatic();
	}
	SunToolkit::numberOfButtons = 0;
	$assignStatic(SunToolkit::AWT_LOCK, $new($ReentrantLock));
	$assignStatic(SunToolkit::AWT_LOCK_COND, $nc(SunToolkit::AWT_LOCK)->newCondition());
	$assignStatic(SunToolkit::appContextMap, $Collections::synchronizedMap($$new($WeakIdentityHashMap)));
	$assignStatic(SunToolkit::fileImgCache, $new($SoftCache));
	$assignStatic(SunToolkit::urlImgCache, $new($SoftCache));
	$assignStatic(SunToolkit::startupLocale, nullptr);
	$assignStatic(SunToolkit::DEFAULT_MODAL_EXCLUSION_TYPE, nullptr);
	SunToolkit::lastExtraCondition = true;
	$assignStatic(SunToolkit::sunAwtDisableMixing, nullptr);
	$assignStatic(SunToolkit::DEACTIVATION_TIMES_MAP_KEY, $new($Object));
}

SunToolkit::SunToolkit() {
}

$Class* SunToolkit::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SunToolkit$$Lambda$lambda$realSync$0::classInfo$.name)) {
			return SunToolkit$$Lambda$lambda$realSync$0::load$(name, initialize);
		}
	}
	$loadClass(SunToolkit, name, initialize, &_SunToolkit_ClassInfo_, clinit$SunToolkit, allocate$SunToolkit);
	return class$;
}

$Class* SunToolkit::class$ = nullptr;

	} // awt
} // sun