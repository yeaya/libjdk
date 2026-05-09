#include <sun/awt/windows/WToolkit.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/AWTException.h>
#include <java/awt/AWTPermission.h>
#include <java/awt/Button.h>
#include <java/awt/Canvas.h>
#include <java/awt/Checkbox.h>
#include <java/awt/CheckboxMenuItem.h>
#include <java/awt/Choice.h>
#include <java/awt/Component.h>
#include <java/awt/Cursor.h>
#include <java/awt/Desktop.h>
#include <java/awt/Dialog$ModalExclusionType.h>
#include <java/awt/Dialog$ModalityType.h>
#include <java/awt/Dialog.h>
#include <java/awt/Dimension.h>
#include <java/awt/EventQueue.h>
#include <java/awt/FileDialog.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Frame.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/JobAttributes.h>
#include <java/awt/Label.h>
#include <java/awt/List.h>
#include <java/awt/Menu.h>
#include <java/awt/MenuBar.h>
#include <java/awt/MenuItem.h>
#include <java/awt/PageAttributes.h>
#include <java/awt/Panel.h>
#include <java/awt/Point.h>
#include <java/awt/PopupMenu.h>
#include <java/awt/PrintJob.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/ScrollPane.h>
#include <java/awt/Scrollbar.h>
#include <java/awt/SystemTray.h>
#include <java/awt/Taskbar.h>
#include <java/awt/TextArea.h>
#include <java/awt/TextComponent.h>
#include <java/awt/TextField.h>
#include <java/awt/Toolkit.h>
#include <java/awt/TrayIcon.h>
#include <java/awt/Window.h>
#include <java/awt/datatransfer/Clipboard.h>
#include <java/awt/dnd/DragGestureEvent.h>
#include <java/awt/dnd/DragGestureListener.h>
#include <java/awt/dnd/DragGestureRecognizer.h>
#include <java/awt/dnd/DragSource.h>
#include <java/awt/dnd/MouseDragGestureRecognizer.h>
#include <java/awt/dnd/peer/DragSourceContextPeer.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/im/InputMethodHighlight.h>
#include <java/awt/im/spi/InputMethodDescriptor.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/peer/ButtonPeer.h>
#include <java/awt/peer/CanvasPeer.h>
#include <java/awt/peer/CheckboxMenuItemPeer.h>
#include <java/awt/peer/CheckboxPeer.h>
#include <java/awt/peer/ChoicePeer.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/DesktopPeer.h>
#include <java/awt/peer/DialogPeer.h>
#include <java/awt/peer/FileDialogPeer.h>
#include <java/awt/peer/FontPeer.h>
#include <java/awt/peer/FramePeer.h>
#include <java/awt/peer/KeyboardFocusManagerPeer.h>
#include <java/awt/peer/LabelPeer.h>
#include <java/awt/peer/ListPeer.h>
#include <java/awt/peer/MenuBarPeer.h>
#include <java/awt/peer/MenuItemPeer.h>
#include <java/awt/peer/MenuPeer.h>
#include <java/awt/peer/MouseInfoPeer.h>
#include <java/awt/peer/PanelPeer.h>
#include <java/awt/peer/PopupMenuPeer.h>
#include <java/awt/peer/RobotPeer.h>
#include <java/awt/peer/ScrollPanePeer.h>
#include <java/awt/peer/ScrollbarPeer.h>
#include <java/awt/peer/SystemTrayPeer.h>
#include <java/awt/peer/TaskbarPeer.h>
#include <java/awt/peer/TextAreaPeer.h>
#include <java/awt/peer/TextFieldPeer.h>
#include <java/awt/peer/TrayIconPeer.h>
#include <java/awt/peer/WindowPeer.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/Runtime.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/ref/WeakReference.h>
#include <java/security/AccessController.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/Properties.h>
#include <java/util/Set.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/Executors.h>
#include <java/util/concurrent/Future.h>
#include <java/util/concurrent/ThreadFactory.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor$MouseEventAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AWTAutoShutdown.h>
#include <sun/awt/AWTPermissions.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/ComponentFactory.h>
#include <sun/awt/DisplayChangedListener.h>
#include <sun/awt/LightweightFrame.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/Win32GraphicsDevice.h>
#include <sun/awt/Win32GraphicsEnvironment.h>
#include <sun/awt/datatransfer/DataTransferer.h>
#include <sun/awt/util/PerformanceLogger.h>
#include <sun/awt/util/ThreadGroupUtils.h>
#include <sun/awt/windows/ThemeReader.h>
#include <sun/awt/windows/WButtonPeer.h>
#include <sun/awt/windows/WCanvasPeer.h>
#include <sun/awt/windows/WCheckboxMenuItemPeer.h>
#include <sun/awt/windows/WCheckboxPeer.h>
#include <sun/awt/windows/WChoicePeer.h>
#include <sun/awt/windows/WClipboard.h>
#include <sun/awt/windows/WCustomCursor.h>
#include <sun/awt/windows/WDataTransferer.h>
#include <sun/awt/windows/WDesktopPeer.h>
#include <sun/awt/windows/WDesktopProperties.h>
#include <sun/awt/windows/WDialogPeer.h>
#include <sun/awt/windows/WDragSourceContextPeer.h>
#include <sun/awt/windows/WEmbeddedFrame.h>
#include <sun/awt/windows/WEmbeddedFramePeer.h>
#include <sun/awt/windows/WFileDialogPeer.h>
#include <sun/awt/windows/WFontMetrics.h>
#include <sun/awt/windows/WFontPeer.h>
#include <sun/awt/windows/WFramePeer.h>
#include <sun/awt/windows/WInputMethod.h>
#include <sun/awt/windows/WInputMethodDescriptor.h>
#include <sun/awt/windows/WKeyboardFocusManagerPeer.h>
#include <sun/awt/windows/WLabelPeer.h>
#include <sun/awt/windows/WLightweightFramePeer.h>
#include <sun/awt/windows/WListPeer.h>
#include <sun/awt/windows/WMenuBarPeer.h>
#include <sun/awt/windows/WMenuItemPeer.h>
#include <sun/awt/windows/WMenuPeer.h>
#include <sun/awt/windows/WMouseDragGestureRecognizer.h>
#include <sun/awt/windows/WMouseInfoPeer.h>
#include <sun/awt/windows/WPageDialog.h>
#include <sun/awt/windows/WPageDialogPeer.h>
#include <sun/awt/windows/WPanelPeer.h>
#include <sun/awt/windows/WPopupMenuPeer.h>
#include <sun/awt/windows/WPrintDialog.h>
#include <sun/awt/windows/WPrintDialogPeer.h>
#include <sun/awt/windows/WRobotPeer.h>
#include <sun/awt/windows/WScrollPanePeer.h>
#include <sun/awt/windows/WScrollbarPeer.h>
#include <sun/awt/windows/WSystemTrayPeer.h>
#include <sun/awt/windows/WTaskbarPeer.h>
#include <sun/awt/windows/WTextAreaPeer.h>
#include <sun/awt/windows/WTextFieldPeer.h>
#include <sun/awt/windows/WToolkit$1.h>
#include <sun/awt/windows/WToolkit$ToolkitDisposer.h>
#include <sun/awt/windows/WTrayIconPeer.h>
#include <sun/awt/windows/WWindowPeer.h>
#include <sun/font/FontManager.h>
#include <sun/font/FontManagerFactory.h>
#include <sun/font/SunFontManager.h>
#include <sun/java2d/Disposer.h>
#include <sun/java2d/d3d/D3DRenderQueue.h>
#include <sun/java2d/opengl/OGLRenderQueue.h>
#include <sun/print/PrintJob2D.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef ACCESS_CLIPBOARD_PERMISSION
#undef APPLICATION_EXCLUDE
#undef APPLICATION_MODAL
#undef DOCUMENT_MODAL
#undef FINE
#undef FINER
#undef FOCUS_LOST
#undef ICONIFIED
#undef MAXIMIZED_BOTH
#undef MAX_BUTTONS_SUPPORTED
#undef MODELESS
#undef MOUSE_PRESSED
#undef MOUSE_RELEASED
#undef NORMAL
#undef NORM_PRIORITY
#undef NO_EXCLUDE
#undef NULL_COMPONENT_WR
#undef TOOLKIT_EXCLUDE
#undef TOOLKIT_MODAL
#undef TRUE
#undef VK_CAPS_LOCK
#undef VK_KANA_LOCK
#undef VK_NUM_LOCK
#undef VK_SCROLL_LOCK
#undef XPSTYLE_THEME_ACTIVE

using $AWTEvent = ::java::awt::AWTEvent;
using $AWTException = ::java::awt::AWTException;
using $Button = ::java::awt::Button;
using $Canvas = ::java::awt::Canvas;
using $Checkbox = ::java::awt::Checkbox;
using $CheckboxMenuItem = ::java::awt::CheckboxMenuItem;
using $Choice = ::java::awt::Choice;
using $Component = ::java::awt::Component;
using $Cursor = ::java::awt::Cursor;
using $Desktop = ::java::awt::Desktop;
using $Dialog = ::java::awt::Dialog;
using $Dialog$ModalExclusionType = ::java::awt::Dialog$ModalExclusionType;
using $Dialog$ModalityType = ::java::awt::Dialog$ModalityType;
using $Dimension = ::java::awt::Dimension;
using $EventQueue = ::java::awt::EventQueue;
using $FileDialog = ::java::awt::FileDialog;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Frame = ::java::awt::Frame;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $JobAttributes = ::java::awt::JobAttributes;
using $Label = ::java::awt::Label;
using $List = ::java::awt::List;
using $Menu = ::java::awt::Menu;
using $MenuBar = ::java::awt::MenuBar;
using $MenuItem = ::java::awt::MenuItem;
using $PageAttributes = ::java::awt::PageAttributes;
using $Panel = ::java::awt::Panel;
using $Point = ::java::awt::Point;
using $PopupMenu = ::java::awt::PopupMenu;
using $PrintJob = ::java::awt::PrintJob;
using $RenderingHints = ::java::awt::RenderingHints;
using $ScrollPane = ::java::awt::ScrollPane;
using $Scrollbar = ::java::awt::Scrollbar;
using $SystemTray = ::java::awt::SystemTray;
using $Taskbar = ::java::awt::Taskbar;
using $TextArea = ::java::awt::TextArea;
using $TextComponent = ::java::awt::TextComponent;
using $TextField = ::java::awt::TextField;
using $Toolkit = ::java::awt::Toolkit;
using $TrayIcon = ::java::awt::TrayIcon;
using $Window = ::java::awt::Window;
using $Clipboard = ::java::awt::datatransfer::Clipboard;
using $DragGestureEvent = ::java::awt::dnd::DragGestureEvent;
using $DragGestureListener = ::java::awt::dnd::DragGestureListener;
using $DragGestureRecognizer = ::java::awt::dnd::DragGestureRecognizer;
using $DragSource = ::java::awt::dnd::DragSource;
using $MouseDragGestureRecognizer = ::java::awt::dnd::MouseDragGestureRecognizer;
using $DragSourceContextPeer = ::java::awt::dnd::peer::DragSourceContextPeer;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $InputMethodHighlight = ::java::awt::im::InputMethodHighlight;
using $InputMethodDescriptor = ::java::awt::im::spi::InputMethodDescriptor;
using $ColorModel = ::java::awt::image::ColorModel;
using $ButtonPeer = ::java::awt::peer::ButtonPeer;
using $CanvasPeer = ::java::awt::peer::CanvasPeer;
using $CheckboxMenuItemPeer = ::java::awt::peer::CheckboxMenuItemPeer;
using $CheckboxPeer = ::java::awt::peer::CheckboxPeer;
using $ChoicePeer = ::java::awt::peer::ChoicePeer;
using $DesktopPeer = ::java::awt::peer::DesktopPeer;
using $DialogPeer = ::java::awt::peer::DialogPeer;
using $FileDialogPeer = ::java::awt::peer::FileDialogPeer;
using $FontPeer = ::java::awt::peer::FontPeer;
using $FramePeer = ::java::awt::peer::FramePeer;
using $KeyboardFocusManagerPeer = ::java::awt::peer::KeyboardFocusManagerPeer;
using $LabelPeer = ::java::awt::peer::LabelPeer;
using $ListPeer = ::java::awt::peer::ListPeer;
using $MenuBarPeer = ::java::awt::peer::MenuBarPeer;
using $MenuItemPeer = ::java::awt::peer::MenuItemPeer;
using $MenuPeer = ::java::awt::peer::MenuPeer;
using $MouseInfoPeer = ::java::awt::peer::MouseInfoPeer;
using $PanelPeer = ::java::awt::peer::PanelPeer;
using $PopupMenuPeer = ::java::awt::peer::PopupMenuPeer;
using $RobotPeer = ::java::awt::peer::RobotPeer;
using $ScrollPanePeer = ::java::awt::peer::ScrollPanePeer;
using $ScrollbarPeer = ::java::awt::peer::ScrollbarPeer;
using $SystemTrayPeer = ::java::awt::peer::SystemTrayPeer;
using $TaskbarPeer = ::java::awt::peer::TaskbarPeer;
using $TextAreaPeer = ::java::awt::peer::TextAreaPeer;
using $TextFieldPeer = ::java::awt::peer::TextFieldPeer;
using $TrayIconPeer = ::java::awt::peer::TrayIconPeer;
using $WindowPeer = ::java::awt::peer::WindowPeer;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $Runtime = ::java::lang::Runtime;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Properties = ::java::util::Properties;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $Executors = ::java::util::concurrent::Executors;
using $ThreadFactory = ::java::util::concurrent::ThreadFactory;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAutoShutdown = ::sun::awt::AWTAutoShutdown;
using $AWTPermissions = ::sun::awt::AWTPermissions;
using $AppContext = ::sun::awt::AppContext;
using $DisplayChangedListener = ::sun::awt::DisplayChangedListener;
using $LightweightFrame = ::sun::awt::LightweightFrame;
using $SunToolkit = ::sun::awt::SunToolkit;
using $Win32GraphicsDevice = ::sun::awt::Win32GraphicsDevice;
using $Win32GraphicsEnvironment = ::sun::awt::Win32GraphicsEnvironment;
using $DataTransferer = ::sun::awt::datatransfer::DataTransferer;
using $PerformanceLogger = ::sun::awt::util::PerformanceLogger;
using $ThreadGroupUtils = ::sun::awt::util::ThreadGroupUtils;
using $ThemeReader = ::sun::awt::windows::ThemeReader;
using $WButtonPeer = ::sun::awt::windows::WButtonPeer;
using $WCanvasPeer = ::sun::awt::windows::WCanvasPeer;
using $WCheckboxMenuItemPeer = ::sun::awt::windows::WCheckboxMenuItemPeer;
using $WCheckboxPeer = ::sun::awt::windows::WCheckboxPeer;
using $WChoicePeer = ::sun::awt::windows::WChoicePeer;
using $WClipboard = ::sun::awt::windows::WClipboard;
using $WCustomCursor = ::sun::awt::windows::WCustomCursor;
using $WDataTransferer = ::sun::awt::windows::WDataTransferer;
using $WDesktopPeer = ::sun::awt::windows::WDesktopPeer;
using $WDesktopProperties = ::sun::awt::windows::WDesktopProperties;
using $WDialogPeer = ::sun::awt::windows::WDialogPeer;
using $WDragSourceContextPeer = ::sun::awt::windows::WDragSourceContextPeer;
using $WEmbeddedFrame = ::sun::awt::windows::WEmbeddedFrame;
using $WEmbeddedFramePeer = ::sun::awt::windows::WEmbeddedFramePeer;
using $WFileDialogPeer = ::sun::awt::windows::WFileDialogPeer;
using $WFontMetrics = ::sun::awt::windows::WFontMetrics;
using $WFontPeer = ::sun::awt::windows::WFontPeer;
using $WFramePeer = ::sun::awt::windows::WFramePeer;
using $WInputMethod = ::sun::awt::windows::WInputMethod;
using $WInputMethodDescriptor = ::sun::awt::windows::WInputMethodDescriptor;
using $WKeyboardFocusManagerPeer = ::sun::awt::windows::WKeyboardFocusManagerPeer;
using $WLabelPeer = ::sun::awt::windows::WLabelPeer;
using $WLightweightFramePeer = ::sun::awt::windows::WLightweightFramePeer;
using $WListPeer = ::sun::awt::windows::WListPeer;
using $WMenuBarPeer = ::sun::awt::windows::WMenuBarPeer;
using $WMenuItemPeer = ::sun::awt::windows::WMenuItemPeer;
using $WMenuPeer = ::sun::awt::windows::WMenuPeer;
using $WMouseDragGestureRecognizer = ::sun::awt::windows::WMouseDragGestureRecognizer;
using $WMouseInfoPeer = ::sun::awt::windows::WMouseInfoPeer;
using $WPageDialog = ::sun::awt::windows::WPageDialog;
using $WPageDialogPeer = ::sun::awt::windows::WPageDialogPeer;
using $WPanelPeer = ::sun::awt::windows::WPanelPeer;
using $WPopupMenuPeer = ::sun::awt::windows::WPopupMenuPeer;
using $WPrintDialog = ::sun::awt::windows::WPrintDialog;
using $WPrintDialogPeer = ::sun::awt::windows::WPrintDialogPeer;
using $WRobotPeer = ::sun::awt::windows::WRobotPeer;
using $WScrollPanePeer = ::sun::awt::windows::WScrollPanePeer;
using $WScrollbarPeer = ::sun::awt::windows::WScrollbarPeer;
using $WSystemTrayPeer = ::sun::awt::windows::WSystemTrayPeer;
using $WTaskbarPeer = ::sun::awt::windows::WTaskbarPeer;
using $WTextAreaPeer = ::sun::awt::windows::WTextAreaPeer;
using $WTextFieldPeer = ::sun::awt::windows::WTextFieldPeer;
using $WToolkit$1 = ::sun::awt::windows::WToolkit$1;
using $WToolkit$ToolkitDisposer = ::sun::awt::windows::WToolkit$ToolkitDisposer;
using $WTrayIconPeer = ::sun::awt::windows::WTrayIconPeer;
using $WWindowPeer = ::sun::awt::windows::WWindowPeer;
using $FontManager = ::sun::font::FontManager;
using $FontManagerFactory = ::sun::font::FontManagerFactory;
using $SunFontManager = ::sun::font::SunFontManager;
using $Disposer = ::sun::java2d::Disposer;
using $D3DRenderQueue = ::sun::java2d::d3d::D3DRenderQueue;
using $OGLRenderQueue = ::sun::java2d::opengl::OGLRenderQueue;
using $PrintJob2D = ::sun::print::PrintJob2D;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace windows {

class WToolkit$$Lambda$getRootThreadGroup : public $PrivilegedAction {
	$class(WToolkit$$Lambda$getRootThreadGroup, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		return $ThreadGroupUtils::getRootThreadGroup();
	}
};
$Class* WToolkit$$Lambda$getRootThreadGroup::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WToolkit$$Lambda$getRootThreadGroup, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WToolkit$$Lambda$getRootThreadGroup, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.awt.windows.WToolkit$$Lambda$getRootThreadGroup",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(WToolkit$$Lambda$getRootThreadGroup, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WToolkit$$Lambda$getRootThreadGroup);
	});
	return class$;
}
$Class* WToolkit$$Lambda$getRootThreadGroup::class$ = nullptr;

class WToolkit$$Lambda$lambda$new$0$1 : public $PrivilegedAction {
	$class(WToolkit$$Lambda$lambda$new$0$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(WToolkit* inst, $ThreadGroup* rootTG) {
		$set(this, inst$, inst);
		$set(this, rootTG, rootTG);
	}
	virtual $Object* run() override {
		return $nc(inst$)->lambda$new$0(rootTG);
	}
	WToolkit* inst$ = nullptr;
	$ThreadGroup* rootTG = nullptr;
};
$Class* WToolkit$$Lambda$lambda$new$0$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(WToolkit$$Lambda$lambda$new$0$1, inst$)},
		{"rootTG", "Ljava/lang/ThreadGroup;", nullptr, $PUBLIC, $field(WToolkit$$Lambda$lambda$new$0$1, rootTG)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WToolkit;Ljava/lang/ThreadGroup;)V", nullptr, $PUBLIC, $method(WToolkit$$Lambda$lambda$new$0$1, init$, void, WToolkit*, $ThreadGroup*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WToolkit$$Lambda$lambda$new$0$1, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.awt.windows.WToolkit$$Lambda$lambda$new$0$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WToolkit$$Lambda$lambda$new$0$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WToolkit$$Lambda$lambda$new$0$1);
	});
	return class$;
}
$Class* WToolkit$$Lambda$lambda$new$0$1::class$ = nullptr;

class WToolkit$$Lambda$lambda$new$1$2 : public $PrivilegedAction {
	$class(WToolkit$$Lambda$lambda$new$1$2, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		return WToolkit::lambda$new$1();
	}
};
$Class* WToolkit$$Lambda$lambda$new$1$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WToolkit$$Lambda$lambda$new$1$2, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WToolkit$$Lambda$lambda$new$1$2, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.awt.windows.WToolkit$$Lambda$lambda$new$1$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(WToolkit$$Lambda$lambda$new$1$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WToolkit$$Lambda$lambda$new$1$2);
	});
	return class$;
}
$Class* WToolkit$$Lambda$lambda$new$1$2::class$ = nullptr;

class WToolkit$$Lambda$lambda$registerShutdownHook$2$3 : public $PrivilegedAction {
	$class(WToolkit$$Lambda$lambda$registerShutdownHook$2$3, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(WToolkit* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		return $nc(inst$)->lambda$registerShutdownHook$2();
	}
	WToolkit* inst$ = nullptr;
};
$Class* WToolkit$$Lambda$lambda$registerShutdownHook$2$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(WToolkit$$Lambda$lambda$registerShutdownHook$2$3, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WToolkit;)V", nullptr, $PUBLIC, $method(WToolkit$$Lambda$lambda$registerShutdownHook$2$3, init$, void, WToolkit*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WToolkit$$Lambda$lambda$registerShutdownHook$2$3, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.awt.windows.WToolkit$$Lambda$lambda$registerShutdownHook$2$3",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WToolkit$$Lambda$lambda$registerShutdownHook$2$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WToolkit$$Lambda$lambda$registerShutdownHook$2$3);
	});
	return class$;
}
$Class* WToolkit$$Lambda$lambda$registerShutdownHook$2$3::class$ = nullptr;

class WToolkit$$Lambda$lambda$run$3$4 : public $PrivilegedAction {
	$class(WToolkit$$Lambda$lambda$run$3$4, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		return WToolkit::lambda$run$3();
	}
};
$Class* WToolkit$$Lambda$lambda$run$3$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WToolkit$$Lambda$lambda$run$3$4, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WToolkit$$Lambda$lambda$run$3$4, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.awt.windows.WToolkit$$Lambda$lambda$run$3$4",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(WToolkit$$Lambda$lambda$run$3$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WToolkit$$Lambda$lambda$run$3$4);
	});
	return class$;
}
$Class* WToolkit$$Lambda$lambda$run$3$4::class$ = nullptr;

class WToolkit$$Lambda$lambda$displayChanged$4$5 : public $Runnable {
	$class(WToolkit$$Lambda$lambda$displayChanged$4$5, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		WToolkit::lambda$displayChanged$4();
	}
};
$Class* WToolkit$$Lambda$lambda$displayChanged$4$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WToolkit$$Lambda$lambda$displayChanged$4$5, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WToolkit$$Lambda$lambda$displayChanged$4$5, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.awt.windows.WToolkit$$Lambda$lambda$displayChanged$4$5",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(WToolkit$$Lambda$lambda$displayChanged$4$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WToolkit$$Lambda$lambda$displayChanged$4$5);
	});
	return class$;
}
$Class* WToolkit$$Lambda$lambda$displayChanged$4$5::class$ = nullptr;

class WToolkit$$Lambda$lambda$displayChanged$5$6 : public $ThreadFactory {
	$class(WToolkit$$Lambda$lambda$displayChanged$5$6, $NO_CLASS_INIT, $ThreadFactory)
public:
	void init$() {
	}
	virtual $Thread* newThread($Runnable* r) override {
		return WToolkit::lambda$displayChanged$5(r);
	}
};
$Class* WToolkit$$Lambda$lambda$displayChanged$5$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WToolkit$$Lambda$lambda$displayChanged$5$6, init$, void)},
		{"newThread", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PUBLIC, $virtualMethod(WToolkit$$Lambda$lambda$displayChanged$5$6, newThread, $Thread*, $Runnable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.awt.windows.WToolkit$$Lambda$lambda$displayChanged$5$6",
		"java.lang.Object",
		"java.util.concurrent.ThreadFactory",
		nullptr,
		methodInfos$$
	};
	$loadClass(WToolkit$$Lambda$lambda$displayChanged$5$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WToolkit$$Lambda$lambda$displayChanged$5$6);
	});
	return class$;
}
$Class* WToolkit$$Lambda$lambda$displayChanged$5$6::class$ = nullptr;

class WToolkit$$Lambda$lambda$windowsSettingChange$6$7 : public $Runnable {
	$class(WToolkit$$Lambda$lambda$windowsSettingChange$6$7, $NO_CLASS_INIT, $Runnable)
public:
	void init$(WToolkit* inst, $Map* props) {
		$set(this, inst$, inst);
		$set(this, props, props);
	}
	virtual void run() override {
		$nc(inst$)->lambda$windowsSettingChange$6(props);
	}
	WToolkit* inst$ = nullptr;
	$Map* props = nullptr;
};
$Class* WToolkit$$Lambda$lambda$windowsSettingChange$6$7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(WToolkit$$Lambda$lambda$windowsSettingChange$6$7, inst$)},
		{"props", "Ljava/util/Map;", nullptr, $PUBLIC, $field(WToolkit$$Lambda$lambda$windowsSettingChange$6$7, props)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WToolkit;Ljava/util/Map;)V", nullptr, $PUBLIC, $method(WToolkit$$Lambda$lambda$windowsSettingChange$6$7, init$, void, WToolkit*, $Map*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WToolkit$$Lambda$lambda$windowsSettingChange$6$7, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.awt.windows.WToolkit$$Lambda$lambda$windowsSettingChange$6$7",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WToolkit$$Lambda$lambda$windowsSettingChange$6$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WToolkit$$Lambda$lambda$windowsSettingChange$6$7);
	});
	return class$;
}
$Class* WToolkit$$Lambda$lambda$windowsSettingChange$6$7::class$ = nullptr;

class WToolkit$$Lambda$shutdown$8 : public $Runnable {
	$class(WToolkit$$Lambda$shutdown$8, $NO_CLASS_INIT, $Runnable)
public:
	void init$(WToolkit* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->shutdown();
	}
	WToolkit* inst$ = nullptr;
};
$Class* WToolkit$$Lambda$shutdown$8::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(WToolkit$$Lambda$shutdown$8, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WToolkit;)V", nullptr, $PUBLIC, $method(WToolkit$$Lambda$shutdown$8, init$, void, WToolkit*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WToolkit$$Lambda$shutdown$8, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.awt.windows.WToolkit$$Lambda$shutdown$8",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WToolkit$$Lambda$shutdown$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WToolkit$$Lambda$shutdown$8);
	});
	return class$;
}
$Class* WToolkit$$Lambda$shutdown$8::class$ = nullptr;

int32_t WToolkit::hashCode() {
	return this->$SunToolkit::hashCode();
}

bool WToolkit::equals(Object$* arg0) {
	return this->$SunToolkit::equals(arg0);
}

$Object* WToolkit::clone() {
	return this->$SunToolkit::clone();
}

$String* WToolkit::toString() {
	return this->$SunToolkit::toString();
}

void WToolkit::finalize() {
	this->$SunToolkit::finalize();
}

$PlatformLogger* WToolkit::log = nullptr;
$String* WToolkit::XPSTYLE_THEME_ACTIVE = nullptr;
bool WToolkit::areExtraMouseButtonsEnabled$ = false;
bool WToolkit::loaded = false;
$WMouseInfoPeer* WToolkit::wPeer = nullptr;
$ColorModel* WToolkit::screenmodel = nullptr;
$ExecutorService* WToolkit::displayChangeExecutor = nullptr;
$String* WToolkit::prefix = nullptr;
$String* WToolkit::postfix = nullptr;
$String* WToolkit::awtPrefix = nullptr;
$String* WToolkit::dndPrefix = nullptr;
$WeakReference* WToolkit::NULL_COMPONENT_WR = nullptr;

void WToolkit::initIDs() {
	$init(WToolkit);
	$prepareNativeStatic(initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void WToolkit::loadLibraries() {
	$init(WToolkit);
	$beforeCallerSensitive();
	if (!WToolkit::loaded) {
		$AccessController::doPrivileged($$new($WToolkit$1));
		WToolkit::loaded = true;
	}
}

$String* WToolkit::getWindowsVersion() {
	$init(WToolkit);
	$prepareNativeStatic(getWindowsVersion, $String*);
	$var($String, $ret, $invokeNativeStaticObject());
	$finishNativeStatic();
	return $ret;
}

bool WToolkit::embeddedInit() {
	$init(WToolkit);
	$prepareNativeStatic(embeddedInit, bool);
	bool $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

bool WToolkit::embeddedDispose() {
	$init(WToolkit);
	$prepareNativeStatic(embeddedDispose, bool);
	bool $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

void WToolkit::embeddedEventLoopIdleProcessing() {
	$prepareNative(embeddedEventLoopIdleProcessing, void);
	$invokeNative();
	$finishNative();
}

void WToolkit::postDispose() {
	$init(WToolkit);
	$prepareNativeStatic(postDispose, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

bool WToolkit::startToolkitThread($Runnable* thread, $ThreadGroup* rootThreadGroup) {
	$init(WToolkit);
	$prepareNativeStatic(startToolkitThread, bool, $Runnable* thread, $ThreadGroup* rootThreadGroup);
	bool $ret = $invokeNativeStatic(thread, rootThreadGroup);
	$finishNativeStatic();
	return $ret;
}

void WToolkit::init$() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$SunToolkit::init$();
	this->dynamicLayoutSetting = false;
	$set(this, anchor, $new($Object));
	this->inited = false;
	$set(this, compOnTouchDownEvent, WToolkit::NULL_COMPONENT_WR);
	$set(this, compOnMousePressedEvent, WToolkit::NULL_COMPONENT_WR);
	if ($PerformanceLogger::loggingEnabled()) {
		$PerformanceLogger::setTime("WToolkit construction"_s);
	}
	$Disposer::addRecord(this->anchor, $$new($WToolkit$ToolkitDisposer));
	$AWTAutoShutdown::notifyToolkitThreadBusy();
	$var($ThreadGroup, rootTG, $cast($ThreadGroup, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(WToolkit$$Lambda$getRootThreadGroup)))));
	if (!startToolkitThread(this, rootTG)) {
		$var($String, name, "AWT-Windows"_s);
		$AccessController::doPrivileged($cast($PrivilegedAction, $$new(WToolkit$$Lambda$lambda$new$0$1, this, rootTG)));
	}
	try {
		$synchronized(this) {
			while (!this->inited) {
				$of(this)->wait();
			}
		}
	} catch ($InterruptedException& x) {
	}
	setDynamicLayout(true);
	$var($String, extraButtons, "sun.awt.enableExtraMouseButtons"_s);
	$AccessController::doPrivileged($cast($PrivilegedAction, $$new(WToolkit$$Lambda$lambda$new$1$2)));
	setExtraMouseButtonsEnabledNative(WToolkit::areExtraMouseButtonsEnabled$);
}

void WToolkit::registerShutdownHook() {
	$beforeCallerSensitive();
	$AccessController::doPrivileged($cast($PrivilegedAction, $$new(WToolkit$$Lambda$lambda$registerShutdownHook$2$3, this)));
}

void WToolkit::run() {
	$beforeCallerSensitive();
	$AccessController::doPrivileged($cast($PrivilegedAction, $$new(WToolkit$$Lambda$lambda$run$3$4)));
	bool startPump = init();
	if (startPump) {
		registerShutdownHook();
	}
	$synchronized(this) {
		this->inited = true;
		$of(this)->notifyAll();
	}
	if (startPump) {
		eventLoop();
	}
}

bool WToolkit::init() {
	$prepareNative(init, bool);
	bool $ret = $invokeNative();
	$finishNative();
	return $ret;
}

void WToolkit::eventLoop() {
	$prepareNative(eventLoop, void);
	$invokeNative();
	$finishNative();
}

void WToolkit::shutdown() {
	$prepareNative(shutdown, void);
	$invokeNative();
	$finishNative();
}

void WToolkit::startSecondaryEventLoop() {
	$init(WToolkit);
	$prepareNativeStatic(startSecondaryEventLoop, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void WToolkit::quitSecondaryEventLoop() {
	$init(WToolkit);
	$prepareNativeStatic(quitSecondaryEventLoop, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

$ButtonPeer* WToolkit::createButton($Button* target) {
	$var($ButtonPeer, peer, $new($WButtonPeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$TextFieldPeer* WToolkit::createTextField($TextField* target) {
	$var($TextFieldPeer, peer, $new($WTextFieldPeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$LabelPeer* WToolkit::createLabel($Label* target) {
	$var($LabelPeer, peer, $new($WLabelPeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$ListPeer* WToolkit::createList($List* target) {
	$var($ListPeer, peer, $new($WListPeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$CheckboxPeer* WToolkit::createCheckbox($Checkbox* target) {
	$var($CheckboxPeer, peer, $new($WCheckboxPeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$ScrollbarPeer* WToolkit::createScrollbar($Scrollbar* target) {
	$var($ScrollbarPeer, peer, $new($WScrollbarPeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$ScrollPanePeer* WToolkit::createScrollPane($ScrollPane* target) {
	$var($ScrollPanePeer, peer, $new($WScrollPanePeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$TextAreaPeer* WToolkit::createTextArea($TextArea* target) {
	$var($TextAreaPeer, peer, $new($WTextAreaPeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$ChoicePeer* WToolkit::createChoice($Choice* target) {
	$var($ChoicePeer, peer, $new($WChoicePeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$FramePeer* WToolkit::createFrame($Frame* target) {
	$var($FramePeer, peer, $new($WFramePeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$FramePeer* WToolkit::createLightweightFrame($LightweightFrame* target) {
	$var($FramePeer, peer, $new($WLightweightFramePeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$CanvasPeer* WToolkit::createCanvas($Canvas* target) {
	$var($CanvasPeer, peer, $new($WCanvasPeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

void WToolkit::disableBackgroundErase($Canvas* canvas) {
	$useLocalObjectStack();
	$var($WCanvasPeer, peer, $cast($WCanvasPeer, $$nc($AWTAccessor::getComponentAccessor())->getPeer(canvas)));
	if (peer == nullptr) {
		$throwNew($IllegalStateException, "Canvas must have a valid peer"_s);
	}
	$nc(peer)->disableBackgroundErase();
}

$PanelPeer* WToolkit::createPanel($Panel* target) {
	$var($PanelPeer, peer, $new($WPanelPeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$WindowPeer* WToolkit::createWindow($Window* target) {
	$var($WindowPeer, peer, $new($WWindowPeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$DialogPeer* WToolkit::createDialog($Dialog* target) {
	$var($DialogPeer, peer, $new($WDialogPeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$FileDialogPeer* WToolkit::createFileDialog($FileDialog* target) {
	$var($FileDialogPeer, peer, $new($WFileDialogPeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$MenuBarPeer* WToolkit::createMenuBar($MenuBar* target) {
	$var($MenuBarPeer, peer, $new($WMenuBarPeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$MenuPeer* WToolkit::createMenu($Menu* target) {
	$var($MenuPeer, peer, $new($WMenuPeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$PopupMenuPeer* WToolkit::createPopupMenu($PopupMenu* target) {
	$var($PopupMenuPeer, peer, $new($WPopupMenuPeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$MenuItemPeer* WToolkit::createMenuItem($MenuItem* target) {
	$var($MenuItemPeer, peer, $new($WMenuItemPeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$CheckboxMenuItemPeer* WToolkit::createCheckboxMenuItem($CheckboxMenuItem* target) {
	$var($CheckboxMenuItemPeer, peer, $new($WCheckboxMenuItemPeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$RobotPeer* WToolkit::createRobot($GraphicsDevice* screen) {
	if ($instanceOf($Win32GraphicsDevice, screen)) {
		return $new($WRobotPeer);
	}
	return $SunToolkit::createRobot(screen);
}

$WEmbeddedFramePeer* WToolkit::createEmbeddedFrame($WEmbeddedFrame* target) {
	$var($WEmbeddedFramePeer, peer, $new($WEmbeddedFramePeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$WPrintDialogPeer* WToolkit::createWPrintDialog($WPrintDialog* target) {
	$var($WPrintDialogPeer, peer, $new($WPrintDialogPeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$WPageDialogPeer* WToolkit::createWPageDialog($WPageDialog* target) {
	$var($WPageDialogPeer, peer, $new($WPageDialogPeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$TrayIconPeer* WToolkit::createTrayIcon($TrayIcon* target) {
	$var($WTrayIconPeer, peer, $new($WTrayIconPeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$SystemTrayPeer* WToolkit::createSystemTray($SystemTray* target) {
	return $new($WSystemTrayPeer, target);
}

bool WToolkit::isTraySupported() {
	return true;
}

$DataTransferer* WToolkit::getDataTransferer() {
	return $WDataTransferer::getInstanceImpl();
}

$KeyboardFocusManagerPeer* WToolkit::getKeyboardFocusManagerPeer() {
	return $WKeyboardFocusManagerPeer::getInstance();
}

$MouseInfoPeer* WToolkit::getMouseInfoPeer() {
	$synchronized(this) {
		if (WToolkit::wPeer == nullptr) {
			$assignStatic(WToolkit::wPeer, $new($WMouseInfoPeer));
		}
		return WToolkit::wPeer;
	}
}

void WToolkit::setDynamicLayoutNative(bool b) {
	$prepareNative(setDynamicLayoutNative, void, bool b);
	$invokeNative(b);
	$finishNative();
}

void WToolkit::setDynamicLayout(bool b) {
	if (b == this->dynamicLayoutSetting) {
		return;
	}
	this->dynamicLayoutSetting = b;
	setDynamicLayoutNative(b);
}

bool WToolkit::isDynamicLayoutSet() {
	return this->dynamicLayoutSetting;
}

bool WToolkit::isDynamicLayoutSupportedNative() {
	$prepareNative(isDynamicLayoutSupportedNative, bool);
	bool $ret = $invokeNative();
	$finishNative();
	return $ret;
}

bool WToolkit::isDynamicLayoutActive() {
	bool var$0 = isDynamicLayoutSet();
	return (var$0 && isDynamicLayoutSupported());
}

bool WToolkit::isFrameStateSupported(int32_t state) {
	switch (state) {
	case $Frame::NORMAL:
	case $Frame::ICONIFIED:
	case $Frame::MAXIMIZED_BOTH:
		return true;
	default:
		return false;
	}
}

$ColorModel* WToolkit::makeColorModel() {
	$init(WToolkit);
	$prepareNativeStatic(makeColorModel, $ColorModel*);
	$var($ColorModel, $ret, $invokeNativeStaticObject());
	$finishNativeStatic();
	return $ret;
}

$Insets* WToolkit::getScreenInsets($GraphicsConfiguration* gc) {
	$var($GraphicsDevice, gd, $nc(gc)->getDevice());
	if (!($instanceOf($Win32GraphicsDevice, gd))) {
		return $SunToolkit::getScreenInsets(gc);
	}
	return getScreenInsets($nc($cast($Win32GraphicsDevice, gd))->getScreen());
}

int32_t WToolkit::getScreenResolution() {
	$var($Win32GraphicsEnvironment, ge, $cast($Win32GraphicsEnvironment, $GraphicsEnvironment::getLocalGraphicsEnvironment()));
	return $nc(ge)->getXResolution();
}

$Insets* WToolkit::getScreenInsets(int32_t screen) {
	$prepareNative(getScreenInsets, $Insets*, int32_t screen);
	$var($Insets, $ret, $invokeNativeObject(screen));
	$finishNative();
	return $ret;
}

$FontMetrics* WToolkit::getFontMetrics($Font* font) {
	$var($FontManager, fm, $FontManagerFactory::getInstance());
	if ($instanceOf($SunFontManager, fm) && $cast($SunFontManager, fm)->usePlatformFontMetrics()) {
		return $WFontMetrics::getFontMetrics(font);
	}
	return $SunToolkit::getFontMetrics(font);
}

$FontPeer* WToolkit::getFontPeer($String* name, int32_t style) {
	$useLocalObjectStack();
	$var($FontPeer, retval, nullptr);
	$var($String, lcName, $nc(name)->toLowerCase());
	if (nullptr != this->cacheFontPeer) {
		$assign(retval, $cast($FontPeer, this->cacheFontPeer->get($$str({lcName, $$str(style)}))));
		if (nullptr != retval) {
			return retval;
		}
	}
	$assign(retval, $new($WFontPeer, name, style));
	if (retval != nullptr) {
		if (nullptr == this->cacheFontPeer) {
			$set(this, cacheFontPeer, $new($Hashtable, 5, 0.9f));
		}
		if (nullptr != this->cacheFontPeer) {
			this->cacheFontPeer->put($$str({lcName, $$str(style)}), retval);
		}
	}
	return retval;
}

void WToolkit::nativeSync() {
	$prepareNative(nativeSync, void);
	$invokeNative();
	$finishNative();
}

void WToolkit::sync() {
	nativeSync();
	$OGLRenderQueue::sync();
	$D3DRenderQueue::sync();
}

$PrintJob* WToolkit::getPrintJob($Frame* frame, $String* doctitle, $Properties* props) {
	return getPrintJob(frame, doctitle, nullptr, nullptr);
}

$PrintJob* WToolkit::getPrintJob($Frame* frame, $String* doctitle, $JobAttributes* jobAttributes, $PageAttributes* pageAttributes) {
	if (frame == nullptr) {
		$throwNew($NullPointerException, "frame must not be null"_s);
	}
	$var($PrintJob2D, printJob, $new($PrintJob2D, frame, doctitle, jobAttributes, pageAttributes));
	if (printJob->printDialog() == false) {
		$assign(printJob, nullptr);
	}
	return printJob;
}

void WToolkit::beep() {
	$prepareNative(beep, void);
	$invokeNative();
	$finishNative();
}

bool WToolkit::getLockingKeyState(int32_t key) {
	if (!(key == $KeyEvent::VK_CAPS_LOCK || key == $KeyEvent::VK_NUM_LOCK || key == $KeyEvent::VK_SCROLL_LOCK || key == $KeyEvent::VK_KANA_LOCK)) {
		$throwNew($IllegalArgumentException, "invalid key for Toolkit.getLockingKeyState"_s);
	}
	return getLockingKeyStateNative(key);
}

bool WToolkit::getLockingKeyStateNative(int32_t key) {
	$prepareNative(getLockingKeyStateNative, bool, int32_t key);
	bool $ret = $invokeNative(key);
	$finishNative();
	return $ret;
}

void WToolkit::setLockingKeyState(int32_t key, bool on) {
	if (!(key == $KeyEvent::VK_CAPS_LOCK || key == $KeyEvent::VK_NUM_LOCK || key == $KeyEvent::VK_SCROLL_LOCK || key == $KeyEvent::VK_KANA_LOCK)) {
		$throwNew($IllegalArgumentException, "invalid key for Toolkit.setLockingKeyState"_s);
	}
	setLockingKeyStateNative(key, on);
}

void WToolkit::setLockingKeyStateNative(int32_t key, bool on) {
	$prepareNative(setLockingKeyStateNative, void, int32_t key, bool on);
	$invokeNative(key, on);
	$finishNative();
}

$Clipboard* WToolkit::getSystemClipboard() {
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		$init($AWTPermissions);
		security->checkPermission($AWTPermissions::ACCESS_CLIPBOARD_PERMISSION);
	}
	$synchronized(this) {
		if (this->clipboard == nullptr) {
			$set(this, clipboard, $new($WClipboard));
		}
	}
	return this->clipboard;
}

void WToolkit::loadSystemColors($ints* systemColors) {
	$prepareNative(loadSystemColors, void, $ints* systemColors);
	$invokeNative(systemColors);
	$finishNative();
}

$Object* WToolkit::targetToPeer(Object$* target) {
	$init(WToolkit);
	return $SunToolkit::targetToPeer(target);
}

void WToolkit::targetDisposedPeer(Object$* target, Object$* peer) {
	$init(WToolkit);
	$SunToolkit::targetDisposedPeer(target, peer);
}

$InputMethodDescriptor* WToolkit::getInputMethodAdapterDescriptor() {
	return $new($WInputMethodDescriptor);
}

$Map* WToolkit::mapInputMethodHighlight($InputMethodHighlight* highlight) {
	return $WInputMethod::mapInputMethodHighlight(highlight);
}

bool WToolkit::enableInputMethodsForTextComponent() {
	return true;
}

$Locale* WToolkit::getDefaultKeyboardLocale() {
	$var($Locale, locale, $WInputMethod::getNativeLocale());
	if (locale == nullptr) {
		return $SunToolkit::getDefaultKeyboardLocale();
	} else {
		return locale;
	}
}

$Cursor* WToolkit::createCustomCursor($Image* cursor, $Point* hotSpot, $String* name) {
	return $new($WCustomCursor, cursor, hotSpot, name);
}

$Dimension* WToolkit::getBestCursorSize(int32_t preferredWidth, int32_t preferredHeight) {
	int32_t var$0 = $WCustomCursor::getCursorWidth();
	return $new($Dimension, var$0, $WCustomCursor::getCursorHeight());
}

int32_t WToolkit::getMaximumCursorColors() {
	$prepareNative(getMaximumCursorColors, int32_t);
	int32_t $ret = $invokeNative();
	$finishNative();
	return $ret;
}

void WToolkit::paletteChanged() {
	$init(WToolkit);
	$var($Object, lge, $GraphicsEnvironment::getLocalGraphicsEnvironment());
	if ($instanceOf($DisplayChangedListener, lge)) {
		$cast($DisplayChangedListener, lge)->paletteChanged();
	}
}

void WToolkit::displayChanged() {
	$init(WToolkit);
	$useLocalObjectStack();
	$var($Runnable, runnable, $new(WToolkit$$Lambda$lambda$displayChanged$4$5));
	if ($AppContext::getAppContext() != nullptr) {
		$EventQueue::invokeLater(runnable);
	} else {
		if (WToolkit::displayChangeExecutor == nullptr) {
			$assignStatic(WToolkit::displayChangeExecutor, $Executors::newFixedThreadPool(1, $$new(WToolkit$$Lambda$lambda$displayChanged$5$6)));
		}
		$nc(WToolkit::displayChangeExecutor)->submit(runnable);
	}
}

$DragSourceContextPeer* WToolkit::createDragSourceContextPeer($DragGestureEvent* dge) {
	$useLocalObjectStack();
	$var($LightweightFrame, f, $SunToolkit::getLightweightFrame($($nc(dge)->getComponent())));
	if (f != nullptr) {
		return f->createDragSourceContextPeer(dge);
	}
	return $WDragSourceContextPeer::createDragSourceContextPeer(dge);
}

$DragGestureRecognizer* WToolkit::createDragGestureRecognizer($Class* abstractRecognizerClass, $DragSource* ds, $Component* c, int32_t srcActions, $DragGestureListener* dgl) {
	$var($LightweightFrame, f, $SunToolkit::getLightweightFrame(c));
	if (f != nullptr) {
		return f->createDragGestureRecognizer(abstractRecognizerClass, ds, c, srcActions, dgl);
	}
	$load($MouseDragGestureRecognizer);
	if ($MouseDragGestureRecognizer::class$->equals(abstractRecognizerClass)) {
		return $cast($DragGestureRecognizer, $new($WMouseDragGestureRecognizer, ds, c, srcActions, dgl));
	} else {
		return nullptr;
	}
}

$Object* WToolkit::lazilyLoadDesktopProperty($String* name) {
	$useLocalObjectStack();
	if ($nc(name)->startsWith(WToolkit::prefix)) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		int32_t var$1 = WToolkit::prefix->length();
		var$0->append($(name->substring(var$1, name->length())));
		var$0->append(WToolkit::postfix);
		$var($String, cursorName, $str(var$0));
		try {
			return $Cursor::getSystemCustomCursor(cursorName);
		} catch ($AWTException& awte) {
			$throwNew($RuntimeException, $$str({"cannot load system cursor: "_s, cursorName}), awte);
		}
	}
	if (name->equals("awt.dynamicLayoutSupported"_s)) {
		return $of($Boolean::valueOf(isDynamicLayoutSupported()));
	}
	bool var$3 = $WDesktopProperties::isWindowsProperty(name);
	bool var$2 = var$3 || name->startsWith(WToolkit::awtPrefix);
	if (var$2 || name->startsWith(WToolkit::dndPrefix)) {
		$synchronized(this) {
			lazilyInitWProps();
			return $nc(this->desktopProperties)->get(name);
		}
	}
	return $SunToolkit::lazilyLoadDesktopProperty(name);
}

void WToolkit::lazilyInitWProps() {
	$synchronized(this) {
		if (this->wprops == nullptr) {
			$set(this, wprops, $new($WDesktopProperties, this));
			updateProperties($(this->wprops->getProperties()));
		}
	}
}

bool WToolkit::isDynamicLayoutSupported() {
	$synchronized(this) {
		$useLocalObjectStack();
		bool nativeDynamic = isDynamicLayoutSupportedNative();
		lazilyInitWProps();
		$var($Boolean, prop, $cast($Boolean, $nc(this->desktopProperties)->get("awt.dynamicLayoutSupported"_s)));
		$init($PlatformLogger$Level);
		if ($nc(WToolkit::log)->isLoggable($PlatformLogger$Level::FINER)) {
			WToolkit::log->finer($$str({"In WTK.isDynamicLayoutSupported()   nativeDynamic == "_s, $$str(nativeDynamic), "   wprops.dynamic == "_s, prop}));
		}
		if ((prop == nullptr) || (nativeDynamic != prop->booleanValue())) {
			windowsSettingChange();
			return nativeDynamic;
		}
		return $nc(prop)->booleanValue();
	}
}

void WToolkit::windowsSettingChange() {
	$useLocalObjectStack();
	$var($Map, props, getWProps());
	if (props == nullptr) {
		return;
	}
	updateXPStyleEnabled($($nc(props)->get(WToolkit::XPSTYLE_THEME_ACTIVE)));
	if ($AppContext::getAppContext() == nullptr) {
		updateProperties(props);
	} else {
		$EventQueue::invokeLater($$new(WToolkit$$Lambda$lambda$windowsSettingChange$6$7, this, props));
	}
}

void WToolkit::updateProperties($Map* props) {
	$synchronized(this) {
		$useLocalObjectStack();
		if (nullptr == props) {
			return;
		}
		updateXPStyleEnabled($($nc(props)->get(WToolkit::XPSTYLE_THEME_ACTIVE)));
		{
			$var($Iterator, i$, $$nc(props->keySet())->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, propName, $cast($String, i$->next()));
				{
					$var($Object, val, props->get(propName));
					$init($PlatformLogger$Level);
					if ($nc(WToolkit::log)->isLoggable($PlatformLogger$Level::FINER)) {
						WToolkit::log->finer($$str({"changed "_s, propName, " to "_s, val}));
					}
					setDesktopProperty(propName, val);
				}
			}
		}
	}
}

$Map* WToolkit::getWProps() {
	$synchronized(this) {
		return (this->wprops != nullptr) ? this->wprops->getProperties() : ($Map*)nullptr;
	}
}

void WToolkit::updateXPStyleEnabled(Object$* dskProp) {
	$init($ThemeReader);
	$ThemeReader::xpStyleEnabled = $nc($Boolean::TRUE)->equals(dskProp);
}

void WToolkit::addPropertyChangeListener($String* name, $PropertyChangeListener* pcl) {
	$synchronized(this) {
		if (name == nullptr) {
			return;
		}
		bool var$1 = $WDesktopProperties::isWindowsProperty(name);
		bool var$0 = var$1 || $nc(name)->startsWith(WToolkit::awtPrefix);
		if (var$0 || $nc(name)->startsWith(WToolkit::dndPrefix)) {
			lazilyInitWProps();
		}
		$SunToolkit::addPropertyChangeListener(name, pcl);
	}
}

void WToolkit::initializeDesktopProperties() {
	$synchronized(this) {
		$useLocalObjectStack();
		$nc(this->desktopProperties)->put("DnD.Autoscroll.initialDelay"_s, $($Integer::valueOf(50)));
		this->desktopProperties->put("DnD.Autoscroll.interval"_s, $($Integer::valueOf(50)));
		this->desktopProperties->put("DnD.isDragImageSupported"_s, $Boolean::TRUE);
		this->desktopProperties->put("Shell.shellFolderManager"_s, "sun.awt.shell.Win32ShellFolderManager2"_s);
	}
}

$RenderingHints* WToolkit::getDesktopAAHints() {
	$synchronized(this) {
		if (this->wprops == nullptr) {
			return nullptr;
		} else {
			return this->wprops->getDesktopAAHints();
		}
	}
}

bool WToolkit::isModalityTypeSupported($Dialog$ModalityType* modalityType) {
	$init($Dialog$ModalityType);
	return (modalityType == nullptr) || (modalityType == $Dialog$ModalityType::MODELESS) || (modalityType == $Dialog$ModalityType::DOCUMENT_MODAL) || (modalityType == $Dialog$ModalityType::APPLICATION_MODAL) || (modalityType == $Dialog$ModalityType::TOOLKIT_MODAL);
}

bool WToolkit::isModalExclusionTypeSupported($Dialog$ModalExclusionType* exclusionType) {
	$init($Dialog$ModalExclusionType);
	return (exclusionType == nullptr) || (exclusionType == $Dialog$ModalExclusionType::NO_EXCLUDE) || (exclusionType == $Dialog$ModalExclusionType::APPLICATION_EXCLUDE) || (exclusionType == $Dialog$ModalExclusionType::TOOLKIT_EXCLUDE);
}

WToolkit* WToolkit::getWToolkit() {
	$init(WToolkit);
	$var(WToolkit, toolkit, $cast(WToolkit, $Toolkit::getDefaultToolkit()));
	return toolkit;
}

bool WToolkit::useBufferPerWindow() {
	return !$Win32GraphicsEnvironment::isDWMCompositionEnabled();
}

void WToolkit::grab($Window* w) {
	$useLocalObjectStack();
	$var($Object, peer, $$nc($AWTAccessor::getComponentAccessor())->getPeer(w));
	if (peer != nullptr) {
		$cast($WWindowPeer, peer)->grab();
	}
}

void WToolkit::ungrab($Window* w) {
	$useLocalObjectStack();
	$var($Object, peer, $$nc($AWTAccessor::getComponentAccessor())->getPeer(w));
	if (peer != nullptr) {
		$cast($WWindowPeer, peer)->ungrab();
	}
}

bool WToolkit::isComponentValidForTouchKeyboard($Component* comp) {
	bool var$1 = (comp != nullptr) && comp->isEnabled();
	bool var$0 = var$1 && comp->isFocusable();
	if (var$0) {
		bool var$2 = ($instanceOf($TextComponent, comp)) && $cast($TextComponent, comp)->isEditable();
		var$0 = var$2 || (($instanceOf($JTextComponent, comp)) && $cast($JTextComponent, comp)->isEditable());
	}
	if (var$0) {
		return true;
	}
	return false;
}

void WToolkit::showOrHideTouchKeyboard($Component* comp, $AWTEvent* e) {
	$useLocalObjectStack();
	if (!($instanceOf($TextComponent, comp)) && !($instanceOf($JTextComponent, comp))) {
		return;
	}
	if (($instanceOf($MouseEvent, e)) && isComponentValidForTouchKeyboard(comp)) {
		$var($MouseEvent, me, $cast($MouseEvent, e));
		if (me->getID() == $MouseEvent::MOUSE_PRESSED) {
			if ($$nc($AWTAccessor::getMouseEventAccessor())->isCausedByTouchEvent(me)) {
				$set(this, compOnTouchDownEvent, $new($WeakReference, comp));
			} else {
				$set(this, compOnMousePressedEvent, $new($WeakReference, comp));
			}
		} else if (me->getID() == $MouseEvent::MOUSE_RELEASED) {
			if ($$nc($AWTAccessor::getMouseEventAccessor())->isCausedByTouchEvent(me)) {
				if ($equals($nc(this->compOnTouchDownEvent)->get(), comp)) {
					showTouchKeyboard(true);
				}
				$set(this, compOnTouchDownEvent, WToolkit::NULL_COMPONENT_WR);
			} else {
				if ($equals($nc(this->compOnMousePressedEvent)->get(), comp)) {
					showTouchKeyboard(false);
				}
				$set(this, compOnMousePressedEvent, WToolkit::NULL_COMPONENT_WR);
			}
		}
	} else if ($instanceOf($FocusEvent, e)) {
		$var($FocusEvent, fe, $cast($FocusEvent, e));
		if (fe->getID() == $FocusEvent::FOCUS_LOST) {
			if (!isComponentValidForTouchKeyboard($(fe->getOppositeComponent()))) {
				hideTouchKeyboard();
			}
		}
	}
}

void WToolkit::showTouchKeyboard(bool causedByTouchEvent) {
	$prepareNative(showTouchKeyboard, void, bool causedByTouchEvent);
	$invokeNative(causedByTouchEvent);
	$finishNative();
}

void WToolkit::hideTouchKeyboard() {
	$prepareNative(hideTouchKeyboard, void);
	$invokeNative();
	$finishNative();
}

bool WToolkit::syncNativeQueue(int64_t timeout) {
	$prepareNative(syncNativeQueue, bool, int64_t timeout);
	bool $ret = $invokeNative(timeout);
	$finishNative();
	return $ret;
}

bool WToolkit::isDesktopSupported() {
	return true;
}

$DesktopPeer* WToolkit::createDesktopPeer($Desktop* target) {
	return $new($WDesktopPeer);
}

bool WToolkit::isTaskbarSupported() {
	return $WTaskbarPeer::isTaskbarSupported();
}

$TaskbarPeer* WToolkit::createTaskbarPeer($Taskbar* target) {
	return $new($WTaskbarPeer);
}

void WToolkit::setExtraMouseButtonsEnabledNative(bool enable) {
	$init(WToolkit);
	$prepareNativeStatic(setExtraMouseButtonsEnabledNative, void, bool enable);
	$invokeNativeStatic(enable);
	$finishNativeStatic();
}

bool WToolkit::areExtraMouseButtonsEnabled() {
	return WToolkit::areExtraMouseButtonsEnabled$;
}

int32_t WToolkit::getNumberOfButtonsImpl() {
	$prepareNative(getNumberOfButtonsImpl, int32_t);
	int32_t $ret = $invokeNative();
	$finishNative();
	return $ret;
}

int32_t WToolkit::getNumberOfButtons() {
	$init($SunToolkit);
	if ($SunToolkit::numberOfButtons == 0) {
		$SunToolkit::numberOfButtons = getNumberOfButtonsImpl();
	}
	return ($SunToolkit::numberOfButtons > $SunToolkit::MAX_BUTTONS_SUPPORTED) ? $SunToolkit::MAX_BUTTONS_SUPPORTED : $SunToolkit::numberOfButtons;
}

bool WToolkit::isWindowOpacitySupported() {
	return true;
}

bool WToolkit::isWindowShapingSupported() {
	return true;
}

bool WToolkit::isWindowTranslucencySupported() {
	return true;
}

bool WToolkit::isTranslucencyCapable($GraphicsConfiguration* gc) {
	return true;
}

bool WToolkit::needUpdateWindow() {
	return true;
}

void WToolkit::lambda$windowsSettingChange$6($Map* props) {
	updateProperties(props);
}

$Thread* WToolkit::lambda$displayChanged$5($Runnable* r) {
	$init(WToolkit);
	$useLocalObjectStack();
	$var($Thread, t, $$nc($Executors::defaultThreadFactory())->newThread(r));
	$nc(t)->setDaemon(true);
	return t;
}

void WToolkit::lambda$displayChanged$4() {
	$init(WToolkit);
	$var($Object, lge, $GraphicsEnvironment::getLocalGraphicsEnvironment());
	if ($instanceOf($DisplayChangedListener, lge)) {
		$cast($DisplayChangedListener, lge)->displayChanged();
	}
}

$Void* WToolkit::lambda$run$3() {
	$init(WToolkit);
	$useLocalObjectStack();
	$($Thread::currentThread())->setContextClassLoader(nullptr);
	$($Thread::currentThread())->setPriority($Thread::NORM_PRIORITY + 1);
	return nullptr;
}

$Void* WToolkit::lambda$registerShutdownHook$2() {
	$useLocalObjectStack();
	$var($ThreadGroup, var$0, $ThreadGroupUtils::getRootThreadGroup());
	$var($Thread, shutdown, $new($Thread, var$0, $$new(WToolkit$$Lambda$shutdown$8, this), "ToolkitShutdown"_s, 0, false));
	shutdown->setContextClassLoader(nullptr);
	$$nc($Runtime::getRuntime())->addShutdownHook(shutdown);
	return nullptr;
}

$Void* WToolkit::lambda$new$1() {
	$init(WToolkit);
	$useLocalObjectStack();
	$var($String, extraButtons, "sun.awt.enableExtraMouseButtons"_s);
	WToolkit::areExtraMouseButtonsEnabled$ = $Boolean::parseBoolean($($System::getProperty(extraButtons, "true"_s)));
	$System::setProperty(extraButtons, $$str({""_s, $$str(WToolkit::areExtraMouseButtonsEnabled$)}));
	return nullptr;
}

$Void* WToolkit::lambda$new$0($ThreadGroup* rootTG) {
	$useLocalObjectStack();
	$var($String, name, "AWT-Windows"_s);
	$var($Thread, toolkitThread, $new($Thread, rootTG, this, name, 0, false));
	toolkitThread->setDaemon(true);
	toolkitThread->start();
	return nullptr;
}

void WToolkit::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(WToolkit::XPSTYLE_THEME_ACTIVE, "win.xpstyle.themeActive"_s);
	$assignStatic(WToolkit::prefix, "DnD.Cursor."_s);
	$assignStatic(WToolkit::postfix, ".32x32"_s);
	$assignStatic(WToolkit::awtPrefix, "awt."_s);
	$assignStatic(WToolkit::dndPrefix, "DnD."_s);
	$assignStatic(WToolkit::log, $PlatformLogger::getLogger("sun.awt.windows.WToolkit"_s));
	WToolkit::areExtraMouseButtonsEnabled$ = true;
	WToolkit::loaded = false;
	{
		WToolkit::loadLibraries();
		WToolkit::initIDs();
		$init($PlatformLogger$Level);
		if ($nc(WToolkit::log)->isLoggable($PlatformLogger$Level::FINE)) {
			WToolkit::log->fine($$str({"Win version: "_s, $(WToolkit::getWindowsVersion())}));
		}
	}
	$assignStatic(WToolkit::wPeer, nullptr);
	$assignStatic(WToolkit::NULL_COMPONENT_WR, $new($WeakReference, nullptr));
}

WToolkit::WToolkit() {
}

$Class* WToolkit::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.awt.windows.WToolkit$$Lambda$getRootThreadGroup")) {
			return WToolkit$$Lambda$getRootThreadGroup::load$(name, initialize);
		}
		if (name->equals("sun.awt.windows.WToolkit$$Lambda$lambda$new$0$1")) {
			return WToolkit$$Lambda$lambda$new$0$1::load$(name, initialize);
		}
		if (name->equals("sun.awt.windows.WToolkit$$Lambda$lambda$new$1$2")) {
			return WToolkit$$Lambda$lambda$new$1$2::load$(name, initialize);
		}
		if (name->equals("sun.awt.windows.WToolkit$$Lambda$lambda$registerShutdownHook$2$3")) {
			return WToolkit$$Lambda$lambda$registerShutdownHook$2$3::load$(name, initialize);
		}
		if (name->equals("sun.awt.windows.WToolkit$$Lambda$lambda$run$3$4")) {
			return WToolkit$$Lambda$lambda$run$3$4::load$(name, initialize);
		}
		if (name->equals("sun.awt.windows.WToolkit$$Lambda$lambda$displayChanged$4$5")) {
			return WToolkit$$Lambda$lambda$displayChanged$4$5::load$(name, initialize);
		}
		if (name->equals("sun.awt.windows.WToolkit$$Lambda$lambda$displayChanged$5$6")) {
			return WToolkit$$Lambda$lambda$displayChanged$5$6::load$(name, initialize);
		}
		if (name->equals("sun.awt.windows.WToolkit$$Lambda$lambda$windowsSettingChange$6$7")) {
			return WToolkit$$Lambda$lambda$windowsSettingChange$6$7::load$(name, initialize);
		}
		if (name->equals("sun.awt.windows.WToolkit$$Lambda$shutdown$8")) {
			return WToolkit$$Lambda$shutdown$8::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WToolkit, log)},
		{"XPSTYLE_THEME_ACTIVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(WToolkit, XPSTYLE_THEME_ACTIVE)},
		{"clipboard", "Lsun/awt/windows/WClipboard;", nullptr, 0, $field(WToolkit, clipboard)},
		{"cacheFontPeer", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljava/awt/peer/FontPeer;>;", $PRIVATE, $field(WToolkit, cacheFontPeer)},
		{"wprops", "Lsun/awt/windows/WDesktopProperties;", nullptr, $PRIVATE, $field(WToolkit, wprops)},
		{"dynamicLayoutSetting", "Z", nullptr, $PROTECTED, $field(WToolkit, dynamicLayoutSetting)},
		{"areExtraMouseButtonsEnabled", "Z", nullptr, $PRIVATE | $STATIC, $staticField(WToolkit, areExtraMouseButtonsEnabled$)},
		{"loaded", "Z", nullptr, $PRIVATE | $STATIC, $staticField(WToolkit, loaded)},
		{"anchor", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(WToolkit, anchor)},
		{"inited", "Z", nullptr, $PRIVATE, $field(WToolkit, inited)},
		{"wPeer", "Lsun/awt/windows/WMouseInfoPeer;", nullptr, $PRIVATE | $STATIC, $staticField(WToolkit, wPeer)},
		{"screenmodel", "Ljava/awt/image/ColorModel;", nullptr, $STATIC, $staticField(WToolkit, screenmodel)},
		{"displayChangeExecutor", "Ljava/util/concurrent/ExecutorService;", nullptr, $PRIVATE | $STATIC, $staticField(WToolkit, displayChangeExecutor)},
		{"prefix", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WToolkit, prefix)},
		{"postfix", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WToolkit, postfix)},
		{"awtPrefix", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WToolkit, awtPrefix)},
		{"dndPrefix", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WToolkit, dndPrefix)},
		{"NULL_COMPONENT_WR", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/awt/Component;>;", $PRIVATE | $STATIC | $FINAL, $staticField(WToolkit, NULL_COMPONENT_WR)},
		{"compOnTouchDownEvent", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/awt/Component;>;", $PRIVATE | $VOLATILE, $field(WToolkit, compOnTouchDownEvent)},
		{"compOnMousePressedEvent", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/awt/Component;>;", $PRIVATE | $VOLATILE, $field(WToolkit, compOnMousePressedEvent)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(WToolkit, init$, void)},
		{"addPropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(WToolkit, addPropertyChangeListener, void, $String*, $PropertyChangeListener*)},
		{"areExtraMouseButtonsEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(WToolkit, areExtraMouseButtonsEnabled, bool), "java.awt.HeadlessException"},
		{"beep", "()V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(WToolkit, beep, void)},
		{"createButton", "(Ljava/awt/Button;)Ljava/awt/peer/ButtonPeer;", nullptr, $PUBLIC, $virtualMethod(WToolkit, createButton, $ButtonPeer*, $Button*)},
		{"createCanvas", "(Ljava/awt/Canvas;)Ljava/awt/peer/CanvasPeer;", nullptr, $PUBLIC, $virtualMethod(WToolkit, createCanvas, $CanvasPeer*, $Canvas*)},
		{"createCheckbox", "(Ljava/awt/Checkbox;)Ljava/awt/peer/CheckboxPeer;", nullptr, $PUBLIC, $virtualMethod(WToolkit, createCheckbox, $CheckboxPeer*, $Checkbox*)},
		{"createCheckboxMenuItem", "(Ljava/awt/CheckboxMenuItem;)Ljava/awt/peer/CheckboxMenuItemPeer;", nullptr, $PUBLIC, $virtualMethod(WToolkit, createCheckboxMenuItem, $CheckboxMenuItemPeer*, $CheckboxMenuItem*)},
		{"createChoice", "(Ljava/awt/Choice;)Ljava/awt/peer/ChoicePeer;", nullptr, $PUBLIC, $virtualMethod(WToolkit, createChoice, $ChoicePeer*, $Choice*)},
		{"createCustomCursor", "(Ljava/awt/Image;Ljava/awt/Point;Ljava/lang/String;)Ljava/awt/Cursor;", nullptr, $PUBLIC, $virtualMethod(WToolkit, createCustomCursor, $Cursor*, $Image*, $Point*, $String*), "java.lang.IndexOutOfBoundsException"},
		{"createDesktopPeer", "(Ljava/awt/Desktop;)Ljava/awt/peer/DesktopPeer;", nullptr, $PUBLIC, $virtualMethod(WToolkit, createDesktopPeer, $DesktopPeer*, $Desktop*)},
		{"createDialog", "(Ljava/awt/Dialog;)Ljava/awt/peer/DialogPeer;", nullptr, $PUBLIC, $virtualMethod(WToolkit, createDialog, $DialogPeer*, $Dialog*)},
		{"createDragGestureRecognizer", "(Ljava/lang/Class;Ljava/awt/dnd/DragSource;Ljava/awt/Component;ILjava/awt/dnd/DragGestureListener;)Ljava/awt/dnd/DragGestureRecognizer;", "<T:Ljava/awt/dnd/DragGestureRecognizer;>(Ljava/lang/Class<TT;>;Ljava/awt/dnd/DragSource;Ljava/awt/Component;ILjava/awt/dnd/DragGestureListener;)TT;", $PUBLIC, $virtualMethod(WToolkit, createDragGestureRecognizer, $DragGestureRecognizer*, $Class*, $DragSource*, $Component*, int32_t, $DragGestureListener*)},
		{"createDragSourceContextPeer", "(Ljava/awt/dnd/DragGestureEvent;)Ljava/awt/dnd/peer/DragSourceContextPeer;", nullptr, $PUBLIC, $virtualMethod(WToolkit, createDragSourceContextPeer, $DragSourceContextPeer*, $DragGestureEvent*), "java.awt.dnd.InvalidDnDOperationException"},
		{"createEmbeddedFrame", "(Lsun/awt/windows/WEmbeddedFrame;)Lsun/awt/windows/WEmbeddedFramePeer;", nullptr, $PUBLIC, $method(WToolkit, createEmbeddedFrame, $WEmbeddedFramePeer*, $WEmbeddedFrame*)},
		{"createFileDialog", "(Ljava/awt/FileDialog;)Ljava/awt/peer/FileDialogPeer;", nullptr, $PUBLIC, $virtualMethod(WToolkit, createFileDialog, $FileDialogPeer*, $FileDialog*)},
		{"createFrame", "(Ljava/awt/Frame;)Ljava/awt/peer/FramePeer;", nullptr, $PUBLIC, $virtualMethod(WToolkit, createFrame, $FramePeer*, $Frame*)},
		{"createLabel", "(Ljava/awt/Label;)Ljava/awt/peer/LabelPeer;", nullptr, $PUBLIC, $virtualMethod(WToolkit, createLabel, $LabelPeer*, $Label*)},
		{"createLightweightFrame", "(Lsun/awt/LightweightFrame;)Ljava/awt/peer/FramePeer;", nullptr, $PUBLIC, $virtualMethod(WToolkit, createLightweightFrame, $FramePeer*, $LightweightFrame*)},
		{"createList", "(Ljava/awt/List;)Ljava/awt/peer/ListPeer;", nullptr, $PUBLIC, $virtualMethod(WToolkit, createList, $ListPeer*, $List*)},
		{"createMenu", "(Ljava/awt/Menu;)Ljava/awt/peer/MenuPeer;", nullptr, $PUBLIC, $virtualMethod(WToolkit, createMenu, $MenuPeer*, $Menu*)},
		{"createMenuBar", "(Ljava/awt/MenuBar;)Ljava/awt/peer/MenuBarPeer;", nullptr, $PUBLIC, $virtualMethod(WToolkit, createMenuBar, $MenuBarPeer*, $MenuBar*)},
		{"createMenuItem", "(Ljava/awt/MenuItem;)Ljava/awt/peer/MenuItemPeer;", nullptr, $PUBLIC, $virtualMethod(WToolkit, createMenuItem, $MenuItemPeer*, $MenuItem*)},
		{"createPanel", "(Ljava/awt/Panel;)Ljava/awt/peer/PanelPeer;", nullptr, $PUBLIC, $virtualMethod(WToolkit, createPanel, $PanelPeer*, $Panel*)},
		{"createPopupMenu", "(Ljava/awt/PopupMenu;)Ljava/awt/peer/PopupMenuPeer;", nullptr, $PUBLIC, $virtualMethod(WToolkit, createPopupMenu, $PopupMenuPeer*, $PopupMenu*)},
		{"createRobot", "(Ljava/awt/GraphicsDevice;)Ljava/awt/peer/RobotPeer;", nullptr, $PUBLIC, $virtualMethod(WToolkit, createRobot, $RobotPeer*, $GraphicsDevice*), "java.awt.AWTException"},
		{"createScrollPane", "(Ljava/awt/ScrollPane;)Ljava/awt/peer/ScrollPanePeer;", nullptr, $PUBLIC, $virtualMethod(WToolkit, createScrollPane, $ScrollPanePeer*, $ScrollPane*)},
		{"createScrollbar", "(Ljava/awt/Scrollbar;)Ljava/awt/peer/ScrollbarPeer;", nullptr, $PUBLIC, $virtualMethod(WToolkit, createScrollbar, $ScrollbarPeer*, $Scrollbar*)},
		{"createSystemTray", "(Ljava/awt/SystemTray;)Ljava/awt/peer/SystemTrayPeer;", nullptr, $PUBLIC, $virtualMethod(WToolkit, createSystemTray, $SystemTrayPeer*, $SystemTray*)},
		{"createTaskbarPeer", "(Ljava/awt/Taskbar;)Ljava/awt/peer/TaskbarPeer;", nullptr, $PUBLIC, $virtualMethod(WToolkit, createTaskbarPeer, $TaskbarPeer*, $Taskbar*)},
		{"createTextArea", "(Ljava/awt/TextArea;)Ljava/awt/peer/TextAreaPeer;", nullptr, $PUBLIC, $virtualMethod(WToolkit, createTextArea, $TextAreaPeer*, $TextArea*)},
		{"createTextField", "(Ljava/awt/TextField;)Ljava/awt/peer/TextFieldPeer;", nullptr, $PUBLIC, $virtualMethod(WToolkit, createTextField, $TextFieldPeer*, $TextField*)},
		{"createTrayIcon", "(Ljava/awt/TrayIcon;)Ljava/awt/peer/TrayIconPeer;", nullptr, $PUBLIC, $virtualMethod(WToolkit, createTrayIcon, $TrayIconPeer*, $TrayIcon*)},
		{"createWPageDialog", "(Lsun/awt/windows/WPageDialog;)Lsun/awt/windows/WPageDialogPeer;", nullptr, 0, $method(WToolkit, createWPageDialog, $WPageDialogPeer*, $WPageDialog*)},
		{"createWPrintDialog", "(Lsun/awt/windows/WPrintDialog;)Lsun/awt/windows/WPrintDialogPeer;", nullptr, 0, $method(WToolkit, createWPrintDialog, $WPrintDialogPeer*, $WPrintDialog*)},
		{"createWindow", "(Ljava/awt/Window;)Ljava/awt/peer/WindowPeer;", nullptr, $PUBLIC, $virtualMethod(WToolkit, createWindow, $WindowPeer*, $Window*)},
		{"disableBackgroundErase", "(Ljava/awt/Canvas;)V", nullptr, $PUBLIC, $virtualMethod(WToolkit, disableBackgroundErase, void, $Canvas*)},
		{"displayChanged", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(WToolkit, displayChanged, void)},
		{"embeddedDispose", "()Z", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(WToolkit, embeddedDispose, bool)},
		{"embeddedEventLoopIdleProcessing", "()V", nullptr, $PUBLIC | $NATIVE, $method(WToolkit, embeddedEventLoopIdleProcessing, void)},
		{"embeddedInit", "()Z", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(WToolkit, embeddedInit, bool)},
		{"enableInputMethodsForTextComponent", "()Z", nullptr, $PUBLIC, $virtualMethod(WToolkit, enableInputMethodsForTextComponent, bool)},
		{"eventLoop", "()V", nullptr, $PRIVATE | $NATIVE, $method(WToolkit, eventLoop, void)},
		{"getBestCursorSize", "(II)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(WToolkit, getBestCursorSize, $Dimension*, int32_t, int32_t)},
		{"getDataTransferer", "()Lsun/awt/datatransfer/DataTransferer;", nullptr, $PUBLIC, $virtualMethod(WToolkit, getDataTransferer, $DataTransferer*)},
		{"getDefaultKeyboardLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(WToolkit, getDefaultKeyboardLocale, $Locale*)},
		{"getDesktopAAHints", "()Ljava/awt/RenderingHints;", nullptr, $PROTECTED | $SYNCHRONIZED, $virtualMethod(WToolkit, getDesktopAAHints, $RenderingHints*)},
		{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC, $virtualMethod(WToolkit, getFontMetrics, $FontMetrics*, $Font*)},
		{"getFontPeer", "(Ljava/lang/String;I)Ljava/awt/peer/FontPeer;", nullptr, $PUBLIC, $virtualMethod(WToolkit, getFontPeer, $FontPeer*, $String*, int32_t)},
		{"getInputMethodAdapterDescriptor", "()Ljava/awt/im/spi/InputMethodDescriptor;", nullptr, $PUBLIC, $virtualMethod(WToolkit, getInputMethodAdapterDescriptor, $InputMethodDescriptor*)},
		{"getKeyboardFocusManagerPeer", "()Ljava/awt/peer/KeyboardFocusManagerPeer;", nullptr, $PUBLIC, $virtualMethod(WToolkit, getKeyboardFocusManagerPeer, $KeyboardFocusManagerPeer*), "java.awt.HeadlessException"},
		{"getLockingKeyState", "(I)Z", nullptr, $PUBLIC, $virtualMethod(WToolkit, getLockingKeyState, bool, int32_t)},
		{"getLockingKeyStateNative", "(I)Z", nullptr, $PRIVATE | $NATIVE, $method(WToolkit, getLockingKeyStateNative, bool, int32_t)},
		{"getMaximumCursorColors", "()I", nullptr, $PUBLIC | $NATIVE, $virtualMethod(WToolkit, getMaximumCursorColors, int32_t)},
		{"getMouseInfoPeer", "()Ljava/awt/peer/MouseInfoPeer;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(WToolkit, getMouseInfoPeer, $MouseInfoPeer*)},
		{"getNumberOfButtons", "()I", nullptr, $PUBLIC, $virtualMethod(WToolkit, getNumberOfButtons, int32_t)},
		{"getNumberOfButtonsImpl", "()I", nullptr, $PRIVATE | $SYNCHRONIZED | $NATIVE, $method(WToolkit, getNumberOfButtonsImpl, int32_t)},
		{"getPrintJob", "(Ljava/awt/Frame;Ljava/lang/String;Ljava/util/Properties;)Ljava/awt/PrintJob;", nullptr, $PUBLIC, $virtualMethod(WToolkit, getPrintJob, $PrintJob*, $Frame*, $String*, $Properties*)},
		{"getPrintJob", "(Ljava/awt/Frame;Ljava/lang/String;Ljava/awt/JobAttributes;Ljava/awt/PageAttributes;)Ljava/awt/PrintJob;", nullptr, $PUBLIC, $virtualMethod(WToolkit, getPrintJob, $PrintJob*, $Frame*, $String*, $JobAttributes*, $PageAttributes*)},
		{"getScreenInsets", "(Ljava/awt/GraphicsConfiguration;)Ljava/awt/Insets;", nullptr, $PUBLIC, $virtualMethod(WToolkit, getScreenInsets, $Insets*, $GraphicsConfiguration*)},
		{"getScreenInsets", "(I)Ljava/awt/Insets;", nullptr, $PRIVATE | $NATIVE, $method(WToolkit, getScreenInsets, $Insets*, int32_t)},
		{"getScreenResolution", "()I", nullptr, $PUBLIC, $virtualMethod(WToolkit, getScreenResolution, int32_t)},
		{"getSystemClipboard", "()Ljava/awt/datatransfer/Clipboard;", nullptr, $PUBLIC, $virtualMethod(WToolkit, getSystemClipboard, $Clipboard*)},
		{"getWProps", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE | $SYNCHRONIZED, $method(WToolkit, getWProps, $Map*)},
		{"getWToolkit", "()Lsun/awt/windows/WToolkit;", nullptr, $PUBLIC | $STATIC, $staticMethod(WToolkit, getWToolkit, WToolkit*)},
		{"getWindowsVersion", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(WToolkit, getWindowsVersion, $String*)},
		{"grab", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $virtualMethod(WToolkit, grab, void, $Window*)},
		{"hideTouchKeyboard", "()V", nullptr, $PRIVATE | $NATIVE, $method(WToolkit, hideTouchKeyboard, void)},
		{"init", "()Z", nullptr, $PRIVATE | $NATIVE, $method(WToolkit, init, bool)},
		{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(WToolkit, initIDs, void)},
		{"initializeDesktopProperties", "()V", nullptr, $PROTECTED | $SYNCHRONIZED, $virtualMethod(WToolkit, initializeDesktopProperties, void)},
		{"isComponentValidForTouchKeyboard", "(Ljava/awt/Component;)Z", nullptr, $PRIVATE, $method(WToolkit, isComponentValidForTouchKeyboard, bool, $Component*)},
		{"isDesktopSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(WToolkit, isDesktopSupported, bool)},
		{"isDynamicLayoutActive", "()Z", nullptr, $PUBLIC, $virtualMethod(WToolkit, isDynamicLayoutActive, bool)},
		{"isDynamicLayoutSet", "()Z", nullptr, $PROTECTED, $virtualMethod(WToolkit, isDynamicLayoutSet, bool)},
		{"isDynamicLayoutSupported", "()Z", nullptr, $PRIVATE | $SYNCHRONIZED, $method(WToolkit, isDynamicLayoutSupported, bool)},
		{"isDynamicLayoutSupportedNative", "()Z", nullptr, $PRIVATE | $NATIVE, $method(WToolkit, isDynamicLayoutSupportedNative, bool)},
		{"isFrameStateSupported", "(I)Z", nullptr, $PUBLIC, $virtualMethod(WToolkit, isFrameStateSupported, bool, int32_t)},
		{"isModalExclusionTypeSupported", "(Ljava/awt/Dialog$ModalExclusionType;)Z", nullptr, $PUBLIC, $virtualMethod(WToolkit, isModalExclusionTypeSupported, bool, $Dialog$ModalExclusionType*)},
		{"isModalityTypeSupported", "(Ljava/awt/Dialog$ModalityType;)Z", nullptr, $PUBLIC, $virtualMethod(WToolkit, isModalityTypeSupported, bool, $Dialog$ModalityType*)},
		{"isTaskbarSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(WToolkit, isTaskbarSupported, bool)},
		{"isTranslucencyCapable", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC, $virtualMethod(WToolkit, isTranslucencyCapable, bool, $GraphicsConfiguration*)},
		{"isTraySupported", "()Z", nullptr, $PUBLIC, $virtualMethod(WToolkit, isTraySupported, bool)},
		{"isWindowOpacitySupported", "()Z", nullptr, $PUBLIC, $virtualMethod(WToolkit, isWindowOpacitySupported, bool)},
		{"isWindowShapingSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(WToolkit, isWindowShapingSupported, bool)},
		{"isWindowTranslucencySupported", "()Z", nullptr, $PUBLIC, $virtualMethod(WToolkit, isWindowTranslucencySupported, bool)},
		{"lambda$displayChanged$4", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WToolkit, lambda$displayChanged$4, void)},
		{"lambda$displayChanged$5", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WToolkit, lambda$displayChanged$5, $Thread*, $Runnable*)},
		{"lambda$new$0", "(Ljava/lang/ThreadGroup;)Ljava/lang/Void;", nullptr, $PRIVATE | $SYNTHETIC, $method(WToolkit, lambda$new$0, $Void*, $ThreadGroup*)},
		{"lambda$new$1", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WToolkit, lambda$new$1, $Void*)},
		{"lambda$registerShutdownHook$2", "()Ljava/lang/Void;", nullptr, $PRIVATE | $SYNTHETIC, $method(WToolkit, lambda$registerShutdownHook$2, $Void*)},
		{"lambda$run$3", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WToolkit, lambda$run$3, $Void*)},
		{"lambda$windowsSettingChange$6", "(Ljava/util/Map;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(WToolkit, lambda$windowsSettingChange$6, void, $Map*)},
		{"lazilyInitWProps", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(WToolkit, lazilyInitWProps, void)},
		{"lazilyLoadDesktopProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(WToolkit, lazilyLoadDesktopProperty, $Object*, $String*)},
		{"loadLibraries", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(WToolkit, loadLibraries, void)},
		{"loadSystemColors", "([I)V", nullptr, $PROTECTED | $NATIVE, $virtualMethod(WToolkit, loadSystemColors, void, $ints*)},
		{"makeColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $STATIC | $NATIVE, $staticMethod(WToolkit, makeColorModel, $ColorModel*)},
		{"mapInputMethodHighlight", "(Ljava/awt/im/InputMethodHighlight;)Ljava/util/Map;", "(Ljava/awt/im/InputMethodHighlight;)Ljava/util/Map<Ljava/awt/font/TextAttribute;*>;", $PUBLIC, $virtualMethod(WToolkit, mapInputMethodHighlight, $Map*, $InputMethodHighlight*)},
		{"nativeSync", "()V", nullptr, $PRIVATE | $NATIVE, $method(WToolkit, nativeSync, void)},
		{"needUpdateWindow", "()Z", nullptr, $PUBLIC, $virtualMethod(WToolkit, needUpdateWindow, bool)},
		{"paletteChanged", "()V", nullptr, $STATIC, $staticMethod(WToolkit, paletteChanged, void)},
		{"postDispose", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(WToolkit, postDispose, void)},
		{"quitSecondaryEventLoop", "()V", nullptr, $STATIC | $NATIVE, $staticMethod(WToolkit, quitSecondaryEventLoop, void)},
		{"registerShutdownHook", "()V", nullptr, $PRIVATE, $method(WToolkit, registerShutdownHook, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WToolkit, run, void)},
		{"setDynamicLayout", "(Z)V", nullptr, $PUBLIC, $virtualMethod(WToolkit, setDynamicLayout, void, bool)},
		{"setDynamicLayoutNative", "(Z)V", nullptr, $PRIVATE | $NATIVE, $method(WToolkit, setDynamicLayoutNative, void, bool)},
		{"setExtraMouseButtonsEnabledNative", "(Z)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(WToolkit, setExtraMouseButtonsEnabledNative, void, bool)},
		{"setLockingKeyState", "(IZ)V", nullptr, $PUBLIC, $virtualMethod(WToolkit, setLockingKeyState, void, int32_t, bool)},
		{"setLockingKeyStateNative", "(IZ)V", nullptr, $PRIVATE | $NATIVE, $method(WToolkit, setLockingKeyStateNative, void, int32_t, bool)},
		{"showOrHideTouchKeyboard", "(Ljava/awt/Component;Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC, $virtualMethod(WToolkit, showOrHideTouchKeyboard, void, $Component*, $AWTEvent*)},
		{"showTouchKeyboard", "(Z)V", nullptr, $PRIVATE | $NATIVE, $method(WToolkit, showTouchKeyboard, void, bool)},
		{"shutdown", "()V", nullptr, $PRIVATE | $NATIVE, $method(WToolkit, shutdown, void)},
		{"startSecondaryEventLoop", "()V", nullptr, $STATIC | $NATIVE, $staticMethod(WToolkit, startSecondaryEventLoop, void)},
		{"startToolkitThread", "(Ljava/lang/Runnable;Ljava/lang/ThreadGroup;)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(WToolkit, startToolkitThread, bool, $Runnable*, $ThreadGroup*)},
		{"sync", "()V", nullptr, $PUBLIC, $virtualMethod(WToolkit, sync, void)},
		{"syncNativeQueue", "(J)Z", nullptr, $PUBLIC | $NATIVE, $virtualMethod(WToolkit, syncNativeQueue, bool, int64_t)},
		{"targetDisposedPeer", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(WToolkit, targetDisposedPeer, void, Object$*, Object$*)},
		{"targetToPeer", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $staticMethod(WToolkit, targetToPeer, $Object*, Object$*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"ungrab", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $virtualMethod(WToolkit, ungrab, void, $Window*)},
		{"updateProperties", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;)V", $PRIVATE | $SYNCHRONIZED, $method(WToolkit, updateProperties, void, $Map*)},
		{"updateXPStyleEnabled", "(Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(WToolkit, updateXPStyleEnabled, void, Object$*)},
		{"useBufferPerWindow", "()Z", nullptr, $PUBLIC, $virtualMethod(WToolkit, useBufferPerWindow, bool)},
		{"windowsSettingChange", "()V", nullptr, $PRIVATE, $method(WToolkit, windowsSettingChange, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WToolkit$ToolkitDisposer", "sun.awt.windows.WToolkit", "ToolkitDisposer", $STATIC},
		{"sun.awt.windows.WToolkit$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.awt.windows.WToolkit",
		"sun.awt.SunToolkit",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.awt.windows.WToolkit$ToolkitDisposer,sun.awt.windows.WToolkit$1"
	};
	$loadClass(WToolkit, name, initialize, &classInfo$$, WToolkit::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(WToolkit));
	});
	return class$;
}

$Class* WToolkit::class$ = nullptr;

		} // windows
	} // awt
} // sun