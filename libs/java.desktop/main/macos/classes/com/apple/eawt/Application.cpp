#include <com/apple/eawt/Application.h>
#include <com/apple/eawt/_AppDockIconHandler.h>
#include <com/apple/eawt/_AppEventHandler$_AboutDispatcher.h>
#include <com/apple/eawt/_AppEventHandler$_AppEventDispatcher.h>
#include <com/apple/eawt/_AppEventHandler$_OpenFileDispatcher.h>
#include <com/apple/eawt/_AppEventHandler$_OpenURIDispatcher.h>
#include <com/apple/eawt/_AppEventHandler$_PreferencesDispatcher.h>
#include <com/apple/eawt/_AppEventHandler$_PrintFileDispatcher.h>
#include <com/apple/eawt/_AppEventHandler$_QueuingAppEventDispatcher.h>
#include <com/apple/eawt/_AppEventHandler$_QuitDispatcher.h>
#include <com/apple/eawt/_AppEventHandler.h>
#include <com/apple/eawt/_AppMenuBarHandler.h>
#include <com/apple/eawt/_AppMiscHandlers.h>
#include <java/awt/Component.h>
#include <java/awt/Image.h>
#include <java/awt/PopupMenu.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/desktop/AboutHandler.h>
#include <java/awt/desktop/OpenFilesHandler.h>
#include <java/awt/desktop/OpenURIHandler.h>
#include <java/awt/desktop/PreferencesHandler.h>
#include <java/awt/desktop/PrintFilesHandler.h>
#include <java/awt/desktop/QuitHandler.h>
#include <java/awt/desktop/QuitStrategy.h>
#include <java/awt/desktop/SystemEventListener.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/beans/Beans.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityManager.h>
#include <java/security/Permission.h>
#include <javax/swing/JMenuBar.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <sun/lwawt/PlatformWindow.h>
#include <sun/lwawt/macosx/CPlatformWindow.h>
#include <jcpp.h>

using $_AppDockIconHandler = ::com::apple::eawt::_AppDockIconHandler;
using $_AppEventHandler = ::com::apple::eawt::_AppEventHandler;
using $_AppMenuBarHandler = ::com::apple::eawt::_AppMenuBarHandler;
using $_AppMiscHandlers = ::com::apple::eawt::_AppMiscHandlers;
using $Image = ::java::awt::Image;
using $PopupMenu = ::java::awt::PopupMenu;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $AboutHandler = ::java::awt::desktop::AboutHandler;
using $OpenFilesHandler = ::java::awt::desktop::OpenFilesHandler;
using $OpenURIHandler = ::java::awt::desktop::OpenURIHandler;
using $PreferencesHandler = ::java::awt::desktop::PreferencesHandler;
using $PrintFilesHandler = ::java::awt::desktop::PrintFilesHandler;
using $QuitHandler = ::java::awt::desktop::QuitHandler;
using $QuitStrategy = ::java::awt::desktop::QuitStrategy;
using $SystemEventListener = ::java::awt::desktop::SystemEventListener;
using $Beans = ::java::beans::Beans;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityManager = ::java::lang::SecurityManager;
using $JMenuBar = ::javax::swing::JMenuBar;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $LWWindowPeer = ::sun::lwawt::LWWindowPeer;
using $CPlatformWindow = ::sun::lwawt::macosx::CPlatformWindow;

namespace com {
	namespace apple {
		namespace eawt {

Application* Application::sApplication = nullptr;

void Application::nativeInitializeApplicationDelegate() {
	$init(Application);
	$prepareNativeStatic(nativeInitializeApplicationDelegate, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void Application::checkSecurity() {
	$init(Application);
	$useLocalObjectStack();
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security == nullptr) {
		return;
	}
	$nc(security)->checkPermission($$new($RuntimePermission, "canProcessApplicationEvents"_s));
}

Application* Application::getApplication() {
	$init(Application);
	checkSecurity();
	return Application::sApplication;
}

void Application::init$() {
	$set(this, eventHandler, $_AppEventHandler::getInstance());
	$set(this, menuBarHandler, $_AppMenuBarHandler::getInstance());
	$set(this, iconHandler, $new($_AppDockIconHandler));
	checkSecurity();
}

void Application::addAppEventListener($SystemEventListener* listener) {
	$nc(this->eventHandler)->addListener(listener);
}

void Application::removeAppEventListener($SystemEventListener* listener) {
	$nc(this->eventHandler)->removeListener(listener);
}

void Application::setAboutHandler($AboutHandler* aboutHandler) {
	$nc($nc(this->eventHandler)->aboutDispatcher)->setHandler(aboutHandler);
}

void Application::setPreferencesHandler($PreferencesHandler* preferencesHandler) {
	$nc($nc(this->eventHandler)->preferencesDispatcher)->setHandler(preferencesHandler);
}

void Application::setOpenFileHandler($OpenFilesHandler* openFileHandler) {
	$nc($nc(this->eventHandler)->openFilesDispatcher)->setHandler(openFileHandler);
}

void Application::setPrintFileHandler($PrintFilesHandler* printFileHandler) {
	$nc($nc(this->eventHandler)->printFilesDispatcher)->setHandler(printFileHandler);
}

void Application::setOpenURIHandler($OpenURIHandler* openURIHandler) {
	$nc($nc(this->eventHandler)->openURIDispatcher)->setHandler(openURIHandler);
}

void Application::setQuitHandler($QuitHandler* quitHandler) {
	$nc($nc(this->eventHandler)->quitDispatcher)->setHandler(quitHandler);
}

void Application::setQuitStrategy($QuitStrategy* strategy) {
	$nc(this->eventHandler)->setDefaultQuitStrategy(strategy);
}

void Application::enableSuddenTermination() {
	$_AppMiscHandlers::enableSuddenTermination();
}

void Application::disableSuddenTermination() {
	$_AppMiscHandlers::disableSuddenTermination();
}

void Application::requestForeground(bool allWindows) {
	$_AppMiscHandlers::requestActivation(allWindows);
}

void Application::requestUserAttention(bool critical) {
	$_AppMiscHandlers::requestUserAttention(critical);
}

void Application::openHelpViewer() {
	$_AppMiscHandlers::openHelpViewer();
}

void Application::setDockMenu($PopupMenu* menu) {
	this->iconHandler->setDockMenu(menu);
}

$PopupMenu* Application::getDockMenu() {
	return this->iconHandler->getDockMenu();
}

void Application::setDockIconImage($Image* image) {
	this->iconHandler->setDockIconImage(image);
}

$Image* Application::getDockIconImage() {
	return this->iconHandler->getDockIconImage();
}

void Application::setDockIconBadge($String* badge) {
	this->iconHandler->setDockIconBadge(badge);
}

void Application::setDockIconProgress(int32_t value) {
	this->iconHandler->setDockIconProgress(value);
}

void Application::setDefaultMenuBar($JMenuBar* menuBar) {
	$nc(this->menuBarHandler)->setDefaultMenuBar(menuBar);
}

void Application::requestToggleFullScreen($Window* window) {
	$useLocalObjectStack();
	$var($Object, peer, $$nc($AWTAccessor::getComponentAccessor())->getPeer(window));
	if (!($instanceOf($LWWindowPeer, peer))) {
		return;
	}
	$var($Object, platformWindow, $nc($cast($LWWindowPeer, peer))->getPlatformWindow());
	if (!($instanceOf($CPlatformWindow, platformWindow))) {
		return;
	}
	$nc($cast($CPlatformWindow, platformWindow))->toggleFullScreen();
}

void Application::clinit$($Class* clazz) {
	$assignStatic(Application::sApplication, nullptr);
	{
		Application::checkSecurity();
		$Toolkit::getDefaultToolkit();
		if (!$Beans::isDesignTime()) {
			Application::nativeInitializeApplicationDelegate();
		}
		$assignStatic(Application::sApplication, $new(Application));
	}
}

Application::Application() {
}

$Class* Application::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sApplication", "Lcom/apple/eawt/Application;", nullptr, $STATIC, $staticField(Application, sApplication)},
		{"eventHandler", "Lcom/apple/eawt/_AppEventHandler;", nullptr, $FINAL, $field(Application, eventHandler)},
		{"menuBarHandler", "Lcom/apple/eawt/_AppMenuBarHandler;", nullptr, $FINAL, $field(Application, menuBarHandler)},
		{"iconHandler", "Lcom/apple/eawt/_AppDockIconHandler;", nullptr, $FINAL, $field(Application, iconHandler)},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC | $DEPRECATED, $method(Application, init$, void), nullptr, nullptr, init$methodAnnotations$$},
		{"addAppEventListener", "(Ljava/awt/desktop/SystemEventListener;)V", nullptr, $PUBLIC, $virtualMethod(Application, addAppEventListener, void, $SystemEventListener*)},
		{"checkSecurity", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Application, checkSecurity, void)},
		{"disableSuddenTermination", "()V", nullptr, $PUBLIC, $virtualMethod(Application, disableSuddenTermination, void)},
		{"enableSuddenTermination", "()V", nullptr, $PUBLIC, $virtualMethod(Application, enableSuddenTermination, void)},
		{"getApplication", "()Lcom/apple/eawt/Application;", nullptr, $PUBLIC | $STATIC, $staticMethod(Application, getApplication, Application*)},
		{"getDockIconImage", "()Ljava/awt/Image;", nullptr, $PUBLIC, $virtualMethod(Application, getDockIconImage, $Image*)},
		{"getDockMenu", "()Ljava/awt/PopupMenu;", nullptr, $PUBLIC, $virtualMethod(Application, getDockMenu, $PopupMenu*)},
		{"nativeInitializeApplicationDelegate", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Application, nativeInitializeApplicationDelegate, void)},
		{"openHelpViewer", "()V", nullptr, $PUBLIC, $virtualMethod(Application, openHelpViewer, void)},
		{"removeAppEventListener", "(Ljava/awt/desktop/SystemEventListener;)V", nullptr, $PUBLIC, $virtualMethod(Application, removeAppEventListener, void, $SystemEventListener*)},
		{"requestForeground", "(Z)V", nullptr, $PUBLIC, $virtualMethod(Application, requestForeground, void, bool)},
		{"requestToggleFullScreen", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $virtualMethod(Application, requestToggleFullScreen, void, $Window*)},
		{"requestUserAttention", "(Z)V", nullptr, $PUBLIC, $virtualMethod(Application, requestUserAttention, void, bool)},
		{"setAboutHandler", "(Ljava/awt/desktop/AboutHandler;)V", nullptr, $PUBLIC, $virtualMethod(Application, setAboutHandler, void, $AboutHandler*)},
		{"setDefaultMenuBar", "(Ljavax/swing/JMenuBar;)V", nullptr, $PUBLIC, $virtualMethod(Application, setDefaultMenuBar, void, $JMenuBar*)},
		{"setDockIconBadge", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Application, setDockIconBadge, void, $String*)},
		{"setDockIconImage", "(Ljava/awt/Image;)V", nullptr, $PUBLIC, $virtualMethod(Application, setDockIconImage, void, $Image*)},
		{"setDockIconProgress", "(I)V", nullptr, $PUBLIC, $virtualMethod(Application, setDockIconProgress, void, int32_t)},
		{"setDockMenu", "(Ljava/awt/PopupMenu;)V", nullptr, $PUBLIC, $virtualMethod(Application, setDockMenu, void, $PopupMenu*)},
		{"setOpenFileHandler", "(Ljava/awt/desktop/OpenFilesHandler;)V", nullptr, $PUBLIC, $virtualMethod(Application, setOpenFileHandler, void, $OpenFilesHandler*)},
		{"setOpenURIHandler", "(Ljava/awt/desktop/OpenURIHandler;)V", nullptr, $PUBLIC, $virtualMethod(Application, setOpenURIHandler, void, $OpenURIHandler*)},
		{"setPreferencesHandler", "(Ljava/awt/desktop/PreferencesHandler;)V", nullptr, $PUBLIC, $virtualMethod(Application, setPreferencesHandler, void, $PreferencesHandler*)},
		{"setPrintFileHandler", "(Ljava/awt/desktop/PrintFilesHandler;)V", nullptr, $PUBLIC, $virtualMethod(Application, setPrintFileHandler, void, $PrintFilesHandler*)},
		{"setQuitHandler", "(Ljava/awt/desktop/QuitHandler;)V", nullptr, $PUBLIC, $virtualMethod(Application, setQuitHandler, void, $QuitHandler*)},
		{"setQuitStrategy", "(Ljava/awt/desktop/QuitStrategy;)V", nullptr, $PUBLIC, $virtualMethod(Application, setQuitStrategy, void, $QuitStrategy*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.eawt.Application",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Application, name, initialize, &classInfo$$, Application::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Application);
	});
	return class$;
}

$Class* Application::class$ = nullptr;

		} // eawt
	} // apple
} // com