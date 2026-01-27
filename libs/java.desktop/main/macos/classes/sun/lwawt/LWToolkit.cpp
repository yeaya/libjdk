#include <sun/lwawt/LWToolkit.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/AWTPermission.h>
#include <java/awt/Button.h>
#include <java/awt/Canvas.h>
#include <java/awt/Checkbox.h>
#include <java/awt/Choice.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/FileDialog.h>
#include <java/awt/Frame.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/JobAttributes.h>
#include <java/awt/Label.h>
#include <java/awt/List.h>
#include <java/awt/PageAttributes.h>
#include <java/awt/Panel.h>
#include <java/awt/PrintJob.h>
#include <java/awt/ScrollPane.h>
#include <java/awt/Scrollbar.h>
#include <java/awt/TextArea.h>
#include <java/awt/TextField.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/datatransfer/Clipboard.h>
#include <java/awt/dnd/DropTarget.h>
#include <java/awt/peer/ButtonPeer.h>
#include <java/awt/peer/CanvasPeer.h>
#include <java/awt/peer/CheckboxPeer.h>
#include <java/awt/peer/ChoicePeer.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/DialogPeer.h>
#include <java/awt/peer/FileDialogPeer.h>
#include <java/awt/peer/FramePeer.h>
#include <java/awt/peer/KeyboardFocusManagerPeer.h>
#include <java/awt/peer/LabelPeer.h>
#include <java/awt/peer/ListPeer.h>
#include <java/awt/peer/MouseInfoPeer.h>
#include <java/awt/peer/PanelPeer.h>
#include <java/awt/peer/ScrollPanePeer.h>
#include <java/awt/peer/ScrollbarPeer.h>
#include <java/awt/peer/TextAreaPeer.h>
#include <java/awt/peer/TextFieldPeer.h>
#include <java/awt/peer/WindowPeer.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/Runtime.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/ThreadDeath.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Properties.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AWTAutoShutdown.h>
#include <sun/awt/AWTPermissions.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/KeyboardFocusManagerPeerImpl.h>
#include <sun/awt/LightweightFrame.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/util/ThreadGroupUtils.h>
#include <sun/lwawt/LWButtonPeer.h>
#include <sun/lwawt/LWCanvasPeer.h>
#include <sun/lwawt/LWCheckboxPeer.h>
#include <sun/lwawt/LWChoicePeer.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/LWCursorManager.h>
#include <sun/lwawt/LWKeyboardFocusManagerPeer.h>
#include <sun/lwawt/LWLabelPeer.h>
#include <sun/lwawt/LWLightweightFramePeer.h>
#include <sun/lwawt/LWListPeer.h>
#include <sun/lwawt/LWMouseInfoPeer.h>
#include <sun/lwawt/LWPanelPeer.h>
#include <sun/lwawt/LWScrollBarPeer.h>
#include <sun/lwawt/LWScrollPanePeer.h>
#include <sun/lwawt/LWTextAreaPeer.h>
#include <sun/lwawt/LWTextFieldPeer.h>
#include <sun/lwawt/LWWindowPeer$PeerType.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <sun/lwawt/PlatformComponent.h>
#include <sun/lwawt/PlatformDropTarget.h>
#include <sun/lwawt/PlatformWindow.h>
#include <sun/lwawt/SecurityWarningWindow.h>
#include <sun/print/PrintJob2D.h>
#include <jcpp.h>

#undef ACCESS_CLIPBOARD_PERMISSION
#undef DIALOG
#undef FRAME
#undef LW_FRAME
#undef NORM_PRIORITY
#undef SIMPLEWINDOW
#undef STATE_CLEANUP
#undef STATE_DONE
#undef STATE_INIT
#undef STATE_MESSAGELOOP
#undef STATE_NONE
#undef STATE_SHUTDOWN

using $AWTEvent = ::java::awt::AWTEvent;
using $Button = ::java::awt::Button;
using $Canvas = ::java::awt::Canvas;
using $Checkbox = ::java::awt::Checkbox;
using $Choice = ::java::awt::Choice;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $FileDialog = ::java::awt::FileDialog;
using $Frame = ::java::awt::Frame;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $JobAttributes = ::java::awt::JobAttributes;
using $Label = ::java::awt::Label;
using $List = ::java::awt::List;
using $PageAttributes = ::java::awt::PageAttributes;
using $Panel = ::java::awt::Panel;
using $PrintJob = ::java::awt::PrintJob;
using $ScrollPane = ::java::awt::ScrollPane;
using $Scrollbar = ::java::awt::Scrollbar;
using $TextArea = ::java::awt::TextArea;
using $TextField = ::java::awt::TextField;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $Clipboard = ::java::awt::datatransfer::Clipboard;
using $DropTarget = ::java::awt::dnd::DropTarget;
using $ButtonPeer = ::java::awt::peer::ButtonPeer;
using $CanvasPeer = ::java::awt::peer::CanvasPeer;
using $CheckboxPeer = ::java::awt::peer::CheckboxPeer;
using $ChoicePeer = ::java::awt::peer::ChoicePeer;
using $DialogPeer = ::java::awt::peer::DialogPeer;
using $FileDialogPeer = ::java::awt::peer::FileDialogPeer;
using $FramePeer = ::java::awt::peer::FramePeer;
using $KeyboardFocusManagerPeer = ::java::awt::peer::KeyboardFocusManagerPeer;
using $LabelPeer = ::java::awt::peer::LabelPeer;
using $ListPeer = ::java::awt::peer::ListPeer;
using $MouseInfoPeer = ::java::awt::peer::MouseInfoPeer;
using $PanelPeer = ::java::awt::peer::PanelPeer;
using $ScrollPanePeer = ::java::awt::peer::ScrollPanePeer;
using $ScrollbarPeer = ::java::awt::peer::ScrollbarPeer;
using $TextAreaPeer = ::java::awt::peer::TextAreaPeer;
using $TextFieldPeer = ::java::awt::peer::TextFieldPeer;
using $WindowPeer = ::java::awt::peer::WindowPeer;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $Runtime = ::java::lang::Runtime;
using $SecurityManager = ::java::lang::SecurityManager;
using $ThreadDeath = ::java::lang::ThreadDeath;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Properties = ::java::util::Properties;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $AWTAutoShutdown = ::sun::awt::AWTAutoShutdown;
using $AWTPermissions = ::sun::awt::AWTPermissions;
using $AppContext = ::sun::awt::AppContext;
using $KeyboardFocusManagerPeerImpl = ::sun::awt::KeyboardFocusManagerPeerImpl;
using $LightweightFrame = ::sun::awt::LightweightFrame;
using $SunToolkit = ::sun::awt::SunToolkit;
using $ThreadGroupUtils = ::sun::awt::util::ThreadGroupUtils;
using $LWButtonPeer = ::sun::lwawt::LWButtonPeer;
using $LWCanvasPeer = ::sun::lwawt::LWCanvasPeer;
using $LWCheckboxPeer = ::sun::lwawt::LWCheckboxPeer;
using $LWChoicePeer = ::sun::lwawt::LWChoicePeer;
using $LWComponentPeer = ::sun::lwawt::LWComponentPeer;
using $LWCursorManager = ::sun::lwawt::LWCursorManager;
using $LWKeyboardFocusManagerPeer = ::sun::lwawt::LWKeyboardFocusManagerPeer;
using $LWLabelPeer = ::sun::lwawt::LWLabelPeer;
using $LWLightweightFramePeer = ::sun::lwawt::LWLightweightFramePeer;
using $LWListPeer = ::sun::lwawt::LWListPeer;
using $LWMouseInfoPeer = ::sun::lwawt::LWMouseInfoPeer;
using $LWPanelPeer = ::sun::lwawt::LWPanelPeer;
using $LWScrollBarPeer = ::sun::lwawt::LWScrollBarPeer;
using $LWScrollPanePeer = ::sun::lwawt::LWScrollPanePeer;
using $LWTextAreaPeer = ::sun::lwawt::LWTextAreaPeer;
using $LWTextFieldPeer = ::sun::lwawt::LWTextFieldPeer;
using $LWWindowPeer = ::sun::lwawt::LWWindowPeer;
using $LWWindowPeer$PeerType = ::sun::lwawt::LWWindowPeer$PeerType;
using $PlatformComponent = ::sun::lwawt::PlatformComponent;
using $PlatformDropTarget = ::sun::lwawt::PlatformDropTarget;
using $PlatformWindow = ::sun::lwawt::PlatformWindow;
using $SecurityWarningWindow = ::sun::lwawt::SecurityWarningWindow;
using $PrintJob2D = ::sun::print::PrintJob2D;

namespace sun {
	namespace lwawt {

class LWToolkit$$Lambda$lambda$init$1 : public $PrivilegedAction {
	$class(LWToolkit$$Lambda$lambda$init$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(LWToolkit* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $of($nc(inst$)->lambda$init$1());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LWToolkit$$Lambda$lambda$init$1>());
	}
	LWToolkit* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LWToolkit$$Lambda$lambda$init$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(LWToolkit$$Lambda$lambda$init$1, inst$)},
	{}
};
$MethodInfo LWToolkit$$Lambda$lambda$init$1::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/LWToolkit;)V", nullptr, $PUBLIC, $method(LWToolkit$$Lambda$lambda$init$1, init$, void, LWToolkit*)},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(LWToolkit$$Lambda$lambda$init$1, run, $Object*)},
	{}
};
$ClassInfo LWToolkit$$Lambda$lambda$init$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.LWToolkit$$Lambda$lambda$init$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* LWToolkit$$Lambda$lambda$init$1::load$($String* name, bool initialize) {
	$loadClass(LWToolkit$$Lambda$lambda$init$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LWToolkit$$Lambda$lambda$init$1::class$ = nullptr;

class LWToolkit$$Lambda$lambda$init$0$1 : public $Runnable {
	$class(LWToolkit$$Lambda$lambda$init$0$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(LWToolkit* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$init$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LWToolkit$$Lambda$lambda$init$0$1>());
	}
	LWToolkit* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LWToolkit$$Lambda$lambda$init$0$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(LWToolkit$$Lambda$lambda$init$0$1, inst$)},
	{}
};
$MethodInfo LWToolkit$$Lambda$lambda$init$0$1::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/LWToolkit;)V", nullptr, $PUBLIC, $method(LWToolkit$$Lambda$lambda$init$0$1, init$, void, LWToolkit*)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LWToolkit$$Lambda$lambda$init$0$1, run, void)},
	{}
};
$ClassInfo LWToolkit$$Lambda$lambda$init$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.LWToolkit$$Lambda$lambda$init$0$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* LWToolkit$$Lambda$lambda$init$0$1::load$($String* name, bool initialize) {
	$loadClass(LWToolkit$$Lambda$lambda$init$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LWToolkit$$Lambda$lambda$init$0$1::class$ = nullptr;

$FieldInfo _LWToolkit_FieldInfo_[] = {
	{"STATE_NONE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LWToolkit, STATE_NONE)},
	{"STATE_INIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LWToolkit, STATE_INIT)},
	{"STATE_MESSAGELOOP", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LWToolkit, STATE_MESSAGELOOP)},
	{"STATE_SHUTDOWN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LWToolkit, STATE_SHUTDOWN)},
	{"STATE_CLEANUP", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LWToolkit, STATE_CLEANUP)},
	{"STATE_DONE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LWToolkit, STATE_DONE)},
	{"runState", "I", nullptr, $PRIVATE, $field(LWToolkit, runState)},
	{"clipboard", "Ljava/awt/datatransfer/Clipboard;", nullptr, $PRIVATE, $field(LWToolkit, clipboard)},
	{"mouseInfoPeer", "Ljava/awt/peer/MouseInfoPeer;", nullptr, $PRIVATE, $field(LWToolkit, mouseInfoPeer)},
	{"dynamicLayoutSetting", "Z", nullptr, $PRIVATE | $VOLATILE, $field(LWToolkit, dynamicLayoutSetting)},
	{}
};

$MethodInfo _LWToolkit_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(LWToolkit, init$, void)},
	{"createButton", "(Ljava/awt/Button;)Ljava/awt/peer/ButtonPeer;", nullptr, $PUBLIC | $FINAL, $virtualMethod(LWToolkit, createButton, $ButtonPeer*, $Button*)},
	{"createCanvas", "(Ljava/awt/Canvas;)Ljava/awt/peer/CanvasPeer;", nullptr, $PUBLIC | $FINAL, $virtualMethod(LWToolkit, createCanvas, $CanvasPeer*, $Canvas*)},
	{"createCheckbox", "(Ljava/awt/Checkbox;)Ljava/awt/peer/CheckboxPeer;", nullptr, $PUBLIC | $FINAL, $virtualMethod(LWToolkit, createCheckbox, $CheckboxPeer*, $Checkbox*)},
	{"createChoice", "(Ljava/awt/Choice;)Ljava/awt/peer/ChoicePeer;", nullptr, $PUBLIC | $FINAL, $virtualMethod(LWToolkit, createChoice, $ChoicePeer*, $Choice*)},
	{"createDelegatedPeer", "(Ljava/awt/Window;Lsun/lwawt/PlatformComponent;Lsun/lwawt/PlatformWindow;Lsun/lwawt/LWWindowPeer$PeerType;)Lsun/lwawt/LWWindowPeer;", nullptr, $PROTECTED, $virtualMethod(LWToolkit, createDelegatedPeer, $LWWindowPeer*, $Window*, $PlatformComponent*, $PlatformWindow*, $LWWindowPeer$PeerType*)},
	{"createDialog", "(Ljava/awt/Dialog;)Ljava/awt/peer/DialogPeer;", nullptr, $PUBLIC, $virtualMethod(LWToolkit, createDialog, $DialogPeer*, $Dialog*)},
	{"createDropTarget", "(Ljava/awt/dnd/DropTarget;Ljava/awt/Component;Lsun/lwawt/LWComponentPeer;)Lsun/lwawt/PlatformDropTarget;", "(Ljava/awt/dnd/DropTarget;Ljava/awt/Component;Lsun/lwawt/LWComponentPeer<**>;)Lsun/lwawt/PlatformDropTarget;", $PROTECTED | $ABSTRACT, $virtualMethod(LWToolkit, createDropTarget, $PlatformDropTarget*, $DropTarget*, $Component*, $LWComponentPeer*)},
	{"createFileDialog", "(Ljava/awt/FileDialog;)Ljava/awt/peer/FileDialogPeer;", nullptr, $PUBLIC | $FINAL, $virtualMethod(LWToolkit, createFileDialog, $FileDialogPeer*, $FileDialog*)},
	{"createFileDialogPeer", "(Ljava/awt/FileDialog;)Ljava/awt/peer/FileDialogPeer;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(LWToolkit, createFileDialogPeer, $FileDialogPeer*, $FileDialog*)},
	{"createFrame", "(Ljava/awt/Frame;)Ljava/awt/peer/FramePeer;", nullptr, $PUBLIC | $FINAL, $virtualMethod(LWToolkit, createFrame, $FramePeer*, $Frame*)},
	{"createLabel", "(Ljava/awt/Label;)Ljava/awt/peer/LabelPeer;", nullptr, $PUBLIC | $FINAL, $virtualMethod(LWToolkit, createLabel, $LabelPeer*, $Label*)},
	{"createLightweightFrame", "(Lsun/awt/LightweightFrame;)Ljava/awt/peer/FramePeer;", nullptr, $PUBLIC | $FINAL, $virtualMethod(LWToolkit, createLightweightFrame, $FramePeer*, $LightweightFrame*)},
	{"createList", "(Ljava/awt/List;)Ljava/awt/peer/ListPeer;", nullptr, $PUBLIC | $FINAL, $virtualMethod(LWToolkit, createList, $ListPeer*, $List*)},
	{"createLwPlatformComponent", "()Lsun/lwawt/PlatformComponent;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(LWToolkit, createLwPlatformComponent, $PlatformComponent*)},
	{"createMouseInfoPeerImpl", "()Ljava/awt/peer/MouseInfoPeer;", nullptr, $PROTECTED | $FINAL, $method(LWToolkit, createMouseInfoPeerImpl, $MouseInfoPeer*)},
	{"createPanel", "(Ljava/awt/Panel;)Ljava/awt/peer/PanelPeer;", nullptr, $PUBLIC | $FINAL, $virtualMethod(LWToolkit, createPanel, $PanelPeer*, $Panel*)},
	{"createPlatformClipboard", "()Ljava/awt/datatransfer/Clipboard;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LWToolkit, createPlatformClipboard, $Clipboard*)},
	{"createPlatformComponent", "()Lsun/lwawt/PlatformComponent;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(LWToolkit, createPlatformComponent, $PlatformComponent*)},
	{"createPlatformWindow", "(Lsun/lwawt/LWWindowPeer$PeerType;)Lsun/lwawt/PlatformWindow;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(LWToolkit, createPlatformWindow, $PlatformWindow*, $LWWindowPeer$PeerType*)},
	{"createScrollPane", "(Ljava/awt/ScrollPane;)Ljava/awt/peer/ScrollPanePeer;", nullptr, $PUBLIC | $FINAL, $virtualMethod(LWToolkit, createScrollPane, $ScrollPanePeer*, $ScrollPane*)},
	{"createScrollbar", "(Ljava/awt/Scrollbar;)Ljava/awt/peer/ScrollbarPeer;", nullptr, $PUBLIC | $FINAL, $virtualMethod(LWToolkit, createScrollbar, $ScrollbarPeer*, $Scrollbar*)},
	{"createSecurityWarning", "(Ljava/awt/Window;Lsun/lwawt/LWWindowPeer;)Lsun/lwawt/SecurityWarningWindow;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(LWToolkit, createSecurityWarning, $SecurityWarningWindow*, $Window*, $LWWindowPeer*)},
	{"createTextArea", "(Ljava/awt/TextArea;)Ljava/awt/peer/TextAreaPeer;", nullptr, $PUBLIC | $FINAL, $virtualMethod(LWToolkit, createTextArea, $TextAreaPeer*, $TextArea*)},
	{"createTextField", "(Ljava/awt/TextField;)Ljava/awt/peer/TextFieldPeer;", nullptr, $PUBLIC | $FINAL, $virtualMethod(LWToolkit, createTextField, $TextFieldPeer*, $TextField*)},
	{"createWindow", "(Ljava/awt/Window;)Ljava/awt/peer/WindowPeer;", nullptr, $PUBLIC | $FINAL, $virtualMethod(LWToolkit, createWindow, $WindowPeer*, $Window*)},
	{"getCursorManager", "()Lsun/lwawt/LWCursorManager;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LWToolkit, getCursorManager, $LWCursorManager*)},
	{"getKeyboardFocusManagerPeer", "()Ljava/awt/peer/KeyboardFocusManagerPeer;", nullptr, $PUBLIC | $FINAL, $virtualMethod(LWToolkit, getKeyboardFocusManagerPeer, $KeyboardFocusManagerPeer*)},
	{"getLWToolkit", "()Lsun/lwawt/LWToolkit;", nullptr, $PUBLIC | $STATIC, $staticMethod(LWToolkit, getLWToolkit, LWToolkit*)},
	{"getMouseInfoPeer", "()Ljava/awt/peer/MouseInfoPeer;", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $virtualMethod(LWToolkit, getMouseInfoPeer, $MouseInfoPeer*)},
	{"getPlatformWindowUnderMouse", "()Lsun/lwawt/PlatformWindow;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(LWToolkit, getPlatformWindowUnderMouse, $PlatformWindow*)},
	{"getPrintJob", "(Ljava/awt/Frame;Ljava/lang/String;Ljava/util/Properties;)Ljava/awt/PrintJob;", nullptr, $PUBLIC | $FINAL, $virtualMethod(LWToolkit, getPrintJob, $PrintJob*, $Frame*, $String*, $Properties*)},
	{"getPrintJob", "(Ljava/awt/Frame;Ljava/lang/String;Ljava/awt/JobAttributes;Ljava/awt/PageAttributes;)Ljava/awt/PrintJob;", nullptr, $PUBLIC | $FINAL, $virtualMethod(LWToolkit, getPrintJob, $PrintJob*, $Frame*, $String*, $JobAttributes*, $PageAttributes*)},
	{"getRunState", "()I", nullptr, $PRIVATE | $SYNCHRONIZED, $method(LWToolkit, getRunState, int32_t)},
	{"getSystemClipboard", "()Ljava/awt/datatransfer/Clipboard;", nullptr, $PUBLIC | $FINAL, $virtualMethod(LWToolkit, getSystemClipboard, $Clipboard*)},
	{"grab", "(Ljava/awt/Window;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(LWToolkit, grab, void, $Window*)},
	{"init", "()V", nullptr, $PROTECTED | $FINAL, $method(LWToolkit, init, void)},
	{"isDesktopSupported", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(LWToolkit, isDesktopSupported, bool)},
	{"isDynamicLayoutActive", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(LWToolkit, isDynamicLayoutActive, bool)},
	{"isDynamicLayoutSet", "()Z", nullptr, $PROTECTED | $FINAL, $virtualMethod(LWToolkit, isDynamicLayoutSet, bool)},
	{"isDynamicLayoutSupported", "()Z", nullptr, $PROTECTED | $FINAL, $method(LWToolkit, isDynamicLayoutSupported, bool)},
	{"isTaskbarSupported", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(LWToolkit, isTaskbarSupported, bool)},
	{"isTerminating", "()Z", nullptr, $PUBLIC | $FINAL, $method(LWToolkit, isTerminating, bool)},
	{"lambda$init$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(LWToolkit, lambda$init$0, void)},
	{"lambda$init$1", "()Ljava/lang/Void;", nullptr, $PRIVATE | $SYNTHETIC, $method(LWToolkit, lambda$init$1, $Void*)},
	{"lazilyLoadDesktopProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LWToolkit, lazilyLoadDesktopProperty, $Object*, $String*)},
	{"platformCleanup", "()V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(LWToolkit, platformCleanup, void)},
	{"platformInit", "()V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(LWToolkit, platformInit, void)},
	{"platformRunMessage", "()V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(LWToolkit, platformRunMessage, void)},
	{"platformShutdown", "()V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(LWToolkit, platformShutdown, void)},
	{"postEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(LWToolkit, postEvent, void, $AWTEvent*)},
	{"run", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(LWToolkit, run, void)},
	{"setDynamicLayout", "(Z)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(LWToolkit, setDynamicLayout, void, bool)},
	{"setRunState", "(I)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(LWToolkit, setRunState, void, int32_t)},
	{"shutdown", "()V", nullptr, $PUBLIC | $FINAL, $method(LWToolkit, shutdown, void)},
	{"targetDisposedPeer", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(LWToolkit, targetDisposedPeer, void, Object$*, Object$*)},
	{"targetToPeer", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(LWToolkit, targetToPeer, $Object*, Object$*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"ungrab", "(Ljava/awt/Window;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(LWToolkit, ungrab, void, $Window*)},
	{"waitForRunState", "(I)V", nullptr, $PRIVATE, $method(LWToolkit, waitForRunState, void, int32_t)},
	{}
};

$ClassInfo _LWToolkit_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.lwawt.LWToolkit",
	"sun.awt.SunToolkit",
	"java.lang.Runnable",
	_LWToolkit_FieldInfo_,
	_LWToolkit_MethodInfo_
};

$Object* allocate$LWToolkit($Class* clazz) {
	return $of($alloc(LWToolkit));
}

int32_t LWToolkit::hashCode() {
	 return this->$SunToolkit::hashCode();
}

bool LWToolkit::equals(Object$* arg0) {
	 return this->$SunToolkit::equals(arg0);
}

$Object* LWToolkit::clone() {
	 return this->$SunToolkit::clone();
}

$String* LWToolkit::toString() {
	 return this->$SunToolkit::toString();
}

void LWToolkit::finalize() {
	this->$SunToolkit::finalize();
}

void LWToolkit::init$() {
	$SunToolkit::init$();
	this->runState = LWToolkit::STATE_NONE;
	this->dynamicLayoutSetting = true;
}

void LWToolkit::init() {
	$beforeCallerSensitive();
	$AWTAutoShutdown::notifyToolkitThreadBusy();
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(LWToolkit$$Lambda$lambda$init$1, this)));
	waitForRunState(LWToolkit::STATE_MESSAGELOOP);
}

void LWToolkit::shutdown() {
	setRunState(LWToolkit::STATE_SHUTDOWN);
	platformShutdown();
}

int32_t LWToolkit::getRunState() {
	$synchronized(this) {
		return this->runState;
	}
}

void LWToolkit::setRunState(int32_t state) {
	$synchronized(this) {
		this->runState = state;
		$of(this)->notifyAll();
	}
}

bool LWToolkit::isTerminating() {
	return getRunState() >= LWToolkit::STATE_SHUTDOWN;
}

void LWToolkit::waitForRunState(int32_t state) {
	while (getRunState() < state) {
		try {
			$synchronized(this) {
				$of(this)->wait();
			}
		} catch ($InterruptedException& z) {
			break;
		}
	}
}

void LWToolkit::run() {
	$useLocalCurrentObjectStackCache();
	setRunState(LWToolkit::STATE_INIT);
	platformInit();
	$AWTAutoShutdown::notifyToolkitThreadFree();
	setRunState(LWToolkit::STATE_MESSAGELOOP);
	while (getRunState() < LWToolkit::STATE_SHUTDOWN) {
		try {
			platformRunMessage();
			if ($($Thread::currentThread())->isInterrupted()) {
				if ($nc($($AppContext::getAppContext()))->isDisposed()) {
					break;
				}
			}
		} catch ($ThreadDeath& td) {
			break;
		} catch ($Throwable& t) {
			$nc($System::err)->println("Exception on the toolkit thread"_s);
			t->printStackTrace($System::err);
		}
	}
	setRunState(LWToolkit::STATE_CLEANUP);
	$AWTAutoShutdown::notifyToolkitThreadFree();
	platformCleanup();
	setRunState(LWToolkit::STATE_DONE);
}

LWToolkit* LWToolkit::getLWToolkit() {
	$init(LWToolkit);
	return $cast(LWToolkit, $Toolkit::getDefaultToolkit());
}

$LWWindowPeer* LWToolkit::createDelegatedPeer($Window* target, $PlatformComponent* platformComponent, $PlatformWindow* platformWindow, $LWWindowPeer$PeerType* peerType) {
	$var($LWWindowPeer, peer, $new($LWWindowPeer, target, platformComponent, platformWindow, peerType));
	targetCreatedPeer(target, peer);
	peer->initialize();
	return peer;
}

$FramePeer* LWToolkit::createLightweightFrame($LightweightFrame* target) {
	$useLocalCurrentObjectStackCache();
	$var($PlatformComponent, platformComponent, createLwPlatformComponent());
	$init($LWWindowPeer$PeerType);
	$var($PlatformWindow, platformWindow, createPlatformWindow($LWWindowPeer$PeerType::LW_FRAME));
	$var($LWLightweightFramePeer, peer, $new($LWLightweightFramePeer, target, platformComponent, platformWindow));
	targetCreatedPeer(target, peer);
	peer->initialize();
	return peer;
}

$WindowPeer* LWToolkit::createWindow($Window* target) {
	$useLocalCurrentObjectStackCache();
	$var($PlatformComponent, platformComponent, createPlatformComponent());
	$init($LWWindowPeer$PeerType);
	$var($PlatformWindow, platformWindow, createPlatformWindow($LWWindowPeer$PeerType::SIMPLEWINDOW));
	return static_cast<$WindowPeer*>(static_cast<$FramePeer*>(createDelegatedPeer(target, platformComponent, platformWindow, $LWWindowPeer$PeerType::SIMPLEWINDOW)));
}

$FramePeer* LWToolkit::createFrame($Frame* target) {
	$useLocalCurrentObjectStackCache();
	$var($PlatformComponent, platformComponent, createPlatformComponent());
	$init($LWWindowPeer$PeerType);
	$var($PlatformWindow, platformWindow, createPlatformWindow($LWWindowPeer$PeerType::FRAME));
	return createDelegatedPeer(target, platformComponent, platformWindow, $LWWindowPeer$PeerType::FRAME);
}

$DialogPeer* LWToolkit::createDialog($Dialog* target) {
	$useLocalCurrentObjectStackCache();
	$var($PlatformComponent, platformComponent, createPlatformComponent());
	$init($LWWindowPeer$PeerType);
	$var($PlatformWindow, platformWindow, createPlatformWindow($LWWindowPeer$PeerType::DIALOG));
	return createDelegatedPeer(target, platformComponent, platformWindow, $LWWindowPeer$PeerType::DIALOG);
}

$FileDialogPeer* LWToolkit::createFileDialog($FileDialog* target) {
	$var($FileDialogPeer, peer, createFileDialogPeer(target));
	targetCreatedPeer(target, peer);
	return peer;
}

$ButtonPeer* LWToolkit::createButton($Button* target) {
	$useLocalCurrentObjectStackCache();
	$var($PlatformComponent, platformComponent, createPlatformComponent());
	$var($LWButtonPeer, peer, $new($LWButtonPeer, target, platformComponent));
	targetCreatedPeer(target, peer);
	peer->initialize();
	return peer;
}

$CheckboxPeer* LWToolkit::createCheckbox($Checkbox* target) {
	$useLocalCurrentObjectStackCache();
	$var($PlatformComponent, platformComponent, createPlatformComponent());
	$var($LWCheckboxPeer, peer, $new($LWCheckboxPeer, target, platformComponent));
	targetCreatedPeer(target, peer);
	peer->initialize();
	return peer;
}

$ChoicePeer* LWToolkit::createChoice($Choice* target) {
	$useLocalCurrentObjectStackCache();
	$var($PlatformComponent, platformComponent, createPlatformComponent());
	$var($LWChoicePeer, peer, $new($LWChoicePeer, target, platformComponent));
	targetCreatedPeer(target, peer);
	peer->initialize();
	return peer;
}

$LabelPeer* LWToolkit::createLabel($Label* target) {
	$useLocalCurrentObjectStackCache();
	$var($PlatformComponent, platformComponent, createPlatformComponent());
	$var($LWLabelPeer, peer, $new($LWLabelPeer, target, platformComponent));
	targetCreatedPeer(target, peer);
	peer->initialize();
	return peer;
}

$CanvasPeer* LWToolkit::createCanvas($Canvas* target) {
	$useLocalCurrentObjectStackCache();
	$var($PlatformComponent, platformComponent, createPlatformComponent());
	$var($LWCanvasPeer, peer, $new($LWCanvasPeer, target, platformComponent));
	targetCreatedPeer(target, peer);
	peer->initialize();
	return peer;
}

$ListPeer* LWToolkit::createList($List* target) {
	$useLocalCurrentObjectStackCache();
	$var($PlatformComponent, platformComponent, createPlatformComponent());
	$var($LWListPeer, peer, $new($LWListPeer, target, platformComponent));
	targetCreatedPeer(target, peer);
	peer->initialize();
	return peer;
}

$PanelPeer* LWToolkit::createPanel($Panel* target) {
	$useLocalCurrentObjectStackCache();
	$var($PlatformComponent, platformComponent, createPlatformComponent());
	$var($LWPanelPeer, peer, $new($LWPanelPeer, target, platformComponent));
	targetCreatedPeer(target, peer);
	peer->initialize();
	return peer;
}

$ScrollPanePeer* LWToolkit::createScrollPane($ScrollPane* target) {
	$useLocalCurrentObjectStackCache();
	$var($PlatformComponent, platformComponent, createPlatformComponent());
	$var($LWScrollPanePeer, peer, $new($LWScrollPanePeer, target, platformComponent));
	targetCreatedPeer(target, peer);
	peer->initialize();
	return peer;
}

$ScrollbarPeer* LWToolkit::createScrollbar($Scrollbar* target) {
	$useLocalCurrentObjectStackCache();
	$var($PlatformComponent, platformComponent, createPlatformComponent());
	$var($LWScrollBarPeer, peer, $new($LWScrollBarPeer, target, platformComponent));
	targetCreatedPeer(target, peer);
	peer->initialize();
	return peer;
}

$TextAreaPeer* LWToolkit::createTextArea($TextArea* target) {
	$useLocalCurrentObjectStackCache();
	$var($PlatformComponent, platformComponent, createPlatformComponent());
	$var($LWTextAreaPeer, peer, $new($LWTextAreaPeer, target, platformComponent));
	targetCreatedPeer(target, peer);
	peer->initialize();
	return peer;
}

$TextFieldPeer* LWToolkit::createTextField($TextField* target) {
	$useLocalCurrentObjectStackCache();
	$var($PlatformComponent, platformComponent, createPlatformComponent());
	$var($LWTextFieldPeer, peer, $new($LWTextFieldPeer, target, platformComponent));
	targetCreatedPeer(target, peer);
	peer->initialize();
	return peer;
}

bool LWToolkit::isDesktopSupported() {
	return true;
}

bool LWToolkit::isTaskbarSupported() {
	return true;
}

$KeyboardFocusManagerPeer* LWToolkit::getKeyboardFocusManagerPeer() {
	return $LWKeyboardFocusManagerPeer::getInstance();
}

$MouseInfoPeer* LWToolkit::getMouseInfoPeer() {
	$synchronized(this) {
		if (this->mouseInfoPeer == nullptr) {
			$set(this, mouseInfoPeer, createMouseInfoPeerImpl());
		}
		return this->mouseInfoPeer;
	}
}

$MouseInfoPeer* LWToolkit::createMouseInfoPeerImpl() {
	return $new($LWMouseInfoPeer);
}

$PrintJob* LWToolkit::getPrintJob($Frame* frame, $String* doctitle, $Properties* props) {
	return getPrintJob(frame, doctitle, nullptr, nullptr);
}

$PrintJob* LWToolkit::getPrintJob($Frame* frame, $String* doctitle, $JobAttributes* jobAttributes, $PageAttributes* pageAttributes) {
	if (frame == nullptr) {
		$throwNew($NullPointerException, "frame must not be null"_s);
	}
	if ($GraphicsEnvironment::isHeadless()) {
		$throwNew($IllegalArgumentException);
	}
	$var($PrintJob2D, printJob, $new($PrintJob2D, frame, doctitle, jobAttributes, pageAttributes));
	if (!printJob->printDialog()) {
		$assign(printJob, nullptr);
	}
	return printJob;
}

$Clipboard* LWToolkit::getSystemClipboard() {
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		$init($AWTPermissions);
		security->checkPermission($AWTPermissions::ACCESS_CLIPBOARD_PERMISSION);
	}
	$synchronized(this) {
		if (this->clipboard == nullptr) {
			$set(this, clipboard, createPlatformClipboard());
		}
	}
	return this->clipboard;
}

$Object* LWToolkit::targetToPeer(Object$* target) {
	$init(LWToolkit);
	return $of($SunToolkit::targetToPeer(target));
}

void LWToolkit::targetDisposedPeer(Object$* target, Object$* peer) {
	$init(LWToolkit);
	$SunToolkit::targetDisposedPeer(target, peer);
}

void LWToolkit::postEvent($AWTEvent* event) {
	$init(LWToolkit);
	$useLocalCurrentObjectStackCache();
	$SunToolkit::postEvent($(targetToAppContext($($nc(event)->getSource()))), event);
}

void LWToolkit::grab($Window* w) {
	$useLocalCurrentObjectStackCache();
	$var($Object, peer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(w));
	if (peer != nullptr) {
		$nc(($cast($LWWindowPeer, peer)))->grab();
	}
}

void LWToolkit::ungrab($Window* w) {
	$useLocalCurrentObjectStackCache();
	$var($Object, peer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(w));
	if (peer != nullptr) {
		$nc(($cast($LWWindowPeer, peer)))->ungrab(false);
	}
}

$Object* LWToolkit::lazilyLoadDesktopProperty($String* name) {
	if ($nc(name)->equals("awt.dynamicLayoutSupported"_s)) {
		return $of($Boolean::valueOf(isDynamicLayoutSupported()));
	}
	return $of($SunToolkit::lazilyLoadDesktopProperty(name));
}

void LWToolkit::setDynamicLayout(bool dynamic) {
	this->dynamicLayoutSetting = dynamic;
}

bool LWToolkit::isDynamicLayoutSet() {
	return this->dynamicLayoutSetting;
}

bool LWToolkit::isDynamicLayoutActive() {
	return isDynamicLayoutSupported();
}

bool LWToolkit::isDynamicLayoutSupported() {
	return true;
}

$Void* LWToolkit::lambda$init$1() {
	$useLocalCurrentObjectStackCache();
	$var($Runnable, shutdownRunnable, static_cast<$Runnable*>($new(LWToolkit$$Lambda$lambda$init$0$1, this)));
	$var($Thread, shutdown, $new($Thread, $($ThreadGroupUtils::getRootThreadGroup()), shutdownRunnable, "AWT-Shutdown"_s, 0, false));
	shutdown->setContextClassLoader(nullptr);
	$nc($($Runtime::getRuntime()))->addShutdownHook(shutdown);
	$var($String, name, "AWT-LW"_s);
	$var($Thread, toolkitThread, $new($Thread, $($ThreadGroupUtils::getRootThreadGroup()), this, name, 0, false));
	toolkitThread->setDaemon(true);
	toolkitThread->setPriority($Thread::NORM_PRIORITY + 1);
	toolkitThread->start();
	return nullptr;
}

void LWToolkit::lambda$init$0() {
	shutdown();
	waitForRunState(LWToolkit::STATE_CLEANUP);
}

LWToolkit::LWToolkit() {
}

$Class* LWToolkit::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(LWToolkit$$Lambda$lambda$init$1::classInfo$.name)) {
			return LWToolkit$$Lambda$lambda$init$1::load$(name, initialize);
		}
		if (name->equals(LWToolkit$$Lambda$lambda$init$0$1::classInfo$.name)) {
			return LWToolkit$$Lambda$lambda$init$0$1::load$(name, initialize);
		}
	}
	$loadClass(LWToolkit, name, initialize, &_LWToolkit_ClassInfo_, allocate$LWToolkit);
	return class$;
}

$Class* LWToolkit::class$ = nullptr;

	} // lwawt
} // sun